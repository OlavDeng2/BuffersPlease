package;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.display.Stage;

import openfl.text.TextField;
import openfl.text.TextFieldType;
import openfl.text.TextFieldAutoSize;
import openfl.text.Font;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;

/**
 * ...
 * @author nico
 */
class StageTutorial extends Sprite
{
	
	
	//Declare some necesarry variables
	private static var myStage:Stage;
	private static var tutorialNumber:Int = 0;
	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}
	
	
	public static function start() 
	{
		SceneManager.setMyStage(myStage);
		Sys.println("Tutorial");
		
		addShack();
		UIButton.mixingButton(85, 460);
		UIButton.bufferReadyButton(600, 750);
		UIButton.chemGuideButton(595, 505);
		UIButton.cupboardOpenButton(360, 1065);
		UIButton.notepadButton(120, 720);
		
	}
	static function addShack()
	{
		ImageManager.addImage("img/shackUI/Background.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/Client.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/CupboardClosed.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/Screen.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/Desk.png",0,0,1,1);
		ImageManager.addImage("img/shackUI/Meter.png", 0, 0,1,1);
	}
	
	
	static function addShackBack()
	{
		var shackBackData:BitmapData = Assets.getBitmapData("img/shackUI/Background.png");
		var shackBack:Bitmap = new Bitmap(shackBackData);
		myStage.addChild(shackBack);
	}
	
	static function addBeaker()
	{
		var beakerData:BitmapData = Assets.getBitmapData("img/shackUI/Beaker.png");
		var beaker:Bitmap = new Bitmap(beakerData);
		myStage.addChild(beaker);
	}
	
	static function addChemguide()
	{
		var chemGuideData:BitmapData = Assets.getBitmapData("img/shackUI/Chemguide.png");
		var chemGuide:Bitmap = new Bitmap(chemGuideData);
		myStage.addChild(chemGuide);
	}
	
	static function addClient()
	{
		var clientData:BitmapData = Assets.getBitmapData("img/shackUI/Client.png");
		var client:Bitmap = new Bitmap(clientData);
		myStage.addChild(client);
	}
	
	static function addDrawerClosed()
	{
		var drawerCloseData:BitmapData = Assets.getBitmapData("img/shackUI/CupboardClosed.png");
		var drawerClose:Bitmap = new Bitmap(drawerCloseData);
		myStage.addChild(drawerClose);
	}
	
	static function addDrawerOpened()
	{
		var drawerOpenData:BitmapData = Assets.getBitmapData("img/shackUI/CupboardOpened.png");
		var drawerOpen:Bitmap = new Bitmap(drawerOpenData);
		myStage.addChild(drawerOpen);
	}
	
	static function addDesk()
	{
		var deskData:BitmapData = Assets.getBitmapData("img/shackUI/Desk.png");
		var desk:Bitmap = new Bitmap(deskData);
		myStage.addChild(desk);
	}
	
	static function addMeter()
	{
		var meterData:BitmapData = Assets.getBitmapData("img/shackUI/Meter.png");
		var meter:Bitmap = new Bitmap(meterData);
		myStage.addChild(meter);
	}
	
	static function addNotepad()
	{
		var notepadData:BitmapData = Assets.getBitmapData("img/shackUI/Notepad.png");
		var notepad:Bitmap = new Bitmap(notepadData);
		myStage.addChild(notepad);
	}
	
	static function addScreenBox()
	{
		var screenData:BitmapData = Assets.getBitmapData("img/shackUI/Screen.png");
		var screen:Bitmap = new Bitmap(screenData);
		myStage.addChild(screen);
	}
}