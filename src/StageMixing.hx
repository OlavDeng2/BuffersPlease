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
		//UIButton.mainMenuButton(360, 360);
		UIButton.nextButton(360, 900);
		addChems();
		ImageManager.addImage("img/shackUI/Meter.png", 400, 400);
		
	}
	
	static function addChems()
	{
		ImageManager.addImage("img/Chemicals/C.png", 100, 40);
		ImageManager.addImage("img/Chemicals/C.png", 100, 200);
		ImageManager.addImage("img/Chemicals/H.png", 220, 120);
		ImageManager.addImage("img/Chemicals/N.png", 340, 40);
		ImageManager.addImage("img/Chemicals/N.png", 340, 200);
		ImageManager.addImage("img/Chemicals/Na.png", 100, 400);
		ImageManager.addImage("img/Chemicals/Na.png", 100, 540);
		ImageManager.addImage("img/Chemicals/C.png", 220, 470);
		ImageManager.addImage("img/Chemicals/O.png", 340, 400);
		ImageManager.addImage("img/Chemicals/O.png", 340, 540);
		
	}
}