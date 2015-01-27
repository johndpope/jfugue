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

import javax.sound.midi.MidiChannel;
import javax.sound.midi.MidiSystem;
import javax.sound.midi.MidiUnavailableException;
import javax.sound.midi.Synthesizer;

import org.jfugue.parser.ParserListener;
import org.jfugue.player.SynthesizerManager;
import org.jfugue.theory.Chord;
import org.jfugue.theory.Note;

public class RealtimeMidiParserListener implements ParserListener
{
	private Synthesizer synth;
    private MidiChannel[] channels;
    private byte currentChannel;
    
    public RealtimeMidiParserListener() throws MidiUnavailableException {
        this(SynthesizerManager.getInstance().getSynthesizer());
    }
    
    public RealtimeMidiParserListener(Synthesizer synth) throws MidiUnavailableException {
        this.synth = synth;
        this.synth.open();
        initChannels();
    }
    
    protected void initChannels() {
    	this.channels = this.synth.getChannels();
    }

    public void finish() {
        for (MidiChannel channel : channels) {
            channel.allNotesOff();
        }
        this.synth.close();
    }

    protected MidiChannel getCurrentChannel() {
    	return this.channels[this.currentChannel];
    }

    /* ParserListener Events */
    
    @Override
    public void beforeParsingStarts() { }

    @Override
    public void afterParsingFinished() { }
    
    @Override
    public void onTrackChanged(byte track) {
        this.currentChannel = track;
    }

    @Override 
    public void onLayerChanged(byte layer) { }

    @Override 
    public void onInstrumentParsed(byte instrument) {
    	getCurrentChannel().programChange(instrument);
    }

    @Override
    public void onTempoChanged(int tempoBPM) { }

    @Override
    public void onKeySignatureParsed(byte key, byte scale) { }

    @Override 
    public void onTimeSignatureParsed(byte numerator, byte denominator) { }

    @Override
    public void onBarLineParsed(long time) { }

    @Override 
    public void onTrackBeatTimeBookmarked(String timeBookmarkID) { }

    @Override 
    public void onTrackBeatTimeBookmarkRequested(String timeBookmarkID) { }

    @Override 
    public void onTrackBeatTimeRequested(double time) { }

    @Override
    public void onPitchWheelParsed(byte lsb, byte msb) {
    	getCurrentChannel().setPitchBend(lsb + (msb << 7));
    }

    @Override
    public void onChannelPressureParsed(byte pressure) {
    	getCurrentChannel().setChannelPressure(pressure);
    }

    @Override
    public void onPolyphonicPressureParsed(byte key, byte pressure) {
    	getCurrentChannel().setPolyPressure(key, pressure);
    }

    @Override 
    public void onSystemExclusiveParsed(byte... bytes) { }

    @Override
    public void onControllerEventParsed(byte controller, byte value) {
    	getCurrentChannel().controlChange(controller, value);
    }

    @Override 
    public void onLyricParsed(String lyric) { } 

    @Override 
    public void onMarkerParsed(String marker) { } 

    @Override 
    public void onFunctionParsed(String id, Object message) { }

    @Override  
    public void onNoteParsed(Note note) {
        if (note.isRest()) {
        	return;
        }
        else if (note.isEndOfTie()) {
        	getCurrentChannel().noteOff(note.getValue(), note.getDecayVelocity());
    	}
        else {
        	getCurrentChannel().noteOn(note.getValue(), note.getAttackVelocity());
        }
    }
    
    @Override 
    public void onChordParsed(Chord chord) {
    	for (Note note : chord.getNotes()) {
    		this.onNoteParsed(note);
    	}
    }
}
