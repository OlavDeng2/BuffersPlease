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



	
	//var drawerCloseData:BitmapData = Assets.getBitmapData("shackUI/CupboardClosed.png");
	//var drawerClose:Bitmap = new Bitmap(drawerCloseData);
	
	
	
	
	
	
	
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
		
		addShackBack();
		
		addClient();
		addDesk();
		addDrawerClosed();
		addMeter();
		addChemguide();
		addNotepad();
		addScreenBox();
		addBeaker();
		addBell();
		
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
	
	static function addBell()
	{
		var bellData:BitmapData = Assets.getBitmapData("img/shackUI/Bell.png");
		var bell:Bitmap = new Bitmap(bellData);
		myStage.addChild(bell);
	}
	
	static function addChemguide()
	{
		var chemGuideData:BitmapData = Assets.getBitmapData("img/shackUI/Chemguide.png");
		var chemGuide:Bitmap = new Bitmap(chemGuideData);
		myStage.addChild(chemGuide);
	}
	
	static function addClient()
	{
		var clientData:BitmapData = Assets.getBitmapData("shackUI/Client.png");
		var client:Bitmap = new Bitmap(clientData);
		myStage.addChild(client);
	}
	
	static function addDrawerClosed()
	{
		var drawerCloseData:BitmapData = Assets.getBitmapData("shackUI/CupboardClosed.png");
		var drawerClose:Bitmap = new Bitmap(drawerCloseData);
		myStage.addChild(drawerClose);
	}
	
	static function addDrawerOpened()
	{
		var drawerOpenData:BitmapData = Assets.getBitmapData("shackUI/CupboardOpened.png");
		var drawerOpen:Bitmap = new Bitmap(drawerOpenData);
		myStage.addChild(drawerOpen);
	}
	
	static function addDesk()
	{
		var deskData:BitmapData = Assets.getBitmapData("shackUI/Desk.png");
		var desk:Bitmap = new Bitmap(deskData);
		myStage.addChild(desk);
	}
	
	static function addMeter()
	{
		var meterData:BitmapData = Assets.getBitmapData("shackUI/Meter.png");
		var meter:Bitmap = new Bitmap(meterData);
		myStage.addChild(meter);
	}
	
	static function addNotepad()
	{
		var notepadData:BitmapData = Assets.getBitmapData("shackUI/Notepad.png");
		var notepad:Bitmap = new Bitmap(notepadData);
		myStage.addChild(notepad);
	}
	
	static function addScreenBox()
	{
		var screenData:BitmapData = Assets.getBitmapData("shackUI/Screen.png");
		var screen:Bitmap = new Bitmap(screenData);
		myStage.addChild(screen);
	}
}