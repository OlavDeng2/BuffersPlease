package;

import openfl.Lib;
import openfl.media.Sound;
import openfl.media.SoundChannel;
import openfl.Assets;

/**
 * ...
 * @author Olav
 */

 //This is the sound manager, this class will handle the playing, pausing and stopping of music
class SoundManager 
{
	//Create the sound channel for the ingame music and sound
	static var musicChannel:SoundChannel;
	
	//Example of music
	public static function startMusic()
	{
		var epicMusic:Sound = Assets.getMusic("sfx/backgroundsound.ogg");
		epicMusic.play(0.0, 1000);
	}
	
	//Example of Sound
	
		public static function playDestroyAsteroid()
	{
		var AsteroidDestructionSound = Assets.getSound("sfx/small_blast.ogg");
		AsteroidDestructionSound.play();
	}
	
	//Do not the above are only examples and should be used as such

}