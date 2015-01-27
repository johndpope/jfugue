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

import java.util.HashMap;
import java.util.Map;

/**
 * This class is useful for any applications that plan on keeping track of
 * musical events by beat time. It automatically provides beat time, manages
 * the current track, and maintains beat time bookmarks.
 * 
 * @author David Koelle
 */
public class TrackTimeManager
{
    private double[][] beatTime;
    private byte currentTrack;
    private byte lastCreatedTrack;
    private byte[] currentLayer;
    private Map<String, Double> bookmarkedTrackTimeMap;

    public TrackTimeManager() { 
    	init();
    }
    
    protected void init() {
    	beatTime = new double[MidiDefaults.TRACKS][MidiDefaults.LAYERS];
    	currentTrack = 0;
    	lastCreatedTrack = 0;
    	currentLayer = new byte[MidiDefaults.TRACKS];
    	bookmarkedTrackTimeMap = new HashMap<String, Double>();
    }
    
    /**
     * Sets the current track, or channel, to which new events will be added.
     * @param track the track to select
     */
    protected void setCurrentTrack(byte track) {
        if (track > this.lastCreatedTrack) {
            for (int i = this.lastCreatedTrack+1; i < track; i++) {
                createTrack((byte)i);
            }
            this.lastCreatedTrack = track;
        }
        this.currentTrack = track;
    }
    
    public byte getCurrentTrack() {
    	return this.currentTrack;
    }
    
    protected byte getLastCreatedTrack() { 
    	return this.lastCreatedTrack;
    }

    protected void createTrack(byte track) {
        for (byte layer = 0; layer < MidiDefaults.LAYERS; layer++) {
            beatTime[track][layer] = 0;
        }
        currentLayer[track] = 0;
    }        

    /**
     * Sets the current layer within the track to which new events will be added.
     * @param layer the layer to select
     */
    public void setCurrentLayer(byte layer) {
        currentLayer[currentTrack] = layer;
    }

    protected byte getCurrentLayer() { 
    	return this.currentLayer[getCurrentTrack()];
    }
    

    /**
     * Advances the timer for the current track by the specified duration,
     * which is specified in Pulses Per Quarter (PPQ)
     * @param duration the duration to increase the track timer
     */
    public void advanceTrackBeatTime(double advanceTime) {
        beatTime[currentTrack][currentLayer[currentTrack]] += advanceTime;
    }

    /**
     * Sets the timer for the current track by the given time,
     * which is specified in Pulses Per Quarter (PPQ)
     * @param newTickTime the time at which to set the track timer
     */
    public void setTrackBeatTime(double newTime) {
        beatTime[currentTrack][currentLayer[currentTrack]] = newTime;
    }

    /**
     * Returns the timer for the current track and current layer.
     * @return the timer value for the current track, specified in Pulses Per Quarter (PPQ)
     */
    public double getTrackBeatTime() {
        return beatTime[currentTrack][currentLayer[currentTrack]];
    }

    public void addTrackTickTimeBookmark(String timeBookmarkID) {
        bookmarkedTrackTimeMap.put(timeBookmarkID, getTrackBeatTime());
    }

    public double getTrackBeatTimeBookmark(String timeBookmarkID) {
    	return bookmarkedTrackTimeMap.get(timeBookmarkID);
    }

    /**
     * Returns the latest track time across all layers in the given track
     * @param track
     */
    public double getLatestTrackBeatTime(byte track) {
    	double latestTime = 0.0D;
    	for (byte i=0; i < MidiDefaults.LAYERS; i++) {
    		if (beatTime[track][i] > latestTime) {
    			latestTime = beatTime[track][i];
    		}
    	}
    	return latestTime;
    }
}