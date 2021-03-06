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
	
	//public variabls for closing buttons
	public static var pressableChemGuideButton:Button;
	public static var pressableNotepadButton:Button;
	public static var pressableNextButton:Button;
	public static var chemGuideButtonPressed:Bool = false;
	public static var notepadButtonPressed:Bool = false;
	
	//This function gets the current stage from the scene manager and sets it in this class so that all the buttons have the correct stage they are working with
	private static function setMyStage()
	{
		myStage = SceneManager.getMyStage();
	}
	
	//Exit Button Function
	public static function exitButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		var pressableExitButton:Button = new Button("Quit");
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
		
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
		
		//Exit the game
		System.exit(0);
	}
	
	
	//Start Button Function
	public static function startButton(xPos:Int, yPos:Int)
	{
		setMyStage();

		var pressableStartButton:Button = new Button("Play");
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
		SceneManager.switchToStageCharacterCreation();
		
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
	}
	
	
	//Next Button on the Character Creation Stage
	public static function nextButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		pressableNextButton = new Button( "Play");
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
		SceneManager.switchToStageMainGame();
		
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
	}
	
	
	//Leaderboard Button Function
	public static function leaderboardButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		var pressableLeaderboardButton:Button = new Button("Leaderboard");
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
		SceneManager.switchToStageLeaderboard();
		
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
	}
	
	//Music Off button
	public static function musicOffButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableMusicOffButton:Button = new Button("Music On");
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
				
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
		
		SoundManager.toggleMusic();
		
		UIButton.musicOnButton(600, 900);
		myStage.removeChild(pressableMusicOffButton);
	}
	
	
	//Music On Button
	public static function musicOnButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		var pressableMusicOnButton:Button = new Button("Music Off");
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
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
		
		SoundManager.toggleMusic();
		
		UIButton.musicOffButton(600, 900);
		myStage.removeChild(pressableMusicOnButton);
	}
	
	//Mixing Minigame Button(bell)
	public static function mixingButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableMixingButton:Button = new Button("Beaker");
		
		pressableMixingButton.y = yPos;
		pressableMixingButton.x = xPos;
		
		myStage.addChild(pressableMixingButton);
		
		pressableMixingButton.addEventListener(MouseEvent.CLICK, mixingButtonPress);
	}
	
	private static function mixingButtonPress(event:MouseEvent)
	{
		var pressablemixingButton:Button = cast(event.target);
		//removes all children so that nothing is remaining of the previous stage.
		SceneManager.switchToStageMixing();
		
		//Play sound effect
		SoundManager.playSFX("Flasks");
	}
	
	//Buffer ready button
	public static function bufferReadyButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableBufferReadyButton:Button = new Button("Bell");
		
		pressableBufferReadyButton.y = yPos;
		pressableBufferReadyButton.x = xPos;
		
		myStage.addChild(pressableBufferReadyButton);
		
		pressableBufferReadyButton.addEventListener(MouseEvent.CLICK, bufferReadyButtonPress);
	}
	
	private static function bufferReadyButtonPress(event:MouseEvent)
	{
		var pressableBufferReadyButton:Button = cast(event.target);
		Sys.println("buffer is finished");
		
		//Play sound effect
		SoundManager.playSFX("Bell");
	}
	
	//Main Menu Button
	public static function mainMenuButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableMainMenuButton:Button = new Button("Menu");
		
		pressableMainMenuButton.y = yPos;
		pressableMainMenuButton.x = xPos;
		
		myStage.addChild(pressableMainMenuButton);
		
		pressableMainMenuButton.addEventListener(MouseEvent.CLICK, mainMenuButtonPress);
	}
	
	private static function mainMenuButtonPress(event:MouseEvent)
	{
		var pressableMainMenuButton:Button = cast(event.target);
		//removes all children so that nothing is remaining of the previous stage.
		SceneManager.switchToStageMainMenu();
		
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
	}
	
	//The notepad
	public static function notepadButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		pressableNotepadButton = new Button("Notepad");
		
		pressableNotepadButton.y = yPos;
		pressableNotepadButton.x = xPos;
		
		myStage.addChild(pressableNotepadButton);
		
		pressableNotepadButton.addEventListener(MouseEvent.CLICK, notepadButtonPress);
	}
	
	private static function notepadButtonPress(event:MouseEvent)
	{
		var pressableNotepadButton:Button = cast(event.target);
		Sys.println("notepad now opens");
		
		if (notepadButtonPressed == false)
		{
			ImageManager.addImage('img/shackUI/NotepadOpen.png', 75, 75, 0.75, 0.75);
			
			closeNotepadButton(80,80);
			//closeNotepadButton((pressableNotepadButton.x + pressableNotepadButton.width / 2), (pressableNotepadButton.y + pressableNotepadButton.height / 2));
			
			notepadButtonPressed = true;
		}

		//Play sound effect
		SoundManager.playSFX("Book");
	}
	
	// Close notepad button
	public static function closeNotepadButton(xPos:Float, yPos:Float)
	{
		setMyStage();
		
		var pressableCloseNotepadButton:Button = new Button("Close");
		
		pressableCloseNotepadButton.y = yPos;
		pressableCloseNotepadButton.x = xPos;
		
		myStage.addChild(pressableCloseNotepadButton);
		
		pressableCloseNotepadButton.addEventListener(MouseEvent.CLICK, closeNotepadButtonPress);
	}
	
	private static function closeNotepadButtonPress(event:MouseEvent)
	{
		var pressableCloseNotepadButton:Button = cast(event.target);
		Sys.println("closing object");
		
		notepadButtonPressed = false;
		
		myStage.removeChild(pressableCloseNotepadButton);
		ImageManager.removeImage();
	}
	
	//Chem Guide button
	public static function chemGuideButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		
		pressableChemGuideButton = new Button("Chem_Guide");
		
		pressableChemGuideButton.y = yPos;
		pressableChemGuideButton.x = xPos;
		
		myStage.addChild(pressableChemGuideButton);
		
		
		pressableChemGuideButton.addEventListener(MouseEvent.CLICK, chemGuideButtonPress);
	}
	
	private static function chemGuideButtonPress(event:MouseEvent)
	{
		var pressableChemGuideButton:Button = cast(event.target);
		Sys.println("The chemguide now opens");
		
		//checks if the chemguide is already pressed so it won't open a second one
		if (chemGuideButtonPressed == false)
		{
			ImageManager.addImage('img/shackUI/ChemGuideOpen.png', 75, 75, 1, 1);
			
			closeChemGuideButton(80,80);
			
			chemGuideButtonPressed = true;
		}
		
		//Play sound effect
		SoundManager.playSFX("Book");
	}
	
	//CloseChemguide button
	public static function closeChemGuideButton(xPos:Float, yPos:Float)
	{
		setMyStage();
		
		var pressableCloseChemGuideButton:Button = new Button("Close");
		
		
		pressableCloseChemGuideButton.y = yPos;
		pressableCloseChemGuideButton.x = xPos;
		
		myStage.addChild(pressableCloseChemGuideButton);
		
		pressableCloseChemGuideButton.addEventListener(MouseEvent.CLICK, closeChemGuideButtonPress);
	}
	
	private static function closeChemGuideButtonPress(event:MouseEvent)
	{
		var pressableCloseChemGuideButton:Button = cast(event.target);
		Sys.println("closing object");
		
		chemGuideButtonPressed = false;
		
		myStage.removeChild(pressableCloseChemGuideButton);
		ImageManager.removeImage();
	}
	
	//opening the cupboard
	public static function cupboardOpenButton(xPos:Float, yPos:Float)
	{
		setMyStage();
		
		var pressableCupboardOpenButton:Button = new Button("Cupboard_Closed");
		
		pressableCupboardOpenButton.y = yPos;
		pressableCupboardOpenButton.x = xPos;
		
		myStage.addChild(pressableCupboardOpenButton);
		
		pressableCupboardOpenButton.addEventListener(MouseEvent.CLICK, cupboardOpenButtonPress);
		
	}
	
	private static function cupboardOpenButtonPress(event:MouseEvent)
	{
		var pressableCupboardOpenButton:Button = cast(event.target);
		Sys.println("the cupboard now opens");
		
		
		cupboardCloseButton(pressableCupboardOpenButton.x, pressableCupboardOpenButton.y);
		myStage.removeChild(pressableCupboardOpenButton);
		
		//Play sound effect
		SoundManager.playSFX("Cupboard");
	}
	
	//Closing the cupboard
	public static function cupboardCloseButton(xPos:Float, yPos:Float)
	{
		setMyStage();
		
		var pressableCupboardCloseButton:Button = new Button("Cupboard_Open");
		
		pressableCupboardCloseButton.y = yPos;
		pressableCupboardCloseButton.x = xPos;
		
		myStage.addChild(pressableCupboardCloseButton);
		
		pressableCupboardCloseButton.addEventListener(MouseEvent.CLICK, cupboardCloseButtonPress);
	}
	
	private static function cupboardCloseButtonPress(event:MouseEvent)
	{
		var pressableCupboardCloseButton:Button = cast(event.target);
		Sys.println("the cupboard now closes");
		
		cupboardOpenButton(pressableCupboardCloseButton.x, pressableCupboardCloseButton.y);
		myStage.removeChild(pressableCupboardCloseButton);
		
		//Play sound effect
		SoundManager.playSFX("Cupboard");
	}
	
	
	
	//Tutorial button functions
	public static function playTutorialButton(xPos:Float, yPos:Float)
	{
		setMyStage();
		
		var pressablePlayTutorialButton:Button = new Button("PlayTutorial");
		
		pressablePlayTutorialButton.y = yPos;
		pressablePlayTutorialButton.x = xPos;
		
		myStage.addChild(pressablePlayTutorialButton);
		
		UIButton.tutorialYesButton((pressablePlayTutorialButton.x + 100),(pressablePlayTutorialButton.y + 100));
		UIButton.tutorialNoButton((pressablePlayTutorialButton.x - 100), (pressablePlayTutorialButton.y + 100));
		
		myStage.removeChild(pressableNextButton);
	}
	
	public static function tutorialYesButton(xPos:Float, yPos:Float)
	{
		setMyStage();
		
		var pressableTutorialYesButton:Button = new Button("TutorialPlay");
		
		
		pressableTutorialYesButton.y = yPos;
		pressableTutorialYesButton.x = xPos;
		
		myStage.addChild(pressableTutorialYesButton);
		
		pressableTutorialYesButton.addEventListener(MouseEvent.CLICK, tutorialYesButtonPress);
	}
	
	private static function tutorialYesButtonPress(event:MouseEvent)
	{
		var pressableTutorialYesButton:Button = cast (event.target);
		//removes all children so that nothing is remaining of the previous stage.
		SceneManager.switchToStageTutorial();
		
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
	}
	
	public static function tutorialNoButton(xPos:Float, yPos:Float)
	{
		setMyStage();
		
		var pressableTutorialNoButton:Button = new Button("Close");
		
		
		pressableTutorialNoButton.y = yPos;
		pressableTutorialNoButton.x = xPos;
		
		myStage.addChild(pressableTutorialNoButton);
		
		pressableTutorialNoButton.addEventListener(MouseEvent.CLICK, tutorialNoButtonPress);
	}
	
	private static function tutorialNoButtonPress(event : MouseEvent)
	{
		
		var pressableTutorialNoButton:Button = cast (event.target);
		//removes all children so that nothing is remaining of the previous stage.
		SceneManager.switchToStageMainGame();
		
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
	}
	
	public static function tutorialNextButton(xPos:Float, yPos:Float)
	{
		setMyStage();
		
		var pressableTutorialNextButton = new Button("TutorialPlay");
		
		pressableTutorialNextButton.y = yPos;
		pressableTutorialNextButton.x = xPos;
		
		myStage.addChild(pressableTutorialNextButton);
		
		pressableTutorialNextButton.addEventListener(MouseEvent.CLICK, tutorialNextButtonPress);
	}
	
	private static function tutorialNextButtonPress(event : MouseEvent)
	{
		var pressableTutorialNextButton:Button = cast(event.target);
		
		//updates the tutorial and the text of the tutorial 
		StageTutorial.updateTutorial();
		
		//Play sound effect
		SoundManager.playSFX("MenuSelect");
	}
	
	//Mixing Minigame tutorial Button
	public static function tutorialMixingButton(xPos:Int, yPos:Int)
	{
		setMyStage();
		var pressableTutorialMixingButton:Button = new Button("Beaker");
		
		pressableTutorialMixingButton.y = yPos;
		pressableTutorialMixingButton.x = xPos;
		
		myStage.addChild(pressableTutorialMixingButton);
		
		pressableTutorialMixingButton.addEventListener(MouseEvent.CLICK, tutorialMixingButtonPress);
	}
	
	private static function tutorialMixingButtonPress(event:MouseEvent)
	{
		var pressableTutorialMixingButton:Button = cast(event.target);
		
		//updates the tutorial and the text of the tutorial
		StageTutorial.updateTutorial();
		
		//Play sound effect
		SoundManager.playSFX("Flasks");
		
		myStage.removeChild(pressableTutorialMixingButton);
	}
}