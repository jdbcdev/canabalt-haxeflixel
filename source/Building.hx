package;

import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.tile.FlxTileblock;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import haxe.Log;

class Building extends FlxSpriteGroup
{
	//private var leftEdge:FlxTileblock;
	//private var rightEdge:FlxTileblock;
	//private var topEdge:FlxTileblock;

	private var leftCorner:FlxSprite;
	private var rightCorner:FlxSprite;

	private static var leftWalls:Array<String>;
	private static var rightWalls:Array<String>;
	private static var middleWalls:Array<String>;
	private static var leftWallsCracked:Array<String>;
	private static var middleWallsCracked:Array<String>;
	private static var rightWallsCracked:Array<String>;

	private static var leftFloors:Array<String>;
	private static var middleFloors:Array<String>;
	private static var rightFloors:Array<String>;

	private static var leftRoofs:Array<String>;
	private static var middleRoofs:Array<String>;
	private static var rightRoofs:Array<String>;

	private static var leftRoofsCracked:Array<String>;
	private static var middleRoofsCracked:Array<String>;
	private static var rightRoofsCracked:Array<String>;

	private static var windowImages:Array<String>;

	private static var TILE_SIZE:Int = 16;
	private static var ASSETS_IMAGES = "assets/images/";

	/*enum Building_Type {
  		ROOF;
  		HALLWAY;
  		COLLAPSE;
  		BOMB;
  		CRANE;
  		BILLBOARD;
  		LEG;
	}*/

	public static function initialize(){

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

		leftWallsCracked = ["wall1-left-cracked.png",
					 		"wall2-left-cracked.png",
					 		"wall3-left-cracked.png",
					 		"wall4-left-cracked.png"];		

		middleWallsCracked = ["wall1-middle-cracked.png",
	     			 		  "wall2-middle-cracked.png",
					 		  "wall3-middle-cracked.png",
					 		  "wall4-middle-cracked.png"];

		rightWallsCracked = ["wall1-right-cracked.png",
					 		"wall2-right-cracked.png",
					 		"wall3-right-cracked.png",
					 		"wall4-right-cracked.png"];

		leftRoofs = ["roof1-left.png", 
					 "roof2-left.png",
					 "roof3-left.png",
					 "roof4-left.png"];

		middleRoofs = ["roof1-middle.png",
					   "roof2-middle.png",
					   "roof3-middle.png",
					   "roof4-middle.png"];

		rightRoofs = ["roof1-right.png", 
					 "roof2-right.png",
					 "roof3-right.png",
					 "roof4-right.png"];

		leftRoofsCracked = ["roof1-left-cracked.png", 
					 		"roof2-left-cracked.png",
					 		"roof3-left-cracked.png",
					 		"roof4-left-cracked.png",
					 		"roof5-left-cracked.png",
					 		"roof6-left-cracked.png"];

		middleRoofsCracked = ["roof1-middle-cracked.png", 
					 		  "roof2-middle-cracked.png",
					 		  "roof3-middle-cracked.png",
					 		  "roof4-middle-cracked.png",
					 		  "roof5-middle-cracked.png",
					 		  "roof6-middle-cracked.png"];

		rightRoofsCracked = ["roof1-right-cracked.png", 
					 		 "roof2-right-cracked.png",
					 		 "roof3-right-cracked.png",
					 		 "roof4-right-cracked.png",
					 		 "roof5-right-cracked.png",
					 		 "roof6-right-cracked.png"];

		windowImages = ["window1.png", 
						"window2.png",
						"window3.png",
						"window4.png"];
	}

	public function initWithMaxWidth(maxWidth:Int)
	{
		//leftEdge = new FlxTileblock(0, 0, TILE_SIZE, 400-TILE_SIZE);
		//leftEdge.loadTiles(ASSETS_IMAGES + leftWalls[1]);
		//add(leftEdge);

		//rightEdge = new FlxTileblock(0, 0, TILE_SIZE, 400-TILE_SIZE);
		//rightEdge.loadTiles(ASSETS_IMAGES + rightWalls[1]);
		//add(rightEdge);
    	
    	//topEdge = new FlxTileblock(0, 0, maxWidth - TILE_SIZE * 2, TILE_SIZE);
    	//topEdge.loadTiles(ASSETS_IMAGES + middleRoofs[1]);
    	//add(topEdge);
	}

	public function createWithX(x:Float, y:Float, width:Float, height:Float, wallType:Int, windowType:Int)
	{
		this.x = x;
		this.y = y;
		this.width = width;
		this.height = 400;

		Log.trace("width " + width);
		Log.trace("height " + height);

		velocity.y = 0;
  		acceleration.y = 0;

  		/*leftEdge.x = this.x;
  		leftEdge.y = this.y + TILE_SIZE;
  		leftEdge.width = TILE_SIZE;
  		leftEdge.height = this.height - TILE_SIZE;

  		rightEdge.x = this.x + this.width - TILE_SIZE;
  		rightEdge.y = this.y + TILE_SIZE;
  		rightEdge.width = TILE_SIZE;
  		rightEdge.height = this.height - TILE_SIZE;*/
	}

	public function create(startY:Int)
	{
		var numTiles:Int = FlxRandom.intRanged(30, 50);

		var roofLeft:FlxTileblock = new FlxTileblock(0, startY, TILE_SIZE, TILE_SIZE);
		roofLeft.loadGraphic( ASSETS_IMAGES + "roof1-left.png", TILE_SIZE, TILE_SIZE);
		roofLeft.immovable = true;
		add(roofLeft);

		var roofMiddle:FlxTileblock = new FlxTileblock(TILE_SIZE, startY, numTiles * TILE_SIZE, TILE_SIZE);
		roofMiddle.loadTiles( ASSETS_IMAGES + "roof1-middle-cracked.png", TILE_SIZE, TILE_SIZE);
		roofMiddle.immovable = true;
		add(roofMiddle);

		var roofRight:FlxTileblock = new FlxTileblock(TILE_SIZE * (numTiles + 1), startY, TILE_SIZE, TILE_SIZE);
		roofRight.loadGraphic( ASSETS_IMAGES + "roof1-right.png", TILE_SIZE, TILE_SIZE);
		roofRight.immovable = true;
		add(roofRight);

		var wallLeft:FlxTileblock = new FlxTileblock(0, startY + TILE_SIZE, TILE_SIZE, TILE_SIZE * 20);
		wallLeft.loadTiles( ASSETS_IMAGES + "wall1-left.png", TILE_SIZE, TILE_SIZE);
		wallLeft.immovable = true;
		add(wallLeft);

		var wallMiddle:FlxTileblock = new FlxTileblock(TILE_SIZE, startY + TILE_SIZE, numTiles * TILE_SIZE, TILE_SIZE * 20);
		wallMiddle.loadTiles( ASSETS_IMAGES + "wall1-middle-cracked.png", TILE_SIZE, TILE_SIZE);
		wallMiddle.immovable = true;
		add(wallMiddle);

		for (i in 0...10)
		{
			var window:FlxTileblock = new FlxTileblock(TILE_SIZE, startY + TILE_SIZE * 2 + 2 * i * TILE_SIZE, numTiles * TILE_SIZE, TILE_SIZE);
			window.loadTiles(ASSETS_IMAGES + "window2.png", TILE_SIZE, TILE_SIZE);
			window.immovable = true;
			add(window);
		}

		var wallRight:FlxTileblock = new FlxTileblock(TILE_SIZE * (numTiles + 1), startY + TILE_SIZE, TILE_SIZE, TILE_SIZE * 20);
		wallRight.loadTiles( ASSETS_IMAGES + "wall1-right.png", TILE_SIZE, TILE_SIZE);
		wallRight.immovable = true;
		add(wallRight);

	}

	public function createRect(startY:Int)
	{	
		var numTiles:Int = FlxRandom.intRanged(30, 50);
		
		var rect:FlxSprite = new FlxSprite(0, startY);
		rect.makeGraphic(numTiles * TILE_SIZE ,20 * TILE_SIZE, 0xffffffff);
		add(rect);

		rect.immovable = true;
	}
}