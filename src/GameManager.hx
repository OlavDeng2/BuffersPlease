package;

import sys.db.Sqlite;


import openfl.text.TextField;

/**
/**
 * ...
 * @author Olav
 */

 typedef HighScore = 	 {
	 var name:String;
	 var points:Int;
 }
 
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
		//Figure out typedef later
		var highScore:HighScore;
		var highScoresArray:Array<HighScore> = [];
		
		//Open the database*/
		var cnx = Sqlite.open("DB/Data.db");
		
		//get the story from the database at collom story from table story
		var scoreSet = cnx.request("SELECT * FROM Highscores ORDER BY Score DESC LIMIT 5");
		
		
		//Go through the rows in story and get the story
		for (row in scoreSet)
		{

			highScore = {name: row.Name, points: row.Score};
			highScoresArray.push(highScore);
			
		}
		
		// close the database
		cnx.close();
		
		Sys.println(highScoresArray);
		return highScoresArray;
	}
	
	public static function getPuzzle(puzzleNumber:String)
	{
		//Do something
	}
}