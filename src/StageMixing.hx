package;

//Import some shit
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Stage;


/**
 * ...
 * @author Olav
 */
class StageMixing extends Sprite
{

		
	//Declare some necesarry variables
	private static var myStage:Stage;
	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}
	
	//This starts the mixing mini game as well as gets which puzzle is requested from the MainGame stage.
	public static function start(namePuzzle:String) 
	{
		ImageManager.addImage("img/shackUI/MixingBackground.png", 0, 0, 1, 1);
		setPuzzle(namePuzzle);
	}
	
	//sets the name of the puzzle and gets it from Gamemanager
	public static function setPuzzle(puzzleName:String)
	{
		var puzzleID = puzzleName;
		GameManager.getPuzzle(puzzleID);
		
		if (puzzleID == "Mixing1")
		{
			UIButton.nextButton(360, 900);
		}
	}
	
}