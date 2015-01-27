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

package org.jfugue.theory;

import org.jfugue.midi.MidiDefaults;
import org.jfugue.pattern.Pattern;
import org.jfugue.pattern.PatternProducer;
import org.jfugue.provider.NoteProviderFactory;
import org.staccato.DefaultManager;

public class Note implements PatternProducer
{
	private byte value;
	private double duration;
	private boolean wasDurationExplicitlySet;
	private byte attackVelocity;
	private byte decayVelocity;
	private boolean isRest;
	private boolean isStartOfTie;
	private boolean isEndOfTie;
	private boolean isFirstNote = true;
	private boolean isMelodicNote;
	private boolean isHarmonicNote;
	private boolean isPercussionNote;
	public String originalString;
	
	public Note() { 
		this.attackVelocity = DefaultManager.getInstance().getDefaultAttackVelocity();
		this.decayVelocity = DefaultManager.getInstance().getDefaultDecayVelocity();
	}
	
	public Note(String note) {
		this(NoteProviderFactory.getNoteProvider().createNote(note));  
	}
	
	public Note(Note note) {
		this.value = note.value;
		this.duration = note.duration;
		this.wasDurationExplicitlySet = note.wasDurationExplicitlySet;
		this.attackVelocity = note.attackVelocity;
		this.decayVelocity = note.decayVelocity;
		this.isRest = note.isRest;
		this.isStartOfTie = note.isStartOfTie;
		this.isEndOfTie = note.isEndOfTie;
		this.isFirstNote = note.isFirstNote;
		this.isMelodicNote = note.isMelodicNote;
		this.isHarmonicNote = note.isHarmonicNote;
		this.isPercussionNote = note.isPercussionNote;
		this.originalString = note.originalString;
	}
	
	public Note(int value) {
		this((byte)value);
	}
	
	public Note(byte value) {
		this();
		this.value = value;
		useDefaultDuration();
	}
	
	public Note(int value, double duration) {
		this((byte)value, duration);
	}

	public Note(byte value, double duration) {
		this();
		this.value = value;
		setDuration(duration);
	}

	public Note setValue(byte value) {
		this.value = value;
		return this;
	}
	
	public byte getValue() {
		return this.value;
	}
	
	public Note changeValue(byte delta) {
		return setValue((byte)(getValue() + delta));
	}
	
	public byte getOctave() {
		return (byte)(this.getValue() / 12);
	}
	
	public double getDuration() {
		return this.duration;
	}
	
	public Note setDuration(double d) {
	    this.duration = d;
		this.wasDurationExplicitlySet = true;
	    return this;
	}

	public Note useDefaultDuration() {
		this.duration = DefaultManager.getInstance().getDefaultDuration();
		// And do not set wasDurationExplicitlySet
		return this;
	}

	public Note useSameDurationAs(Note note2) {
		this.duration = note2.duration;
		this.wasDurationExplicitlySet = note2.wasDurationExplicitlySet;
		return this;
	}

	public Note setDuration(String duration) {
		return setDuration(NoteProviderFactory.getNoteProvider().getDurationForString(duration));
	}
	
	public boolean isDurationExplicitlySet() {
		return this.wasDurationExplicitlySet;
	}
	
	/**
	 * FOR TESTING PURPOSES ONLY - avoids setting "isDurationExplicitlySet" - Please use setDuration instead!
	 */
	public Note setImplicitDurationForTestingOnly(double d) {
		this.duration = d;
		// And do not set wasDurationExplicitlySet
		return this;
	}

	public Note setRest(boolean rest) {
		this.isRest = rest;
		return this;
	}
	
	public boolean isRest() {
		return this.isRest;
	}
	
	public Note setPercussionNote(boolean perc) {
		this.isPercussionNote = perc;
		return this;
	}
	
	public boolean isPercussionNote() {
		return this.isPercussionNote;
	}

	public Note setAttackVelocity(byte attackVelocity) {
		this.attackVelocity = attackVelocity;
		return this;
	}

	public byte getAttackVelocity() {
	    return this.attackVelocity; 
	}
	
	public Note setDecayVelocity(byte decayVelocity) {
		this.decayVelocity = decayVelocity;
		return this;
	}

    public byte getDecayVelocity() {
        return this.decayVelocity; 
    }
    
	public Note setStartOfTie(boolean isStartOfTie) {
		this.isStartOfTie = isStartOfTie;
		return this;
	}

	public Note setEndOfTie(boolean isEndOfTie) {
		this.isEndOfTie = isEndOfTie;
		return this;
	}

	public boolean isStartOfTie() {
		return isStartOfTie;
	}
	
	public boolean isEndOfTie() {
		return isEndOfTie;
	}
	
	public Note setFirstNote(boolean isFirstNote) {
		this.isFirstNote = isFirstNote;
		return this;
	}

	public boolean isFirstNote() {
		return this.isFirstNote;
	}
	
	public Note setMelodicNote(boolean isMelodicNote) {
		this.isMelodicNote = isMelodicNote;
		return this;
	}

	public boolean isMelodicNote() {
		return this.isMelodicNote;
	}
	
	public Note setHarmonicNote(boolean isHarmonicNote) {
		this.isHarmonicNote = isHarmonicNote;
		return this;
	}

	public boolean isHarmonicNote() {
		return this.isHarmonicNote;
	}

	public Note setOriginalString(String originalString) {
		this.originalString = originalString;
		return this;
	}
	
	public String getOriginalString() {
		return this.originalString;
	}
	
	public double getMicrosecondDuration(double mpq) {
		return (this.duration * 4.0f) * mpq;
	}

	public byte getPositionInOctave() {
	    return (byte)(getValue() % 12);
	}
	
	public static Note createRest(double duration) {
		return new Note().setRest(true).setDuration(duration);
	}
	
    /**
     * Returns a MusicString representation of the given MIDI note value,
     * which indicates a note and an octave.
     * @param noteValue this MIDI note value, like 60
     * @return a MusicString value, like C5
     */
    public static String getToneString(byte noteValue) {
        int note = noteValue % 12;
        int octave = (noteValue / 12); // Octave: this should say "-1" if octaves are -1..9 
        StringBuilder buddy = new StringBuilder();
        buddy.append(NOTE_NAMES[note]);
        buddy.append(octave);
        return buddy.toString();
    }

    /**
     * Returns a MusicString representation of the given MIDI note value
     * using the name of a percussion instrument.
     * @param noteValue this MIDI note value, like 60
     * @return a MusicString value, like [AGOGO]
     */
    public static String getPercussionString(byte noteValue) {
        StringBuilder buddy = new StringBuilder();
        buddy.append("[");
        buddy.append(PERCUSSION_NAMES[noteValue-35]);
        buddy.append("]");
        return buddy.toString();
    }

    /**
     * Returns the frequency, in Hertz, for the given note.
     * For example, the frequency for A5 (MIDI note 69) is 440.0
     * @param noteValue the MIDI note value
     * @return frequency in Hertz
     */
    public static double getFrequencyForNote(String note) {
		return getFrequencyForNote(NoteProviderFactory.getNoteProvider().createNote(note).getValue());
    }
		
    /**
     * Returns the frequency, in Hertz, for the given note value.
     * For example, the frequency for A5 (MIDI note 69) is 440.0
     * @param noteValue the MIDI note value
     * @return frequency in Hertz
     */
    public static double getFrequencyForNote(int noteValue) {
        return truncateTo3DecimalPlaces(getPreciseFrequencyForNote(noteValue));
    }

    private static double truncateTo3DecimalPlaces(double preciseNumber) {
    	return Math.rint(preciseNumber * 10000.0) / 10000.0;
    }
    
    private static double getPreciseFrequencyForNote(int noteValue) {
    	return getFrequencyAboveBase(8.1757989156, noteValue / 12.0);
    }

    private static double getFrequencyAboveBase(double baseFrequency, double octavesAboveBase) {
    	return baseFrequency * Math.pow(2.0, octavesAboveBase);
    }

    /**
     * Returns a MusicString representation of a decimal duration.  This code
     * currently only converts single duration values representing whole, half,
     * quarter, eighth, etc. durations; and dotted durations associated with those
     * durations (such as "h.", equal to 0.75).  This method does not convert
     * combined durations (for example, "hi" for 0.625). For these values,
     * the original decimal duration is returned in a string, prepended with a "/"
     * to make the returned value a valid MusicString duration indicator.
     * It does handle durations greater than 1.0 (for example, "wwww" for 4.0).  
     *
     * @param decimalDuration The decimal value of the duration to convert
     * @return a MusicString fragment representing the duration
     */
    public static String getDurationString(double decimalDuration) {
        double originalDecimalDuration = decimalDuration;
        StringBuilder buddy = new StringBuilder();
        if (decimalDuration >= 1.0) {
            int numWholeDurations = (int)Math.floor(decimalDuration); 
            buddy.append("w");
            if (numWholeDurations > 1) {
            	buddy.append(numWholeDurations);
            }
            decimalDuration -= numWholeDurations;
        }
        if (decimalDuration == 0.75) buddy.append("h.");
        else if (decimalDuration == 0.5) buddy.append("h");
        else if (decimalDuration == 0.375) buddy.append("q.");
        else if (decimalDuration == 0.25) buddy.append("q");
        else if (decimalDuration == 0.1875) buddy.append("i.");
        else if (decimalDuration == 0.125) buddy.append("i");
        else if (decimalDuration == 0.09375) buddy.append("s.");
        else if (decimalDuration == 0.0625) buddy.append("s");
        else if (decimalDuration == 0.046875) buddy.append("t.");
        else if (decimalDuration == 0.03125) buddy.append("t");
        else if (decimalDuration == 0.0234375) buddy.append("x.");
        else if (decimalDuration == 0.015625) buddy.append("x");
        else if (decimalDuration == 0.01171875) buddy.append("o.");
        else if (decimalDuration == 0.0078125) buddy.append("o");
        else if (decimalDuration == 0.0) { }
        else {
            return "/" + originalDecimalDuration;    
        }
        return buddy.toString();
    }
    
    public static String getDurationStringForBeat(int beat) {
    	switch(beat) {
    		case 2 : return "h";
    		case 4 : return "q";
    		case 8 : return "i";
    		case 16 : return "s";
    		default : return "/"+(1.0/(double)beat);
    	}
    }

    public String getAttackDecayString() {
    	StringBuilder buddy = new StringBuilder();
	    if (this.attackVelocity != MidiDefaults.MIDI_DEFAULT_ATTACK_VELOCITY) {
	        buddy.append("a"+this.attackVelocity);
	    }
        if (this.decayVelocity != MidiDefaults.MIDI_DEFAULT_DECAY_VELOCITY) {
            buddy.append("d"+this.decayVelocity);
        }
        return buddy.toString();
    }
    
    /**
     * Returns a pattern representing this note. Does not
     * return indicators of whether the note is harmonic
     * or melodic.
     */
    @Override
	public Pattern getPattern() {
	    StringBuilder buddy = new StringBuilder();
	    buddy.append(toStringWithoutDuration());
	    buddy.append(getDecoratorString());
	    return new Pattern(buddy.toString()); 
	}

    public Pattern getPercussionPattern() {
    	if (getValue() < MidiDefaults.MIN_PERCUSSION_NOTE || getValue() > MidiDefaults.MAX_PERCUSSION_NOTE) return getPattern(); 
    	StringBuilder buddy = new StringBuilder();
	    buddy.append(Note.getPercussionString(getValue()));
	    buddy.append(getDecoratorString());
	    return new Pattern(buddy.toString()); 
    }
    
	public String toString() {
		return getPattern().toString();
	}
	
	public String toStringWithoutDuration() {
		if (isRest()) {
			return "R";
		} else if (isPercussionNote()) {
			return Note.getPercussionString(this.getValue());
		} else {
			return (originalString != null) ? this.originalString : Note.getToneString(this.getValue());
		}
	}
	
	/**
	 * Returns the "decorators" to the base note, which includes the duration if one is explicitly specified, and attack/decay dynamics if provided
	 */
	public String getDecoratorString() {
	    StringBuilder buddy = new StringBuilder();
	    if (isDurationExplicitlySet()) {
	    	buddy.append(Note.getDurationString(this.duration));
	    }
	    buddy.append(getAttackDecayString());
	    return buddy.toString(); 
	}
	
	public boolean equals(Object o) {
		if (!(o instanceof Note)) {
			return false;
		}
		
		Note n2 = (Note)o;
		boolean originalStringsMatchSufficientlyWell = ((n2.originalString == null) || (this.originalString == null)) ? true : n2.originalString.equalsIgnoreCase(this.originalString);
		return ((n2.value == this.value) &&
		        (n2.duration == this.duration) &&
		        (n2.wasDurationExplicitlySet == this.wasDurationExplicitlySet) &&
		        (n2.isEndOfTie == this.isEndOfTie) && 
		        (n2.isStartOfTie == this.isStartOfTie) &&
		        (n2.isMelodicNote == this.isMelodicNote) &&
		        (n2.isHarmonicNote == this.isHarmonicNote) &&
		        (n2.isPercussionNote == this.isPercussionNote) &&
		        (n2.isFirstNote == this.isFirstNote) &&
		        (n2.isRest == this.isRest) && 
		        (n2.attackVelocity == this.attackVelocity) &&
		        (n2.decayVelocity == this.decayVelocity) &&
		        originalStringsMatchSufficientlyWell);
	}

	public String toDebugString() {
		StringBuffer buffy = new StringBuffer();
		buffy.append("Note:");
		buffy.append(" value=");
		buffy.append(this.value);
		buffy.append(" duration=");
		buffy.append(this.duration);
		buffy.append(" wasDurationExplicitlySet=");
		buffy.append(this.wasDurationExplicitlySet);
        buffy.append(" isEndOfTie=");
        buffy.append(this.isEndOfTie); 
        buffy.append(" isStartOfTie=");
        buffy.append(this.isStartOfTie);
        buffy.append(" isMelodicNote=");
        buffy.append(this.isMelodicNote);
        buffy.append(" isHarmonicNote=");
        buffy.append(this.isHarmonicNote);
        buffy.append(" isPercussionNote=");
        buffy.append(this.isPercussionNote) ;
        buffy.append(" isFirstNote=");
        buffy.append(this.isFirstNote);
        buffy.append(" isRest=");
        buffy.append(this.isRest); 
        buffy.append(" attackVelocity=");
        buffy.append(this.attackVelocity);
        buffy.append(" decayVelocity=");
        buffy.append(this.decayVelocity);
        buffy.append(" originalString=");
        buffy.append(this.originalString);
        return buffy.toString();
	}
	
	/** 
	 * Contains the name of each note in an octave.
	 * This is purposefully not marked as final. It is possible for
	 * developers to provide a new value for NOTES (for example,
	 * if you'd rather see "Db" instead of "C#" for the same note). 
	 * If you change the value of NOTES, you are responsible for 
	 * ensuring that there are twelve note names in the array,
	 * and that the note names are in the correct chromatic order. 
	 */
    public static String[] NOTE_NAMES = new String[] { "C", "C#", "D", "Eb", "E", "F", "F#", "G", "G#", "A", "Bb", "B" };

    public static String[] PERCUSSION_NAMES = new String[] {
    	// Percussion Name		// MIDI Note Value
    	"ACOUSTIC_BASS_DRUM", 	//       35
    	"BASS_DRUM", 			//       36
    	"SIDE_STICK", 			//       37
    	"ACOUSTIC_SNARE",		//       38
    	"HAND_CLAP", 			//       39
    	"ELECTRIC_SNARE", 		//       40
    	"LO_FLOOR_TOM", 		//       41
    	"CLOSED_HI_HAT",		//       42
    	"HIGH_FLOOR_TOM", 		//       43
    	"PEDAL_HI_HAT", 		//       44
    	"LO_TOM", 				//       45
    	"OPEN_HI_HAT", 		    //       46
    	"LO_MID_TOM", 			//       47
    	"HI_MID_TOM", 			//       48
    	"CRASH_CYMBAL_1", 		//       49
    	"HI_TOM",				//       50
    	"RIDE_CYMBAL_1", 		//       51
    	"CHINESE_CYMBAL", 		//       52
    	"RIDE_BELL", 			//       53
    	"TAMBOURINE",			//       54
    	"SPLASH_CYMBAL", 		//       55
    	"COWBELL", 				//       56
    	"CRASH_CYMBAL_2", 		//       57
    	"VIBRASLAP",			//       58
    	"RIDE_CYMBAL_2", 		//       59
    	"HI_BONGO", 			//       60
    	"LO_BONGO", 			//       61
    	"MUTE_HI_CONGA",		//       62
    	"OPEN_HI_CONGA", 		//       63
    	"LO_CONGA", 			//       64
    	"HI_TIMBALE", 			//       65
    	"LO_TIMBALE",			//       66
    	"HI_AGOGO", 			//       67
    	"LO_AGOGO", 			//       68
    	"CABASA", 				//       69
    	"MARACAS", 				//       70
    	"SHORT_WHISTLE", 		//       71
    	"LONG_WHISTLE", 		//       72
    	"SHORT_GUIRO", 			//       73
    	"LONG_GUIRO",			//       74
    	"CLAVES", 				//       75
    	"HI_WOOD_BLOCK", 		//       76
    	"LO_WOOD_BLOCK", 		//       77
    	"MUTE_CUICA",			//       78
    	"OPEN_CUICA", 			//       79
    	"MUTE_TRIANGLE", 		//       80
    	"OPEN_TRIANGLE"			//       81
    };
    
    public static final Note REST = new Note(0).setRest(true);
    public static final byte OCTAVE = 0x12;
    public static final byte MIN_OCTAVE = 0;
    public static final byte MAX_OCTAVE = 10;

}
