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

	public static function start() 
	{
		UIButton.mainMenuButton(360, 360);
		UIButton.exitButton(360, 1000);
	}
		
}