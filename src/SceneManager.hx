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
		StageLeaderboard.setup(myStage);
		StageLeaderboard.start();
	}
	
	
	//This function switches you to the Main Menu Stage
	public static function switchToStageMainMenu()
	{
		StageMainMenu.setup(myStage);
		StageMainMenu.start();
	}
	
	//This function switches you to the Character Creation Stage
	public static function switchToStageCharacterCreation()
	{
		StageCharacterCreation.setup(myStage);
		StageCharacterCreation.start();
	}
	
	//This function switches you to the mixing mini game
	public static function switchToStageMixing()
	{
		StageMixing.setup(myStage);
		StageMixing.start();
	}
		
	public static function switchToStageMainGame()
	{
		StageMainGame.setup(myStage);
		StageMainGame.start();
	}
}