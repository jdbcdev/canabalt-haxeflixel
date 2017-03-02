package;

import flixel.FlxSprite;
import haxe.Log;

class Obstacle extends FlxSprite
{
	private var dead:Bool;
	private var player:Player;

	private static var TILE_SIZE:Int = 18;

	public function new(x:Float, y:Float, player:Player)
	{
		super(x,y-TILE_SIZE);
		this.player = player;

		//loadGraphicFromTexture("assets/images/obstacles2.png");
		loadGraphic("assets/images/obstacles2.png", true, TILE_SIZE, TILE_SIZE);
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update(elapsed:Float):Void
	{

		if (!dead && this.overlaps(this.player))
		{
			player.setStumble();

			velocity.x = player.velocity.x + Std.random(100) - 50;
    		velocity.y = -120;
    		acceleration.y = 320;
			kill();
		}

		super.update(elapsed);
	}

	override public function kill():Void
	{
		dead = true;
		angularVelocity = Std.random(100) * 720 - 360;
	}
}
