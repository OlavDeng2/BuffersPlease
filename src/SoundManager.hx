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
	static var miniGameMusicPlaying: Bool = false;
	static var musicGain:Float = 0.07;
	
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
		musicChannel.soundTransform = new SoundTransform(musicGain, 0);
	}
	
	
	//plays sound on function call + sfxName 
	public static function playSFX(sfxName:String )
	{
		//Play sound effect
		sfxSoundPlay = Assets.getSound("sfx/" + sfxName + ".ogg");
		
		//makes sure sfx is being played on its own channel
		sfxChannel = sfxSoundPlay.play();
	}
	
	
	//checks which music needs to be played
	public static function checkGameMusic(gameMode:String)
	{
		//checks which game mode is being played/shown
		if (gameMode == "mixing")
		{
			playMusic("ChemShackMiniGame");
			
			miniGameMusicPlaying = true;
		}
		
		if (gameMode == "normalGame")
		{
			if (miniGameMusicPlaying == true)
			{
				playMusic("ChemShackMainGame");
				
				miniGameMusicPlaying = false;
			}
		}
	}
	
	
	//when called turns music gain down for 0.01 out of a maximum of 0.07
	public static function musicGainSofter()
	{
		//if there is music playing, stops music
		musicGain -= 0.01;
		if (musicGain <= 0) musicGain = 0;
		
		
		// when music gain is 0, stops the music and sets musicplaying to false
		if (musicGain == 0)
		{
			if (musicChannel != null)
			musicChannel.stop();
			
			musicPlaying = false;
		}
		
		//makes sure the new music gain is set to the musicChanel
		musicChannel.soundTransform = new SoundTransform(musicGain, 0);
	}
	
	
	public static function musicGainLouder()
	{
		//if there is music playing, stops music
		musicGain += 0.01;
		if (musicGain >= 0.07) musicGain = 0.07;
		
		
		//if there musicPlaying is false, set it to true and plays music
		if (musicPlaying == false)
		{
			musicChannel = playedMusic.play(0.0, 1000);
			
			musicPlaying = true;
		}
		
		//makes sure the new music gain is set to the musicChanel
		musicChannel.soundTransform = new SoundTransform(musicGain, 0);
	}
	
	
	//toggle the music on and off 
	public static function toggleMusic()
	{
		//if music is playing turns off music, if not playing starts playing music.
		if (musicPlaying == true)
		{
			musicChannel.stop();
			
			musicPlaying = false;
		}else{
			if (musicPlaying == false)
			{
				//Plays last inisiated music
				musicChannel = playedMusic.play(0.0, 1000);
				
				//makes music right Gain
				musicChannel.soundTransform = new SoundTransform(musicGain, 0);
				
				musicPlaying = true;
			}
		}
	}
	
	
}