package;

import sys.db.Sqlite;


import openfl.text.TextField;

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
	static var currentName:String;
	static var characterTextInput:TextField;
	
	
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
	}
	
	
	public static function getLeaderboard()
	{
		//Open the database
		var cnx = Sqlite.open("DB/Data.db");
		
		//get the story from the database at collom story from table story
		var scoreSet = cnx.request("SELECT name FROM Highscores");
		
		
		//Go through the rows in story and get the story
		for (row in scoreSet)
		{
			placeHolderVariable = row.name;
		}
		
		// close the database
		cnx.close();
	}
}