package;

//Import some shit
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Stage;
import openfl.text.TextField;
import openfl.text.TextFieldType;
import openfl.text.TextFieldAutoSize;
import openfl.text.Font;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
/**
 * ...
 * @author Olav
 */
class StageCharacterCreation extends Sprite
{

		
	//Declare some necesarry variables
	private static var myStage:Stage;
	
	//do the necesarry setups
	public static function setup(stageref:Stage)
	{
		myStage = stageref;
	}

	public static function start() 
	{
		
		addBackground();
		SceneManager.setMyStage(myStage);
		
		UIButton.nextButton(600, 900);
		inputCharacterName();
	}
	
	
	static function addBackground()
	{
		ImageManager.addImage('img/Player Interface/Menu.png', 0, 0);
	}
	
	//this function handles the creation of the character name
	static function inputCharacterName()
	{
		var characterNameField:TextField = new TextField();
		var font_size = 20;
		//characterNameField.defaultTextFormat = new TextFormat(Assets.getFont("assets/Fonts/TIMES.TTF").fontName, font_size);
		characterNameField.border = false;
		characterNameField.multiline = false;
		characterNameField.selectable = false;
		characterNameField.text = "Enter your name";
		characterNameField.type = TextFieldType.INPUT;
		characterNameField.autoSize = TextFieldAutoSize.LEFT;
		characterNameField.background = true;
		characterNameField.backgroundColor = 0xababab;
		characterNameField.x = 300;
		characterNameField.y = 100;
		myStage.addChild( characterNameField );
	}
}