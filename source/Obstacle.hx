package;

import flixel.FlxSprite;

class Obstacle extends FlxSprite
{
	private var player:Player;

	private static var TILE_SIZE:Int = 16;

	public function new(x:Float, y:Float, player:Player)
	{
		super(x,y-TILE_SIZE);
		this.player = player;

		//loadGraphicFromTexture("assets/images/obstacles2.png");
		loadGraphic("assets/images/obstacles2.png", TILE_SIZE, TILE_SIZE);
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{

	}
}