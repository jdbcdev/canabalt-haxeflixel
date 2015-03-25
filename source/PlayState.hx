package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.system.FlxSound;

import haxe.Log;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxState
{
	private var background:BG;
	private var background2:BG;
	private var backgroundRect:FlxSprite;
	private var midground1:FlxSprite;
	private var midground2:FlxSprite;
	private var bottonground:FlxSprite;

	private var player:Player;
	private var ghost:FlxSprite;

	private var seqA:Sequence;
	private var seqB:Sequence;

	private var paused:Bool;

	private var sfx_crumble:FlxSound;
	private var hud:HUD;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{	
		FlxG.debugger.visible = true;
		//FlxG.debugger.drawDebug = true;

		//FlxG.cameras.bgColor = 0xffb0b0bf;
		FlxG.cameras.bgColor = 0xff3399ff;

		background = new BG(0, 66, "assets/images/background-trimmed.png");
		background.scrollFactor.x = 0.15;
		background.scrollFactor.y = 0.25;
		add(background);

		background2 = new BG(FlxG.width, 66, "assets/images/background-trimmed.png");
		background2.scrollFactor.x = 0.15;
		background2.scrollFactor.y = 0.25;
		add(background2);

		backgroundRect = new BG(0, 114);
		backgroundRect.makeGraphic(FlxG.width * 2, 88, 0xff868696);
		backgroundRect.scrollFactor.x = 0;
		backgroundRect.scrollFactor.y = 0.25;
		add(backgroundRect);

		midground1 = new BG(0, 112, "assets/images/midground1-trimmed.png");
		midground1.scrollFactor.x = 0.4;
		midground1.scrollFactor.y = 0.5;
		add(midground1);

		midground2 = new BG(FlxG.width, 112, "assets/images/midground2-trimmed.png");
		midground2.scrollFactor.x = 0.4;
		midground2.scrollFactor.y = 0.5;
		add(midground2);
		
		bottonground = new FlxSprite(0, 202);
		bottonground.makeGraphic(FlxG.width * 2, 223, 0xff646A7D);
		bottonground.scrollFactor.x = 0;
		bottonground.scrollFactor.y = 0.5;
		add(bottonground);

		player = new Player(0, 100);
		add(player);

		//Buildings sequence
		Sequence.initialize();

		seqA = new Sequence();
		add(seqA);
		add(seqA.renderLayer);

		seqB = new Sequence();
		add(seqB);
		add(seqB.renderLayer);

		//Starting playing
		paused = false;
		
		ghost = new FlxSprite(player.x + 200, player.y);
		FlxG.camera.follow(ghost);

		//Sounds
		sfx_crumble = FlxG.sound.load("assets/sounds/crumble.wav");
		sfx_crumble.play();

		//Distance
		hud = new HUD(FlxG.width-150, 5);
		add(hud);

		super.create();
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();

		player.destroy();
		ghost.destroy();
		seqA.destroy();
		seqB.destroy();

		background.destroy();
		background2.destroy();
		backgroundRect.destroy();
		midground1.destroy;
		midground2.destroy();
		bottonground.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		if (!paused)
		{
			super.update();

			FlxG.collide(seqA.renderLayer, player, onCollide);
			FlxG.collide(seqB.renderLayer, player, onCollide);

			if (player.velocity.x > 0)
			{
				ghost.x = player.x + 200;

				var distance:Int = Std.int(player.x/10);
				hud.text = Std.string(distance) + "m";
			}

			if (player.dead)
				FlxG.switchState(new PlayState());

			//FlxG.collide(player, seqA.renderLayer); //, onCollide);
			//FlxG.collide(player, seqB.renderLayer); //, onCollide);
		}
	}	

	public function onCollide(object1:FlxObject, object2:FlxObject)
	{
		//Log.trace("player.x " + player.x);

		player.onFloor();

		//FlxG.log.add("player.x " + player.x);
		//FlxG.log.add("player.y " + player.y);
	}
}