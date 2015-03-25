package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxSound;
import flixel.util.FlxRandom;
import haxe.Log;

class Player extends FlxSprite
{
  public var dead:Bool;

  private var stumble:Bool;
	private var jump:Float;
	private var jumpLimit:Float;

	private var sfx_feet:Array<FlxSound>;
	private var sfx_jump:FlxSound;
  private var sfx_tumble:FlxSound;

  public var epitaph:String;

  private var fc:Float;
  private var ft:Float;

	public function new(x:Int, y:Int):Void
	{	
    super(x,y);

		loadGraphic("assets/images/player.png", true, 30, 30);

		animation.add("run1", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15], 15);
		animation.add("run2", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15], 28);
		animation.add("run3", [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15], 40);
		animation.add("run4", [0,2,4,6,8,10,12,14], 30);
		animation.add("jump", [16,17,18,19], 12, false);
		animation.add("fall", [20,21,22,23,24,25,26], 14);
		animation.add("stumble1", [27,28,29,30,31,32,33,34,35,36,37], 14);
		animation.add("stumble2", [27,28,29,30,31,32,33,34,35,36,37], 21);
		animation.add("stumble3", [27,28,29,30,31,32,33,34,35,36,37], 28);
		animation.add("stumble4", [27,28,29,30,31,32,33,34,35,36,37], 35);

		//drag.x = 640;

		acceleration.x = 1;
    acceleration.y = 1200;
    maxVelocity.x = 1000;
    maxVelocity.y = 360;
    velocity.x = 125;
    jump = 0;
    stumble = false;
    fc = 0;

    epitaph = "fall";

    //Feet sounds
    sfx_feet = new Array<FlxSound>();
    for (i in 1...2)
    {
    	sfx_feet.push(FlxG.sound.load("assets/sounds/foot" + i + ".wav"));
    }
    
    /*
    sfx_jump = new Array<FlxSound>();
    for (i in 1...2)
    {
      sfx_jump.push(FlxG.sound.load("assets/sounds/jump" + i + ".wav"));
    }*/

    sfx_jump = FlxG.sound.load("assets/sounds/jump1.wav");
    sfx_tumble = FlxG.sound.load("assets/sounds/tumble.wav");
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{	
		if (y > 300) {
    		dead = true;
    		return;
  		}

    if (acceleration.x <= 0)
      return super.update();

    //var indexFeet:Int = FlxRandom.intRanged(0,1);
    //Log.trace("indexFeet " + indexFeet);
    //indexFeet = 0;
  	//sfx_feet[indexFeet].play();

    if (velocity.x < 0) velocity.x = 0;
    else if (velocity.x < 100) acceleration.x = 60;
    else if (velocity.x < 250) acceleration.x = 36;
    else if (velocity.x < 400) acceleration.x = 24;
    else if (velocity.x < 600) acceleration.x = 12;
    else acceleration.x = 4;

  	//Jumping
  	jumpLimit = velocity.x / (maxVelocity.x * 2.5);
    
  	if (jumpLimit > 0.35) 
  		jumpLimit = 0.35;

  	if (jump >= 0 && FlxG.mouse.pressed) 
    { 
      // iOS / Android || FlxG.touches.getFirst().pressed)) { //&& FlxG.touches.touching) {
			 
      if (jump == 0) {
		    //sfx_jump[1].play();
        sfx_jump.play();
			}

      jump += FlxG.elapsed;

      //Log.trace("jump " + jump);
      //Log.trace("jumpLimit " + jumpLimit);

    	if (jump > jumpLimit) {
        //Log.trace("llego al limite");
      	jump = -1;
      }
  	}
  	else
    	jump = -1;

    if (jump > 0) {
    	if (jump < 0.08)
     			velocity.y = -maxVelocity.y*0.65;
    	else
     			velocity.y = -maxVelocity.y;
  	}

    if (velocity.y < -140)
      animation.play("jump");
    else if (velocity.y > 0) {
      animation.play("fall");
      stumble = false;
    }
    else
    {
      //Running
      ft = (1 - velocity.x / maxVelocity.x) * 0.35;
      if (ft < 0.15) ft = 0.15;
      fc += FlxG.elapsed;
      if (fc > ft) {
        fc = 0;
        //sfx_feet[FlxRandom.intRanged(0,1)].play();
        sfx_feet[0].play();
      }

      //Log.trace("stumble " + stumble);

      if (!stumble) {
        // Normal running
        if (velocity.x < 150)
          animation.play("run1");
        else if (velocity.x < 300)
                animation.play("run2");
        else if (velocity.x < 550) 
                animation.play("run3");
        else 
          animation.play("run4");
      }
    }

  	super.update();

  	/*if (velocity.y == maxVelocity.y)
    	my += FlxG.elapsed;*/

  }

  public function onFloor()
  {

    //Log.trace("velocity.x " + velocity.x);

    if (velocity.x > 0)
    {
      jump = 0;
    }
  }

  public function setStumble()
  {
    sfx_tumble.play();

    stumble = true;
    velocity.x = velocity.x * 0.7;

  }

  /*
  private function movement()
  {
    var pressed:Bool = FlxG.mouse.justPressed;
    if (pressed)
    {
      FlxG.log.add(" " + this.y);
    }
  }*/
}