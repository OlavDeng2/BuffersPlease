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
class UIExitButton extends UIButton
{

	public static function ExitButton(myStage:Stage)
	{
		var exitButton:UIButton = new UIButton(myStage);
		//set position
		exitButton.y = 300;
		exitButton.x =300;
		
		//add button to sprite
		myStage.addChild(exitButton);
		
		//add event listener
		exitButton.addEventListener(MouseEvent.CLICK, ExitButtonPress);
	}
	
	private static function ExitButtonPress(event : MouseEvent)
	{
		var exitButton:UIButton = cast (event.target);
		//Exit the game
		System.exit(0);
	}
	
}