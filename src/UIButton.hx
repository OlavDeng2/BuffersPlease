package;


import openfl.display.Sprite;
import openfl.display.BitmapData;
import openfl.display.Bitmap;
import openfl.Assets;
import openfl.events.MouseEvent;
/**
 * ...
 * @author Olav
 */
class UIButton extends Sprite
{

	public function new(buttonName: String) 
	{
		super();
		//Get the data for the image to render
		var startButtonImageData = Assets.getBitmapData('img/UIElements/${buttonName}.png');
		var startButtonImage = new Bitmap(startButtonImageData);
		
		//set the transformation point of the image at its center
		startButtonImage.x = -startButtonImage.width / 2;
		startButtonImage.y = -startButtonImage.height / 2;
		
		//add the image
		addChild(startButtonImage);
		
		//event listener so that clicking stuff actually works
		addEventListener(MouseEvent.CLICK, OnMouseClick);

	}
	
		
	function OnMouseClick(event:MouseEvent)
	{
		
	}
	
}