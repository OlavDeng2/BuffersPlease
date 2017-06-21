package;

import openfl.display.Stage;
//import openfl.system.System;
/**
 * ...
 * @author Olav
 */

 //The Scenemanager is what handles the different stages, if you press a button to switch a stage(like the play game button), or if you trigger an event which warrants a stage switch, the SceneManager will take care of it.
class SceneManager 
{

			
	//Declare some necesarry variables to ensure the correct functioning of the SceneManager
	private static var myStage:Stage;
	
	//set myStage which, alongside the variable above, is required to ensure the smooth operation of the scene manager.
	public static function setMyStage(stageref:Stage)
	{
		myStage = stageref;

	}
	
	public static function getMyStage()
	{
		return(myStage);
	}
	
	
	//As you might imagine from the name, this function switches you to the Leaderboard Stage
	public static function switchToStageLeaderboard() 
	{
		myStage.removeChildren();

		StageLeaderboard.setup(myStage);
		StageLeaderboard.start();
	}
	
	
	//This function switches you to the Main Menu Stage
	public static function switchToStageMainMenu()
	{
		myStage.removeChildren();
		StageMainMenu.setup(myStage);
		StageMainMenu.start();
	}
	
	//This function switches you to the Character Creation Stage
	public static function switchToStageCharacterCreation()
	{
		myStage.removeChildren();
		StageCharacterCreation.setup(myStage);
		StageCharacterCreation.start();
	}
	
	//This function switches you to the mixing mini game
	public static function switchToStageMixing()
	{
		Sys.println("Normal Mixing");
		
		myStage.removeChildren();
		StageMixing.setup(myStage);
		StageMixing.start("Mixing1");
		
		//checks if music needs to be changed
		SoundManager.checkGameMusic("mixing");
	}
	
	//This function switches you to the tutorial of the mixing mini game
	public static function switchToStageTutorialMixing()
	{
		Sys.println("Tutorial Mixing");
		
		myStage.removeChildren();
		StageMixing.setup(myStage);
		StageMixing.start("Mixing1");
		
		//checks if music needs to be changed
		SoundManager.checkGameMusic("mixing");
	}
		
	//function to switch to the main game from any other scene.
	public static function switchToStageMainGame()
	{
		myStage.removeChildren();
		StageMainGame.setup(myStage);
		StageMainGame.start();
		
		//checks if music needs to be cahnged
		SoundManager.checkGameMusic("normalGame");
	}
	
	//This function switches you to the tutorial Stage
	public static function switchToStageTutorial()
	{
		myStage.removeChildren();
		StageTutorial.setup(myStage);
		StageTutorial.start();
	}
}