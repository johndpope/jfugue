package org.jfugue.bugs;

import org.jfugue.pattern.Pattern;
import org.jfugue.player.Player;
import org.staccato.MicrotonePreprocessor;

public class Bug_2014_08_27_Mahesha_Mictorone {
	public static void main(String[] args) {
		// In the latest JAR, First note is getting played twice, last note is getting skipped when we play microtones.
		Pattern pattern = new Pattern("I40 T120 m327.0 m348.8");// m392.40000000000003w  m418.56000000000006q  m490.50000000000006w  m523.2q  m558.0800174400001w");
		System.out.println(MicrotonePreprocessor.getInstance().preprocess(pattern.toString(), null));
		new Player().play(pattern);
	}
}
