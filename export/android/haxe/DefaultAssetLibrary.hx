package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if (flash || js)
import openfl.display.Loader;
import openfl.events.Event;
import openfl.net.URLLoader;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl._v2.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
		type.set ("assets/data/data-goes-here.txt", AssetType.TEXT);
		path.set ("assets/music/HaxeFlixel_Tutorial_Game.mp3", "assets/music/HaxeFlixel_Tutorial_Game.mp3");
		type.set ("assets/music/HaxeFlixel_Tutorial_Game.mp3", AssetType.MUSIC);
		path.set ("assets/music/run.ogg", "assets/music/run.ogg");
		type.set ("assets/music/run.ogg", AssetType.MUSIC);
		path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		path.set ("assets/music/run.mp3", "assets/music/run.mp3");
		type.set ("assets/music/run.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/crumble.wav", "assets/sounds/crumble.wav");
		type.set ("assets/sounds/crumble.wav", AssetType.SOUND);
		path.set ("assets/sounds/lose.wav", "assets/sounds/lose.wav");
		type.set ("assets/sounds/lose.wav", AssetType.SOUND);
		path.set ("assets/sounds/hurt.wav", "assets/sounds/hurt.wav");
		type.set ("assets/sounds/hurt.wav", AssetType.SOUND);
		path.set ("assets/sounds/bomb_explode.mp3", "assets/sounds/bomb_explode.mp3");
		type.set ("assets/sounds/bomb_explode.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/bomb_launch.mp3", "assets/sounds/bomb_launch.mp3");
		type.set ("assets/sounds/bomb_launch.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/bomb_hit.mp3", "assets/sounds/bomb_hit.mp3");
		type.set ("assets/sounds/bomb_hit.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/giant_leg.mp3", "assets/sounds/giant_leg.mp3");
		type.set ("assets/sounds/giant_leg.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/obstacle1.mp3", "assets/sounds/obstacle1.mp3");
		type.set ("assets/sounds/obstacle1.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/footc3.mp3", "assets/sounds/footc3.mp3");
		type.set ("assets/sounds/footc3.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/footc2.mp3", "assets/sounds/footc2.mp3");
		type.set ("assets/sounds/footc2.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/bomb_pre.mp3", "assets/sounds/bomb_pre.mp3");
		type.set ("assets/sounds/bomb_pre.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/wall.mp3", "assets/sounds/wall.mp3");
		type.set ("assets/sounds/wall.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/step.wav", "assets/sounds/step.wav");
		type.set ("assets/sounds/step.wav", AssetType.SOUND);
		path.set ("assets/sounds/window1.mp3", "assets/sounds/window1.mp3");
		type.set ("assets/sounds/window1.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/glass1.mp3", "assets/sounds/glass1.mp3");
		type.set ("assets/sounds/glass1.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/flyby.mp3", "assets/sounds/flyby.mp3");
		type.set ("assets/sounds/flyby.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/foot2.wav", "assets/sounds/foot2.wav");
		type.set ("assets/sounds/foot2.wav", AssetType.SOUND);
		path.set ("assets/sounds/obstacle3.mp3", "assets/sounds/obstacle3.mp3");
		type.set ("assets/sounds/obstacle3.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/crumble.mp3", "assets/sounds/crumble.mp3");
		type.set ("assets/sounds/crumble.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/foot2.mp3", "assets/sounds/foot2.mp3");
		type.set ("assets/sounds/foot2.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/coin.wav", "assets/sounds/coin.wav");
		type.set ("assets/sounds/coin.wav", AssetType.SOUND);
		path.set ("assets/sounds/jump1.mp3", "assets/sounds/jump1.mp3");
		type.set ("assets/sounds/jump1.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/foot1.mp3", "assets/sounds/foot1.mp3");
		type.set ("assets/sounds/foot1.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/footc1.mp3", "assets/sounds/footc1.mp3");
		type.set ("assets/sounds/footc1.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/foot4.mp3", "assets/sounds/foot4.mp3");
		type.set ("assets/sounds/foot4.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/giant_leg_release.mp3", "assets/sounds/giant_leg_release.mp3");
		type.set ("assets/sounds/giant_leg_release.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/foot3.mp3", "assets/sounds/foot3.mp3");
		type.set ("assets/sounds/foot3.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/select.wav", "assets/sounds/select.wav");
		type.set ("assets/sounds/select.wav", AssetType.SOUND);
		path.set ("assets/sounds/flap2.mp3", "assets/sounds/flap2.mp3");
		type.set ("assets/sounds/flap2.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/obstacle2.mp3", "assets/sounds/obstacle2.mp3");
		type.set ("assets/sounds/obstacle2.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/window2.mp3", "assets/sounds/window2.mp3");
		type.set ("assets/sounds/window2.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/foot3.wav", "assets/sounds/foot3.wav");
		type.set ("assets/sounds/foot3.wav", AssetType.SOUND);
		path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
		type.set ("assets/sounds/sounds-go-here.txt", AssetType.TEXT);
		path.set ("assets/sounds/tumble.mp3", "assets/sounds/tumble.mp3");
		type.set ("assets/sounds/tumble.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/footc4.mp3", "assets/sounds/footc4.mp3");
		type.set ("assets/sounds/footc4.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/miss.wav", "assets/sounds/miss.wav");
		type.set ("assets/sounds/miss.wav", AssetType.SOUND);
		path.set ("assets/sounds/foot1.wav", "assets/sounds/foot1.wav");
		type.set ("assets/sounds/foot1.wav", AssetType.SOUND);
		path.set ("assets/sounds/fled.wav", "assets/sounds/fled.wav");
		type.set ("assets/sounds/fled.wav", AssetType.SOUND);
		path.set ("assets/sounds/flap3.mp3", "assets/sounds/flap3.mp3");
		type.set ("assets/sounds/flap3.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/flap1.mp3", "assets/sounds/flap1.mp3");
		type.set ("assets/sounds/flap1.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/foot4.wav", "assets/sounds/foot4.wav");
		type.set ("assets/sounds/foot4.wav", AssetType.SOUND);
		path.set ("assets/sounds/jump3.mp3", "assets/sounds/jump3.mp3");
		type.set ("assets/sounds/jump3.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/win.wav", "assets/sounds/win.wav");
		type.set ("assets/sounds/win.wav", AssetType.SOUND);
		path.set ("assets/sounds/glass2.mp3", "assets/sounds/glass2.mp3");
		type.set ("assets/sounds/glass2.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/jump2.mp3", "assets/sounds/jump2.mp3");
		type.set ("assets/sounds/jump2.mp3", AssetType.MUSIC);
		path.set ("assets/sounds/combat.wav", "assets/sounds/combat.wav");
		type.set ("assets/sounds/combat.wav", AssetType.SOUND);
		path.set ("assets/sounds/jump1.wav", "assets/sounds/jump1.wav");
		type.set ("assets/sounds/jump1.wav", AssetType.SOUND);
		path.set ("assets/images/midground1-trimmed.png", "assets/images/midground1-trimmed.png");
		type.set ("assets/images/midground1-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/background.png", "assets/images/background.png");
		type.set ("assets/images/background.png", AssetType.IMAGE);
		path.set ("assets/images/floor2-middle.png", "assets/images/floor2-middle.png");
		type.set ("assets/images/floor2-middle.png", AssetType.IMAGE);
		path.set ("assets/images/roof5-right-cracked.png", "assets/images/roof5-right-cracked.png");
		type.set ("assets/images/roof5-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/crane2-filled.png", "assets/images/crane2-filled.png");
		type.set ("assets/images/crane2-filled.png", AssetType.IMAGE);
		path.set ("assets/images/giant_leg_top.png", "assets/images/giant_leg_top.png");
		type.set ("assets/images/giant_leg_top.png", AssetType.IMAGE);
		path.set ("assets/images/wall3-right-cracked.png", "assets/images/wall3-right-cracked.png");
		type.set ("assets/images/wall3-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_bottom-right.png", "assets/images/billboard_bottom-right.png");
		type.set ("assets/images/billboard_bottom-right.png", AssetType.IMAGE);
		path.set ("assets/images/floor1-middle.png", "assets/images/floor1-middle.png");
		type.set ("assets/images/floor1-middle.png", AssetType.IMAGE);
		path.set ("assets/images/wall2-right.png", "assets/images/wall2-right.png");
		type.set ("assets/images/wall2-right.png", AssetType.IMAGE);
		path.set ("assets/images/roof6-right.png", "assets/images/roof6-right.png");
		type.set ("assets/images/roof6-right.png", AssetType.IMAGE);
		path.set ("assets/images/crane5-filled.png", "assets/images/crane5-filled.png");
		type.set ("assets/images/crane5-filled.png", AssetType.IMAGE);
		path.set ("assets/images/window2_sheet.png", "assets/images/window2_sheet.png");
		type.set ("assets/images/window2_sheet.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_dmg3-filled.png", "assets/images/billboard_dmg3-filled.png");
		type.set ("assets/images/billboard_dmg3-filled.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_dmg2-filled.png", "assets/images/billboard_dmg2-filled.png");
		type.set ("assets/images/billboard_dmg2-filled.png", AssetType.IMAGE);
		path.set ("assets/images/antenna4.png", "assets/images/antenna4.png");
		type.set ("assets/images/antenna4.png", AssetType.IMAGE);
		path.set ("assets/images/hall2.png", "assets/images/hall2.png");
		type.set ("assets/images/hall2.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_dmg3.png", "assets/images/billboard_dmg3.png");
		type.set ("assets/images/billboard_dmg3.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_dmg1.png", "assets/images/billboard_dmg1.png");
		type.set ("assets/images/billboard_dmg1.png", AssetType.IMAGE);
		path.set ("assets/images/pause-button.png", "assets/images/pause-button.png");
		type.set ("assets/images/pause-button.png", AssetType.IMAGE);
		path.set ("assets/images/pipe1-left.png", "assets/images/pipe1-left.png");
		type.set ("assets/images/pipe1-left.png", AssetType.IMAGE);
		path.set ("assets/images/fence-trimmed.png", "assets/images/fence-trimmed.png");
		type.set ("assets/images/fence-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/roof4.png", "assets/images/roof4.png");
		type.set ("assets/images/roof4.png", AssetType.IMAGE);
		path.set ("assets/images/roof3-middle-cracked.png", "assets/images/roof3-middle-cracked.png");
		type.set ("assets/images/roof3-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/wall1-right-cracked.png", "assets/images/wall1-right-cracked.png");
		type.set ("assets/images/wall1-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/wall4-middle-cracked.png", "assets/images/wall4-middle-cracked.png");
		type.set ("assets/images/wall4-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/reservoir-trimmed.png", "assets/images/reservoir-trimmed.png");
		type.set ("assets/images/reservoir-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_middle.png", "assets/images/billboard_middle.png");
		type.set ("assets/images/billboard_middle.png", AssetType.IMAGE);
		path.set ("assets/images/girder-tall.png", "assets/images/girder-tall.png");
		type.set ("assets/images/girder-tall.png", AssetType.IMAGE);
		path.set ("assets/images/panel_facebook.png", "assets/images/panel_facebook.png");
		type.set ("assets/images/panel_facebook.png", AssetType.IMAGE);
		path.set ("assets/images/escape.png", "assets/images/escape.png");
		type.set ("assets/images/escape.png", AssetType.IMAGE);
		path.set ("assets/images/obstacles.png", "assets/images/obstacles.png");
		type.set ("assets/images/obstacles.png", AssetType.IMAGE);
		path.set ("assets/images/dark_tower.png", "assets/images/dark_tower.png");
		type.set ("assets/images/dark_tower.png", AssetType.IMAGE);
		path.set ("assets/images/wall4-right.png", "assets/images/wall4-right.png");
		type.set ("assets/images/wall4-right.png", AssetType.IMAGE);
		path.set ("assets/images/roof3-left.png", "assets/images/roof3-left.png");
		type.set ("assets/images/roof3-left.png", AssetType.IMAGE);
		path.set ("assets/images/window1.png", "assets/images/window1.png");
		type.set ("assets/images/window1.png", AssetType.IMAGE);
		path.set ("assets/images/cracks.png", "assets/images/cracks.png");
		type.set ("assets/images/cracks.png", AssetType.IMAGE);
		path.set ("assets/images/crane4-filled.png", "assets/images/crane4-filled.png");
		type.set ("assets/images/crane4-filled.png", AssetType.IMAGE);
		path.set ("assets/images/roof5-left-cracked.png", "assets/images/roof5-left-cracked.png");
		type.set ("assets/images/roof5-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/slope20.png", "assets/images/slope20.png");
		type.set ("assets/images/slope20.png", AssetType.IMAGE);
		path.set ("assets/images/antenna6.png", "assets/images/antenna6.png");
		type.set ("assets/images/antenna6.png", AssetType.IMAGE);
		path.set ("assets/images/access.png", "assets/images/access.png");
		type.set ("assets/images/access.png", AssetType.IMAGE);
		path.set ("assets/images/roof2-middle-cracked.png", "assets/images/roof2-middle-cracked.png");
		type.set ("assets/images/roof2-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/roof5-left.png", "assets/images/roof5-left.png");
		type.set ("assets/images/roof5-left.png", AssetType.IMAGE);
		path.set ("assets/images/antenna-left.png", "assets/images/antenna-left.png");
		type.set ("assets/images/antenna-left.png", AssetType.IMAGE);
		path.set ("assets/images/ac.png", "assets/images/ac.png");
		type.set ("assets/images/ac.png", AssetType.IMAGE);
		path.set ("assets/images/ac-trimmed.png", "assets/images/ac-trimmed.png");
		type.set ("assets/images/ac-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/roof6-left.png", "assets/images/roof6-left.png");
		type.set ("assets/images/roof6-left.png", AssetType.IMAGE);
		path.set ("assets/images/slope.png", "assets/images/slope.png");
		type.set ("assets/images/slope.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_post2.png", "assets/images/billboard_post2.png");
		type.set ("assets/images/billboard_post2.png", AssetType.IMAGE);
		path.set ("assets/images/wall2-left-cracked.png", "assets/images/wall2-left-cracked.png");
		type.set ("assets/images/wall2-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/roof4-middle.png", "assets/images/roof4-middle.png");
		type.set ("assets/images/roof4-middle.png", AssetType.IMAGE);
		path.set ("assets/images/antenna-trimmed-second.png", "assets/images/antenna-trimmed-second.png");
		type.set ("assets/images/antenna-trimmed-second.png", AssetType.IMAGE);
		path.set ("assets/images/roof1-left-cracked.png", "assets/images/roof1-left-cracked.png");
		type.set ("assets/images/roof1-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/gameover_exit_off.png", "assets/images/gameover_exit_off.png");
		type.set ("assets/images/gameover_exit_off.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_middle-right.png", "assets/images/billboard_middle-right.png");
		type.set ("assets/images/billboard_middle-right.png", AssetType.IMAGE);
		path.set ("assets/images/wall2-right-cracked.png", "assets/images/wall2-right-cracked.png");
		type.set ("assets/images/wall2-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_dmg2.png", "assets/images/billboard_dmg2.png");
		type.set ("assets/images/billboard_dmg2.png", AssetType.IMAGE);
		path.set ("assets/images/roof6-middle.png", "assets/images/roof6-middle.png");
		type.set ("assets/images/roof6-middle.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_catwalk.png", "assets/images/billboard_catwalk.png");
		type.set ("assets/images/billboard_catwalk.png", AssetType.IMAGE);
		path.set ("assets/images/doors.png", "assets/images/doors.png");
		type.set ("assets/images/doors.png", AssetType.IMAGE);
		path.set ("assets/images/roof1-right-cracked.png", "assets/images/roof1-right-cracked.png");
		type.set ("assets/images/roof1-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/roof1-middle-cracked.png", "assets/images/roof1-middle-cracked.png");
		type.set ("assets/images/roof1-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/roof2-left-cracked.png", "assets/images/roof2-left-cracked.png");
		type.set ("assets/images/roof2-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/fence.png", "assets/images/fence.png");
		type.set ("assets/images/fence.png", AssetType.IMAGE);
		path.set ("assets/images/pipe2-right.png", "assets/images/pipe2-right.png");
		type.set ("assets/images/pipe2-right.png", AssetType.IMAGE);
		path.set ("assets/images/jet.png", "assets/images/jet.png");
		type.set ("assets/images/jet.png", AssetType.IMAGE);
		path.set ("assets/images/bar.png", "assets/images/bar.png");
		type.set ("assets/images/bar.png", AssetType.IMAGE);
		path.set ("assets/images/roof5-middle.png", "assets/images/roof5-middle.png");
		type.set ("assets/images/roof5-middle.png", AssetType.IMAGE);
		path.set ("assets/images/roof3.png", "assets/images/roof3.png");
		type.set ("assets/images/roof3.png", AssetType.IMAGE);
		path.set ("assets/images/wall1.png", "assets/images/wall1.png");
		type.set ("assets/images/wall1.png", AssetType.IMAGE);
		path.set ("assets/images/wall2-middle-cracked.png", "assets/images/wall2-middle-cracked.png");
		type.set ("assets/images/wall2-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/antenna2.png", "assets/images/antenna2.png");
		type.set ("assets/images/antenna2.png", AssetType.IMAGE);
		path.set ("assets/images/dishes-trimmed.png", "assets/images/dishes-trimmed.png");
		type.set ("assets/images/dishes-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/roof6-left-cracked.png", "assets/images/roof6-left-cracked.png");
		type.set ("assets/images/roof6-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/roof3-right.png", "assets/images/roof3-right.png");
		type.set ("assets/images/roof3-right.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_top-middle.png", "assets/images/billboard_top-middle.png");
		type.set ("assets/images/billboard_top-middle.png", AssetType.IMAGE);
		path.set ("assets/images/player.png", "assets/images/player.png");
		type.set ("assets/images/player.png", AssetType.IMAGE);
		path.set ("assets/images/paused-reverse.png", "assets/images/paused-reverse.png");
		type.set ("assets/images/paused-reverse.png", AssetType.IMAGE);
		path.set ("assets/images/pipe1.png", "assets/images/pipe1.png");
		type.set ("assets/images/pipe1.png", AssetType.IMAGE);
		path.set ("assets/images/block.png", "assets/images/block.png");
		type.set ("assets/images/block.png", AssetType.IMAGE);
		path.set ("assets/images/roof1-left.png", "assets/images/roof1-left.png");
		type.set ("assets/images/roof1-left.png", AssetType.IMAGE);
		path.set ("assets/images/midground1.png", "assets/images/midground1.png");
		type.set ("assets/images/midground1.png", AssetType.IMAGE);
		path.set ("assets/images/wall1-right.png", "assets/images/wall1-right.png");
		type.set ("assets/images/wall1-right.png", AssetType.IMAGE);
		path.set ("assets/images/antenna5.png", "assets/images/antenna5.png");
		type.set ("assets/images/antenna5.png", AssetType.IMAGE);
		path.set ("assets/images/roof3-middle.png", "assets/images/roof3-middle.png");
		type.set ("assets/images/roof3-middle.png", AssetType.IMAGE);
		path.set ("assets/images/giant_leg_bottom.png", "assets/images/giant_leg_bottom.png");
		type.set ("assets/images/giant_leg_bottom.png", AssetType.IMAGE);
		path.set ("assets/images/roof1.png", "assets/images/roof1.png");
		type.set ("assets/images/roof1.png", AssetType.IMAGE);
		path.set ("assets/images/cursor.png", "assets/images/cursor.png");
		type.set ("assets/images/cursor.png", AssetType.IMAGE);
		path.set ("assets/images/walker.png", "assets/images/walker.png");
		type.set ("assets/images/walker.png", AssetType.IMAGE);
		path.set ("assets/images/escape-trimmed-filled.png", "assets/images/escape-trimmed-filled.png");
		type.set ("assets/images/escape-trimmed-filled.png", AssetType.IMAGE);
		path.set ("assets/images/crane1.png", "assets/images/crane1.png");
		type.set ("assets/images/crane1.png", AssetType.IMAGE);
		path.set ("assets/images/floor2-right.png", "assets/images/floor2-right.png");
		type.set ("assets/images/floor2-right.png", AssetType.IMAGE);
		path.set ("assets/images/reservoir.png", "assets/images/reservoir.png");
		type.set ("assets/images/reservoir.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_catwalk-middle.png", "assets/images/billboard_catwalk-middle.png");
		type.set ("assets/images/billboard_catwalk-middle.png", AssetType.IMAGE);
		path.set ("assets/images/roof3-left-cracked.png", "assets/images/roof3-left-cracked.png");
		type.set ("assets/images/roof3-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/pipe2-middle.png", "assets/images/pipe2-middle.png");
		type.set ("assets/images/pipe2-middle.png", AssetType.IMAGE);
		path.set ("assets/images/antenna5-trimmed.png", "assets/images/antenna5-trimmed.png");
		type.set ("assets/images/antenna5-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/wall1-left-cracked.png", "assets/images/wall1-left-cracked.png");
		type.set ("assets/images/wall1-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/window3.png", "assets/images/window3.png");
		type.set ("assets/images/window3.png", AssetType.IMAGE);
		path.set ("assets/images/antenna.png", "assets/images/antenna.png");
		type.set ("assets/images/antenna.png", AssetType.IMAGE);
		path.set ("assets/images/wall4-left-cracked.png", "assets/images/wall4-left-cracked.png");
		type.set ("assets/images/wall4-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/gameover_new_record_a.png", "assets/images/gameover_new_record_a.png");
		type.set ("assets/images/gameover_new_record_a.png", AssetType.IMAGE);
		path.set ("assets/images/block20.png", "assets/images/block20.png");
		type.set ("assets/images/block20.png", AssetType.IMAGE);
		path.set ("assets/images/roof4-right.png", "assets/images/roof4-right.png");
		type.set ("assets/images/roof4-right.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_catwalk-right.png", "assets/images/billboard_catwalk-right.png");
		type.set ("assets/images/billboard_catwalk-right.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_top-right.png", "assets/images/billboard_top-right.png");
		type.set ("assets/images/billboard_top-right.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_dmg1-filled.png", "assets/images/billboard_dmg1-filled.png");
		type.set ("assets/images/billboard_dmg1-filled.png", AssetType.IMAGE);
		path.set ("assets/images/window1_sheet.png", "assets/images/window1_sheet.png");
		type.set ("assets/images/window1_sheet.png", AssetType.IMAGE);
		path.set ("assets/images/title.png", "assets/images/title.png");
		type.set ("assets/images/title.png", AssetType.IMAGE);
		path.set ("assets/images/crane5.png", "assets/images/crane5.png");
		type.set ("assets/images/crane5.png", AssetType.IMAGE);
		path.set ("assets/images/title2.png", "assets/images/title2.png");
		type.set ("assets/images/title2.png", AssetType.IMAGE);
		path.set ("assets/images/roof2.png", "assets/images/roof2.png");
		type.set ("assets/images/roof2.png", AssetType.IMAGE);
		path.set ("assets/images/roof4-left-cracked.png", "assets/images/roof4-left-cracked.png");
		type.set ("assets/images/roof4-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/roof5-middle-cracked.png", "assets/images/roof5-middle-cracked.png");
		type.set ("assets/images/roof5-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/roof6-middle-cracked.png", "assets/images/roof6-middle-cracked.png");
		type.set ("assets/images/roof6-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/wall3-left.png", "assets/images/wall3-left.png");
		type.set ("assets/images/wall3-left.png", AssetType.IMAGE);
		path.set ("assets/images/dove.png", "assets/images/dove.png");
		type.set ("assets/images/dove.png", AssetType.IMAGE);
		path.set ("assets/images/store_512x512.jpg", "assets/images/store_512x512.jpg");
		type.set ("assets/images/store_512x512.jpg", AssetType.IMAGE);
		path.set ("assets/images/crane4.png", "assets/images/crane4.png");
		type.set ("assets/images/crane4.png", AssetType.IMAGE);
		path.set ("assets/images/antenna3.png", "assets/images/antenna3.png");
		type.set ("assets/images/antenna3.png", AssetType.IMAGE);
		path.set ("assets/images/antenna-trimmed-first.png", "assets/images/antenna-trimmed-first.png");
		type.set ("assets/images/antenna-trimmed-first.png", AssetType.IMAGE);
		path.set ("assets/images/roof4-left.png", "assets/images/roof4-left.png");
		type.set ("assets/images/roof4-left.png", AssetType.IMAGE);
		path.set ("assets/images/demo_gibs.png", "assets/images/demo_gibs.png");
		type.set ("assets/images/demo_gibs.png", AssetType.IMAGE);
		path.set ("assets/images/wall4-left.png", "assets/images/wall4-left.png");
		type.set ("assets/images/wall4-left.png", AssetType.IMAGE);
		path.set ("assets/images/midground2.png", "assets/images/midground2.png");
		type.set ("assets/images/midground2.png", AssetType.IMAGE);
		path.set ("assets/images/girder2.png", "assets/images/girder2.png");
		type.set ("assets/images/girder2.png", AssetType.IMAGE);
		path.set ("assets/images/crane3.png", "assets/images/crane3.png");
		type.set ("assets/images/crane3.png", AssetType.IMAGE);
		path.set ("assets/images/paused.png", "assets/images/paused.png");
		type.set ("assets/images/paused.png", AssetType.IMAGE);
		path.set ("assets/images/antenna-right.png", "assets/images/antenna-right.png");
		type.set ("assets/images/antenna-right.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_bottom-middle.png", "assets/images/billboard_bottom-middle.png");
		type.set ("assets/images/billboard_bottom-middle.png", AssetType.IMAGE);
		path.set ("assets/images/midground2-trimmed.png", "assets/images/midground2-trimmed.png");
		type.set ("assets/images/midground2-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/wall3-right.png", "assets/images/wall3-right.png");
		type.set ("assets/images/wall3-right.png", AssetType.IMAGE);
		path.set ("assets/images/gameover_new_record_b.png", "assets/images/gameover_new_record_b.png");
		type.set ("assets/images/gameover_new_record_b.png", AssetType.IMAGE);
		path.set ("assets/images/crane1-filled.png", "assets/images/crane1-filled.png");
		type.set ("assets/images/crane1-filled.png", AssetType.IMAGE);
		path.set ("assets/images/roof6.png", "assets/images/roof6.png");
		type.set ("assets/images/roof6.png", AssetType.IMAGE);
		path.set ("assets/images/roof6-right-cracked.png", "assets/images/roof6-right-cracked.png");
		type.set ("assets/images/roof6-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/wall3.png", "assets/images/wall3.png");
		type.set ("assets/images/wall3.png", AssetType.IMAGE);
		path.set ("assets/images/floor2.png", "assets/images/floor2.png");
		type.set ("assets/images/floor2.png", AssetType.IMAGE);
		path.set ("assets/images/wall3-middle.png", "assets/images/wall3-middle.png");
		type.set ("assets/images/wall3-middle.png", AssetType.IMAGE);
		path.set ("assets/images/roof2-left.png", "assets/images/roof2-left.png");
		type.set ("assets/images/roof2-left.png", AssetType.IMAGE);
		path.set ("assets/images/antenna2-trimmed.png", "assets/images/antenna2-trimmed.png");
		type.set ("assets/images/antenna2-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/glass.png", "assets/images/glass.png");
		type.set ("assets/images/glass.png", AssetType.IMAGE);
		path.set ("assets/images/roof5-right.png", "assets/images/roof5-right.png");
		type.set ("assets/images/roof5-right.png", AssetType.IMAGE);
		path.set ("assets/images/joinPlists", "assets/images/joinPlists");
		type.set ("assets/images/joinPlists", AssetType.BINARY);
		path.set ("assets/images/floor1.png", "assets/images/floor1.png");
		type.set ("assets/images/floor1.png", AssetType.IMAGE);
		path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
		type.set ("assets/images/images-go-here.txt", AssetType.TEXT);
		path.set ("assets/images/roof2-middle.png", "assets/images/roof2-middle.png");
		type.set ("assets/images/roof2-middle.png", AssetType.IMAGE);
		path.set ("assets/images/mothership-filled.png", "assets/images/mothership-filled.png");
		type.set ("assets/images/mothership-filled.png", AssetType.IMAGE);
		path.set ("assets/images/crane2.png", "assets/images/crane2.png");
		type.set ("assets/images/crane2.png", AssetType.IMAGE);
		path.set ("assets/images/paused-highlight.png", "assets/images/paused-highlight.png");
		type.set ("assets/images/paused-highlight.png", AssetType.IMAGE);
		path.set ("assets/images/ipad/midground1-trimmed.png", "assets/images/ipad/midground1-trimmed.png");
		type.set ("assets/images/ipad/midground1-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/ipad/background.png", "assets/images/ipad/background.png");
		type.set ("assets/images/ipad/background.png", AssetType.IMAGE);
		path.set ("assets/images/ipad/bar.png", "assets/images/ipad/bar.png");
		type.set ("assets/images/ipad/bar.png", AssetType.IMAGE);
		path.set ("assets/images/ipad/midground1.png", "assets/images/ipad/midground1.png");
		type.set ("assets/images/ipad/midground1.png", AssetType.IMAGE);
		path.set ("assets/images/ipad/title.png", "assets/images/ipad/title.png");
		type.set ("assets/images/ipad/title.png", AssetType.IMAGE);
		path.set ("assets/images/ipad/midground2.png", "assets/images/ipad/midground2.png");
		type.set ("assets/images/ipad/midground2.png", AssetType.IMAGE);
		path.set ("assets/images/ipad/midground2-trimmed.png", "assets/images/ipad/midground2-trimmed.png");
		type.set ("assets/images/ipad/midground2-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/ipad/background-trimmed.png", "assets/images/ipad/background-trimmed.png");
		type.set ("assets/images/ipad/background-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/makeTextureAtlas.sh", "assets/images/makeTextureAtlas.sh");
		type.set ("assets/images/makeTextureAtlas.sh", AssetType.TEXT);
		path.set ("assets/images/wall2-left.png", "assets/images/wall2-left.png");
		type.set ("assets/images/wall2-left.png", AssetType.IMAGE);
		path.set ("assets/images/window4.png", "assets/images/window4.png");
		type.set ("assets/images/window4.png", AssetType.IMAGE);
		path.set ("assets/images/window2.png", "assets/images/window2.png");
		type.set ("assets/images/window2.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_middle-middle.png", "assets/images/billboard_middle-middle.png");
		type.set ("assets/images/billboard_middle-middle.png", AssetType.IMAGE);
		path.set ("assets/images/wall4-right-cracked.png", "assets/images/wall4-right-cracked.png");
		type.set ("assets/images/wall4-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/textureAtlas", "assets/images/textureAtlas");
		type.set ("assets/images/textureAtlas", AssetType.BINARY);
		path.set ("assets/images/wall2.png", "assets/images/wall2.png");
		type.set ("assets/images/wall2.png", AssetType.IMAGE);
		path.set ("assets/images/wall1-middle-cracked.png", "assets/images/wall1-middle-cracked.png");
		type.set ("assets/images/wall1-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/wall4.png", "assets/images/wall4.png");
		type.set ("assets/images/wall4.png", AssetType.IMAGE);
		path.set ("assets/images/mothership.png", "assets/images/mothership.png");
		type.set ("assets/images/mothership.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_bottom.png", "assets/images/billboard_bottom.png");
		type.set ("assets/images/billboard_bottom.png", AssetType.IMAGE);
		path.set ("assets/images/antenna4-trimmed.png", "assets/images/antenna4-trimmed.png");
		type.set ("assets/images/antenna4-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/dark_tower-filled.png", "assets/images/dark_tower-filled.png");
		type.set ("assets/images/dark_tower-filled.png", AssetType.IMAGE);
		path.set ("assets/images/girder.png", "assets/images/girder.png");
		type.set ("assets/images/girder.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_bottom-left.png", "assets/images/billboard_bottom-left.png");
		type.set ("assets/images/billboard_bottom-left.png", AssetType.IMAGE);
		path.set ("assets/images/floor1-left.png", "assets/images/floor1-left.png");
		type.set ("assets/images/floor1-left.png", AssetType.IMAGE);
		path.set ("assets/images/floor2-left.png", "assets/images/floor2-left.png");
		type.set ("assets/images/floor2-left.png", AssetType.IMAGE);
		path.set ("assets/images/roof2-right-cracked.png", "assets/images/roof2-right-cracked.png");
		type.set ("assets/images/roof2-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/pipe2-left.png", "assets/images/pipe2-left.png");
		type.set ("assets/images/pipe2-left.png", AssetType.IMAGE);
		path.set ("assets/images/wall3-middle-cracked.png", "assets/images/wall3-middle-cracked.png");
		type.set ("assets/images/wall3-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/bomb.png", "assets/images/bomb.png");
		type.set ("assets/images/bomb.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_top-left.png", "assets/images/billboard_top-left.png");
		type.set ("assets/images/billboard_top-left.png", AssetType.IMAGE);
		path.set ("assets/images/pause.png", "assets/images/pause.png");
		type.set ("assets/images/pause.png", AssetType.IMAGE);
		path.set ("assets/images/gameover_exit_on.png", "assets/images/gameover_exit_on.png");
		type.set ("assets/images/gameover_exit_on.png", AssetType.IMAGE);
		path.set ("assets/images/wall4-middle.png", "assets/images/wall4-middle.png");
		type.set ("assets/images/wall4-middle.png", AssetType.IMAGE);
		path.set ("assets/images/smoke.png", "assets/images/smoke.png");
		type.set ("assets/images/smoke.png", AssetType.IMAGE);
		path.set ("assets/images/roof3-right-cracked.png", "assets/images/roof3-right-cracked.png");
		type.set ("assets/images/roof3-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/panel_twitter.png", "assets/images/panel_twitter.png");
		type.set ("assets/images/panel_twitter.png", AssetType.IMAGE);
		path.set ("assets/images/crane3-filled.png", "assets/images/crane3-filled.png");
		type.set ("assets/images/crane3-filled.png", AssetType.IMAGE);
		path.set ("assets/images/wall3-left-cracked.png", "assets/images/wall3-left-cracked.png");
		type.set ("assets/images/wall3-left-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/pipe1-right.png", "assets/images/pipe1-right.png");
		type.set ("assets/images/pipe1-right.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_middle-left.png", "assets/images/billboard_middle-left.png");
		type.set ("assets/images/billboard_middle-left.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_post.png", "assets/images/billboard_post.png");
		type.set ("assets/images/billboard_post.png", AssetType.IMAGE);
		path.set ("assets/images/window4_sheet.png", "assets/images/window4_sheet.png");
		type.set ("assets/images/window4_sheet.png", AssetType.IMAGE);
		path.set ("assets/images/back.png", "assets/images/back.png");
		type.set ("assets/images/back.png", AssetType.IMAGE);
		path.set ("assets/images/roof4-right-cracked.png", "assets/images/roof4-right-cracked.png");
		type.set ("assets/images/roof4-right-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/obstacles2.png", "assets/images/obstacles2.png");
		type.set ("assets/images/obstacles2.png", AssetType.IMAGE);
		path.set ("assets/images/window3_sheet.png", "assets/images/window3_sheet.png");
		type.set ("assets/images/window3_sheet.png", AssetType.IMAGE);
		path.set ("assets/images/wall1-middle.png", "assets/images/wall1-middle.png");
		type.set ("assets/images/wall1-middle.png", AssetType.IMAGE);
		path.set ("assets/images/floor1-right.png", "assets/images/floor1-right.png");
		type.set ("assets/images/floor1-right.png", AssetType.IMAGE);
		path.set ("assets/images/button.png", "assets/images/button.png");
		type.set ("assets/images/button.png", AssetType.IMAGE);
		path.set ("assets/images/roof2-right.png", "assets/images/roof2-right.png");
		type.set ("assets/images/roof2-right.png", AssetType.IMAGE);
		path.set ("assets/images/roof1-middle.png", "assets/images/roof1-middle.png");
		type.set ("assets/images/roof1-middle.png", AssetType.IMAGE);
		path.set ("assets/images/dishes.png", "assets/images/dishes.png");
		type.set ("assets/images/dishes.png", AssetType.IMAGE);
		path.set ("assets/images/hall1.png", "assets/images/hall1.png");
		type.set ("assets/images/hall1.png", AssetType.IMAGE);
		path.set ("assets/images/wall2-middle.png", "assets/images/wall2-middle.png");
		type.set ("assets/images/wall2-middle.png", AssetType.IMAGE);
		path.set ("assets/images/antenna3-trimmed.png", "assets/images/antenna3-trimmed.png");
		type.set ("assets/images/antenna3-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_top.png", "assets/images/billboard_top.png");
		type.set ("assets/images/billboard_top.png", AssetType.IMAGE);
		path.set ("assets/images/roof1-right.png", "assets/images/roof1-right.png");
		type.set ("assets/images/roof1-right.png", AssetType.IMAGE);
		path.set ("assets/images/background-trimmed.png", "assets/images/background-trimmed.png");
		type.set ("assets/images/background-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/skylight.png", "assets/images/skylight.png");
		type.set ("assets/images/skylight.png", AssetType.IMAGE);
		path.set ("assets/images/roof4-middle-cracked.png", "assets/images/roof4-middle-cracked.png");
		type.set ("assets/images/roof4-middle-cracked.png", AssetType.IMAGE);
		path.set ("assets/images/roof5.png", "assets/images/roof5.png");
		type.set ("assets/images/roof5.png", AssetType.IMAGE);
		path.set ("assets/images/pipe2.png", "assets/images/pipe2.png");
		type.set ("assets/images/pipe2.png", AssetType.IMAGE);
		path.set ("assets/images/wall1-left.png", "assets/images/wall1-left.png");
		type.set ("assets/images/wall1-left.png", AssetType.IMAGE);
		path.set ("assets/images/gameover.png", "assets/images/gameover.png");
		type.set ("assets/images/gameover.png", AssetType.IMAGE);
		path.set ("assets/images/antenna6-trimmed.png", "assets/images/antenna6-trimmed.png");
		type.set ("assets/images/antenna6-trimmed.png", AssetType.IMAGE);
		path.set ("assets/images/billboard_catwalk-left.png", "assets/images/billboard_catwalk-left.png");
		type.set ("assets/images/billboard_catwalk-left.png", AssetType.IMAGE);
		path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
		type.set ("assets/sounds/beep.ogg", AssetType.SOUND);
		path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
		type.set ("assets/sounds/flixel.ogg", AssetType.SOUND);
		
		
		#elseif html5
		
		var id;
		id = "assets/data/data-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/music/HaxeFlixel_Tutorial_Game.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/music/run.ogg";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/music/run.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/crumble.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/lose.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/hurt.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/bomb_explode.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/bomb_launch.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/bomb_hit.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/giant_leg.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/obstacle1.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/footc3.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/footc2.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/bomb_pre.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/wall.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/step.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/window1.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/glass1.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/flyby.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/foot2.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/obstacle3.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/crumble.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/foot2.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/coin.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/jump1.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/foot1.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/footc1.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/foot4.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/giant_leg_release.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/foot3.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/select.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/flap2.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/obstacle2.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/window2.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/foot3.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/sounds-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/tumble.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/footc4.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/miss.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/foot1.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/fled.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/flap3.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/flap1.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/foot4.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/jump3.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/win.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/glass2.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/jump2.mp3";
		path.set (id, id);
		type.set (id, AssetType.MUSIC);
		id = "assets/sounds/combat.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/jump1.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/images/midground1-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/background.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/floor2-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof5-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane2-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/giant_leg_top.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall3-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_bottom-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/floor1-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall2-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof6-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane5-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/window2_sheet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_dmg3-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_dmg2-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/hall2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_dmg3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_dmg1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pause-button.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pipe1-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/fence-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof3-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall1-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall4-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/reservoir-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/girder-tall.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/panel_facebook.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/escape.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/obstacles.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dark_tower.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall4-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof3-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/window1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/cracks.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane4-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof5-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/slope20.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/access.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof2-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof5-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ac.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ac-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof6-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/slope.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_post2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall2-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof4-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna-trimmed-second.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof1-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/gameover_exit_off.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_middle-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall2-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_dmg2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof6-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_catwalk.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/doors.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof1-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof1-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof2-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/fence.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pipe2-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/jet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bar.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof5-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall2-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dishes-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof6-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof3-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_top-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/player.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/paused-reverse.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pipe1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/block.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof1-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/midground1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall1-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof3-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/giant_leg_bottom.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/cursor.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/walker.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/escape-trimmed-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/floor2-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/reservoir.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_catwalk-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof3-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pipe2-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna5-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall1-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/window3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall4-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/gameover_new_record_a.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/block20.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof4-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_catwalk-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_top-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_dmg1-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/window1_sheet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/title.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/title2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof4-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof5-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof6-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall3-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dove.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/store_512x512.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna-trimmed-first.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof4-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/demo_gibs.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall4-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/midground2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/girder2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/paused.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_bottom-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/midground2-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall3-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/gameover_new_record_b.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane1-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof6-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/floor2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall3-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof2-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna2-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/glass.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof5-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/joinPlists";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/floor1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/images-go-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/roof2-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/mothership-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/paused-highlight.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ipad/midground1-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ipad/background.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ipad/bar.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ipad/midground1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ipad/title.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ipad/midground2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ipad/midground2-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/ipad/background-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/makeTextureAtlas.sh";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/images/wall2-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/window4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/window2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_middle-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall4-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/textureAtlas";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/wall2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall1-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/mothership.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_bottom.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna4-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dark_tower-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/girder.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_bottom-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/floor1-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/floor2-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof2-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pipe2-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall3-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/bomb.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_top-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pause.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/gameover_exit_on.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall4-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/smoke.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof3-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/panel_twitter.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/crane3-filled.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall3-left-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pipe1-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_middle-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_post.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/window4_sheet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/back.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof4-right-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/obstacles2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/window3_sheet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall1-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/floor1-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/button.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof2-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof1-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/dishes.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/hall1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall2-middle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna3-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_top.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof1-right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/background-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/skylight.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof4-middle-cracked.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/roof5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/pipe2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/wall1-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/gameover.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/antenna6-trimmed.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/billboard_catwalk-left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/sounds/beep.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/flixel.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		
		
		#else
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null || (assetType == BINARY && type == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);

		#elseif (js || openfl_html5 || pixi)
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash



















































































































































































































































































#elseif html5



















































































































































































































































































#else

#if (windows || mac || linux)







#else




#end

#end
