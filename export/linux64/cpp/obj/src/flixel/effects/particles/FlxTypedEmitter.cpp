#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_Bounds
#include <flixel/effects/particles/Bounds.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxTypedEmitter_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","new",0x3e1a9dc9,"flixel.effects.particles.FlxTypedEmitter.new","flixel/effects/particles/FlxTypedEmitter.hx",23,0xb8028a0a)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(142)
	this->_waitForKill = false;
	HX_STACK_LINE(134)
	this->_counter = (int)0;
	HX_STACK_LINE(130)
	this->_timer = (int)0;
	HX_STACK_LINE(126)
	this->_explode = true;
	HX_STACK_LINE(122)
	this->_quantity = (int)0;
	HX_STACK_LINE(114)
	this->bounce = (int)0;
	HX_STACK_LINE(64)
	this->frequency = 0.1;
	HX_STACK_LINE(60)
	this->on = false;
	HX_STACK_LINE(154)
	super::__construct(Size);
	HX_STACK_LINE(156)
	::flixel::effects::particles::Bounds _g = ::flixel::effects::particles::Bounds_obj::__new(X,(int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(156)
	this->xPosition = _g;
	HX_STACK_LINE(157)
	::flixel::effects::particles::Bounds _g1 = ::flixel::effects::particles::Bounds_obj::__new(Y,(int)0);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(157)
	this->yPosition = _g1;
	HX_STACK_LINE(158)
	::flixel::effects::particles::Bounds _g2 = ::flixel::effects::particles::Bounds_obj::__new((int)-100,(int)100);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(158)
	this->xVelocity = _g2;
	HX_STACK_LINE(159)
	::flixel::effects::particles::Bounds _g3 = ::flixel::effects::particles::Bounds_obj::__new((int)-100,(int)100);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(159)
	this->yVelocity = _g3;
	HX_STACK_LINE(160)
	::flixel::effects::particles::Bounds _g4 = ::flixel::effects::particles::Bounds_obj::__new((int)-360,(int)360);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(160)
	this->rotation = _g4;
	HX_STACK_LINE(161)
	::flixel::effects::particles::Bounds _g5 = ::flixel::effects::particles::Bounds_obj::__new((int)1,(int)1);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(161)
	this->startScale = _g5;
	HX_STACK_LINE(162)
	::flixel::effects::particles::Bounds _g6 = ::flixel::effects::particles::Bounds_obj::__new((int)1,(int)1);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(162)
	this->endScale = _g6;
	HX_STACK_LINE(163)
	::flixel::effects::particles::Bounds _g7 = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(163)
	this->startAlpha = _g7;
	HX_STACK_LINE(164)
	::flixel::effects::particles::Bounds _g8 = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(164)
	this->endAlpha = _g8;
	HX_STACK_LINE(165)
	::flixel::effects::particles::Bounds _g9 = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(165)
	this->startRed = _g9;
	HX_STACK_LINE(166)
	::flixel::effects::particles::Bounds _g10 = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(166)
	this->startGreen = _g10;
	HX_STACK_LINE(167)
	::flixel::effects::particles::Bounds _g11 = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(167)
	this->startBlue = _g11;
	HX_STACK_LINE(168)
	::flixel::effects::particles::Bounds _g12 = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(168)
	this->endRed = _g12;
	HX_STACK_LINE(169)
	::flixel::effects::particles::Bounds _g13 = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(169)
	this->endGreen = _g13;
	HX_STACK_LINE(170)
	::flixel::effects::particles::Bounds _g14 = ::flixel::effects::particles::Bounds_obj::__new(1.0,1.0);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(170)
	this->endBlue = _g14;
	HX_STACK_LINE(172)
	::flixel::util::FlxPoint _g15;		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(172)
		point->_inPool = false;
		HX_STACK_LINE(172)
		_g15 = point;
	}
	HX_STACK_LINE(172)
	this->acceleration = _g15;
	HX_STACK_LINE(173)
	this->_particleClass = hx::ClassOf< ::flixel::effects::particles::FlxParticle >();
	HX_STACK_LINE(174)
	::flixel::util::FlxPoint _g16;		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(174)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(174)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(174)
		point->_inPool = false;
		HX_STACK_LINE(174)
		_g16 = point;
	}
	HX_STACK_LINE(174)
	this->particleDrag = _g16;
	HX_STACK_LINE(176)
	::flixel::effects::particles::Bounds _g17 = ::flixel::effects::particles::Bounds_obj::__new((int)3,(int)3);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(176)
	this->life = _g17;
	HX_STACK_LINE(177)
	this->set_exists(false);
	HX_STACK_LINE(178)
	::flixel::util::FlxPoint _g18;		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(178)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(178)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(178)
		point->_inPool = false;
		HX_STACK_LINE(178)
		_g18 = point;
	}
	HX_STACK_LINE(178)
	this->_point = _g18;
}
;
	return null();
}

//FlxTypedEmitter_obj::~FlxTypedEmitter_obj() { }

Dynamic FlxTypedEmitter_obj::__CreateEmpty() { return  new FlxTypedEmitter_obj; }
hx::ObjectPtr< FlxTypedEmitter_obj > FlxTypedEmitter_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxTypedEmitter_obj > result = new FlxTypedEmitter_obj();
	result->__construct(__o_X,__o_Y,__o_Size);
	return result;}

Dynamic FlxTypedEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedEmitter_obj > result = new FlxTypedEmitter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxTypedEmitter_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","destroy",0x574a62e3,"flixel.effects.particles.FlxTypedEmitter.destroy","flixel/effects/particles/FlxTypedEmitter.hx",185,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->_point);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		this->_point = _g;
		HX_STACK_LINE(187)
		::flixel::util::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->acceleration);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(187)
		this->acceleration = _g1;
		HX_STACK_LINE(188)
		::flixel::util::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->particleDrag);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(188)
		this->particleDrag = _g2;
		HX_STACK_LINE(190)
		this->xPosition = null();
		HX_STACK_LINE(191)
		this->yPosition = null();
		HX_STACK_LINE(192)
		this->xVelocity = null();
		HX_STACK_LINE(193)
		this->yVelocity = null();
		HX_STACK_LINE(194)
		this->rotation = null();
		HX_STACK_LINE(195)
		this->startScale = null();
		HX_STACK_LINE(196)
		this->endScale = null();
		HX_STACK_LINE(197)
		this->startAlpha = null();
		HX_STACK_LINE(198)
		this->endAlpha = null();
		HX_STACK_LINE(199)
		this->startRed = null();
		HX_STACK_LINE(200)
		this->startGreen = null();
		HX_STACK_LINE(201)
		this->startBlue = null();
		HX_STACK_LINE(202)
		this->endRed = null();
		HX_STACK_LINE(203)
		this->endGreen = null();
		HX_STACK_LINE(204)
		this->endBlue = null();
		HX_STACK_LINE(205)
		this->blend = null();
		HX_STACK_LINE(206)
		this->_point = null();
		HX_STACK_LINE(208)
		this->super::destroy();
	}
return null();
}


::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::makeParticles( Dynamic Graphics,hx::Null< int >  __o_Quantity,hx::Null< int >  __o_bakedRotationAngles,hx::Null< bool >  __o_Multiple,hx::Null< Float >  __o_Collide,hx::Null< bool >  __o_AutoBuffer){
int Quantity = __o_Quantity.Default(50);
int bakedRotationAngles = __o_bakedRotationAngles.Default(16);
bool Multiple = __o_Multiple.Default(false);
Float Collide = __o_Collide.Default(0.8);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","makeParticles",0xf3914248,"flixel.effects.particles.FlxTypedEmitter.makeParticles","flixel/effects/particles/FlxTypedEmitter.hx",223,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphics,"Graphics")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(bakedRotationAngles,"bakedRotationAngles")
	HX_STACK_ARG(Multiple,"Multiple")
	HX_STACK_ARG(Collide,"Collide")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(224)
		this->set_maxSize(Quantity);
		HX_STACK_LINE(225)
		int totalFrames = (int)1;		HX_STACK_VAR(totalFrames,"totalFrames");
		HX_STACK_LINE(227)
		if ((Multiple)){
			HX_STACK_LINE(229)
			::flixel::FlxSprite sprite = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(230)
			sprite->loadGraphic(Graphics,true,null(),null(),null(),null());
			HX_STACK_LINE(231)
			totalFrames = sprite->frames;
			HX_STACK_LINE(232)
			sprite->destroy();
		}
		HX_STACK_LINE(235)
		int randomFrame;		HX_STACK_VAR(randomFrame,"randomFrame");
		HX_STACK_LINE(236)
		Dynamic particle;		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(237)
		::Class pClass = this->_particleClass;		HX_STACK_VAR(pClass,"pClass");
		HX_STACK_LINE(238)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(240)
		while((true)){
			HX_STACK_LINE(240)
			if ((!(((i < Quantity))))){
				HX_STACK_LINE(240)
				break;
			}
			HX_STACK_LINE(242)
			Dynamic _g = ::Type_obj::createInstance(pClass,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(242)
			particle = _g;
			HX_STACK_LINE(244)
			if ((Multiple)){
				HX_STACK_LINE(246)
				int _g1 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(totalFrames - (int)1),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(246)
				randomFrame = _g1;
				HX_STACK_LINE(248)
				if (((bakedRotationAngles > (int)0))){
					HX_STACK_LINE(253)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,true,null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(258)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,true,null(),null(),null(),null());
				}
				HX_STACK_LINE(260)
				particle->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("set_frameIndex"),true)(randomFrame);
			}
			else{
				HX_STACK_LINE(264)
				if (((bakedRotationAngles > (int)0))){
					HX_STACK_LINE(269)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(274)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,null(),null(),null(),null(),null());
				}
			}
			HX_STACK_LINE(277)
			if (((Collide > (int)0))){
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					Dynamic _g1 = particle;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(279)
					Float _g2 = _g1->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(279)
					Float _g3 = (_g2 * Collide);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(279)
					_g1->__Field(HX_CSTRING("set_width"),true)(_g3);
				}
				HX_STACK_LINE(280)
				{
					HX_STACK_LINE(280)
					Dynamic _g1 = particle;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(280)
					Float _g4 = _g1->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(280)
					Float _g5 = (_g4 * Collide);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(280)
					_g1->__Field(HX_CSTRING("set_height"),true)(_g5);
				}
				HX_STACK_LINE(281)
				particle->__Field(HX_CSTRING("centerOffsets"),true)(null());
			}
			else{
				HX_STACK_LINE(285)
				particle->__FieldRef(HX_CSTRING("allowCollisions")) = (int)0;
			}
			HX_STACK_LINE(288)
			particle->__Field(HX_CSTRING("set_exists"),true)(false);
			HX_STACK_LINE(289)
			this->add(particle);
			HX_STACK_LINE(290)
			(i)++;
		}
		HX_STACK_LINE(292)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC6(FlxTypedEmitter_obj,makeParticles,return )

Void FlxTypedEmitter_obj::update( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","update",0x6f244040,"flixel.effects.particles.FlxTypedEmitter.update","flixel/effects/particles/FlxTypedEmitter.hx",299,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(300)
		if ((this->on)){
			HX_STACK_LINE(302)
			if ((this->_explode)){
				HX_STACK_LINE(304)
				this->on = false;
				HX_STACK_LINE(305)
				this->_waitForKill = true;
				HX_STACK_LINE(307)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(308)
				int l = this->_quantity;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(310)
				if (((bool((l <= (int)0)) || bool((l > this->length))))){
					HX_STACK_LINE(312)
					l = this->length;
				}
				HX_STACK_LINE(315)
				while((true)){
					HX_STACK_LINE(315)
					if ((!(((i < l))))){
						HX_STACK_LINE(315)
						break;
					}
					HX_STACK_LINE(317)
					this->emitParticle();
					HX_STACK_LINE(318)
					(i)++;
				}
				HX_STACK_LINE(321)
				this->_quantity = (int)0;
			}
			else{
				HX_STACK_LINE(326)
				if (((this->frequency <= (int)0))){
					HX_STACK_LINE(328)
					this->emitParticle();
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::flixel::effects::particles::FlxTypedEmitter_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxTypedEmitter.hx",330,0xb8028a0a)
							{
								HX_STACK_LINE(330)
								int _g = ++(__this->_counter);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(330)
								return (_g >= __this->_quantity);
							}
							return null();
						}
					};
					HX_STACK_LINE(330)
					if (((  (((this->_quantity > (int)0))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
						HX_STACK_LINE(332)
						this->on = false;
						HX_STACK_LINE(333)
						this->_waitForKill = true;
						HX_STACK_LINE(334)
						this->_quantity = (int)0;
					}
				}
				else{
					HX_STACK_LINE(339)
					hx::AddEq(this->_timer,::flixel::FlxG_obj::elapsed);
					HX_STACK_LINE(341)
					while((true)){
						HX_STACK_LINE(341)
						if ((!(((this->_timer > this->frequency))))){
							HX_STACK_LINE(341)
							break;
						}
						HX_STACK_LINE(343)
						hx::SubEq(this->_timer,this->frequency);
						HX_STACK_LINE(344)
						this->emitParticle();
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::flixel::effects::particles::FlxTypedEmitter_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxTypedEmitter.hx",346,0xb8028a0a)
								{
									HX_STACK_LINE(346)
									int _g1 = ++(__this->_counter);		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(346)
									return (_g1 >= __this->_quantity);
								}
								return null();
							}
						};
						HX_STACK_LINE(346)
						if (((  (((this->_quantity > (int)0))) ? bool(_Function_5_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(348)
							this->on = false;
							HX_STACK_LINE(349)
							this->_waitForKill = true;
							HX_STACK_LINE(350)
							this->_quantity = (int)0;
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(356)
			if ((this->_waitForKill)){
				HX_STACK_LINE(358)
				hx::AddEq(this->_timer,::flixel::FlxG_obj::elapsed);
				HX_STACK_LINE(360)
				if (((bool((this->life->max > (int)0)) && bool((this->_timer > this->life->max))))){
					HX_STACK_LINE(362)
					this->kill();
					HX_STACK_LINE(363)
					return null();
				}
			}
		}
		HX_STACK_LINE(367)
		this->super::update();
	}
return null();
}


Void FlxTypedEmitter_obj::kill( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","kill",0x1736ce15,"flixel.effects.particles.FlxTypedEmitter.kill","flixel/effects/particles/FlxTypedEmitter.hx",374,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(375)
		this->on = false;
		HX_STACK_LINE(376)
		this->_waitForKill = false;
		HX_STACK_LINE(378)
		this->super::kill();
	}
return null();
}


Void FlxTypedEmitter_obj::start( hx::Null< bool >  __o_Explode,hx::Null< Float >  __o_Lifespan,hx::Null< Float >  __o_Frequency,hx::Null< int >  __o_Quantity,hx::Null< Float >  __o_LifespanRange){
bool Explode = __o_Explode.Default(true);
Float Lifespan = __o_Lifespan.Default(0);
Float Frequency = __o_Frequency.Default(0.1);
int Quantity = __o_Quantity.Default(0);
Float LifespanRange = __o_LifespanRange.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","start",0xdb2f2e0b,"flixel.effects.particles.FlxTypedEmitter.start","flixel/effects/particles/FlxTypedEmitter.hx",390,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Explode,"Explode")
	HX_STACK_ARG(Lifespan,"Lifespan")
	HX_STACK_ARG(Frequency,"Frequency")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(LifespanRange,"LifespanRange")
{
		HX_STACK_LINE(391)
		this->revive();
		HX_STACK_LINE(392)
		this->set_visible(true);
		HX_STACK_LINE(393)
		this->on = true;
		HX_STACK_LINE(395)
		this->_explode = Explode;
		HX_STACK_LINE(396)
		this->life->min = Lifespan;
		HX_STACK_LINE(397)
		Float _g = ::Math_obj::abs(LifespanRange);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(397)
		Float _g1 = (Lifespan + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(397)
		this->life->max = _g1;
		HX_STACK_LINE(398)
		this->frequency = Frequency;
		HX_STACK_LINE(399)
		hx::AddEq(this->_quantity,Quantity);
		HX_STACK_LINE(401)
		this->_counter = (int)0;
		HX_STACK_LINE(402)
		this->_timer = (int)0;
		HX_STACK_LINE(404)
		this->_waitForKill = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypedEmitter_obj,start,(void))

Void FlxTypedEmitter_obj::emitParticle( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","emitParticle",0xe36e6130,"flixel.effects.particles.FlxTypedEmitter.emitParticle","flixel/effects/particles/FlxTypedEmitter.hx",411,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(412)
		Dynamic particle = this->recycle(this->_particleClass,null(),null(),null());		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(413)
		particle->__FieldRef(HX_CSTRING("elasticity")) = this->bounce;
		HX_STACK_LINE(415)
		Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(415)
		Float _g1 = particle->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(415)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(415)
		int _g3 = (int(_g2) >> int((int)1));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(415)
		Float _g4 = (_g - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(415)
		int _g5 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(415)
		Float _g6 = (Float(_g5) / Float((int)2147483647));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(415)
		Float _g7 = this->get_width();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(415)
		Float _g8 = (_g6 * _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(415)
		Float _g9 = (_g4 + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(415)
		Float _g10 = this->get_y();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(415)
		Float _g11 = particle->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(415)
		int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(415)
		int _g13 = (int(_g12) >> int((int)1));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(415)
		Float _g14 = (_g10 - _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(415)
		int _g15 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(415)
		Float _g16 = (Float(_g15) / Float((int)2147483647));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(415)
		Float _g17 = this->get_height();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(415)
		Float _g18 = (_g16 * _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(415)
		Float _g19 = (_g14 + _g18);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(415)
		particle->__Field(HX_CSTRING("reset"),true)(_g9,_g19);
		HX_STACK_LINE(416)
		particle->__Field(HX_CSTRING("set_visible"),true)(true);
		HX_STACK_LINE(418)
		if (((this->life->min != this->life->max))){
			HX_STACK_LINE(420)
			int _g20 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(420)
			Float _g21 = (Float(_g20) / Float((int)2147483647));		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(420)
			Float _g22 = (_g21 * ((this->life->max - this->life->min)));		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(420)
			Float _g23 = (this->life->min + _g22);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(420)
			Float _g24 = particle->__FieldRef(HX_CSTRING("maxLifespan")) = _g23;		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(420)
			particle->__FieldRef(HX_CSTRING("lifespan")) = _g24;
		}
		else{
			HX_STACK_LINE(424)
			Float _g25 = particle->__FieldRef(HX_CSTRING("maxLifespan")) = this->life->min;		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(424)
			particle->__FieldRef(HX_CSTRING("lifespan")) = _g25;
		}
		HX_STACK_LINE(427)
		if (((this->startAlpha->min != this->startAlpha->max))){
			HX_STACK_LINE(429)
			int _g26 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(429)
			Float _g27 = (Float(_g26) / Float((int)2147483647));		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(429)
			Float _g28 = (_g27 * ((this->startAlpha->max - this->startAlpha->min)));		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(429)
			Float _g29 = (this->startAlpha->min + _g28);		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(429)
			particle->__FieldRef(HX_CSTRING("startAlpha")) = _g29;
		}
		else{
			HX_STACK_LINE(433)
			particle->__FieldRef(HX_CSTRING("startAlpha")) = this->startAlpha->min;
		}
		HX_STACK_LINE(435)
		particle->__Field(HX_CSTRING("set_alpha"),true)(particle->__Field(HX_CSTRING("startAlpha"),true));
		HX_STACK_LINE(437)
		Float particleEndAlpha = this->endAlpha->min;		HX_STACK_VAR(particleEndAlpha,"particleEndAlpha");
		HX_STACK_LINE(438)
		if (((this->endAlpha->min != this->endAlpha->max))){
			HX_STACK_LINE(440)
			int _g30 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(440)
			Float _g31 = (Float(_g30) / Float((int)2147483647));		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(440)
			Float _g32 = (_g31 * ((this->endAlpha->max - this->endAlpha->min)));		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(440)
			Float _g33 = (this->endAlpha->min + _g32);		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(440)
			particleEndAlpha = _g33;
		}
		HX_STACK_LINE(443)
		if (((particleEndAlpha != particle->__Field(HX_CSTRING("startAlpha"),true)))){
			HX_STACK_LINE(445)
			particle->__FieldRef(HX_CSTRING("useFading")) = true;
			HX_STACK_LINE(446)
			particle->__FieldRef(HX_CSTRING("rangeAlpha")) = (particleEndAlpha - particle->__Field(HX_CSTRING("startAlpha"),true));
		}
		else{
			HX_STACK_LINE(450)
			particle->__FieldRef(HX_CSTRING("useFading")) = false;
			HX_STACK_LINE(451)
			particle->__FieldRef(HX_CSTRING("rangeAlpha")) = (int)0;
		}
		HX_STACK_LINE(455)
		Float startRedComp = particle->__FieldRef(HX_CSTRING("startRed")) = this->startRed->min;		HX_STACK_VAR(startRedComp,"startRedComp");
		HX_STACK_LINE(456)
		Float startGreenComp = particle->__FieldRef(HX_CSTRING("startGreen")) = this->startGreen->min;		HX_STACK_VAR(startGreenComp,"startGreenComp");
		HX_STACK_LINE(457)
		Float startBlueComp = particle->__FieldRef(HX_CSTRING("startBlue")) = this->startBlue->min;		HX_STACK_VAR(startBlueComp,"startBlueComp");
		HX_STACK_LINE(459)
		Float endRedComp = this->endRed->min;		HX_STACK_VAR(endRedComp,"endRedComp");
		HX_STACK_LINE(460)
		Float endGreenComp = this->endGreen->min;		HX_STACK_VAR(endGreenComp,"endGreenComp");
		HX_STACK_LINE(461)
		Float endBlueComp = this->endBlue->min;		HX_STACK_VAR(endBlueComp,"endBlueComp");
		HX_STACK_LINE(463)
		if (((this->startRed->min != this->startRed->max))){
			HX_STACK_LINE(465)
			int _g34 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(465)
			Float _g35 = (Float(_g34) / Float((int)2147483647));		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(465)
			Float _g36 = (_g35 * ((this->startRed->max - this->startRed->min)));		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(465)
			Float _g37 = (this->startRed->min + _g36);		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(465)
			Float _g38 = startRedComp = _g37;		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(465)
			particle->__FieldRef(HX_CSTRING("startRed")) = _g38;
		}
		HX_STACK_LINE(467)
		if (((this->startGreen->min != this->startGreen->max))){
			HX_STACK_LINE(469)
			int _g39 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(469)
			Float _g40 = (Float(_g39) / Float((int)2147483647));		HX_STACK_VAR(_g40,"_g40");
			HX_STACK_LINE(469)
			Float _g41 = (_g40 * ((this->startGreen->max - this->startGreen->min)));		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(469)
			Float _g42 = (this->startGreen->min + _g41);		HX_STACK_VAR(_g42,"_g42");
			HX_STACK_LINE(469)
			Float _g43 = startGreenComp = _g42;		HX_STACK_VAR(_g43,"_g43");
			HX_STACK_LINE(469)
			particle->__FieldRef(HX_CSTRING("startGreen")) = _g43;
		}
		HX_STACK_LINE(471)
		if (((this->startBlue->min != this->startBlue->max))){
			HX_STACK_LINE(473)
			int _g44 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g44,"_g44");
			HX_STACK_LINE(473)
			Float _g45 = (Float(_g44) / Float((int)2147483647));		HX_STACK_VAR(_g45,"_g45");
			HX_STACK_LINE(473)
			Float _g46 = (_g45 * ((this->startBlue->max - this->startBlue->min)));		HX_STACK_VAR(_g46,"_g46");
			HX_STACK_LINE(473)
			Float _g47 = (this->startBlue->min + _g46);		HX_STACK_VAR(_g47,"_g47");
			HX_STACK_LINE(473)
			Float _g48 = startBlueComp = _g47;		HX_STACK_VAR(_g48,"_g48");
			HX_STACK_LINE(473)
			particle->__FieldRef(HX_CSTRING("startBlue")) = _g48;
		}
		HX_STACK_LINE(476)
		if (((this->endRed->min != this->endRed->max))){
			HX_STACK_LINE(478)
			int _g49 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g49,"_g49");
			HX_STACK_LINE(478)
			Float _g50 = (Float(_g49) / Float((int)2147483647));		HX_STACK_VAR(_g50,"_g50");
			HX_STACK_LINE(478)
			Float _g51 = (_g50 * ((this->endRed->max - this->endRed->min)));		HX_STACK_VAR(_g51,"_g51");
			HX_STACK_LINE(478)
			Float _g52 = (this->endRed->min + _g51);		HX_STACK_VAR(_g52,"_g52");
			HX_STACK_LINE(478)
			endRedComp = _g52;
		}
		HX_STACK_LINE(481)
		if (((this->endGreen->min != this->endGreen->max))){
			HX_STACK_LINE(483)
			int _g53 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g53,"_g53");
			HX_STACK_LINE(483)
			Float _g54 = (Float(_g53) / Float((int)2147483647));		HX_STACK_VAR(_g54,"_g54");
			HX_STACK_LINE(483)
			Float _g55 = (_g54 * ((this->endGreen->max - this->endGreen->min)));		HX_STACK_VAR(_g55,"_g55");
			HX_STACK_LINE(483)
			Float _g56 = (this->endGreen->min + _g55);		HX_STACK_VAR(_g56,"_g56");
			HX_STACK_LINE(483)
			endGreenComp = _g56;
		}
		HX_STACK_LINE(486)
		if (((this->endBlue->min != this->endBlue->max))){
			HX_STACK_LINE(488)
			int _g57 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g57,"_g57");
			HX_STACK_LINE(488)
			Float _g58 = (Float(_g57) / Float((int)2147483647));		HX_STACK_VAR(_g58,"_g58");
			HX_STACK_LINE(488)
			Float _g59 = (_g58 * ((this->endBlue->max - this->endBlue->min)));		HX_STACK_VAR(_g59,"_g59");
			HX_STACK_LINE(488)
			Float _g60 = (this->endBlue->min + _g59);		HX_STACK_VAR(_g60,"_g60");
			HX_STACK_LINE(488)
			endBlueComp = _g60;
		}
		HX_STACK_LINE(491)
		particle->__FieldRef(HX_CSTRING("rangeRed")) = (endRedComp - startRedComp);
		HX_STACK_LINE(492)
		particle->__FieldRef(HX_CSTRING("rangeGreen")) = (endGreenComp - startGreenComp);
		HX_STACK_LINE(493)
		particle->__FieldRef(HX_CSTRING("rangeBlue")) = (endBlueComp - startBlueComp);
		HX_STACK_LINE(495)
		particle->__FieldRef(HX_CSTRING("useColoring")) = false;
		HX_STACK_LINE(497)
		if (((bool((bool((particle->__Field(HX_CSTRING("rangeRed"),true) != (int)0)) || bool((particle->__Field(HX_CSTRING("rangeGreen"),true) != (int)0)))) || bool((particle->__Field(HX_CSTRING("rangeBlue"),true) != (int)0))))){
			HX_STACK_LINE(499)
			particle->__FieldRef(HX_CSTRING("useColoring")) = true;
		}
		HX_STACK_LINE(502)
		if (((this->startScale->min != this->startScale->max))){
			HX_STACK_LINE(504)
			int _g61 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g61,"_g61");
			HX_STACK_LINE(504)
			Float _g62 = (Float(_g61) / Float((int)2147483647));		HX_STACK_VAR(_g62,"_g62");
			HX_STACK_LINE(504)
			Float _g63 = (_g62 * ((this->startScale->max - this->startScale->min)));		HX_STACK_VAR(_g63,"_g63");
			HX_STACK_LINE(504)
			Float _g64 = (this->startScale->min + _g63);		HX_STACK_VAR(_g64,"_g64");
			HX_STACK_LINE(504)
			particle->__FieldRef(HX_CSTRING("startScale")) = _g64;
		}
		else{
			HX_STACK_LINE(508)
			particle->__FieldRef(HX_CSTRING("startScale")) = this->startScale->min;
		}
		HX_STACK_LINE(510)
		Float _g65 = particle->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("set_y"),true)(particle->__Field(HX_CSTRING("startScale"),true));		HX_STACK_VAR(_g65,"_g65");
		HX_STACK_LINE(510)
		particle->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("set_x"),true)(_g65);
		HX_STACK_LINE(512)
		Float particleEndScale = this->endScale->min;		HX_STACK_VAR(particleEndScale,"particleEndScale");
		HX_STACK_LINE(513)
		if (((this->endScale->min != this->endScale->max))){
			HX_STACK_LINE(515)
			int _g66 = ::Std_obj::_int((this->endScale->max - this->endScale->min));		HX_STACK_VAR(_g66,"_g66");
			HX_STACK_LINE(515)
			int _g67 = ::flixel::util::FlxRandom_obj::intRanged((int)0,_g66,null());		HX_STACK_VAR(_g67,"_g67");
			HX_STACK_LINE(515)
			Float _g68 = (this->endScale->min + _g67);		HX_STACK_VAR(_g68,"_g68");
			HX_STACK_LINE(515)
			particleEndScale = _g68;
		}
		HX_STACK_LINE(518)
		if (((particleEndScale != particle->__Field(HX_CSTRING("startScale"),true)))){
			HX_STACK_LINE(520)
			particle->__FieldRef(HX_CSTRING("useScaling")) = true;
			HX_STACK_LINE(521)
			particle->__FieldRef(HX_CSTRING("rangeScale")) = (particleEndScale - particle->__Field(HX_CSTRING("startScale"),true));
		}
		else{
			HX_STACK_LINE(525)
			particle->__FieldRef(HX_CSTRING("useScaling")) = false;
			HX_STACK_LINE(526)
			particle->__FieldRef(HX_CSTRING("rangeScale")) = (int)0;
		}
		HX_STACK_LINE(529)
		particle->__Field(HX_CSTRING("set_blend"),true)(this->blend);
		HX_STACK_LINE(531)
		if (((this->xVelocity->min != this->xVelocity->max))){
			HX_STACK_LINE(533)
			int _g69 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g69,"_g69");
			HX_STACK_LINE(533)
			Float _g70 = (Float(_g69) / Float((int)2147483647));		HX_STACK_VAR(_g70,"_g70");
			HX_STACK_LINE(533)
			Float _g71 = (_g70 * ((this->xVelocity->max - this->xVelocity->min)));		HX_STACK_VAR(_g71,"_g71");
			HX_STACK_LINE(533)
			Float _g72 = (this->xVelocity->min + _g71);		HX_STACK_VAR(_g72,"_g72");
			HX_STACK_LINE(533)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_x"),true)(_g72);
		}
		else{
			HX_STACK_LINE(537)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_x"),true)(this->xVelocity->min);
		}
		HX_STACK_LINE(539)
		if (((this->yVelocity->min != this->yVelocity->max))){
			HX_STACK_LINE(541)
			int _g73 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g73,"_g73");
			HX_STACK_LINE(541)
			Float _g74 = (Float(_g73) / Float((int)2147483647));		HX_STACK_VAR(_g74,"_g74");
			HX_STACK_LINE(541)
			Float _g75 = (_g74 * ((this->yVelocity->max - this->yVelocity->min)));		HX_STACK_VAR(_g75,"_g75");
			HX_STACK_LINE(541)
			Float _g76 = (this->yVelocity->min + _g75);		HX_STACK_VAR(_g76,"_g76");
			HX_STACK_LINE(541)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_y"),true)(_g76);
		}
		else{
			HX_STACK_LINE(545)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_y"),true)(this->yVelocity->min);
		}
		HX_STACK_LINE(547)
		particle->__Field(HX_CSTRING("acceleration"),true)->__Field(HX_CSTRING("set"),true)(this->acceleration->x,this->acceleration->y);
		HX_STACK_LINE(549)
		if (((this->rotation->min != this->rotation->max))){
			HX_STACK_LINE(551)
			int _g77 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g77,"_g77");
			HX_STACK_LINE(551)
			Float _g78 = (Float(_g77) / Float((int)2147483647));		HX_STACK_VAR(_g78,"_g78");
			HX_STACK_LINE(551)
			Float _g79 = (_g78 * ((this->rotation->max - this->rotation->min)));		HX_STACK_VAR(_g79,"_g79");
			HX_STACK_LINE(551)
			Float _g80 = (this->rotation->min + _g79);		HX_STACK_VAR(_g80,"_g80");
			HX_STACK_LINE(551)
			particle->__FieldRef(HX_CSTRING("angularVelocity")) = _g80;
		}
		else{
			HX_STACK_LINE(555)
			particle->__FieldRef(HX_CSTRING("angularVelocity")) = this->rotation->min;
		}
		HX_STACK_LINE(557)
		if (((particle->__Field(HX_CSTRING("angularVelocity"),true) != (int)0))){
			HX_STACK_LINE(559)
			int _g81 = ::flixel::util::FlxRandom_obj::_internalSeed = (int(hx::Mod((::flixel::util::FlxRandom_obj::_internalSeed * (int)48271),(int)2147483647)) & int((int)2147483647));		HX_STACK_VAR(_g81,"_g81");
			HX_STACK_LINE(559)
			Float _g82 = (Float(_g81) / Float((int)2147483647));		HX_STACK_VAR(_g82,"_g82");
			HX_STACK_LINE(559)
			Float _g83 = (_g82 * (int)360);		HX_STACK_VAR(_g83,"_g83");
			HX_STACK_LINE(559)
			Float _g84 = (_g83 - (int)180);		HX_STACK_VAR(_g84,"_g84");
			HX_STACK_LINE(559)
			particle->__Field(HX_CSTRING("set_angle"),true)(_g84);
		}
		HX_STACK_LINE(562)
		particle->__Field(HX_CSTRING("drag"),true)->__Field(HX_CSTRING("set"),true)(this->particleDrag->x,this->particleDrag->y);
		HX_STACK_LINE(563)
		particle->__Field(HX_CSTRING("onEmit"),true)();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticle,(void))

Void FlxTypedEmitter_obj::setSize( int Width,int Height){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setSize",0x449c176c,"flixel.effects.particles.FlxTypedEmitter.setSize","flixel/effects/particles/FlxTypedEmitter.hx",573,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(574)
		this->set_width(Width);
		HX_STACK_LINE(575)
		this->set_height(Height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setSize,(void))

Void FlxTypedEmitter_obj::setXSpeed( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setXSpeed",0x03be0b5a,"flixel.effects.particles.FlxTypedEmitter.setXSpeed","flixel/effects/particles/FlxTypedEmitter.hx",585,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
{
		HX_STACK_LINE(586)
		if (((Max < Min))){
			HX_STACK_LINE(588)
			Max = Min;
		}
		HX_STACK_LINE(591)
		this->xVelocity->min = Min;
		HX_STACK_LINE(592)
		this->xVelocity->max = Max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setXSpeed,(void))

Void FlxTypedEmitter_obj::setYSpeed( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setYSpeed",0x6a1967b9,"flixel.effects.particles.FlxTypedEmitter.setYSpeed","flixel/effects/particles/FlxTypedEmitter.hx",602,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
{
		HX_STACK_LINE(603)
		if (((Max < Min))){
			HX_STACK_LINE(605)
			Max = Min;
		}
		HX_STACK_LINE(608)
		this->yVelocity->min = Min;
		HX_STACK_LINE(609)
		this->yVelocity->max = Max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setYSpeed,(void))

Void FlxTypedEmitter_obj::setRotation( hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max){
Float Min = __o_Min.Default(0);
Float Max = __o_Max.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setRotation",0x82c6e569,"flixel.effects.particles.FlxTypedEmitter.setRotation","flixel/effects/particles/FlxTypedEmitter.hx",619,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Min,"Min")
	HX_STACK_ARG(Max,"Max")
{
		HX_STACK_LINE(620)
		if (((Max < Min))){
			HX_STACK_LINE(622)
			Max = Min;
		}
		HX_STACK_LINE(625)
		this->rotation->min = Min;
		HX_STACK_LINE(626)
		this->rotation->max = Max;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setRotation,(void))

Void FlxTypedEmitter_obj::setScale( hx::Null< Float >  __o_StartMin,hx::Null< Float >  __o_StartMax,hx::Null< Float >  __o_EndMin,hx::Null< Float >  __o_EndMax){
Float StartMin = __o_StartMin.Default(1);
Float StartMax = __o_StartMax.Default(1);
Float EndMin = __o_EndMin.Default(1);
Float EndMax = __o_EndMax.Default(1);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setScale",0xbfee2d7f,"flixel.effects.particles.FlxTypedEmitter.setScale","flixel/effects/particles/FlxTypedEmitter.hx",638,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartMin,"StartMin")
	HX_STACK_ARG(StartMax,"StartMax")
	HX_STACK_ARG(EndMin,"EndMin")
	HX_STACK_ARG(EndMax,"EndMax")
{
		HX_STACK_LINE(639)
		if (((StartMax < StartMin))){
			HX_STACK_LINE(641)
			StartMax = StartMin;
		}
		HX_STACK_LINE(644)
		if (((EndMax < EndMin))){
			HX_STACK_LINE(646)
			EndMax = EndMin;
		}
		HX_STACK_LINE(649)
		this->startScale->min = StartMin;
		HX_STACK_LINE(650)
		this->startScale->max = StartMax;
		HX_STACK_LINE(651)
		this->endScale->min = EndMin;
		HX_STACK_LINE(652)
		this->endScale->max = EndMax;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,setScale,(void))

Void FlxTypedEmitter_obj::setAlpha( hx::Null< Float >  __o_StartMin,hx::Null< Float >  __o_StartMax,hx::Null< Float >  __o_EndMin,hx::Null< Float >  __o_EndMax){
Float StartMin = __o_StartMin.Default(1);
Float StartMax = __o_StartMax.Default(1);
Float EndMin = __o_EndMin.Default(1);
Float EndMax = __o_EndMax.Default(1);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setAlpha",0x68b60653,"flixel.effects.particles.FlxTypedEmitter.setAlpha","flixel/effects/particles/FlxTypedEmitter.hx",664,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartMin,"StartMin")
	HX_STACK_ARG(StartMax,"StartMax")
	HX_STACK_ARG(EndMin,"EndMin")
	HX_STACK_ARG(EndMax,"EndMax")
{
		HX_STACK_LINE(665)
		if (((StartMin < (int)0))){
			HX_STACK_LINE(667)
			StartMin = (int)0;
		}
		HX_STACK_LINE(670)
		if (((StartMax < StartMin))){
			HX_STACK_LINE(672)
			StartMax = StartMin;
		}
		HX_STACK_LINE(675)
		if (((EndMin < (int)0))){
			HX_STACK_LINE(677)
			EndMin = (int)0;
		}
		HX_STACK_LINE(680)
		if (((EndMax < EndMin))){
			HX_STACK_LINE(682)
			EndMax = EndMin;
		}
		HX_STACK_LINE(685)
		this->startAlpha->min = StartMin;
		HX_STACK_LINE(686)
		this->startAlpha->max = StartMax;
		HX_STACK_LINE(687)
		this->endAlpha->min = EndMin;
		HX_STACK_LINE(688)
		this->endAlpha->max = EndMax;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,setAlpha,(void))

Void FlxTypedEmitter_obj::setColor( hx::Null< int >  __o_Start,hx::Null< int >  __o_End){
int Start = __o_Start.Default(16777215);
int End = __o_End.Default(16777215);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setColor",0x917bd058,"flixel.effects.particles.FlxTypedEmitter.setColor","flixel/effects/particles/FlxTypedEmitter.hx",699,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
{
		HX_STACK_LINE(700)
		hx::AndEq(Start,(int)16777215);
		HX_STACK_LINE(701)
		hx::AndEq(End,(int)16777215);
		HX_STACK_LINE(703)
		Float startRedComp = (Float(((int((int(Start) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(startRedComp,"startRedComp");
		HX_STACK_LINE(704)
		Float startGreenComp = (Float(((int((int(Start) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(startGreenComp,"startGreenComp");
		HX_STACK_LINE(705)
		Float startBlueComp = (Float(((int(Start) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(startBlueComp,"startBlueComp");
		HX_STACK_LINE(707)
		Float endRedComp = (Float(((int((int(End) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(endRedComp,"endRedComp");
		HX_STACK_LINE(708)
		Float endGreenComp = (Float(((int((int(End) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(endGreenComp,"endGreenComp");
		HX_STACK_LINE(709)
		Float endBlueComp = (Float(((int(End) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(endBlueComp,"endBlueComp");
		HX_STACK_LINE(711)
		Float _g = this->startRed->max = startRedComp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(711)
		this->startRed->min = _g;
		HX_STACK_LINE(712)
		Float _g1 = this->startGreen->max = startGreenComp;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(712)
		this->startGreen->min = _g1;
		HX_STACK_LINE(713)
		Float _g2 = this->startBlue->max = startBlueComp;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(713)
		this->startBlue->min = _g2;
		HX_STACK_LINE(715)
		Float _g3 = this->endRed->max = endRedComp;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(715)
		this->endRed->min = _g3;
		HX_STACK_LINE(716)
		Float _g4 = this->endGreen->max = endGreenComp;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(716)
		this->endGreen->min = _g4;
		HX_STACK_LINE(717)
		Float _g5 = this->endBlue->max = endBlueComp;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(717)
		this->endBlue->min = _g5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setColor,(void))

Void FlxTypedEmitter_obj::at( ::flixel::FlxObject Object){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","at",0x4899e7aa,"flixel.effects.particles.FlxTypedEmitter.at","flixel/effects/particles/FlxTypedEmitter.hx",726,0xb8028a0a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_LINE(727)
		Object->getMidpoint(this->_point);
		HX_STACK_LINE(729)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(729)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(729)
		int _g2 = (int(_g1) >> int((int)1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(729)
		Float _g3 = (this->_point->x - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(729)
		this->set_x(_g3);
		HX_STACK_LINE(730)
		Float _g4 = this->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(730)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(730)
		int _g6 = (int(_g5) >> int((int)1));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(730)
		Float _g7 = (this->_point->y - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(730)
		this->set_y(_g7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,at,(void))

::Class FlxTypedEmitter_obj::get_particleClass( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_particleClass",0x8b874a92,"flixel.effects.particles.FlxTypedEmitter.get_particleClass","flixel/effects/particles/FlxTypedEmitter.hx",741,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(741)
	return this->_particleClass;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_particleClass,return )

::Class FlxTypedEmitter_obj::set_particleClass( ::Class Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_particleClass",0xaef5229e,"flixel.effects.particles.FlxTypedEmitter.set_particleClass","flixel/effects/particles/FlxTypedEmitter.hx",746,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(746)
	return this->_particleClass = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_particleClass,return )

Float FlxTypedEmitter_obj::get_width( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_width",0xa2b85486,"flixel.effects.particles.FlxTypedEmitter.get_width","flixel/effects/particles/FlxTypedEmitter.hx",756,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(756)
	return this->xPosition->max;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_width,return )

Float FlxTypedEmitter_obj::set_width( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_width",0x86094092,"flixel.effects.particles.FlxTypedEmitter.set_width","flixel/effects/particles/FlxTypedEmitter.hx",761,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(761)
	return this->xPosition->max = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_width,return )

Float FlxTypedEmitter_obj::get_height( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_height",0x74e11967,"flixel.effects.particles.FlxTypedEmitter.get_height","flixel/effects/particles/FlxTypedEmitter.hx",771,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(771)
	return this->yPosition->max;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_height,return )

Float FlxTypedEmitter_obj::set_height( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_height",0x785eb7db,"flixel.effects.particles.FlxTypedEmitter.set_height","flixel/effects/particles/FlxTypedEmitter.hx",776,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(776)
	return this->yPosition->max = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_height,return )

Float FlxTypedEmitter_obj::get_x( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_x",0xe8845ef8,"flixel.effects.particles.FlxTypedEmitter.get_x","flixel/effects/particles/FlxTypedEmitter.hx",786,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(786)
	return this->xPosition->min;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_x,return )

Float FlxTypedEmitter_obj::set_x( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_x",0xd1535504,"flixel.effects.particles.FlxTypedEmitter.set_x","flixel/effects/particles/FlxTypedEmitter.hx",791,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(791)
	return this->xPosition->min = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_x,return )

Float FlxTypedEmitter_obj::get_y( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_y",0xe8845ef9,"flixel.effects.particles.FlxTypedEmitter.get_y","flixel/effects/particles/FlxTypedEmitter.hx",801,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(801)
	return this->yPosition->min;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_y,return )

Float FlxTypedEmitter_obj::set_y( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_y",0xd1535505,"flixel.effects.particles.FlxTypedEmitter.set_y","flixel/effects/particles/FlxTypedEmitter.hx",806,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(806)
	return this->yPosition->min = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_y,return )

Void FlxTypedEmitter_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setPosition",0x453b48d4,"flixel.effects.particles.FlxTypedEmitter.setPosition","flixel/effects/particles/FlxTypedEmitter.hx",817,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(818)
		this->set_x(X);
		HX_STACK_LINE(819)
		this->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setPosition,(void))

Float FlxTypedEmitter_obj::get_gravity( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_gravity",0x47d9acce,"flixel.effects.particles.FlxTypedEmitter.get_gravity","flixel/effects/particles/FlxTypedEmitter.hx",829,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(829)
	return this->acceleration->y;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_gravity,return )

Float FlxTypedEmitter_obj::set_gravity( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_gravity",0x5246b3da,"flixel.effects.particles.FlxTypedEmitter.set_gravity","flixel/effects/particles/FlxTypedEmitter.hx",834,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(834)
	return this->acceleration->set_y(Value);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_gravity,return )

Float FlxTypedEmitter_obj::get_minRotation( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_minRotation",0x934d6b70,"flixel.effects.particles.FlxTypedEmitter.get_minRotation","flixel/effects/particles/FlxTypedEmitter.hx",845,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(845)
	return this->rotation->min;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_minRotation,return )

Float FlxTypedEmitter_obj::set_minRotation( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_minRotation",0x8f18e87c,"flixel.effects.particles.FlxTypedEmitter.set_minRotation","flixel/effects/particles/FlxTypedEmitter.hx",850,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(850)
	return this->rotation->min = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_minRotation,return )

Float FlxTypedEmitter_obj::get_maxRotation( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_maxRotation",0xce67c682,"flixel.effects.particles.FlxTypedEmitter.get_maxRotation","flixel/effects/particles/FlxTypedEmitter.hx",861,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(861)
	return this->rotation->max;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_maxRotation,return )

Float FlxTypedEmitter_obj::set_maxRotation( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_maxRotation",0xca33438e,"flixel.effects.particles.FlxTypedEmitter.set_maxRotation","flixel/effects/particles/FlxTypedEmitter.hx",866,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(866)
	return this->rotation->max = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_maxRotation,return )

Float FlxTypedEmitter_obj::get_lifespan( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_lifespan",0x7aea8b46,"flixel.effects.particles.FlxTypedEmitter.get_lifespan","flixel/effects/particles/FlxTypedEmitter.hx",877,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(877)
	return this->life->min;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_lifespan,return )

Float FlxTypedEmitter_obj::set_lifespan( Float Value){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_lifespan",0x8fe3aeba,"flixel.effects.particles.FlxTypedEmitter.set_lifespan","flixel/effects/particles/FlxTypedEmitter.hx",881,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(882)
	Float dl = (this->life->max - this->life->min);		HX_STACK_VAR(dl,"dl");
	HX_STACK_LINE(883)
	this->life->min = Value;
	HX_STACK_LINE(884)
	this->life->max = (Value + dl);
	HX_STACK_LINE(886)
	return Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_lifespan,return )


FlxTypedEmitter_obj::FlxTypedEmitter_obj()
{
}

void FlxTypedEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedEmitter);
	HX_MARK_MEMBER_NAME(xPosition,"xPosition");
	HX_MARK_MEMBER_NAME(yPosition,"yPosition");
	HX_MARK_MEMBER_NAME(xVelocity,"xVelocity");
	HX_MARK_MEMBER_NAME(yVelocity,"yVelocity");
	HX_MARK_MEMBER_NAME(particleDrag,"particleDrag");
	HX_MARK_MEMBER_NAME(rotation,"rotation");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(on,"on");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(life,"life");
	HX_MARK_MEMBER_NAME(startScale,"startScale");
	HX_MARK_MEMBER_NAME(endScale,"endScale");
	HX_MARK_MEMBER_NAME(startAlpha,"startAlpha");
	HX_MARK_MEMBER_NAME(endAlpha,"endAlpha");
	HX_MARK_MEMBER_NAME(startRed,"startRed");
	HX_MARK_MEMBER_NAME(startGreen,"startGreen");
	HX_MARK_MEMBER_NAME(startBlue,"startBlue");
	HX_MARK_MEMBER_NAME(endRed,"endRed");
	HX_MARK_MEMBER_NAME(endGreen,"endGreen");
	HX_MARK_MEMBER_NAME(endBlue,"endBlue");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(bounce,"bounce");
	HX_MARK_MEMBER_NAME(_particleClass,"_particleClass");
	HX_MARK_MEMBER_NAME(_quantity,"_quantity");
	HX_MARK_MEMBER_NAME(_explode,"_explode");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(xPosition,"xPosition");
	HX_VISIT_MEMBER_NAME(yPosition,"yPosition");
	HX_VISIT_MEMBER_NAME(xVelocity,"xVelocity");
	HX_VISIT_MEMBER_NAME(yVelocity,"yVelocity");
	HX_VISIT_MEMBER_NAME(particleDrag,"particleDrag");
	HX_VISIT_MEMBER_NAME(rotation,"rotation");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(on,"on");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(life,"life");
	HX_VISIT_MEMBER_NAME(startScale,"startScale");
	HX_VISIT_MEMBER_NAME(endScale,"endScale");
	HX_VISIT_MEMBER_NAME(startAlpha,"startAlpha");
	HX_VISIT_MEMBER_NAME(endAlpha,"endAlpha");
	HX_VISIT_MEMBER_NAME(startRed,"startRed");
	HX_VISIT_MEMBER_NAME(startGreen,"startGreen");
	HX_VISIT_MEMBER_NAME(startBlue,"startBlue");
	HX_VISIT_MEMBER_NAME(endRed,"endRed");
	HX_VISIT_MEMBER_NAME(endGreen,"endGreen");
	HX_VISIT_MEMBER_NAME(endBlue,"endBlue");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(bounce,"bounce");
	HX_VISIT_MEMBER_NAME(_particleClass,"_particleClass");
	HX_VISIT_MEMBER_NAME(_quantity,"_quantity");
	HX_VISIT_MEMBER_NAME(_explode,"_explode");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedEmitter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { return get_y(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on; }
		if (HX_FIELD_EQ(inName,"at") ) { return at_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"life") ) { return life; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endRed") ) { return endRed; }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endBlue") ) { return endBlue; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		if (HX_FIELD_EQ(inName,"gravity") ) { return get_gravity(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { return rotation; }
		if (HX_FIELD_EQ(inName,"endScale") ) { return endScale; }
		if (HX_FIELD_EQ(inName,"endAlpha") ) { return endAlpha; }
		if (HX_FIELD_EQ(inName,"startRed") ) { return startRed; }
		if (HX_FIELD_EQ(inName,"endGreen") ) { return endGreen; }
		if (HX_FIELD_EQ(inName,"_explode") ) { return _explode; }
		if (HX_FIELD_EQ(inName,"_counter") ) { return _counter; }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return setAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"lifespan") ) { return get_lifespan(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"xPosition") ) { return xPosition; }
		if (HX_FIELD_EQ(inName,"yPosition") ) { return yPosition; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { return xVelocity; }
		if (HX_FIELD_EQ(inName,"yVelocity") ) { return yVelocity; }
		if (HX_FIELD_EQ(inName,"frequency") ) { return frequency; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { return startBlue; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { return _quantity; }
		if (HX_FIELD_EQ(inName,"setXSpeed") ) { return setXSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"setYSpeed") ) { return setYSpeed_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startScale") ) { return startScale; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { return startAlpha; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { return startGreen; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gravity") ) { return get_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gravity") ) { return set_gravity_dyn(); }
		if (HX_FIELD_EQ(inName,"minRotation") ) { return get_minRotation(); }
		if (HX_FIELD_EQ(inName,"maxRotation") ) { return get_maxRotation(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"particleDrag") ) { return particleDrag; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { return _waitForKill; }
		if (HX_FIELD_EQ(inName,"emitParticle") ) { return emitParticle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lifespan") ) { return get_lifespan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lifespan") ) { return set_lifespan_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"makeParticles") ) { return makeParticles_dyn(); }
		if (HX_FIELD_EQ(inName,"particleClass") ) { return get_particleClass(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_particleClass") ) { return _particleClass; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_minRotation") ) { return get_minRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_minRotation") ) { return set_minRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxRotation") ) { return get_maxRotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxRotation") ) { return set_maxRotation_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_particleClass") ) { return get_particleClass_dyn(); }
		if (HX_FIELD_EQ(inName,"set_particleClass") ) { return set_particleClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { return set_y(inValue); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { on=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"life") ) { life=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_v2::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endRed") ) { endRed=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounce") ) { bounce=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endBlue") ) { endBlue=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gravity") ) { return set_gravity(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rotation") ) { rotation=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endScale") ) { endScale=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endAlpha") ) { endAlpha=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startRed") ) { startRed=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"endGreen") ) { endGreen=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explode") ) { _explode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { return set_lifespan(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"xPosition") ) { xPosition=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yPosition") ) { yPosition=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xVelocity") ) { xVelocity=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yVelocity") ) { yVelocity=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { startBlue=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { _quantity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startScale") ) { startScale=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { startAlpha=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { startGreen=inValue.Cast< ::flixel::effects::particles::Bounds >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minRotation") ) { return set_minRotation(inValue); }
		if (HX_FIELD_EQ(inName,"maxRotation") ) { return set_maxRotation(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"particleDrag") ) { particleDrag=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { _waitForKill=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { return set_particleClass(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_particleClass") ) { _particleClass=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("xPosition"));
	outFields->push(HX_CSTRING("yPosition"));
	outFields->push(HX_CSTRING("xVelocity"));
	outFields->push(HX_CSTRING("yVelocity"));
	outFields->push(HX_CSTRING("particleDrag"));
	outFields->push(HX_CSTRING("rotation"));
	outFields->push(HX_CSTRING("acceleration"));
	outFields->push(HX_CSTRING("on"));
	outFields->push(HX_CSTRING("frequency"));
	outFields->push(HX_CSTRING("life"));
	outFields->push(HX_CSTRING("startScale"));
	outFields->push(HX_CSTRING("endScale"));
	outFields->push(HX_CSTRING("startAlpha"));
	outFields->push(HX_CSTRING("endAlpha"));
	outFields->push(HX_CSTRING("startRed"));
	outFields->push(HX_CSTRING("startGreen"));
	outFields->push(HX_CSTRING("startBlue"));
	outFields->push(HX_CSTRING("endRed"));
	outFields->push(HX_CSTRING("endGreen"));
	outFields->push(HX_CSTRING("endBlue"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("bounce"));
	outFields->push(HX_CSTRING("_particleClass"));
	outFields->push(HX_CSTRING("_quantity"));
	outFields->push(HX_CSTRING("_explode"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_counter"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_waitForKill"));
	outFields->push(HX_CSTRING("particleClass"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("minRotation"));
	outFields->push(HX_CSTRING("maxRotation"));
	outFields->push(HX_CSTRING("lifespan"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,xPosition),HX_CSTRING("xPosition")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,yPosition),HX_CSTRING("yPosition")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,xVelocity),HX_CSTRING("xVelocity")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,yVelocity),HX_CSTRING("yVelocity")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTypedEmitter_obj,particleDrag),HX_CSTRING("particleDrag")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,rotation),HX_CSTRING("rotation")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTypedEmitter_obj,acceleration),HX_CSTRING("acceleration")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,on),HX_CSTRING("on")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,frequency),HX_CSTRING("frequency")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,life),HX_CSTRING("life")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startScale),HX_CSTRING("startScale")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endScale),HX_CSTRING("endScale")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startAlpha),HX_CSTRING("startAlpha")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endAlpha),HX_CSTRING("endAlpha")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startRed),HX_CSTRING("startRed")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startGreen),HX_CSTRING("startGreen")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,startBlue),HX_CSTRING("startBlue")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endRed),HX_CSTRING("endRed")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endGreen),HX_CSTRING("endGreen")},
	{hx::fsObject /*::flixel::effects::particles::Bounds*/ ,(int)offsetof(FlxTypedEmitter_obj,endBlue),HX_CSTRING("endBlue")},
	{hx::fsObject /*::openfl::_v2::display::BlendMode*/ ,(int)offsetof(FlxTypedEmitter_obj,blend),HX_CSTRING("blend")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,bounce),HX_CSTRING("bounce")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxTypedEmitter_obj,_particleClass),HX_CSTRING("_particleClass")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_quantity),HX_CSTRING("_quantity")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_explode),HX_CSTRING("_explode")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_counter),HX_CSTRING("_counter")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTypedEmitter_obj,_point),HX_CSTRING("_point")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_waitForKill),HX_CSTRING("_waitForKill")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("xPosition"),
	HX_CSTRING("yPosition"),
	HX_CSTRING("xVelocity"),
	HX_CSTRING("yVelocity"),
	HX_CSTRING("particleDrag"),
	HX_CSTRING("rotation"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("on"),
	HX_CSTRING("frequency"),
	HX_CSTRING("life"),
	HX_CSTRING("startScale"),
	HX_CSTRING("endScale"),
	HX_CSTRING("startAlpha"),
	HX_CSTRING("endAlpha"),
	HX_CSTRING("startRed"),
	HX_CSTRING("startGreen"),
	HX_CSTRING("startBlue"),
	HX_CSTRING("endRed"),
	HX_CSTRING("endGreen"),
	HX_CSTRING("endBlue"),
	HX_CSTRING("blend"),
	HX_CSTRING("bounce"),
	HX_CSTRING("_particleClass"),
	HX_CSTRING("_quantity"),
	HX_CSTRING("_explode"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_counter"),
	HX_CSTRING("_point"),
	HX_CSTRING("_waitForKill"),
	HX_CSTRING("destroy"),
	HX_CSTRING("makeParticles"),
	HX_CSTRING("update"),
	HX_CSTRING("kill"),
	HX_CSTRING("start"),
	HX_CSTRING("emitParticle"),
	HX_CSTRING("setSize"),
	HX_CSTRING("setXSpeed"),
	HX_CSTRING("setYSpeed"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("setScale"),
	HX_CSTRING("setAlpha"),
	HX_CSTRING("setColor"),
	HX_CSTRING("at"),
	HX_CSTRING("get_particleClass"),
	HX_CSTRING("set_particleClass"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_x"),
	HX_CSTRING("set_x"),
	HX_CSTRING("get_y"),
	HX_CSTRING("set_y"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("get_gravity"),
	HX_CSTRING("set_gravity"),
	HX_CSTRING("get_minRotation"),
	HX_CSTRING("set_minRotation"),
	HX_CSTRING("get_maxRotation"),
	HX_CSTRING("set_maxRotation"),
	HX_CSTRING("get_lifespan"),
	HX_CSTRING("set_lifespan"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#endif

Class FlxTypedEmitter_obj::__mClass;

void FlxTypedEmitter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxTypedEmitter"), hx::TCanCast< FlxTypedEmitter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void FlxTypedEmitter_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
