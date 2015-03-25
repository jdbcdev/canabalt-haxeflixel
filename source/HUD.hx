package;

import flixel.text.FlxText;
import flixel.FlxG;

class HUD extends FlxText
{
	public function new(x:Int, y:Int)
	{	
		super(x, y);

		text = "0m";

		scrollFactor.x = 0;
		scrollFactor.y = 0;
	}
}