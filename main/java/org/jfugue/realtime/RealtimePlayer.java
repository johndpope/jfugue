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

package org.jfugue.realtime;

import javax.sound.midi.MidiUnavailableException;

import org.jfugue.parser.ParserListener;
import org.jfugue.pattern.PatternProducer;
import org.jfugue.theory.Chord;
import org.jfugue.theory.Note;
import org.staccato.StaccatoParser;

/**
 * This player sends messages directly to the MIDI Synthesizer, rather than creating a 
 * sequence with the MIDI Sequencer.
 * 
 * There are two ways that you can send messages to RealTimePlayer, and you can freely intermix these:
 * 1. Pass any Staccato string to the play() method. In this case, start notes should be indicated as the start of a tie
 *    (e.g., "C4s-") and stop notes should be indicated as the end of a tie (e.g., "C4-s")
 * 2. Call specific methods, like startNote or changeInstrument
 */
public class RealtimePlayer 
{
	private StaccatoParser staccatoParser;
	private RealtimeMidiParserListener rtMidiParserListener;
	
	public RealtimePlayer() throws MidiUnavailableException {
		staccatoParser = new StaccatoParser();
		rtMidiParserListener = new RealtimeMidiParserListener();
		staccatoParser.addParserListener(rtMidiParserListener);
	}
	
	public void play(PatternProducer pattern) { 
		staccatoParser.parse(pattern);
	}

	public void play(String pattern) {
		staccatoParser.parse(pattern);
	}
	
	public void startNote(Note note) {
        note.setStartOfTie(true).setEndOfTie(false);
	    for (ParserListener listener : staccatoParser.getParserListeners()) {
	        listener.onNoteParsed(note);
	    }
	}

    public void stopNote(Note note) {
        note.setStartOfTie(false).setEndOfTie(true);
        for (ParserListener listener : staccatoParser.getParserListeners()) {
            listener.onNoteParsed(note);
        }
    }
    
    public void startChord(Chord chord) {
        for (Note note : chord.getNotes()) {
            startNote(note);
        }
    }

    public void stopChord(Chord chord) {
        for (Note note : chord.getNotes()) {
            stopNote(note);
        }
    }

    public void changeInstrument(int newInstrument) {
        for (ParserListener listener : staccatoParser.getParserListeners()) {
            listener.onInstrumentParsed((byte)newInstrument);
        }
    }

    public void changeTrack(int newTrack) {
        for (ParserListener listener : staccatoParser.getParserListeners()) {
            listener.onTrackChanged((byte)newTrack);
        }
    }
    
    public void changePitchWheel(int pitch) {
        changePitchWheel((byte)(pitch & 0xff), (byte)((pitch & 0xff00) >> 8));
    }
   
    public void changePitchWheel(byte lsb, byte msb) {
        for (ParserListener listener : staccatoParser.getParserListeners()) {
            listener.onPitchWheelParsed(lsb, msb);
        }
    }
    
    public void changeChannelPressure(byte pressure) {
        for (ParserListener listener : staccatoParser.getParserListeners()) {
            listener.onChannelPressureParsed(pressure);
        }
    }
    
    public void changePolyphonicPressure(byte key, byte pressure) {
        for (ParserListener listener : staccatoParser.getParserListeners()) {
            listener.onPolyphonicPressureParsed(key, pressure);
        }
    }
    
	public void close() {
		rtMidiParserListener.finish();
	}
}


