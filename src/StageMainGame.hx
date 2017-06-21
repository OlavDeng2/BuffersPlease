package;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.display.Stage;


/**
 * ...
 * @author Olav
 */
class StageMainGame extends Sprite
{
	//add variables here if needed
		
	//do the necesarry setups
		
	//Declare some necesarry variables
	private static var myStage:Stage;
	//var menuBackData:BitmapData= Assets.getBitmapData("
	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}
	
	
	public static function start() 
	{
		SceneManager.setMyStage(myStage);		
		addShack();
		UIButton.bufferReadyButton(600, 750);
		UIButton.mixingButton(85, 460);
		UIButton.chemGuideButton(595, 505);
		UIButton.cupboardOpenButton(360, 1065);
		UIButton.notepadButton(120, 720);
		
		//mainmenu button removed if needed add here*
	}
	
	static function addShack()
	{
		ImageManager.addImage("img/shackUI/Background.png", 0, 0, 1, 1);
		ImageManager.addImage('img/shackUI/Noon.png', 0, 0, 1, 1);
		ImageManager.addImage("img/shackUI/Client.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/CupboardClosed.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/Screen.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/Desk.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/Meter.png", 0, 0,1,1);
	}
}