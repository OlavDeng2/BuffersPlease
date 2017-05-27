package;

//Import some shit
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Stage;

import sys.db.Sqlite;

import openfl.text.TextField;
import openfl.text.TextFieldType;
import openfl.text.TextFieldAutoSize;
import openfl.text.Font;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import GameManager;
/**
 * ...
 * @author Olav
 */
class StageLeaderboard extends Sprite
{
	
		
	//Declare some necesarry variables
	private static var myStage:Stage;
	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}

	public static function start() 
	{
		ImageManager.addImage('img/Player Interface/Menu.png', 0, 0);
		UIButton.mainMenuButton(360, 800);
		//displayLeaderboard();
		GameManager.getLeaderboard();
	}
	
	
}