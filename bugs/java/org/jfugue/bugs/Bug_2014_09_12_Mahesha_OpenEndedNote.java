package org.jfugue.bugs;

import java.io.File;

import javax.sound.midi.Sequence;

import org.jfugue.midi.MidiFileManager;
import org.jfugue.player.Player;

/**
 * Problem: A note like "Co-" isn't playing indefinitely. It never sounds unless it's followed by "C-o"
 */
public class Bug_2014_09_12_Mahesha_OpenEndedNote {
	public static void main(String[] args) {
		Player player = new Player();
		Sequence sequence = player.getSequence("I40 Co-");
		try {
			MidiFileManager.save(sequence, new File("Bug_2014_09_12_Mahesha_OpenEndedNote.mid"));
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}
