package;
import openfl.display.Sprite;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.events.MouseEvent;
/**
 * ...
 * @author Olav
 */
class Buttons 
{
	var imageName:String;
	var image:Bitmap;
	
	public function new(_imageName:String) 
	{
		super();
		imageName = _imageName;
		var imageData = Assets.getBitmapData('img/buttons/${imageName}.png');
		var image = new Bitmap(imageData);
		addChild(image);
		
		addEventListener(MouseEvent.CLICK, OnMouseClick);
		addEventListener(MouseEvent.ROLL_OVER, onRoll);
		addEventListener(MouseEvent.ROLL_OUT, onOut);
	}
	
	//adds mouse click functionality to image to create button
	function OnMouseClick(event:MouseEvent)
	{
		
	}
	
	public function onRoll(event: MouseEvent)
	{
		
	}
	
	public function onOut(event: MouseEvent)
	{
		
	}
}