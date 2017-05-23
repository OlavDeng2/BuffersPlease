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
class StageCharacterCreation extends Sprite
{
	public static var characterName:String = "Enter your Name";
		
	//Declare some necesarry variables
	private static var myStage:Stage;
	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}

	public static function start() 
	{
		
		addBackground();
		SceneManager.setMyStage(myStage);
		
		UIButton.nextButton(600, 900);
		inputCharacterName();
		displayStory();
	}
	
	
	static function addBackground()
	{
		ImageManager.addImage('img/Player Interface/Menu.png', 0, 0);
	}
	
	static function displayStory()
	{
		
		var storyTextField:TextField = new TextField();
		var fontSize = 40;
		storyTextField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
		storyTextField.selectable = false;
		storyTextField.x = 300;
		storyTextField.y = 100;
		
		
		//Open the database
		var cnx = Sqlite.open("DB/Data.db");
		
		//get the story from the database at collom story from table story
		var storySet = cnx.request("SELECT Story FROM Story");
		
		
		//Go through the rows in story and get the story
		for (row in storySet)
		{
			storyTextField.text = row.Story;
		}
		
		// close the database
		cnx.close();

		// add the text field to the screen
		myStage.addChild(storyTextField);
		

	}
	
	
	//this function handles the creation of the character name
	static function inputCharacterName()
	{
		
		//This creates a text field which you can edit, still need to handle the getting of the info from the text field and saving of it.
		var characterNameField:TextField = new TextField();
		var fontSize = 40;
		characterNameField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
		characterNameField.selectable = true;
		characterNameField.text = characterName;
		characterNameField.type = TextFieldType.INPUT;
		characterNameField.x = 300;
		characterNameField.y = 100;
		characterNameField.restrict = "A-Z 0-0 a-z";
		characterNameField.maxChars = 16; 
		characterName = characterNameField.text;
		myStage.addChild( characterNameField );
		
		Sys.println(characterName);

	}
}