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

 //In UIButton you will find all the UI Buttons which you might need available, everything from moving to another stage to the exit button.
class UIButton extends Button
{
	//variable to store the current stage that is being worked with
	private static var myStage:Stage;
	
	//This function gets the current stage from the scene manager and sets it in this class so that all the buttons have the correct stage they are working with
	private static function setMyStage()
	{
		myStage = SceneManager.getMyStage();

	}
	
	//Exit Button Function
	public static function exitButton(xPos:Int, yPos:Int)
	{
		
		setMyStage();
		
		
		var pressableExitButton:Button = new Button(myStage, "Quit");
		//set position
		pressableExitButton.y = yPos;
		pressableExitButton.x = xPos;
		
		//add button to sprite
		myStage.addChild(pressableExitButton);
		
		//add event listener
		pressableExitButton.addEventListener(MouseEvent.CLICK, exitButtonPress);
	}
	
	private static function exitButtonPress(event : MouseEvent)
	{
		var pressableExitButton:Button = cast (event.target);
		//Exit the game
		System.exit(0);
	}
	
	
	
	//Start Button Function
	public static function startButton(xPos:Int, yPos:Int)
	{
		setMyStage();

		var pressableStartButton:Button = new Button(myStage, "Play");
		//set position
		pressableStartButton.y = yPos;
		pressableStartButton.x = xPos;
		
		//add button to sprite
		myStage.addChild(pressableStartButton);
		
		//add event listener
		pressableStartButton.addEventListener(MouseEvent.CLICK, startButtonPress);
	}
	
	private static function startButtonPress(event : MouseEvent)
	{
		
		var pressableStartButton:Button = cast (event.target);
		//removes all children so that nothing is remaining of the previous stage.
		myStage.removeChildren();
		SceneManager.switchToStageCharacterCreation();
	}
	
	
	//Next Button on the Character Creation Stage
	public static function nextButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableNextButton:Button = new Button(myStage, "Play");
		//set position
		pressableNextButton.y = yPos;
		pressableNextButton.x = xPos;
		
		//add button to sprite
		myStage.addChild(pressableNextButton);
		
		//add event listener
		pressableNextButton.addEventListener(MouseEvent.CLICK, nextButtonPress);
	}
	
	private static function nextButtonPress(event : MouseEvent)
	{
		var pressableNextButton:Button = cast (event.target);
		//removes all children so that nothing is remaining of the previous stage.
		myStage.removeChildren();
		SceneManager.switchToStageMainGame();
	}
	
	
	//Leaderboard Button Function
	public static function leaderboardButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		var pressableLeaderboardButton:Button = new Button(myStage, "Leaderboard");
		//set position
		pressableLeaderboardButton.y = yPos;
		pressableLeaderboardButton.x = xPos;
		
		//add button to sprite
		myStage.addChild(pressableLeaderboardButton);
		
		//add event listener
		pressableLeaderboardButton.addEventListener(MouseEvent.CLICK, leaderboardButtonPress);
	}
	
	private static function leaderboardButtonPress(event:MouseEvent)
	{
		var pressableLeaderboardButton:Button = cast(event.target);
		//removes all children so that nothing is remaining of the previous stage.
		myStage.removeChildren();
		SceneManager.switchToStageLeaderboard();
	}
	
	//Music Off button
	public static function musicOffButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableMusicOffButton:Button = new Button(myStage, "Music Off");
		//set position
		pressableMusicOffButton.y = yPos;
		pressableMusicOffButton.x = xPos;
		
		//add button to sprite
		myStage.addChild(pressableMusicOffButton);
		
		//add event listener
		pressableMusicOffButton.addEventListener(MouseEvent.CLICK, musicOffButtonPress);
	}
	
	private static function musicOffButtonPress(event:MouseEvent)
	{
		var pressableMusicOffButton:Button = cast(event.target);
		
		Sys.println("Music is now turned off");
	}
	
	
	//Music On Button
	public static function musicOnButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		var pressableMusicOnButton:Button = new Button(myStage, "Music On");
		//set position
		pressableMusicOnButton.y = yPos;
		pressableMusicOnButton.x = xPos;
		
		//add button to sprite
		myStage.addChild(pressableMusicOnButton);
		
		//add event listener
		pressableMusicOnButton.addEventListener(MouseEvent.CLICK, musicOnButtonPress);
	}
	
	private static function musicOnButtonPress(event:MouseEvent)
	{
		var pressableMusicOnButton:Button = cast(event.target);
		
		Sys.println("Music is now turned on");
	}
	
	//Mixing Minigame Button(bell)
	public static function mixingButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableMixingButton:Button = new Button(myStage, "Beaker");
		
		pressableMixingButton.y = yPos;
		pressableMixingButton.x = xPos;
		
		myStage.addChild(pressableMixingButton);
		
		pressableMixingButton.addEventListener(MouseEvent.CLICK, mixingButtonPress);
	}
	
	private static function mixingButtonPress(event:MouseEvent)
	{
		var pressablemixingButton:Button = cast(event.target);
		//removes all children so that nothing is remaining of the previous stage.
		myStage.removeChildren();
		SceneManager.switchToStageMixing();
	}
	
	//Buffer ready button
	public static function bufferReadyButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableBufferReadyButton:Button = new Button(myStage, "Bell");
		
		pressableBufferReadyButton.y = yPos;
		pressableBufferReadyButton.x = xPos;
		
		myStage.addChild(pressableBufferReadyButton);
		
		pressableBufferReadyButton.addEventListener(MouseEvent.CLICK, bufferReadyButtonPress);
	}
	
	private static function bufferReadyButtonPress(event:MouseEvent)
	{
		var pressableBufferReadyButton:Button = cast(event.target);
		Sys.println("buffer is finished");
	}
	
	//Main Menu Button
	public static function mainMenuButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableMainMenuButton:Button = new Button(myStage, "Menu");
		
		pressableMainMenuButton.y = yPos;
		pressableMainMenuButton.x = xPos;
		
		myStage.addChild(pressableMainMenuButton);
		
		pressableMainMenuButton.addEventListener(MouseEvent.CLICK, mainMenuButtonPress);
	}
	
	private static function mainMenuButtonPress(event:MouseEvent)
	{
		var pressableMainMenuButton:Button = cast(event.target);
		//removes all children so that nothing is remaining of the previous stage.
		myStage.removeChildren();
		SceneManager.switchToStageMainMenu();
	}
	
	//The notepad
	public static function notepadButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableNotepadButton:Button = new Button(myStage, "Notepad");
		
		pressableNotepadButton.y = yPos;
		pressableNotepadButton.x = xPos;
		
		myStage.addChild(pressableNotepadButton);
		
		pressableNotepadButton.addEventListener(MouseEvent.CLICK, notepadButtonPress);
		
	}
	
	private static function notepadButtonPress(event:MouseEvent)
	{
		var pressableNotepadButton:Button = cast(event.target);
		Sys.println("notepad now opens");
	}
	
	//Chem Guide button
	public static function chemGuideButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		var pressableChemGuideButton:Button = new Button(myStage, "Chem_Guide");
		
		pressableChemGuideButton.y = yPos;
		pressableChemGuideButton.x = xPos;
		
		myStage.addChild(pressableChemGuideButton);
		
		pressableChemGuideButton.addEventListener(MouseEvent.CLICK, chemGuideButtonPress);
	}
	
	private static function chemGuideButtonPress(event:MouseEvent)
	{
		var pressableChemGuideButton:Button = cast(event.target);
		Sys.println("The chemguide now opens");
		
	}
	
	//opening the cupboard
	public static function cupboardOpenButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		var pressableCupboardOpenButton:Button = new Button(myStage, "Cupboard_Closed");
		
		pressableCupboardOpenButton.y = yPos;
		pressableCupboardOpenButton.x = xPos;
		
		myStage.addChild(pressableCupboardOpenButton);
		
		pressableCupboardOpenButton.addEventListener(MouseEvent.CLICK, cupboardOpenButtonPress);
		
	}
	
	private static function cupboardOpenButtonPress(event:MouseEvent)
	{
		var pressableCupboardOpenButton:Button = cast(event.target);
		Sys.println("the cupboard now opens");
		
	}
	
	//Closing the cupboard
	public static function cupboardCloseButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		var pressableCupboardClosedButton:Button = new Button(myStage, "Cupboard_Open");
		
		pressableCupboardClosedButton.y = yPos;
		pressableCupboardClosedButton.x = xPos;
		
		myStage.addChild(pressableCupboardClosedButton);
		
		pressableCupboardClosedButton.addEventListener(MouseEvent.CLICK, cupboardCloseButtonPress);
	}
	
	private static function cupboardCloseButtonPress(event:MouseEvent)
	{
		var pressableCupboardClosedButton:Button = cast(event.target);
		Sys.println("the cupboard now closes");
		
	}
	
}