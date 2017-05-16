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
class ImageManager 
{

	
		//variable to store the current stage that is being worked with
	private static var myStage:Stage;
	
	//This function gets the current stage from the scene manager and sets it in this class so that all the buttons have the correct stage they are working with
	private static function setMyStage()
	{
		myStage = SceneManager.getMyStage();

	}
	
	
	public static function addImage(imagePath:String, xPos:Int, yPos:Int) //Have to implement the changing of coords
	{
		
		setMyStage();
		
		var imageData = Assets.getBitmapData(imagePath);
		var Image = new Bitmap(imageData);
		
		//Uncomment when ready, but for now olav go go bed bed.
		Image.x = xPos;
		Image.y = yPos;
		
		
		myStage.addChild(Image);
		
	}
	
}