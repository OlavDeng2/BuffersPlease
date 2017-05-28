package;

import openfl.Lib;
import openfl.media.Sound;
import openfl.media.SoundChannel;
import openfl.Assets;
import openfl.media.SoundTransform;

/**
 * ...
 * @author Olav
 */

 //This is the sound manager, this class will handle the playing, pausing and stopping of music
class SoundManager 
{
	//Create the sound channel for the ingame music and sound
	static var musicChannel:SoundChannel;
	static var sfxChannel:SoundChannel;
	static var playedMusic:Sound;
	static var sfxSoundPlay:Sound;
	static var musicPlaying:Bool = true;
	
	//plays music on function call + musicName 
	public static function playMusic(musicName:String)
	{
		//if there is music playing, stops music
		if (musicChannel != null)
			musicChannel.stop();
		
			
		//plays Music
		playedMusic = Assets.getMusic("music/" + musicName + ".ogg");
		musicChannel = playedMusic.play(0.0, 1000);
		
		
		/*Sound transformer.
		 * 1st parameter is volume, 0 is minimum, 1 is maximum
		 * wnd parameter is placing(3d) , -1 is left, 1 is right, 0 is center
		 * */
		musicChannel.soundTransform = new SoundTransform(0.05, 0);
	}
	
	//plays sound on function call + sfxName 
	public static function playSFX(sfxName:String )
	{
		//Play sound effect
		sfxSoundPlay = Assets.getSound("sfx/" + sfxName + ".ogg");
		
		//makes sure sfx is being played on its own channel
		sfxChannel = sfxSoundPlay.play();
	}
	
	/*public static function musicPlaying()
	{
		/*if there is music playing, stops music
		if (musicChannel != null)
			musicChannel.stop();
			
		//Play sound effect
		sfxSoundPlay = Assets.getSound("sfx/" + sfxName + ".ogg");
		
		//makes sure sfx is being played on its own channel
		sfxChannel = sfxSoundPlay.play();
		
	}*/
}