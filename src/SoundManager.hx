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
	static var playedMusic:Sound;
	static var sfxSoundPlay:Sound;
	
	//plays music on function call + musicName 
	public static function playMusic(musicName:String)
	{
		if (musicChannel != null)
			musicChannel.stop();
		
		playedMusic = Assets.getMusic("music/" + musicName + ".ogg");
		musicChannel = playedMusic.play(0.0, 1000);
	}
	
	//plays sound on function call + sfxName 
	public static function playSFX(sfxName:String )
	{
		sfxSoundPlay = Assets.getSound("sfx/" + sfxName + ".ogg");
		sfxSoundPlay.play();
	}
	
	//Do not the above are only examples and should be used as such

}