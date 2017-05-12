package;

//Import some shit
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Stage;
import openfl.text.Font;
import openfl.text.TextField;
import openfl.text.TextFormat;

/**
 * ...
 * @author Olav
 */
class StageMainMenu extends Sprite
{
	
	
	//Declare some necesarry variables
	private static var myStage:Stage;
	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}
	
	//Create and draw the main menu
	public static function start() 
	{
		addBackground();
		showTitle();
		UIButton.startButton(myStage, 100, 100);
		UIButton.leaderboardButton(myStage, 100, 125);
		UIButton.exitButton(myStage, 100, 150);
	}
	
	static function addBackground()
	{
		
	}
	static function showTitle()
	{
		
	}
	
}