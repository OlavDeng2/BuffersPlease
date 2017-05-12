package;


import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.display.Stage;
import openfl.system.System;


/**
 * ...
 * @author Olav
 */
class UIButton extends Sprite
{
	public function new(myStage:Stage)
	{
		super(); 
		//Get the data for the image to render
		var exitButtonImageData = Assets.getBitmapData('img/UIElements/ExitButton.png');
		var exitButtonImage = new Bitmap(exitButtonImageData);
		
		//set the transformation point of the image at its center
		exitButtonImage.x = -exitButtonImage.width / 2;
		exitButtonImage.y = -exitButtonImage.height / 2;
		
		//add the image
		addChild(exitButtonImage);
			
		//event listener so that clicking stuff actually works
		addEventListener(MouseEvent.CLICK, exitButtonPress);
	}
	
	function exitButtonPress(event:MouseEvent)
	{

	}
	
}