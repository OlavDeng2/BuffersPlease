package;

import openfl.display.Stage;

import sys.db.Sqlite;

import openfl.text.TextField;
import openfl.text.TextFieldType;
import openfl.text.TextFieldAutoSize;
import openfl.text.Font;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.Assets;


import openfl.events.MouseEvent;


/**
/**
 * ...
 * @author Olav
 */
 
class GameManager 
{
	//Gonna have to do some shit in here for the leaderboards and storing of variables, but im a lazy fuck so that will come at a later date.
	
	//variables which will be needed later
	static var currentScore:Int;
	static var place:Int = 1;
	static var currentName:String;
	static var characterTextInput:TextField;
	
	//variable to store the current stage that is being worked with
	private static var myStage:Stage;
	
	//This function gets the current stage from the scene manager and sets it in this class so that all the buttons have the correct stage they are working with
	private static function setMyStage()
	{
		myStage = SceneManager.getMyStage();

	}
	
	//Function to get and set current score
	public static function getCurrentScore()
	{
		return currentScore;
	}
	
	public static function setCurrentScore(score:Int)
	{
		currentScore = score;
	}
	
	//Functions to get and set current name
	public static function getCurrentName()
	{
		return currentName;
	}
	
	public static function setCurrentName(name:String)
	{
		currentName = name;
		Sys.println(currentName);
	}
	
	public static function writeScoreToDB()
	{
		var cnx = Sqlite.open("DB/Data.db");
		cnx.request(' INSERT INTO Highscores (name, Score) VALUES("' + currentName + '", ' + currentScore + ')');
		
		cnx.close();
	}
	
	public static function getLeaderboard()
	{
		setMyStage();
		
		
		//Open the database*/
		var cnx = Sqlite.open("DB/Data.db");
		
		//get the story from the database at collom story from table story
		var scoreSet = cnx.request("SELECT * FROM Highscores ORDER BY Score DESC LIMIT 5");
		
		
		//Go through the rows in story and get the story
		for (row in scoreSet)
		{
			var charName:String = row.Name;
			var charScore:Int = row.Score;
			var scoreYStartPos:Int = 0;
			var scoreXPos:Int = 75;

			//add the names to the screen
			var scoreNameTextFieldText:String = '$place $charName ';
			var scoreNameTextField:TextField = new TextField();
			scoreNameTextField.text = scoreNameTextFieldText;
			var fontSize = 40;
			scoreNameTextField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
			scoreNameTextField.autoSize = TextFieldAutoSize.LEFT;
			scoreNameTextField.x = scoreXPos;
			scoreNameTextField.y = place * 50+ scoreYStartPos;
			myStage.addChild(scoreNameTextField);
			
			//add the score to the screen
			var scoreTextFieldText:String = '$charScore ';
			var scoreTextField:TextField = new TextField();
			scoreTextField.text = scoreTextFieldText;
			var fontSize = 40;
			scoreTextField.defaultTextFormat = new TextFormat(Assets.getFont("Fonts/TIMES.TTF").fontName, fontSize);
			scoreTextField.autoSize = TextFieldAutoSize.LEFT;
			scoreTextField.x = scoreXPos + 415;
			scoreTextField.y = place * 50 + scoreYStartPos;
			myStage.addChild(scoreTextField);
			
			place += 1;
			
		}
		
		// close the database
		cnx.close();
		
		

		
		

	}
	
	/*
	 * This section of the game manager class deals with the mixing minigame
	 */ 
	
	public static function getPuzzle(puzzle:String)
	{
		/* Notes on what the different values represent in terms of atoms, It basically follows the periodic table
		 *  
		 * 0 = nothing
		 * 1 = hydrogen
		 * 6 = Carbon
		 * 8 = Oxygen
		 * 11 = Sodium
		 * 
		 */
		var xPos: Int = 50;
		var yPos: Int = 50;
		
		
		//create the atom variables
		var nothing:Int = 0;
		var H:Int = 1;
		var C:Int = 6;
		var O:Int = 8;
		var Na:Int = 11;
		setMyStage();
		
		
		//Open the database*/
		var cnx = Sqlite.open("DB/Data.db");
		
		//get the story from the database at collom story from table story
		var mixingLevelData = cnx.request('SELECT * FROM $puzzle');
		
		for (row in mixingLevelData)
		{
			if (row.Collumn1 == 0)
			{
				
				Sys.println("nothing was found");
				//Do nothing
			}

			if (row.Collumn1 == H)
			{
				hydrogenAtom(xPos, yPos);
				Sys.println("a Hydrogen Atom was found");
			}
				
			if (row.Collumn1 == C)
			{
				carbonAtom(xPos, yPos);
				Sys.println("a Carbon Atom was found");
			}
				
			if (row.Collumn1 == O)
			{
				oxygenAtom(xPos, yPos);
				Sys.println("an Oxygen Atom was found");
			}
				
			if (row.Collumn1 == Na)
			{
				sodiumAtom(xPos, yPos);
				Sys.println("a Sodium Atom was found");
			}

			
			
			xPos += 150;
			if (row.Collumn2 == 0)
			{
				
				Sys.println("nothing was found");
				//Do nothing
			}

			if (row.Collumn2 == H)
			{
				hydrogenAtom(xPos, yPos);
			}
			
			if (row.Collumn2 == C)
			{
				carbonAtom(xPos, yPos);	
				Sys.println("a Carbon Atom was found");
			}
				
			if (row.Collumn2 == O)
			{
				oxygenAtom(xPos, yPos);
				Sys.println("an Oxygen Atom was found");
			}
				
			if (row.Collumn2 == Na)
			{
				sodiumAtom(xPos, yPos);
				Sys.println("a Sodium Atom was found");
			}

			
			xPos += 150;
			if (row.Collumn3 == 0)
			{
				Sys.println("nothing was found");
				//Do nothing
			}

			if (row.Collumn3 == H)
			{
				hydrogenAtom(xPos, yPos);

				Sys.println("a Hydrogen Atom was found");
			}
			
			if (row.Collumn3 == C)
			{
				carbonAtom(xPos, yPos);
				Sys.println("a Carbon Atom was found");
			}
			
			if (row.Collumn3 == O)
			{
				oxygenAtom(xPos, yPos);
				Sys.println("an Oxygen Atom was found");
			}
			
			if (row.Collumn3 == Na)
			{
				sodiumAtom(xPos, yPos);
				Sys.println("a Sodium Atom was found");
			}
		
			
			yPos += 150;
			xPos = 50;
			
		}
		
		// close the database
		cnx.close();
	}
	
	private static function hydrogenAtom(xPos:Int, yPos:Int)
	{
		var hydrogenAtom:Atom = new Atom ("H");
		hydrogenAtom.x = xPos;
		hydrogenAtom.y = yPos;
		hydrogenAtom.addEventListener(MouseEvent.CLICK, onAtomSelect);

		myStage.addChild(hydrogenAtom);
	}
	
	private static function carbonAtom(xPos:Int, yPos:Int)
	{
		var carbonAtom:Atom = new Atom ("C");
		carbonAtom.x = xPos;
		carbonAtom.y = yPos;
		carbonAtom.addEventListener(MouseEvent.CLICK, onAtomSelect);

		
		myStage.addChild(carbonAtom);
	}
	
	private static function oxygenAtom(xPos:Int, yPos:Int)
	{
		var oxygenAtom:Atom = new Atom ("O");
		oxygenAtom.x = xPos;
		oxygenAtom.y = yPos;
		oxygenAtom.addEventListener(MouseEvent.CLICK, onAtomSelect);

		myStage.addChild(oxygenAtom);
	}
	
	private static function sodiumAtom(xPos:Int, yPos:Int)
	{
		var sodiumAtom:Atom = new Atom ("Na");
		sodiumAtom.x = xPos;
		sodiumAtom.y = yPos;
		sodiumAtom.addEventListener(MouseEvent.CLICK, onAtomSelect);
		myStage.addChild(sodiumAtom);
		
	}
	
	private static function onAtomSelect(event:MouseEvent)
	{
		//Do Something
		
		var sodiumAtom:Atom = cast(event.target);
		Sys.println("atom was selected");
	}
}