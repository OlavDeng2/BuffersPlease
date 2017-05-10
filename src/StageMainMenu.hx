package;

//Import some shit
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Stage;
import openfl.events.KeyboardEvent;
import openfl.text.Font;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.Lib;


/**
 * ...
 * @author Olav
 */
class StageMainMenu extends Sprite
{
	
	private static var myStage:Stage;
	
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}

	public function start() 
	{
		addBackground();
		showTitle();
		startButton();
		leaderboardButton();
		exitButton();
	}
	
	static function addBackground()
	{
		
	}
	static function showTitle()
	{
		
	}
	
	static function startButton()
	{
		
	}
	
	static function leaderboardButton()
	{
		
	}
	
	static function exitButton()
	{
		
	}
}