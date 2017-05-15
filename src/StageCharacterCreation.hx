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
class StageCharacterCreation extends Sprite
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
		
		addBackground();
		SceneManager.setMyStage(myStage);

		UIButton.exitButton(myStage, 50, 50);
		UIButton.nextButton(myStage, 300, 300);
	}
	
	
	static function addBackground()
	{
		var backgroundImageData = Assets.getBitmapData('img/Backgrounds/Main_Menu.png');
		var backgroundImage = new Bitmap(backgroundImageData);
		
		myStage.addChild(backgroundImage);
	}
	
}