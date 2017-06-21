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
		
		//Really self explanatory, if not see the UIButton class
		UIButton.startButton(360, 400);
		UIButton.leaderboardButton(360, 650);
		UIButton.exitButton(360, 900);
		UIButton.musicOffButton(600, 900); 
	}
	
	static function addBackground()
	{
		ImageManager.addImage('img/shackUI/Menu.png', 0, 0, 1, 1);
		//ImageManager.addImage('img/shackUI/Noon.png', 0, 0, 1, 1);
		ImageManager.addImage('img/shackUI/Logo.png', 40, 50, 1, 1);
	}

	
}