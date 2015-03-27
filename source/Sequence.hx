package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxSpriteGroup;
import flixel.util.FlxPoint;
import flixel.tile.FlxTileblock;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxRandom;
import haxe.Log;

enum Types { ROOF; COLLAPSE; BILLBOARD; }

class Sequence extends FlxObject
{	
	public var collisionLayer:FlxSpriteGroup;
	public var renderLayer:FlxSpriteGroup;
	public var foregroundLayer:FlxSpriteGroup;

	//private var layer:FlxSpriteGroup;
	public var decorateLayer:FlxSpriteGroup;
	private var layerLeg:FlxSpriteGroup;
	
	private var seq:Sequence;

	private var player:Player;

	private var roof:Bool;

	private var shardsA:FlxEmitter;
	private var shardsB:FlxEmitter;

	private var building:FlxSpriteGroup;
	private var rect:FlxSpriteGroup;
	private var decorate:FlxSpriteGroup;
	private var escape:FlxTileblock;
	private var fence:FlxTileblock;
	private var obstacle:Obstacle;

	private static var curIndex:Int;
	private var nextIndex:Int;
	private var nextType:Int;

	private static var sequenceIndex:Int;

	private static var hall:Hall;
	private static var billboard:Billboard;

	private static var TILE_SIZE:Int = 16;
	private static var ASSETS_IMAGES = "assets/images/";
	private static var nextX:Float;

	public static function initialize()
	{	
		//Hall.initialize();

		//hall = new Hall();
		//hall.initWithMaxWidth(1344);

		curIndex = 0;
		nextX = 0;
		Building.initialize();
	}

	/*
	public function new(x:Int, y:Int):Void
	{
		super(x,y);
	}*/

	public function new(player:Player)
	{
		super(nextX, 0);
		this.player = player;

		collisionLayer = new FlxSpriteGroup();
		renderLayer = new FlxSpriteGroup();
		decorateLayer = new FlxSpriteGroup();
		foregroundLayer = new FlxSpriteGroup();
		createBuilding();

		immovable = true;

		/*blocks = new FlxGroup();
		var mainBlock:FlxTileblock = new FlxTileblock(Std.int(this.x), Std.int(this.y), Std.int(this.width + 10), Std.int(this.height + 2 * TILE_SIZE));
		blocks.add(mainBlock);*/
	}

	/*
	public function initWithPlayer(player:Player)
	{
		this.player = player;

		//var hallHeight:Int = 0;
		//hallHeight = 4;

		createBuilding();		
	}
	*/

	public function resetBuilding()
	{
		//FlxG.log.add("Reset building");

		renderLayer.remove(building);
		collisionLayer.remove(rect);
		decorateLayer.remove(decorate);
		if (obstacle!=null)
			foregroundLayer.remove(obstacle);
		building.kill();
		rect.kill();
		decorate.kill();
	}

	public function createBuilding()
	{		
		this.x = nextX;
		
		if (curIndex == 0) //First sequence
		{
			this.y = 130;
		}
		else
		{
			this.y = FlxRandom.intRanged(100, 200);
		}

		var numTiles:Int = FlxRandom.intRanged(50, 70);
		rect = Building.createRect(numTiles, Std.int(this.y));
		rect.x = nextX;
		rect.visible = false;
		collisionLayer.add(rect);

		building = Building.create(numTiles, Std.int(this.y));
		building.x = nextX;
		renderLayer.add(building);

		this.width = rect.width;

		decorate = Building.createDecorate(x, y, Std.int(width));
		decorateLayer.add(decorate);

		nextX = nextX + this.width  + FlxRandom.intRanged(5, 7) * TILE_SIZE; //Static variable to setX the next sequence

		FlxG.worldBounds.setSize(nextX + width, FlxG.height);
		
		//Obstacles
		if (curIndex > 0 && FlxRandom.float() < 0.15)
		{
			obstacle = new Obstacle(this.x + this.width / 8 + Std.random(1) * (this.width * 0.5), this.y, player);
			foregroundLayer.add(obstacle);
		}

		curIndex++;
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		var point:FlxPoint = getScreenXY();
		var checkValue:Float = point.x + this.width;

		//Log.trace("point.x " + point.x);

		if (point.x + this.width < 0)
		{
			//FlxG.log.add("checkValue " + checkValue);

			//Reset
			//self.x = seq.x + seq.width + gap*tileSize;

			//this.x = this.x + this.width + TILE_SIZE * 5;
			//building.x = this.x;

			resetBuilding();
			createBuilding();

			//Log.trace("Reset " + building.x);

		}
		
		super.update();
	}
}