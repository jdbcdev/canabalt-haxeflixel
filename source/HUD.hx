package;

import flixel.text.FlxText;

class HUD extends FlxText
{
	public function new(x:Int, y:Int)
	{
		super(x, y);
		scrollFactor.x = 0;
		scrollFactor.y = 0;
	}
}