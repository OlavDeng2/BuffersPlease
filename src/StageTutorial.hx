package;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.Assets;
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
 * @author nico
 */
class StageTutorial extends Sprite
{
	//Declare some necesarry variables
	private static var myStage:Stage;
	public static var tutorialID:Int = 0;
	private static var tutorialTextField:TextField;
	private static var colorCode:Int = 0x000000;
	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}
	
	
	public static function start() 
	{
		SceneManager.setMyStage(myStage);
		Sys.println("Tutorial");
		
		addShack();
		startTutorial();
	}
	
	//adds the basic shack to the screen
	static function addShack()
	{
		ImageManager.addImage("img/shackUI/Background.png", 0, 0, 1, 1);
		ImageManager.addImage('img/shackUI/Noon.png', 0, 0, 1, 1);
		ImageManager.addImage("img/shackUI/CupboardClosed.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/Screen.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/Desk.png",0,0,1,1);
		//ImageManager.addImage("img/shackUI/Meter.png", 0, 0,1,1);
	}
	
	//function to start the tutorial
	public static function startTutorial()
	{
		
		tutorialTextField = new TextField();
		
		//normal fontsize
		var fontSize = 35;
		tutorialTextField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
		tutorialTextField.autoSize = TextFieldAutoSize.LEFT;
		tutorialTextField.selectable = false;
		tutorialTextField.textColor = colorCode;
		//normal x and y pos.
		tutorialTextField.x = 75;
		tutorialTextField.y = 50;
		tutorialTextField.multiline = true;
		
		myStage.addChild(tutorialTextField);
		updateTutorial();
		
		UIButton.tutorialNextButton(600, 900);
	}
	
	public static function updateTutorial()
	{
		Sys.println("Update Tutorial");
		tutorialID += 1;
		Sys.println(tutorialID);
		
		if (tutorialID == 2)
		{
			//adds an image of the client on screen
			ImageManager.addImage("img/shackUI/Client.png",0,0,1,1);
		}
		if (tutorialID == 3)
		{
			//adds an image of the bekers on screen
			ImageManager.addImage("img/Buttons/Beaker.png", 85, 460, 1, 1);
		}
		if (tutorialID == 4)
		{
			//removes last added image and andds button
			myStage.removeChildren();
			addShack();
			ImageManager.addImage("img/shackUI/Client.png", 0, 0, 1, 1);
			myStage.addChild(tutorialTextField);
			UIButton.tutorialMixingButton(85, 460);
		}
		if (tutorialID == 5)
		{
			myStage.removeChildren();
			
			ImageManager.addImage("img/shackUI/MixingBackground.png", 0, 0, 1, 1);
			
			//sets font for the textfield
			var fontSize = 25;
			tutorialTextField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
			tutorialTextField.textColor = colorCode;
			
			//sets x and y and addes textfield
			tutorialTextField.x = 75;
			tutorialTextField.y = 100;
			myStage.addChild(tutorialTextField);
			StageMixing.setPuzzle("Mixing2");
		}
		if (tutorialID == 6)
		{
			//addes background
			ImageManager.addImage("img/shackUI/MixingBackground.png", 0, 0, 1, 1);
			
			//re-addes textfield
			myStage.addChild(tutorialTextField);
			UIButton.tutorialNextButton(600, 900);
		}
		if (tutorialID == 7)
		{
			myStage.removeChildren();
			//addes background
			ImageManager.addImage("img/shackUI/MixingBackground.png", 0, 0, 1, 1);
			
			//re-addes textfield
			myStage.addChild(tutorialTextField);
			StageMixing.setPuzzle("Mixing3");
		}
		if (tutorialID == 8)
		{
			//addes background
			ImageManager.addImage("img/shackUI/MixingBackground.png", 0, 0, 1, 1);
			
			//re-addes textfield
			myStage.addChild(tutorialTextField);
			UIButton.tutorialNextButton(600, 900);
			//gets a new puzzle
			StageMixing.setPuzzle("Mixing4");
		}
		if (tutorialID == 9)
		{
			myStage.removeChildren();
			//addes background
			ImageManager.addImage("img/shackUI/MixingBackground.png", 0, 0, 1, 1);
			
			myStage.addChild(tutorialTextField);
			StageMixing.setPuzzle("Mixing5");
		}
		if (tutorialID == 10)
		{
			addShack();
			
			//changes the font
			var fontSize = 30;
			tutorialTextField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
			myStage.addChild(tutorialTextField);
			
			UIButton.tutorialNextButton(600, 900);
			
			//adds an image of the bekers on screen
			ImageManager.addImage("img/Buttons/Beaker.png", 85, 460, 1, 1);
		}
		if (tutorialID == 11)
		{
			//addes a bell to the screen
			UIButton.bufferReadyButton(600, 750);
		}
		if (tutorialID == 12)
		{
			//addes a notepad to the screen
			UIButton.notepadButton(120, 720);
		}
		if (tutorialID == 13)
		{
			ImageManager.addImage("img/Buttons/Chem_Guide.png", 595, 505, 1, 1);
		}
		if (tutorialID == 15)
		{
			SceneManager.switchToStageMainGame();
		}
		
		//Next few lines update the text of the tutorial
		//opens the database
		var db = Sqlite.open("DB/Data.db");
		
		//get the story from the database at collom story from table story
		var tutorialSet = db.request("SELECT TutorialText FROM Tutorial WHERE rowid = " + tutorialID);
		
		//Go through the rows in story and get the story
		for (row in tutorialSet)
		{
			tutorialTextField.text = row.TutorialText;
		}
		
		// close the database
		db.close();
	}
}