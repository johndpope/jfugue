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

package org.jfugue.midi;

public interface MidiDefaults 
{
    public static final float DEFAULT_DIVISION_TYPE = 0.0f;
    public static final int DEFAULT_RESOLUTION_TICKS_PER_BEAT = 128;// TODO - Default timing resolution
    public static final int DEFAULT_TEMPO_BEATS_PER_MINUTE = 120;
    public static final int DEFAULT_TEMPO_BEATS_PER_WHOLE = 4;
    public static final int DEFAULT_METRONOME_PULSE = 24;
    public static final int DEFAULT_THIRTYSECOND_NOTES_PER_24_MIDI_CLOCK_SIGNALS = 8;   
    public static final int TRACKS = 16;
    public static final int LAYERS = 16;
    public static final double MS_PER_MIN = 60000.0d;
    public static final int DEFAULT_MPQ = 50; // Milliseconds per quarter note
    public static final byte SET_TEMPO_MESSAGE_TYPE = 0x51;
    public static final byte PERCUSSION_TRACK = 9;
    public static final byte MIN_PERCUSSION_NOTE = 35;
    public static final byte MAX_PERCUSSION_NOTE = 81;
    public static final byte MIN_ATTACK_VELOCITY = 0;
    public static final byte MAX_ATTACK_VELOCITY = 127;
    public static final byte MIDI_DEFAULT_ATTACK_VELOCITY = 64; // Not to be confused with the default attack for a JFugue Note in DefaultManager 
    public static final byte MIN_DECAY_VELOCITY = 0;
    public static final byte MAX_DECAY_VELOCITY = 127;    
    public static final byte MIDI_DEFAULT_DECAY_VELOCITY = 64; // Not to be confused with the default decay for a JFugue Note in DefaultManager
}
