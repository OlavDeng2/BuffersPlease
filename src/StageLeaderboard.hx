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
	
	static var scoreTextField:TextField = new TextField();

	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}

	public static function start() 
	{
		ImageManager.addImage('img/Player Interface/Menu.png', 0, 0);
		UIButton.mainMenuButton(360, 800);
		getLeaderboard();
	}
	
	//This function right now only displays the last result, gonna have to change that
	static function getLeaderboard()
	{
		//Open the database
		var cnx = Sqlite.open("DB/Data.db");
		
		//get the story from the database at collom story from table story
		var scoreSet = cnx.request("SELECT name FROM Highscores");
		
		
		//Go through the rows in story and get the story
		for (row in scoreSet)
		{
			scoreTextField.text = row.name;
		}
		
		// close the database
		cnx.close();

		// add the text field to the screen
		myStage.addChild(scoreTextField);
		
	}
	
}