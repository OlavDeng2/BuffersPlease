package;

//Import some shit
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Stage;

import sys.db.Sqlite;

import openfl.events.MouseEvent;

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
	public static var characterNameField:TextField = new TextField();

		
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
		acceptCharacterName(50, 50);
		
	}
	
	
	static function addBackground()
	{
		ImageManager.addImage('img/Player Interface/Menu.png', 0, 0);
	}
	
	//Write the code for the next story bit is required, as it wont all fit on one screen
	static function displayStory()
	{
		
		var storyTextField:TextField = new TextField();
		var fontSize = 40;
		storyTextField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
		//storyTextField.textWidth = 500.0;
		storyTextField.autoSize = TextFieldAutoSize.LEFT;
		storyTextField.selectable = false;
		storyTextField.x = 75;
		storyTextField.y = 50;
		storyTextField.multiline = true;
		
		
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
		var fontSize = 30;
		characterNameField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
		characterNameField.selectable = true;
		characterNameField.text = characterName;
		characterNameField.type = TextFieldType.INPUT;
		characterNameField.x = 200;
		characterNameField.y = 800;
		characterNameField.restrict = "A-Z 0-0 a-z";
		characterNameField.maxChars = 16; 
		characterName = characterNameField.text;
		characterNameField.autoSize = TextFieldAutoSize.LEFT;
		
		
		myStage.addChild( characterNameField );
		
		Sys.println(characterName);

	}
	
	//store char name and start displaying story
	static function acceptCharacterName(xPos:Int, yPos:Int)
	{

		var acceptCharacterNameButton:Button = new Button("Play");
		
		acceptCharacterNameButton.y = yPos;
		acceptCharacterNameButton.x = xPos;
		
		myStage.addChild(acceptCharacterNameButton);
		
		acceptCharacterNameButton.addEventListener(MouseEvent.CLICK, acceptCharacterNameButtonPress);
	}
	
	static function acceptCharacterNameButtonPress(event:MouseEvent)
	{
		var acceptCharacterNameButton:Button = cast(event.target);
		Sys.println("Char name is now saved");
		
		GameManager.setCurrentName(characterNameField.text);
		
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
	}
}