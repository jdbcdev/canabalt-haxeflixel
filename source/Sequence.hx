package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxGroup;
import flixel.util.FlxPoint;
import flixel.tile.FlxTileblock;
import flixel.effects.particles.FlxEmitter;
import flixel.util.FlxRandom;

enum Types { ROOF; COLLAPSE; BILLBOARD; }

class Sequence extends FlxObject
{	
	//public var blocks:FlxGroup;
	public var renderLayer:FlxGroup;

	private var layer:FlxGroup;
	private var backgroundRenderLayer:FlxGroup;
	private var layerLeg:FlxGroup;
	
	private var seq:Sequence;


	private var player:Player;

	private var roof:Bool;

	private var shardsA:FlxEmitter;
	private var shardsB:FlxEmitter;

	private var building:Building;
	private var escape:FlxTileblock;
	private var fence:FlxTileblock;

	private var curIndex:Int;
	private var nextIndex:Int;
	private var nextType:Int;

	private static var sequenceIndex:Int;

	private static var hall:Hall;
	private static var billboard:Billboard;

	private static var TILE_SIZE:Int = 16;
	private static var ASSETS_IMAGES = "assets/images/";
	private static var nextX:Float = 0;

	public static function initialize()
	{	
		//Hall.initialize();

		//hall = new Hall();
		//hall.initWithMaxWidth(1344);

		Building.initialize();
	}

	/*
	public function new(x:Int, y:Int):Void
	{
		super(x,y);
	}*/

	public function new()
	{
		super(nextX, 0);

		renderLayer = new FlxGroup();
		createBuilding();

		immovable = true;

		/*blocks = new FlxGroup();
		var mainBlock:FlxTileblock = new FlxTileblock(Std.int(this.x), Std.int(this.y), Std.int(this.width + 10), Std.int(this.height + 2 * TILE_SIZE));
		blocks.add(mainBlock);*/
	}

	public function initWithPlayer(player:Player)
	{
		this.player = player;

		//var hallHeight:Int = 0;
		//hallHeight = 4;

		/*
		blocks = new FlxGroup();
		blocks.add(block);

		Hall.initialize();

		hall = new Hall();
		hall.initWithMaxWidth(1344);

		var hallHeight:Int = 3;
		hallHeight *= tileSize;

		var width:Int = 20 * tileSize;
		var height:Int = tileSize; 
		hall.createWithX(this.x, this.y, width, height, tileSize, hallHeight, 1, 1);

		renderLayer.add(hall);*/

		createBuilding();
		
	}

	public function resetBuilding()
	{
		FlxG.log.add("Reset building");

		renderLayer.remove(building);
		building.kill();
	}

	public function createBuilding()
	{		
		this.x = nextX;

		building = new Building();
		building.x = nextX;
		
		//building.createRect();
		building.create();
		renderLayer.add(building);

		this.width = building.width;
		nextX = nextX + this.width  + FlxRandom.intRanged(5, 7) * TILE_SIZE; //Static variable to setX the next sequence

		FlxG.worldBounds.setSize(nextX + width, FlxG.height);
		
		//Log.trace("Creating building: width " + this.width);
		FlxG.log.add("Creating building: nextX " + nextX);
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
			FlxG.log.add("checkValue " + checkValue);

			//Reset
			//self.x = seq.x + seq.width + gap*tileSize;

			//this.x = this.x + this.width + TILE_SIZE * 5;
			//building.x = this.x;

			resetBuilding();
			createBuilding();

			//this.velocity.x = 2;
			//player.acceleration.x = 0;

			//Log.trace("Reset " + building.x);

		}
		
		super.update();
	}
}