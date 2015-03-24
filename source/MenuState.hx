package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	private var background:FlxSprite;

	//private var text:FlxText;
	private var btnPlay:FlxButton;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		//text = new FlxText(10, 10, 100, "Canabalt Haxe Port");
		//add(text);
		
		background = new FlxSprite(0,0, "assets/images/title.png");
		add(background);

		btnPlay = new FlxButton(200, 160, "Play", clickPlay);
		add(btnPlay);

		//Music
		FlxG.sound.playMusic("assets/music/run.ogg", 1, true);

		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
	}	

	private function clickPlay()
	{
	    FlxG.switchState(new PlayState());
	}
}