package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.group.FlxSpriteGroup;
import flixel.tile.FlxTileblock;
import haxe.Log;

class Hall extends FlxSpriteGroup
{
	private var leftEdge:FlxTileblock;
	private var rightEdge:FlxTileblock;

	private var hall1:CBlock;
	private var hall2:CBlock;
	private var hall3:FlxSprite;

	private var doors:Array<FlxTileblock>;
	private var extraWindows:Array<FlxTileblock>;
	private var extraWalls:Array<FlxSprite>;
	private var extraDoors:Array<FlxTileblock>;

	private static var TILE_SIZE:Int = 16;

	private static var leftWalls:Array<String>;
	private static var rightWalls:Array<String>;
	private static var middleWalls:Array<String>;
	private static var windowImages:Array<String>;

	//private var group:FlxGroup;

	public static function initialize()
	{
		leftWalls = ["wall1-left.png",
					 "wall2-left.png",
					 "wall3-left.png",
					 "wall4-left.png"];

		middleWalls = ["wall1-middle.png",
					   "wall2-middle.png",
					   "wall3-middle.png",
					   "wall4-middle.png"];

		rightWalls = ["wall1-right.png",
					 "wall2-right.png",
					 "wall3-right.png",
					 "wall4-right.png"];

		windowImages = ["window1.png",
						"window2.png",
						"window3.png",
						"window4.png"];
		
	}

	public function initWithMaxWidth(maxWidth:Int)
	{
		leftEdge = new FlxTileblock(0, 0, TILE_SIZE, 400);
		//leftEdge.loadGraphic("assets/images/" + leftWalls[3]);
		leftEdge.loadTiles("assets/images/" + leftWalls[1], TILE_SIZE, TILE_SIZE);
		add(leftEdge);

		rightEdge = new FlxTileblock(0, 0, TILE_SIZE, 400);
		//rightEdge.loadGraphic("assets/images/" + rightWalls[3]);
		rightEdge.loadTiles("assets/images/" + rightWalls[1], TILE_SIZE, TILE_SIZE);
		add(rightEdge);

		hall1 = new CBlock(0, 0, maxWidth, TILE_SIZE);
		hall1.loadTiles("assets/images/wall2-middle.png", TILE_SIZE, TILE_SIZE);
		hall1.scrollFactor.x = 1;
		hall1.scrollFactor.y = 1;
		
		//add(hall1);

		hall2 = new CBlock(0, 0, maxWidth, TILE_SIZE);
		hall2.loadTiles("assets/images/wall2-middle-cracked.png", TILE_SIZE, TILE_SIZE);
		hall1.scrollFactor.x = 1;
		hall1.scrollFactor.y = 1;
		//add(hall2);

		hall3 = new FlxSprite(0, 0);
		//add(hall3);

		doors = new Array<FlxTileblock>();
		extraWindows = new Array<FlxTileblock>();
		//extraWalls = new Array<FlxTileblock>();
		extraWalls = new Array<FlxSprite>();
		extraDoors = new Array<FlxTileblock>();

		var n:Int = 12;
		for (i in 1...n) {
			var width:Int = maxWidth-2*TILE_SIZE;
			//var wall:FlxTileblock = new FlxTileblock(0, 0, width, TILE_SIZE);
			var wall:FlxSprite = new FlxSprite(0, 0);
			wall.loadGraphic("assets/images/" + middleWalls[3]);
			add(wall);
			extraWalls.push(wall);
		}

		for (i in 1...n){
			var width:Int = maxWidth-2*TILE_SIZE;
			var window:FlxTileblock = new FlxTileblock(0, 0, width, TILE_SIZE);
			window.loadGraphic("assets/images/" + windowImages[3]);
			add(window);
			extraWindows.push(window);
		}

	}

	public function createWithX(x:Float, y:Float, width:Float, height:Float, tileSize:Int, hallHeight:Int, wallType:Int, windowType:Int)
	{
		this.x = x;
		this.y = y;
		this.width = width;
		this.height = height;

		Log.trace("width " + width);
		Log.trace("height " + height);

		leftEdge.x = x;
		leftEdge.y = 0;
		leftEdge.width = tileSize;
		leftEdge.height = y - hallHeight;
		//leftEdge.loadGraphic("assets/images/" + leftWalls[wallType]);

		rightEdge.x = this.x + this.width - tileSize;
  		rightEdge.y = 0;
  		rightEdge.width = tileSize;
	  	rightEdge.height = this.y - hallHeight;
	  	//rightEdge.loadGraphic(rightWalls[wallType]);

	  	hall1.x = this.x;
  		hall1.y = this.y - tileSize;
  		hall1.width = this.width;
  		hall1.height = tileSize;

  		hall2.x = this.x;
  		hall2.y = this.y -2 * tileSize;
  		hall2.width = this.width;
  		hall2.height = tileSize;

		hall3.x = x;
		hall3.y = y-hallHeight;
		hall3.makeGraphic(Math.floor(width), Math.floor(hallHeight-2*tileSize), 0xff35353d);

		var n:Int = 12;

		for (i in 0...n-1)
		{
			//var wall:FlxTileblock = extraWalls[i];
			var wall:FlxSprite = extraWalls[i];
			wall.x = this.x + tileSize;
			wall.y = (this.y - hallHeight) -(1 + i * 2) * tileSize;
    		wall.width = this.width - 2 * tileSize;
    		wall.height = tileSize;
    		//wall.loadGraphic(middleWalls[wallType]);
		}

		for (i in 0...n-1)
		{
			var window:FlxTileblock = extraWindows[i];
			window.x = this.x + tileSize;
			window.y = (this.y - hallHeight)-(2+i*2)*tileSize;
			window.width = this.width-2*tileSize;
			window.height = tileSize;
		}

	}

}