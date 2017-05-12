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
import openfl.events.MouseEvent;
import openfl.system.System;




/**
 * ...
 * @author Olav
 */
class StageMainMenu extends Sprite
{
	
	private static var myStage:Stage;
	private static var buttonSprite : Sprite = new Sprite();	

	
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}

	public static function start() 
	{
		addBackground();
		showTitle();
		startButton();
		leaderboardButton();
		UIButton.exitButton(myStage);
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
}