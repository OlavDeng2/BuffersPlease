package;

import openfl.display.Sprite;
import openfl.Lib;

/**
 * ...
 * @author Olav
 */
class Main extends Sprite 
{

	public function new() 
	{
		super();
		
		//SoundManager.start();
		StageMainMenu.setup(stage);
		StageMainMenu.start();
		// Assets:
		// openfl.Assets.getBitmapData("img/assetname.jpg");
	}

}
