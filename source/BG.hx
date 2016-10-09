package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxPoint;
import haxe.Log;

class BG extends FlxSprite
{
	override public function new(?X:Float = 0, ?Y:Float = 0, ?SimpleGraphic:Dynamic = null):Void
	{
		super(X, Y,SimpleGraphic);
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);

		var point:FlxPoint = getScreenPosition();

		if (point.x + width < 0)
		{
			//Log.trace(point.x);
			x += width * 2;
		}
	}
}
