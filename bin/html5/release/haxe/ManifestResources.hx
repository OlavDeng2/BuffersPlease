package;


import lime.app.Config;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {
	
	
	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	
	
	public static function init (config:Config):Void {
		
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
		var rootPath = null;
		
		if (config != null && Reflect.hasField (config, "assetsPrefix")) {
			
			rootPath = Reflect.field (config, "assetsPrefix");
			
		}
		
		if (rootPath == null) {
			
			#if (ios || tvos)
			rootPath = "assets/";
			#elseif (windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end
			
		}
		
		Assets.defaultRootPath = rootPath;
		
		#if (openfl && !flash)
		
		#end
		
		var data, manifest, library;
		
		data = '{"name":null,"assets":"aoy4:pathy33:img%2FBackgrounds%2FMain_Menu.pngy4:sizei17945y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y26:img%2FButtons%2FBeaker.pngR2i926R3R4R5R7R6tgoR0y24:img%2FButtons%2FBell.pngR2i1087R3R4R5R8R6tgoR0y30:img%2FButtons%2FChem_Guide.pngR2i1700R3R4R5R9R6tgoR0y35:img%2FButtons%2FCupboard_Closed.pngR2i2605R3R4R5R10R6tgoR0y33:img%2FButtons%2FCupboard_Open.pngR2i2626R3R4R5R11R6tgoR0y24:img%2FButtons%2FExit.pngR2i1858R3R4R5R12R6tgoR0y31:img%2FButtons%2FLeaderboard.pngR2i1266R3R4R5R13R6tgoR0y24:img%2FButtons%2FMenu.pngR2i1889R3R4R5R14R6tgoR0y31:img%2FButtons%2FMusic%20Off.pngR2i1996R3R4R5R15R6tgoR0y30:img%2FButtons%2FMusic%20On.pngR2i1993R3R4R5R16R6tgoR0y27:img%2FButtons%2FNotepad.pngR2i1006R3R4R5R17R6tgoR0y24:img%2FButtons%2FPlay.pngR2i1894R3R4R5R18R6tgoR0y24:img%2FButtons%2FQuit.pngR2i7431R3R4R5R19R6tgoR0y28:img%2FButtons%2FTutorial.pngR2i1888R3R4R5R20R6tgoR0y23:img%2FChemicals%2FC.pngR2i20532R3R4R5R21R6tgoR0y23:img%2FChemicals%2FH.pngR2i20490R3R4R5R22R6tgoR0y23:img%2FChemicals%2FN.pngR2i20618R3R4R5R23R6tgoR0y24:img%2FChemicals%2FNa.pngR2i20764R3R4R5R24R6tgoR0y23:img%2FChemicals%2FO.pngR2i20516R3R4R5R25R6tgoR0y35:img%2FPlayer%20Interface%2FMenu.pngR2i21471R3R4R5R26R6tgoR0y30:img%2FshackUI%2FBackground.pngR2i5506R3R4R5R27R6tgoR0y26:img%2FshackUI%2FBeaker.pngR2i6922R3R4R5R28R6tgoR0y24:img%2FshackUI%2FBell.pngR2i7242R3R4R5R29R6tgoR0y29:img%2FshackUI%2FChemguide.pngR2i7531R3R4R5R30R6tgoR0y26:img%2FshackUI%2FClient.pngR2i6832R3R4R5R31R6tgoR0y34:img%2FshackUI%2FCupboardClosed.pngR2i6934R3R4R5R32R6tgoR0y34:img%2FshackUI%2FCupboardOpened.pngR2i6996R3R4R5R33R6tgoR0y24:img%2FshackUI%2FDesk.pngR2i6523R3R4R5R34R6tgoR0y25:img%2FshackUI%2FMeter.pngR2i7029R3R4R5R35R6tgoR0y27:img%2FshackUI%2FNotepad.pngR2i7169R3R4R5R36R6tgoR0y26:img%2FshackUI%2FScreen.pngR2i6670R3R4R5R37R6tgh","version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		
		
		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__img_backgrounds_main_menu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_beaker_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_bell_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_chem_guide_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_cupboard_closed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_cupboard_open_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_exit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_leaderboard_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_menu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_music_off_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_music_on_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_notepad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_play_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_quit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_buttons_tutorial_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_chemicals_c_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_chemicals_h_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_chemicals_n_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_chemicals_na_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_chemicals_o_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_player_interface_menu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_background_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_beaker_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_bell_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_chemguide_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_client_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_cupboardclosed_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_cupboardopened_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_desk_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_meter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_notepad_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__img_shackui_screen_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:image("assets/img/Backgrounds/Main_Menu.png") #if display private #end class __ASSET__img_backgrounds_main_menu_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Beaker.png") #if display private #end class __ASSET__img_buttons_beaker_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Bell.png") #if display private #end class __ASSET__img_buttons_bell_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Chem_Guide.png") #if display private #end class __ASSET__img_buttons_chem_guide_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Cupboard_Closed.png") #if display private #end class __ASSET__img_buttons_cupboard_closed_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Cupboard_Open.png") #if display private #end class __ASSET__img_buttons_cupboard_open_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Exit.png") #if display private #end class __ASSET__img_buttons_exit_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Leaderboard.png") #if display private #end class __ASSET__img_buttons_leaderboard_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Menu.png") #if display private #end class __ASSET__img_buttons_menu_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Music Off.png") #if display private #end class __ASSET__img_buttons_music_off_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Music On.png") #if display private #end class __ASSET__img_buttons_music_on_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Notepad.png") #if display private #end class __ASSET__img_buttons_notepad_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Play.png") #if display private #end class __ASSET__img_buttons_play_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Quit.png") #if display private #end class __ASSET__img_buttons_quit_png extends lime.graphics.Image {}
@:image("assets/img/Buttons/Tutorial.png") #if display private #end class __ASSET__img_buttons_tutorial_png extends lime.graphics.Image {}
@:image("assets/img/Chemicals/C.png") #if display private #end class __ASSET__img_chemicals_c_png extends lime.graphics.Image {}
@:image("assets/img/Chemicals/H.png") #if display private #end class __ASSET__img_chemicals_h_png extends lime.graphics.Image {}
@:image("assets/img/Chemicals/N.png") #if display private #end class __ASSET__img_chemicals_n_png extends lime.graphics.Image {}
@:image("assets/img/Chemicals/Na.png") #if display private #end class __ASSET__img_chemicals_na_png extends lime.graphics.Image {}
@:image("assets/img/Chemicals/O.png") #if display private #end class __ASSET__img_chemicals_o_png extends lime.graphics.Image {}
@:image("assets/img/Player Interface/Menu.png") #if display private #end class __ASSET__img_player_interface_menu_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/Background.png") #if display private #end class __ASSET__img_shackui_background_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/Beaker.png") #if display private #end class __ASSET__img_shackui_beaker_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/Bell.png") #if display private #end class __ASSET__img_shackui_bell_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/Chemguide.png") #if display private #end class __ASSET__img_shackui_chemguide_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/Client.png") #if display private #end class __ASSET__img_shackui_client_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/CupboardClosed.png") #if display private #end class __ASSET__img_shackui_cupboardclosed_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/CupboardOpened.png") #if display private #end class __ASSET__img_shackui_cupboardopened_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/Desk.png") #if display private #end class __ASSET__img_shackui_desk_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/Meter.png") #if display private #end class __ASSET__img_shackui_meter_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/Notepad.png") #if display private #end class __ASSET__img_shackui_notepad_png extends lime.graphics.Image {}
@:image("assets/img/shackUI/Screen.png") #if display private #end class __ASSET__img_shackui_screen_png extends lime.graphics.Image {}
@:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)



#end
#end