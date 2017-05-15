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

 //This is the Main Menu Stage. This is where you can go to either the game, the leaderboard and exit the game.
class StageMainMenu extends Sprite
{
	
	
	//Declare some necesarry variables
	private static var myStage:Stage;
	//var menuBackData:BitmapData= Assets.getBitmapData("
	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}
	
	//Create and draw the main menu
	public static function start() 
	{
			
		//This function is used to make sure that the SceneManager has the correct stage to work off of when switching between different stages
		SceneManager.setMyStage(myStage);
		
		
		addBackground();
		showTitle();
	
		
		//Really self explanatory, if not see the UIButton class
		UIButton.startButton(360, 250);
		UIButton.leaderboardButton(360, 500);
		UIButton.exitButton(360, 900);
	}
	
	static function addBackground()
	{
		var backgroundImageData = Assets.getBitmapData('img/Backgrounds/Main_Menu.png');
		var backgroundImage = new Bitmap(backgroundImageData);
		
		myStage.addChild(backgroundImage);
	}
	static function showTitle()
	{
		
	}
	
}