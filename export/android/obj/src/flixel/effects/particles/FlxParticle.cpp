#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxParticle_obj::__construct()
{
HX_STACK_FRAME("flixel.effects.particles.FlxParticle","new",0x64bf516b,"flixel.effects.particles.FlxParticle.new","flixel/effects/particles/FlxParticle.hx",16,0xdb578328)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(44)
	this->useColoring = false;
	HX_STACK_LINE(39)
	this->useScaling = false;
	HX_STACK_LINE(33)
	this->useFading = false;
	HX_STACK_LINE(28)
	this->friction = (int)500;
	HX_STACK_LINE(23)
	this->lifespan = (int)0;
	HX_STACK_LINE(96)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(98)
	this->set_exists(false);
}
;
	return null();
}

//FlxParticle_obj::~FlxParticle_obj() { }

Dynamic FlxParticle_obj::__CreateEmpty() { return  new FlxParticle_obj; }
hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__new()
{  hx::ObjectPtr< FlxParticle_obj > result = new FlxParticle_obj();
	result->__construct();
	return result;}

Dynamic FlxParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxParticle_obj > result = new FlxParticle_obj();
	result->__construct();
	return result;}

hx::Object *FlxParticle_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxParticle_obj)) return operator ::flixel::interfaces::IFlxParticle_obj *();
	return super::__ToInterface(inType);
}

Void FlxParticle_obj::update( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","update",0xc345fdde,"flixel.effects.particles.FlxParticle.update","flixel/effects/particles/FlxParticle.hx",106,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		if (((this->lifespan > (int)0))){
			HX_STACK_LINE(110)
			hx::SubEq(this->lifespan,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(111)
			if (((this->lifespan <= (int)0))){
				HX_STACK_LINE(113)
				this->kill();
			}
			HX_STACK_LINE(116)
			Float lifespanRatio = ((int)1 - (Float(this->lifespan) / Float(this->maxLifespan)));		HX_STACK_VAR(lifespanRatio,"lifespanRatio");
			HX_STACK_LINE(119)
			if ((this->useFading)){
				HX_STACK_LINE(121)
				this->set_alpha((this->startAlpha + (lifespanRatio * this->rangeAlpha)));
			}
			HX_STACK_LINE(125)
			if ((this->useScaling)){
				HX_STACK_LINE(127)
				Float _g = this->scale->set_y((this->startScale + (lifespanRatio * this->rangeScale)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(127)
				this->scale->set_x(_g);
			}
			HX_STACK_LINE(131)
			if ((this->useColoring)){
				HX_STACK_LINE(133)
				Float redComp = (this->startRed + (lifespanRatio * this->rangeRed));		HX_STACK_VAR(redComp,"redComp");
				HX_STACK_LINE(134)
				Float greenComp = (this->startGreen + (lifespanRatio * this->rangeGreen));		HX_STACK_VAR(greenComp,"greenComp");
				HX_STACK_LINE(135)
				Float blueComp = (this->startBlue + (lifespanRatio * this->rangeBlue));		HX_STACK_VAR(blueComp,"blueComp");
				HX_STACK_LINE(137)
				int _g1 = ::Std_obj::_int(((int)255 * redComp));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(137)
				int _g2 = (int(_g1) << int((int)16));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(137)
				int _g3 = ::Std_obj::_int(((int)255 * greenComp));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(137)
				int _g4 = (int(_g3) << int((int)8));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(137)
				int _g5 = (int(_g2) | int(_g4));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(137)
				int _g6 = ::Std_obj::_int(((int)255 * blueComp));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(137)
				int _g7 = (int(_g5) | int(_g6));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(137)
				this->set_color(_g7);
			}
			HX_STACK_LINE(141)
			if (((this->touching != (int)0))){
				HX_STACK_LINE(143)
				if (((this->angularVelocity != (int)0))){
					HX_STACK_LINE(145)
					this->angularVelocity = -(this->angularVelocity);
				}
			}
			HX_STACK_LINE(149)
			if (((this->acceleration->y > (int)0))){
				HX_STACK_LINE(151)
				if (((((int(this->touching) & int((int)4096))) != (int)0))){
					HX_STACK_LINE(153)
					this->drag->set_x(this->friction);
					HX_STACK_LINE(155)
					if (((((int(this->wasTouching) & int((int)4096))) == (int)0))){
						HX_STACK_LINE(157)
						if (((this->velocity->y < (-(this->elasticity) * (int)10)))){
							HX_STACK_LINE(159)
							if (((this->angularVelocity != (int)0))){
								HX_STACK_LINE(161)
								hx::MultEq(this->angularVelocity,-(this->elasticity));
							}
						}
						else{
							HX_STACK_LINE(166)
							this->velocity->set_y((int)0);
							HX_STACK_LINE(167)
							this->angularVelocity = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(173)
					this->drag->set_x((int)0);
				}
			}
		}
		HX_STACK_LINE(178)
		if (((bool(this->exists) && bool(this->alive)))){
			HX_STACK_LINE(180)
			this->super::update();
		}
	}
return null();
}


Void FlxParticle_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","reset",0xddde639a,"flixel.effects.particles.FlxParticle.reset","flixel/effects/particles/FlxParticle.hx",185,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(186)
		this->super::reset(X,Y);
		HX_STACK_LINE(188)
		this->set_alpha(1.0);
		HX_STACK_LINE(189)
		Float _g = this->scale->set_y(1.0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		this->scale->set_x(_g);
		HX_STACK_LINE(190)
		this->set_color((int)16777215);
	}
return null();
}


Void FlxParticle_obj::onEmit( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","onEmit",0x21e01ee7,"flixel.effects.particles.FlxParticle.onEmit","flixel/effects/particles/FlxParticle.hx",197,0xdb578328)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxParticle_obj,onEmit,(void))


FlxParticle_obj::FlxParticle_obj()
{
}

Dynamic FlxParticle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onEmit") ) { return onEmit_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		if (HX_FIELD_EQ(inName,"friction") ) { return friction; }
		if (HX_FIELD_EQ(inName,"startRed") ) { return startRed; }
		if (HX_FIELD_EQ(inName,"rangeRed") ) { return rangeRed; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"useFading") ) { return useFading; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { return startBlue; }
		if (HX_FIELD_EQ(inName,"rangeBlue") ) { return rangeBlue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useScaling") ) { return useScaling; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { return startAlpha; }
		if (HX_FIELD_EQ(inName,"rangeAlpha") ) { return rangeAlpha; }
		if (HX_FIELD_EQ(inName,"startScale") ) { return startScale; }
		if (HX_FIELD_EQ(inName,"rangeScale") ) { return rangeScale; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { return startGreen; }
		if (HX_FIELD_EQ(inName,"rangeGreen") ) { return rangeGreen; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useColoring") ) { return useColoring; }
		if (HX_FIELD_EQ(inName,"maxLifespan") ) { return maxLifespan; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxParticle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"friction") ) { friction=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startRed") ) { startRed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeRed") ) { rangeRed=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"useFading") ) { useFading=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startBlue") ) { startBlue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeBlue") ) { rangeBlue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useScaling") ) { useScaling=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startAlpha") ) { startAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeAlpha") ) { rangeAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startScale") ) { startScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeScale") ) { rangeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startGreen") ) { startGreen=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rangeGreen") ) { rangeGreen=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"useColoring") ) { useColoring=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLifespan") ) { maxLifespan=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lifespan"));
	outFields->push(HX_CSTRING("friction"));
	outFields->push(HX_CSTRING("useFading"));
	outFields->push(HX_CSTRING("useScaling"));
	outFields->push(HX_CSTRING("useColoring"));
	outFields->push(HX_CSTRING("maxLifespan"));
	outFields->push(HX_CSTRING("startAlpha"));
	outFields->push(HX_CSTRING("rangeAlpha"));
	outFields->push(HX_CSTRING("startScale"));
	outFields->push(HX_CSTRING("rangeScale"));
	outFields->push(HX_CSTRING("startRed"));
	outFields->push(HX_CSTRING("startGreen"));
	outFields->push(HX_CSTRING("startBlue"));
	outFields->push(HX_CSTRING("rangeRed"));
	outFields->push(HX_CSTRING("rangeGreen"));
	outFields->push(HX_CSTRING("rangeBlue"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,lifespan),HX_CSTRING("lifespan")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,friction),HX_CSTRING("friction")},
	{hx::fsBool,(int)offsetof(FlxParticle_obj,useFading),HX_CSTRING("useFading")},
	{hx::fsBool,(int)offsetof(FlxParticle_obj,useScaling),HX_CSTRING("useScaling")},
	{hx::fsBool,(int)offsetof(FlxParticle_obj,useColoring),HX_CSTRING("useColoring")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,maxLifespan),HX_CSTRING("maxLifespan")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startAlpha),HX_CSTRING("startAlpha")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeAlpha),HX_CSTRING("rangeAlpha")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startScale),HX_CSTRING("startScale")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeScale),HX_CSTRING("rangeScale")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startRed),HX_CSTRING("startRed")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startGreen),HX_CSTRING("startGreen")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,startBlue),HX_CSTRING("startBlue")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeRed),HX_CSTRING("rangeRed")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeGreen),HX_CSTRING("rangeGreen")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,rangeBlue),HX_CSTRING("rangeBlue")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lifespan"),
	HX_CSTRING("friction"),
	HX_CSTRING("useFading"),
	HX_CSTRING("useScaling"),
	HX_CSTRING("useColoring"),
	HX_CSTRING("maxLifespan"),
	HX_CSTRING("startAlpha"),
	HX_CSTRING("rangeAlpha"),
	HX_CSTRING("startScale"),
	HX_CSTRING("rangeScale"),
	HX_CSTRING("startRed"),
	HX_CSTRING("startGreen"),
	HX_CSTRING("startBlue"),
	HX_CSTRING("rangeRed"),
	HX_CSTRING("rangeGreen"),
	HX_CSTRING("rangeBlue"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("onEmit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#endif

Class FlxParticle_obj::__mClass;

void FlxParticle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxParticle"), hx::TCanCast< FlxParticle_obj> ,sStaticFields,sMemberFields,
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

void FlxParticle_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
