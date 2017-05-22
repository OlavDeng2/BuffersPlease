package;

/**
 * ...
 * @author Olav
 */
class GameManager 
{
	//Gonna have to do some shit in here for the leaderboards and storing of variables, but im a lazy fuck so that will come at a later date.
	
	//variables which will be needed later
	var currentScore:Int;
	var currentName:String;
	
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
}