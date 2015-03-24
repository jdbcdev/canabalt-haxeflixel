package;

import flixel.FlxSprite;
import flixel.effects.particles.FlxEmitter;

class Window extends FlxSprite
{
	private var shards:FlxEmitter;
	private var player:Player;


	public function new(x:Float, y:Float, height:Float, player:Player, glassShards:FlxEmitter)
	{
		super(x, y-height);

		width = 40;
		shards = glassShards;
		shards.x = x;
		shards.y = y;
	}
}