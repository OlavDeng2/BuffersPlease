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
	
	//This function right now only displays the last result, gonna have to change that
	/*static function displayLeaderboard()
	{
		
		//var playerName: String = GameManager.getLeaderboard();
		
		var scoreTextField:TextField = new TextField();
		
		scoreTextField.text = playerName;
		var fontSize = 40;
		scoreTextField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
		scoreTextField.autoSize = TextFieldAutoSize.LEFT;
		scoreTextField.selectable = false;
		scoreTextField.x = 75;
		scoreTextField.y = 50;
		// add the text field to the screen
		myStage.addChild(scoreTextField);
		
	}*/
	
}