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
		var cnx = Sqlite.open("DB/Data.db");
		var storySet = cnx.request("SELECT Story FROM Story");
		
		var storyTextField:TextField = new TextField();
		
		for (row in storySet)
		{
			storyTextField.text = row.Story;

		}
		
		cnx.close();

		
		myStage.addChild(storyTextField);
		

	}
	
	
	//this function handles the creation of the character name
	static function inputCharacterName()
	{
		
		var characterNameField:TextField = new TextField();
		var font_size = 20;
		//characterNameField.defaultTextFormat = new TextFormat(Assets.getFont("assets/Fonts/TIMES.TTF").fontName, font_size);
		characterNameField.selectable = true;
		characterNameField.text = characterName;
		characterNameField.type = TextFieldType.INPUT;
		characterNameField.x = 300;
		characterNameField.y = 100;
		characterNameField.restrict = "A-Z 0-0 a-z";
		characterNameField.maxChars = 16; 
		characterName = characterNameField.text;
		myStage.addChild( characterNameField );
		
				
		//GameManager.setCurrentName(characterName);
		Sys.println(characterName);

	}
}