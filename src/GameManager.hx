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
	
	static var selection:Array<Atom> = [];

	
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
		
		var atom:Atom = cast(event.target);
		Sys.println("atom was selected");

		//make card bigger so you can see it is selected
		atom.scaleX = 1.1;
		atom.scaleY = 1.1;
		
		if (selection.indexOf(atom) == -1)
		{
			selection.push(atom);
		}
		
		//3 cards can be selected, if selected check if it creates a set
		if (selection.length == 3)
		{
			for (atom in selection)
			{
				selection.pop;
				myStage.removeChild(atom);
			}
			//no matter if it fails or not, create a new array
			selection = new Array<Atom>();
		}
	}
	
	/*static function CheckIfSet()
	{
		//Boolean for card value
		var sameCardValues : Bool = false;
		var differentCardValues : Bool = false;
		
		//Boolean for card colour
		var sameColour : Bool = false;
		var differentColour : Bool = false;
		
		//boolean for card shading
		var sameShading : Bool = false;
		var differentShading : Bool = false;
		
		//boolean for card shape
		var sameShape : Bool = false;
		var differentShape : Bool = false;
		
		//bool for set
		var notSet : Bool = false;
		
		
		//General Value Check
		//Check if the card values are the same
		if (selection[0].cardValue == selection[1].cardValue && selection[0].cardValue == selection[2].cardValue)
		{
			sameCardValues = true;
		}
		
		//check if the card values are all different
		if (selection[0].cardValue != selection[1].cardValue && selection[0].cardValue != selection[2].cardValue && selection[1].cardValue != selection[2].cardValue)
		{
			differentCardValues = true;
		}
		
		
		//Colour Checks
		//check if colour is all the same
		if (selection[0].colour == selection[1].colour && selection[0].colour == selection[2].colour)
		{
			sameColour = true;
		}

		//Check if colour is all different
		if (selection[0].colour != selection[1].colour && selection[0].colour != selection[2].colour && selection[1].colour != selection[2].colour)
		{
			differentColour = true;
		}
		
		//Shading Check
		//check if shading is all the same
		if (selection[0].colourShading == selection[1].colourShading && selection[0].colourShading == selection[2].colourShading)
		{
			sameShading = true;
		}
		
		//check if shading is all different
		if (selection[0].colourShading != selection[1].colourShading && selection[0].colourShading != selection[2].colourShading && selection[1].colourShading != selection[2].colourShading)
		{
			differentShading = true;
		}
		
		
		//General Shape Checks:
		//check if shape is all the same
		if (selection[0].shape == selection[1].shape && selection[0].shape == selection[2].shape)
		{
			sameShape = true;
		}
		
		//Check if shape is all different
		if (selection[0].shape != selection[1].shape && selection[0].shape != selection[2].shape && selection[1].shape != selection[2].shape)
		{
			differentShape = true;
		}

		if (sameCardValues || differentCardValues)
		{
			if (sameColour || differentColour)
			{
				if (sameShading || differentShading)
				{
					if (sameShape || differentShape)
					{
						RemoveSet();
						PlayCorrectSetSound();
					}
					//if conditions not met, unselect cards
					else
					{
						notSet = true;
					}
				}
				//if conditions not met, unselect cards
				else
				{
					notSet = true;
				}
			}
			//if conditions not met, unselect cards
			else
			{
				notSet = true;
			}
			
		}
		//if conditions not met, unselect cards
		else
		{
			notSet = true;
		}
		
		//reset card size
		if(notSet) 
		{
			for (card in selection)
			{
				card.scaleX = 1.0;
				card.scaleY = 1.0;
			}
			PlayWrongSetSound();
		}
	}*/
}