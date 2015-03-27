package;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;
import flixel.tile.FlxTileblock;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import haxe.Log;

class Building extends FlxObject
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
	private static var DEC_SIZE:Int = 20;
	private static var ASSETS_IMAGES = "assets/images/";

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

	public static function create(numTiles:Int, startY:Int):FlxSpriteGroup
	{
		var type = FlxRandom.intRanged(1, 4);
		var renderLayer:FlxSpriteGroup = new FlxSpriteGroup();

		var numRows:Int = TILE_SIZE * 20;

		var roofLeft:FlxSprite = new FlxSprite(0, startY);
		roofLeft.loadGraphic( ASSETS_IMAGES + "roof" + type + "-left.png", false, TILE_SIZE, TILE_SIZE);
		roofLeft.immovable = true;
		renderLayer.add(roofLeft);

		var roofRight:FlxSprite = new FlxSprite(TILE_SIZE * numTiles, startY);
		roofRight.loadGraphic( ASSETS_IMAGES + "roof" + type + "-right.png", false, TILE_SIZE, TILE_SIZE);
		roofRight.immovable = true;
		renderLayer.add(roofRight);

		for (j in 1...numTiles)
		{
			var roofMiddle:FlxSprite = new FlxSprite(j * TILE_SIZE, startY);
			roofMiddle.loadGraphic(ASSETS_IMAGES + "roof" + type + "-middle.png", false, TILE_SIZE, TILE_SIZE);
			roofMiddle.immovable = true;
			renderLayer.add(roofMiddle);
		}

		var wallLeft:FlxTileblock = new FlxTileblock(0, startY + TILE_SIZE, TILE_SIZE, numRows);
		wallLeft.loadTiles( ASSETS_IMAGES + "wall" + type + "-left.png", TILE_SIZE, TILE_SIZE);
		wallLeft.immovable = true;
		renderLayer.add(wallLeft);

		var wallMiddle:FlxTileblock = new FlxTileblock(TILE_SIZE, startY + TILE_SIZE, (numTiles-1) * TILE_SIZE, numRows);
		wallMiddle.loadTiles( ASSETS_IMAGES + "wall" + type + "-middle.png", TILE_SIZE, TILE_SIZE);
		wallMiddle.immovable = true;
		renderLayer.add(wallMiddle);

		var wallRight:FlxTileblock = new FlxTileblock(TILE_SIZE * numTiles, startY + TILE_SIZE, TILE_SIZE, numRows);
		wallRight.loadTiles( ASSETS_IMAGES + "wall" + type + "-right.png", TILE_SIZE, TILE_SIZE);
		wallRight.immovable = true;
		renderLayer.add(wallRight);

		for (i in 0...10)
		{
			var window:FlxTileblock = new FlxTileblock(TILE_SIZE, startY + TILE_SIZE * 2 + 2 * i * TILE_SIZE, (numTiles -1) * TILE_SIZE, TILE_SIZE);
			window.loadTiles(ASSETS_IMAGES + "window2.png", TILE_SIZE, TILE_SIZE);
			window.immovable = true;
			renderLayer.add(window);
		}

		return renderLayer;
	}

	public static function createRect(numTiles:Int, startY:Int):FlxSpriteGroup
	{	
		var collisionLayer:FlxSpriteGroup = new FlxSpriteGroup();
		
		var rect:FlxSprite = new FlxSprite(0, startY);
		rect.makeGraphic(numTiles * TILE_SIZE ,20 * TILE_SIZE, 0xffffffff);
		collisionLayer.add(rect);

		rect.immovable = true;

		return collisionLayer;
	}

	public static function createDecorate(x:Float, y:Float, width:Int):FlxSpriteGroup
	{
		var decorateLayer:FlxSpriteGroup = new FlxSpriteGroup();

		var s:Int = 40;
  		var n:Int = Std.int(width/s);

  		for (i in 1...n)
  		{
    		if (FlxRandom.float() < 0.3)
    		{
    			var sprite:FlxSprite = new FlxSprite(x + DEC_SIZE + s * i, y - DEC_SIZE, ASSETS_IMAGES + "ac-trimmed.png");
    			decorateLayer.add(sprite);
    		}
      	}	

		return decorateLayer;
	}
}