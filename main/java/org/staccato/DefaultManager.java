package org.staccato;

import org.jfugue.midi.MidiDefaults;
import org.jfugue.theory.Note;

public class DefaultManager {
	private static DefaultManager instance;
	
	public static DefaultManager getInstance() {
		if (instance == null) {
			instance = new DefaultManager();
		}
		return instance;
	}
	
	private byte defaultOctave = DEFAULT_DEFAULT_OCTAVE;
	private byte defaultBassOctave = DEFAULT_DEFAULT_BASS_OCTAVE;
	private double defaultDuration = DEFAULT_DEFAULT_DURATION;
	private byte defaultAttackVelocity = MidiDefaults.MIDI_DEFAULT_ATTACK_VELOCITY;
	private byte defaultDecayVelocity = MidiDefaults.MIDI_DEFAULT_DECAY_VELOCITY;
	
	private DefaultManager() { }
	
	public void setDefaultOctave(byte octave) {
		assert (octave < Note.MIN_OCTAVE) || (octave > Note.MAX_OCTAVE);
		this.defaultOctave = octave;
	}

	public byte getDefaultOctave() {
		 return this.defaultOctave;
	}
	
	public void setDefaultBassOctave(byte octave) {
		assert (octave < Note.MIN_OCTAVE) || (octave > Note.MAX_OCTAVE);
		this.defaultBassOctave = octave;
	}
	
	public byte getDefaultBassOctave() {
		return this.defaultBassOctave;
	}
	
	public void setDefaultDuration(double duration) {
		this.defaultDuration = duration;
	}
	
	public double getDefaultDuration() {
		return this.defaultDuration;
	}
	
	public void setDefaultAttackVelocity(byte attack) {
		assert (attack < MidiDefaults.MIN_ATTACK_VELOCITY) || (attack > MidiDefaults.MAX_ATTACK_VELOCITY);
		this.defaultAttackVelocity = attack;
	}
	
	public byte getDefaultAttackVelocity() {
		return this.defaultAttackVelocity;
	}
	
	public void setDefaultDecayVelocity(byte decay) {
		assert (decay < MidiDefaults.MIN_DECAY_VELOCITY) || (decay > MidiDefaults.MAX_DECAY_VELOCITY);
		this.defaultDecayVelocity = decay;
	}
	
	public byte getDefaultDecayVelocity() {
		return this.defaultDecayVelocity;
	}
	
	public static final byte DEFAULT_DEFAULT_OCTAVE = 5;
	public static final byte DEFAULT_DEFAULT_BASS_OCTAVE = 4; // Updated in JFugue5; in previous versions, bass was Octave 3
	public static final double DEFAULT_DEFAULT_DURATION = 0.25d;
	public static final byte DEFAULT_DEFAULT_ATTACK_VELOCITY = MidiDefaults.MIDI_DEFAULT_ATTACK_VELOCITY;
	public static final byte DEFAULT_DEFAULT_DECAY_VELOCITY = MidiDefaults.MIDI_DEFAULT_DECAY_VELOCITY;
}
