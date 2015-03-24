package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
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
	override public function update():Void
	{
		super.update();

		var point:FlxPoint = getScreenXY();

		if (point.x + width < 0)
		{
			//Log.trace(point.x);
			x += width * 2;
		}
	}
}