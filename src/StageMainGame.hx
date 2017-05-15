package;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.Assets;

/**
 * ...
 * @author Olav
 */
class StageMainGame 
{
	//Declare some necesarry variables
	var shackBackData:BitmapData = Assets.getBitmapData("shackUI/Background.png");
	var shackBack:Bitmap = new Bitmap = shackBackData;
	//do the necesarry setups
	
	public function new() 
	{
		
	}
	
	static function addShackBack()
	{
		addChild(shackBack);
	}
}