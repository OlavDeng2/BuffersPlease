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
	
	//public variables
	public static var Image:Bitmap;
	
	//This function gets the current stage from the scene manager and sets it in this class so that all the buttons have the correct stage they are working with
	private static function setMyStage()
	{
		myStage = SceneManager.getMyStage();

	}
	
	
	public static function addImage(imagePath:String, xPos:Int, yPos:Int, xScale:Float, yScale:Float) //Have to implement the changing of coords
	{
		
		setMyStage();
		
		var imageData = Assets.getBitmapData(imagePath);
		Image = new Bitmap(imageData);
		
		//Uncomment when ready, but for now olav go go bed bed.
		Image.x = xPos;
		Image.y = yPos;
		
		Image.scaleX = xScale;
		Image.scaleY = yScale;
		
		myStage.addChild(Image);
		
	}
	
	
	public static function removeImage()
	{
		myStage.removeChild(Image);
	}
}