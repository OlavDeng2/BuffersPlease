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
class Atom extends Sprite
{
	//This is the base class for the different atoms
	public var element:String;

	public function new(_element:String) 
	{
		super();
		
		element = _element;

		//Get the data for the image to render
		var atomImageData = Assets.getBitmapData('img/Chemicals/$element.png');
		var atomImage = new Bitmap(atomImageData);
		
		//Add image
		addChild(atomImage);
		
		//Add event listener
		addEventListener(MouseEvent.CLICK, OnMouseClick);
	}
	
	function OnMouseClick(event:MouseEvent)
	{
		
	}
	
}