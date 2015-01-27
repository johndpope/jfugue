/*
 * JFugue, an Application Programming Interface (API) for Music Programming
 * http://www.jfugue.org
 *
 * Copyright (C) 2003-2014 David Koelle
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.jfugue.integration;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.Reader;
import java.util.logging.Logger;

import javax.xml.parsers.ParserConfigurationException;

import nu.xom.Attribute;
import nu.xom.Builder;
import nu.xom.DocType;
import nu.xom.Document;
import nu.xom.Element;
import nu.xom.Elements;
import nu.xom.Node;
import nu.xom.ParsingException;
import nu.xom.ValidityException;

import org.jfugue.midi.MidiDefaults;
import org.jfugue.midi.MidiDictionary;
import org.jfugue.parser.Parser;
import org.jfugue.theory.Note;
import org.staccato.DefaultManager;


//	helper class
class XMLpart extends Object {
	public String ID;
	public String part_name;
	public String score_instruments;
	public String midi_instruments; // channel1|name1~channel2|name2

	public XMLpart() {
		ID = "";
		part_name = "";
		score_instruments = "";
		midi_instruments = "";
	}
};

/**
 * voiceDef MusicString voice can be a combination of part and voice
 */

class voiceDef {
	int part;
	int voice;
}

/**
 * Parses a MusicXML file, and fires events for <code>ParserListener</code>
 * interfaces when tokens are interpreted. The <code>ParserListener</code> does
 * intelligent things with the resulting events, such as create music, draw
 * sheet music, or transform the data.
 * 
 * As of Version 3.0, the Parser supports turning MIDI Sequences into JFugue
 * Patterns with the parse(Sequence) method. In this case, the ParserListeners
 * established by a ParserBuilder use the parsed events to construct the Pattern
 * string.
 * 
 * MusicXmlParser.parse can be called with a file name, File, InputStream, or
 * Reader
 * 
 * @author E.Philip Sobolik
 * @author David Koelle (updates for JFugue 5)
 * 
 */
public final class MusicXmlParser extends Parser {
	// private HashMap<String, String> dictionaryMap;
	private Builder xomBuilder;
	private Document xomDoc;
	private String[] volumes = { "pppppp", "ppppp", "pppp", "ppp", "pp", "p",
			"mp", "mf", "f", "ff", "fff", "ffff", "fffff", "ffffff" };
	// note difference between maxVolume and minVolume should be divisible by 13
	private byte minVelocity = 10;
	private byte maxVelocity = 127;
	private byte curVelocity = DefaultManager.getInstance().getDefaultAttackVelocity();
	private byte beats; // beats per measure
	private byte divisions; // divisions per beat
	private int curVoice; // current voice
	private byte nextVoice; // next available voice # for a new voice
	private voiceDef[] voices;
    private Logger logger = Logger.getLogger("org.jfugue");

	// private double totalMeasurePct;
	// private double lastNoteInMeasureDuration; // adjusted duration of the
	// last note in the measure

	public MusicXmlParser() throws ParserConfigurationException {
		xomBuilder = new Builder();
		
		// Set up MusicXML default values
		beats = 1;
		divisions = 1;
		curVoice = -1;
		nextVoice = 0;
		voices = new voiceDef[15];
	}

	public void parse(String musicXmlString) throws ValidityException, ParsingException, IOException {
		xomDoc = xomBuilder.build(musicXmlString, (String)null);  // URI is null
		parse();
	}

	public void parse(File fileXMLin) throws ValidityException, ParsingException, IOException {
		xomDoc = xomBuilder.build(fileXMLin);
		parse();
	}

	public void parse(FileInputStream fisXMLin) throws ValidityException, ParsingException, IOException {
		xomDoc = xomBuilder.build(fisXMLin);
		parse();
	}

	public void parse(Reader rXMLin) throws ValidityException, ParsingException, IOException {
		xomDoc = xomBuilder.build(rXMLin);
		parse();
	}

	// ///////////////////////////////////////////////////////////////////////
	// Tempo methods
	//

	private int tempo = MidiDefaults.DEFAULT_TEMPO_BEATS_PER_MINUTE;

	protected void setTempo(int tempo) {
		this.tempo = tempo;
	}

	protected int getTempo() {
		return this.tempo;
	}

	//
	// End Tempo methods
	// ///////////////////////////////////////////////////////////////////////

	/**
	 * Parses a MusicXML file and fires events to subscribed
	 * <code>ParserListener</code> interfaces. As the file is parsed, events are
	 * sent to <code>ParserLisener</code> interfaces, which are responsible for
	 * doing something interesting with the music data, such as playing the
	 * music, displaying it as sheet music, or transforming the pattern.
	 * 
	 * the input is a XOM Document, which has been built previously
	 * 
	 * @throws Exception
	 *             if there is an error parsing the pattern
	 */

	public void parse() {
		DocType docType = xomDoc.getDocType();
		Element root = xomDoc.getRootElement();

		if (docType.getRootElementName().compareToIgnoreCase("score-partwise") == 0) {
			Element partlist = root.getFirstChildElement("part-list");
			Elements parts = partlist.getChildElements();
			XMLpart[] partHeaders = new XMLpart[parts.size()];
			for (int p = 0; p < parts.size(); ++p) {
				partHeaders[p] = new XMLpart();
				parsePartHeader(parts.get(p), partHeaders[p]);
			}
			parts = root.getChildElements("part");
			for (int p = 0; p < parts.size(); ++p) {
				parsePart(p, parts.get(p), partHeaders);
			}
		}
	}

	/**
	 * Parses a <code>part</code> element in the <code>part-list</code> section
	 * 
	 * @param part
	 *            is the <code>part</code> element
	 * @param partHeader
	 *            is the array of <code>XMLpart</code> classes that stores the
	 *            <code>part-list</code> elements
	 */
	private void parsePartHeader(Element part, XMLpart partHeader) {
		// I added the following check to satisfy a MusicXML file that contained
		// a part-group,
		// but I am not convinced that this is the proper way to handle such an
		// element.
		// - dmkoelle, 2 MAR 2011
		if (part.getLocalName().equals("part-group")) {
			return;
		}
		// ID
		Attribute ID = part.getAttribute("id");
		// may be changed by midi-instrument below
		partHeader.ID = ID.getValue();
		// part-name
		Element partName = part.getFirstChildElement("part-name");
		partHeader.part_name = partName.getValue();
		// may or may not have 1 or more score-instrument and
		// midi-instrument elements
		// score-instruments
		int x;
		Elements scoreInsts = part.getChildElements("score-instrument");
		for (x = 0; x < scoreInsts.size(); ++x) {
			partHeader.score_instruments += scoreInsts.get(x).getValue();
			if (x < scoreInsts.size() - 1)
				partHeader.score_instruments += "~";
		}
		// midi-instruments
		Elements midiInsts = part.getChildElements("midi-instrument");
		for (x = 0; x < midiInsts.size(); ++x) {
			Element midi_instrument = midiInsts.get(x);
			Element midi_channel = midi_instrument
					.getFirstChildElement("midi-channel");
			String midiChannel = (midi_channel == null) ? "" : midi_channel
					.getValue();
			if (midiChannel.length() > 0) {
				partHeader.midi_instruments += midiChannel;
				partHeader.midi_instruments += "|";
			}
			Element midi_inst = midi_instrument
					.getFirstChildElement("midi-name");
			String midiInst = (midi_inst == null) ? "" : midi_inst.getValue();
			if (midiInst.length() < 1) {
				Element midi_bank = midi_instrument
						.getFirstChildElement("midi-bank");
				midiInst = (midi_bank == null) ? "" : midi_bank.getValue();
				if (midiInst.length() < 1) {
					Element midi_program = midi_instrument
							.getFirstChildElement("program");
					midiInst = (midi_program == null) ? "" : midi_program
							.getValue();
				}
			}
			partHeader.midi_instruments += midiInst;
			if (x < midiInsts.size() - 1)
				partHeader.midi_instruments += "~";
		}
	}

	/**
	 * Parses a <code>part</code> and fires all the appropriate note events
	 * 
	 * @param part
	 *            is the entire <code>part</part>
	 * @param partHeaders
	 *            is the array of XMLpart classes that contains instrument info
	 *            for the <code>part</code>s
	 */
	private void parsePart(int p, Element part, XMLpart[] partHeaders) {
		for (int x = 0; x < partHeaders.length; ++x) {
			if (part.getAttribute("id").getValue().equals(partHeaders[x].ID)) {
				if (partHeaders[x].midi_instruments.length() < 1) {
					parseVoice(p, x);
					parsePartElementInstruments(p, partHeaders[x].part_name);
				} else {
					parsePartElementInstruments(p, partHeaders[x].midi_instruments);
				}
			}
		}

		Elements measures = part.getChildElements("measure");
		for (int m = 0; m < measures.size(); ++m) {
			Element measure = measures.get(m);
			Element attributes = measure.getFirstChildElement("attributes");

			if (attributes != null) { // default key = Cmaj
				byte key = 0, scale = 0; // scale 0 = minor, 1 = major
				Element attr = attributes.getFirstChildElement("key");
				if (attr != null) {
					Element eKey = attr.getFirstChildElement("fifths");
					if (eKey != null) {
						key = Byte.parseByte(eKey.getValue());
					}
					Element eMode = attr.getFirstChildElement("mode");
					if (eMode != null) {
						String mode = eMode.getValue();
						if (mode.compareToIgnoreCase("major") == 0) {
							scale = 0;
						}
						else if (mode.compareToIgnoreCase("minor") == 0) {
							scale = 1;
						}
						else {
							throw new RuntimeException("Error in key signature: "+mode);
						}
					}
				} else {
					scale = 0; // default = major
				}
				fireKeySignatureParsed(key, scale);

				// divisions and beats used to calculate duration when note type
				// not present
				Element element_divisions = attributes.getFirstChildElement("divisions");
				if (element_divisions != null) {
					this.divisions = Byte.valueOf(element_divisions.getValue());
				}
				Element element_time = attributes.getFirstChildElement("time");
				if (element_time != null) {
					Element element_beats = element_time.getFirstChildElement("beats");
					if (element_beats != null) {
						this.beats = Byte.valueOf(element_beats.getValue());
					}
				}
			}

			// Tempo
			Element direction = measure.getFirstChildElement("direction");
			if (direction != null) {
				Element directionType = direction.getFirstChildElement("direction-type");
				if (directionType != null) {
					Element metronome = directionType.getFirstChildElement("metronome");
					if (metronome != null) {
						Element beatUnit = metronome.getFirstChildElement("beat-unit");
						String sBeatUnit = beatUnit.getValue();
						if (sBeatUnit.compareToIgnoreCase("quarter") != 0) {
							throw new RuntimeException("Beat unit must be quarter: "+sBeatUnit);
						}
						Element bpm = metronome.getFirstChildElement("per-minute");
						if (bpm != null) {
							this.setTempo(BPMtoPPM(Float.parseFloat(bpm.getValue())));
							fireTempoChanged(this.getTempo());
						}
					}
				}
			}

			// Notes
			Elements notes = measure.getChildElements("note");
			// totalMeasurePct = 0.f;
			for (int n = 0; n < notes.size(); ++n) {
				parseNote(p, notes.get(n));
			}
			/*	attempt to adjust for rounding errors with un-supported durations
	        //	if the total length of all the notes doesn't equal a full measure,
	        //	add a pad rest
	        float	minDif = (1.f / (beats * divisions));
	        double	padDur = (1. - totalMeasurePct);
	        if (padDur > minDif)
	        {	Note pad = new Note();
	        	pad.setDecimalDuration(padDur);
	        	pad.setRest(true);
	        	fireNoteEvent(pad);
	        }
*/	        
			fireBarLineParsed(0);
		} // end of measure
	}

	/**
	 * parses MusicXML note Element
	 * 
	 * @param note
	 *            is the note Element to parse
	 */
	private void parseNote(int p, Element note) {
		Note newNote = new Note();
		boolean isRest = false;
		boolean isStartOfTie = false;
		boolean isEndOfTie = false;
		byte noteNumber = 0;
		byte octaveNumber = 0;
		// long durationNumber = 0;
		double decimalDuration;

		// skip grace notes
		if (note.getFirstChildElement("grace") != null) {
			return;
		}

		Element voice = note.getFirstChildElement("voice");
		if (voice != null) {
			parseVoice(p, Integer.parseInt(voice.getValue()));
		}

		Element pitch = note.getFirstChildElement("pitch");
		if (pitch != null) {
			String sStep = pitch.getFirstChildElement("step").getValue();
			switch (sStep.charAt(0)) {
			case 'C': noteNumber = 0; break;
			case 'D': noteNumber = 2; break;
			case 'E': noteNumber = 4; break;
			case 'F': noteNumber = 5; break;
			case 'G': noteNumber = 7; break;
			case 'A': noteNumber = 9; break;
			case 'B': noteNumber = 11; break;
			}
			Element alter = pitch.getFirstChildElement("alter");
			if (alter != null) {
				String sAlter = alter.getValue();
				if (sAlter != null) {
					noteNumber += Integer.parseInt(sAlter);
					if (noteNumber > 11) {
						noteNumber = 0;
					}
					else if (noteNumber < 0) {
						noteNumber = 11;
					}
				}
			}
			Element octave = pitch.getFirstChildElement("octave");
			if (octave != null) {
				String sOctave = octave.getValue();
				if (sOctave != null) {
					octaveNumber = Byte.parseByte(sOctave);
				}
			}

			// Compute the actual note number, based on octave and note
			int intNoteNumber = ((octaveNumber+1) * 12) + noteNumber;
			if (intNoteNumber > 127) {
				throw new RuntimeException("Note value "+intNoteNumber+" is larger than 127");
			}
			noteNumber = (byte) intNoteNumber;
		} else {
			isRest = true;
		}

		// duration
		// Element type = note.getFirstChildElement("type");
		// if (type == null)
	    // get duration from duration element rather than type element
		Element element_duration = note.getFirstChildElement("duration");

		decimalDuration = (element_duration == null) ? beats * divisions
					: Double.parseDouble(element_duration.getValue()) / (beats * divisions);
		/*		else
		{	String sDuration = type.getValue();
			if (sDuration.compareToIgnoreCase("whole") == 0)
				durationNumber = 1;
			else if (sDuration.compareToIgnoreCase("half") == 0
				durationNumber = 2;
			else if (sDuration.compareToIgnoreCase("quarter") == 0)
				durationNumber = 4;
			else if (sDuration.compareToIgnoreCase("eighth") == 0)
				durationNumber = 8;
			else if (sDuration.compareToIgnoreCase("16th") == 0)
				durationNumber = 16;
			else if (sDuration.compareToIgnoreCase("32nd") == 0)
				durationNumber = 32;
			else if (sDuration.compareToIgnoreCase("64th") == 0)
				durationNumber = 64;
			else
	            throw new JFugueException(JFugueException.NOTE_DURATION_EXC, "", sDuration);
			decimalDuration = 1.0 / durationNumber;
			Element element_dot = note.getFirstChildElement("dot");
			if (element_dot != null)
				decimalDuration *= 1.5;
		}
  */

		// Tempo is in PPQ (Pulses Per Quarter). Turn that into
		// "PPW", then multiply that by durationNumber for WHQITXN notes
		double PPW = (double) this.getTempo() * 4.0; // 4 quarter notes in a whole note

		Element notations = note.getFirstChildElement("notations");
		if (notations != null) { // ties
			Element tied = notations.getFirstChildElement("tied");
			if (tied != null) {
				Attribute tiedType = tied.getAttribute("type"); 
				String sTiedType = tiedType.getValue();
				if (sTiedType.compareToIgnoreCase("start") == 0) {
					isStartOfTie = true;
				}
				else if (sTiedType.compareToIgnoreCase("end") == 0) {
					isEndOfTie = true;
				}
			}
			// Velocity
			Element dynamics = notations.getFirstChildElement("dynamics");
			if (dynamics != null) {
				Node dynamic = dynamics.getChild(0);
				if (dynamic != null) {
					for (int x = 0; x < this.volumes.length; ++x) {
						if (dynamic.getValue().compareToIgnoreCase(this.volumes[x]) == 0) {
							this.curVelocity = (byte) (((this.maxVelocity - this.minVelocity) / (this.volumes.length - 1)) * x);
						}
					}
				}
			}
		}
		byte attackVelocity = this.curVelocity;
		byte decayVelocity = this.curVelocity;

		// Set up the note
		if (isRest) {
			newNote.setRest(true);
			newNote.setDuration(decimalDuration);
			newNote.setAttackVelocity((byte) 0); // turn off sound for rest notes
			newNote.setDecayVelocity((byte) 0);
		} else {
			newNote.setValue(noteNumber);
			newNote.setDuration(decimalDuration);
			newNote.setStartOfTie(isStartOfTie);
			newNote.setEndOfTie(isEndOfTie);
			newNote.setAttackVelocity(attackVelocity);
			newNote.setDecayVelocity(decayVelocity);
		}
		
		// ToDo - SEQUENTIAL
		Element element_chord = note.getFirstChildElement("chord");
		newNote.setFirstNote(element_chord == null);
		newNote.setHarmonicNote(element_chord != null);

		/*
		 * attempt to adjust for rounding errors in non-supported durations if
		 * (newNote.getType() == Note.FIRST) { if ((totalMeasurePct +
		 * decimalDuration) > 1.) { decimalDuration = 1. - totalMeasurePct;
		 * lastNoteInMeasureDuration = decimalDuration; totalMeasurePct = 1.; }
		 * else { float minDif = (1.f / (beats * divisions)); if (1. -
		 * (totalMeasurePct + decimalDuration) < minDif) { decimalDuration = (1.
		 * - totalMeasurePct); totalMeasurePct = 1.; } else totalMeasurePct +=
		 * decimalDuration; } } else if (totalMeasurePct == 1.) // just did a
		 * last note in measure decimalDuration = lastNoteInMeasureDuration;
		 */
		newNote.setDuration(decimalDuration);
		fireNoteParsed(newNote);
	}

	/**
	 * Parses a voice and fires a voice element
	 * 
	 * @param v
	 *            is the voice number 1 - 16
	 * @throws JFugueException
	 *             if there is a problem parsing the element
	 */
	private void parseVoice(int p, int v) { 
		// XML part ID's are 1-based, JFugue voice numbers are 0-based
		byte voiceNumber = -1;
		for (byte x = 0; x < this.nextVoice; ++x)
			if (p == voices[x].part && v == voices[x].voice)
				voiceNumber = x;
		// if not found, add it to the array
		if (voiceNumber == -1) {
			voiceNumber = nextVoice;
			voices[voiceNumber] = new voiceDef();
			voices[voiceNumber].part = p;
			voices[voiceNumber].voice = v;
			++nextVoice;
		}
		if (voiceNumber != this.curVoice) {
			fireTrackChanged(voiceNumber);
		}
		curVoice = voiceNumber;
	}

	/**
	 * Parses a <code>XMLpart.midi_instruments</code> and fires a voice or
	 * instrument events
	 * 
	 * @param instruments
	 *            is the <code>XMLpart.midiinstruments</code> string to parse
	 *            Can be a list of ~ separated pairs - midi-channel|InstName
	 *            where InstName can be a midi-name, midi-bank, or program
	 *            Element
	 */
	private void parsePartElementInstruments(int p, String instruments) {
		if (instruments.indexOf('~') > -1) {
			String[] instArray = instruments.split("~");
			// just do the first in the array
			String[] midiArray = instArray[0].split("|");
			if (midiArray.length > 0 && midiArray[0].length() > 0)
				parseVoice(p, Integer.parseInt(midiArray[0]) - 1);
			if (midiArray.length != 1)
				parseInstrument(midiArray[1]);
		} else {
			if (instruments.charAt(instruments.length() - 1) == '|') {
				instruments = instruments.substring(0, instruments.length() - 1);
			}
			parseInstrument(instruments);
		}
	}

	/**
	 * parses <code>inst</code> and fires an Instrument Event
	 * 
	 * @param inst
	 *            is a String that represents the instrument. If it is a numeric
	 *            value, it is interpreted as a midi-bank or program. If it is
	 *            an instrument name, it is looked up in the Dictionary as an
	 *            instrument name.
	 */
	private void parseInstrument(String inst) {
		byte instrumentNumber;
		try {
			instrumentNumber = Byte.parseByte(inst);
		} catch (NumberFormatException e) {
			Object value = MidiDictionary.INSTRUMENT_STRING_TO_BYTE.get(inst);
			instrumentNumber = (value == null) ? -1 : (Byte)value;
		}
		logger.info("Instrument element: inst = " + inst);
		if (instrumentNumber > -1) {
			fireInstrumentParsed(instrumentNumber);
		}
	}

	/**
	 * converts beats per minute (BPM) to pulses per minute (PPM) assuming 240
	 * pulses per second In MusicXML, BPM can be fractional, so
	 * <code>BPMtoPPM</code> takes a float argument
	 * 
	 * @param bpm
	 * @return ppm
	 */
	public static int BPMtoPPM(float bpm) { 
		return (new Float((60.f * 240.f) / bpm).intValue());
	}
}