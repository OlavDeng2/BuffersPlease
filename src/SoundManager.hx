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
	public static function palyMusic(musicName:String)
	{
		var playedMusic:Sound = Assets.getMusic("sfx/${musicName}.ogg");
		playedMusic.play(0.0, 1000);
	}
	
	//Example of Sound
	
		public static function playSFX(sfxName:String )
	{
		var sfxSoundPlay = Assets.getSound("sfx/${sfxName}.ogg");
		sfxSoundPlay.play();
	}
	
	//Do not the above are only examples and should be used as such

}