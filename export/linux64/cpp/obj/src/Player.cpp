#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void Player_obj::__construct(int x,int y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",18,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(19)
	super::__construct(x,y,null());
	HX_STACK_LINE(21)
	this->loadGraphic(HX_CSTRING("assets/images/player.png"),true,(int)30,(int)30,null(),null());
	HX_STACK_LINE(23)
	this->animation->add(HX_CSTRING("run1"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)12).Add((int)13).Add((int)14).Add((int)15),(int)15,null());
	HX_STACK_LINE(24)
	this->animation->add(HX_CSTRING("run2"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)12).Add((int)13).Add((int)14).Add((int)15),(int)28,null());
	HX_STACK_LINE(25)
	this->animation->add(HX_CSTRING("run3"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)12).Add((int)13).Add((int)14).Add((int)15),(int)40,null());
	HX_STACK_LINE(26)
	this->animation->add(HX_CSTRING("run4"),Array_obj< int >::__new().Add((int)0).Add((int)2).Add((int)4).Add((int)6).Add((int)8).Add((int)10).Add((int)12).Add((int)14),(int)30,null());
	HX_STACK_LINE(27)
	this->animation->add(HX_CSTRING("jump"),Array_obj< int >::__new().Add((int)16).Add((int)17).Add((int)18).Add((int)19),(int)12,false);
	HX_STACK_LINE(28)
	this->animation->add(HX_CSTRING("fall"),Array_obj< int >::__new().Add((int)20).Add((int)21).Add((int)22).Add((int)23).Add((int)24).Add((int)25).Add((int)26),(int)14,null());
	HX_STACK_LINE(29)
	this->animation->add(HX_CSTRING("stumble1"),Array_obj< int >::__new().Add((int)27).Add((int)28).Add((int)29).Add((int)30).Add((int)31).Add((int)32).Add((int)33).Add((int)34).Add((int)35).Add((int)36).Add((int)37),(int)14,null());
	HX_STACK_LINE(30)
	this->animation->add(HX_CSTRING("stumble2"),Array_obj< int >::__new().Add((int)27).Add((int)28).Add((int)29).Add((int)30).Add((int)31).Add((int)32).Add((int)33).Add((int)34).Add((int)35).Add((int)36).Add((int)37),(int)21,null());
	HX_STACK_LINE(31)
	this->animation->add(HX_CSTRING("stumble3"),Array_obj< int >::__new().Add((int)27).Add((int)28).Add((int)29).Add((int)30).Add((int)31).Add((int)32).Add((int)33).Add((int)34).Add((int)35).Add((int)36).Add((int)37),(int)28,null());
	HX_STACK_LINE(32)
	this->animation->add(HX_CSTRING("stumble4"),Array_obj< int >::__new().Add((int)27).Add((int)28).Add((int)29).Add((int)30).Add((int)31).Add((int)32).Add((int)33).Add((int)34).Add((int)35).Add((int)36).Add((int)37),(int)35,null());
	HX_STACK_LINE(37)
	this->acceleration->set_x((int)1);
	HX_STACK_LINE(38)
	this->acceleration->set_y((int)1200);
	HX_STACK_LINE(39)
	this->maxVelocity->set_x((int)1000);
	HX_STACK_LINE(40)
	this->maxVelocity->set_y((int)360);
	HX_STACK_LINE(41)
	this->velocity->set_x((int)125);
	HX_STACK_LINE(43)
	this->jump = (int)0;
	HX_STACK_LINE(46)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	this->sfx_feet = _g;
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			if ((!(((_g1 < (int)4))))){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(47)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(49)
			::flixel::system::FlxSound _g11 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/foot1.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(49)
			this->sfx_feet->push(_g11);
		}
	}
	HX_STACK_LINE(52)
	::flixel::system::FlxSound _g2 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/jump1.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(52)
	this->sfx_jump = _g2;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(int x,int y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(x,y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",59,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		if (((this->y > (int)300))){
			HX_STACK_LINE(61)
			this->dead = true;
			HX_STACK_LINE(62)
			return null();
		}
		HX_STACK_LINE(65)
		if (((this->acceleration->x <= (int)0))){
			HX_STACK_LINE(66)
			return null(this->super::update());
		}
		HX_STACK_LINE(68)
		this->sfx_feet->__get((int)1).StaticCast< ::flixel::system::FlxSound >()->play(null());
		HX_STACK_LINE(70)
		if (((this->velocity->x < (int)0))){
			HX_STACK_LINE(70)
			this->velocity->set_x((int)0);
		}
		else{
			HX_STACK_LINE(71)
			if (((this->velocity->x < (int)100))){
				HX_STACK_LINE(71)
				this->acceleration->set_x((int)60);
			}
			else{
				HX_STACK_LINE(72)
				if (((this->velocity->x < (int)250))){
					HX_STACK_LINE(72)
					this->acceleration->set_x((int)36);
				}
				else{
					HX_STACK_LINE(73)
					if (((this->velocity->x < (int)400))){
						HX_STACK_LINE(73)
						this->acceleration->set_x((int)24);
					}
					else{
						HX_STACK_LINE(74)
						if (((this->velocity->x < (int)600))){
							HX_STACK_LINE(74)
							this->acceleration->set_x((int)12);
						}
						else{
							HX_STACK_LINE(75)
							this->acceleration->set_x((int)4);
						}
					}
				}
			}
		}
		HX_STACK_LINE(78)
		this->jumpLimit = (Float(this->velocity->x) / Float(((this->maxVelocity->x * 2.5))));
		HX_STACK_LINE(80)
		if (((this->jumpLimit > 0.35))){
			HX_STACK_LINE(81)
			this->jumpLimit = 0.35;
		}
		HX_STACK_LINE(83)
		if (((bool((this->jump >= (int)0)) && bool((::flixel::FlxG_obj::mouse->_leftButton->current > (int)0))))){
			HX_STACK_LINE(87)
			if (((this->jump == (int)0))){
				HX_STACK_LINE(88)
				this->sfx_jump->play(null());
			}
			HX_STACK_LINE(91)
			hx::AddEq(this->jump,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(96)
			if (((this->jump > this->jumpLimit))){
				HX_STACK_LINE(98)
				this->jump = (int)-1;
			}
		}
		else{
			HX_STACK_LINE(102)
			this->jump = (int)-1;
		}
		HX_STACK_LINE(104)
		if (((this->jump > (int)0))){
			HX_STACK_LINE(105)
			if (((this->jump < 0.08))){
				HX_STACK_LINE(106)
				this->velocity->set_y((-(this->maxVelocity->y) * 0.65));
			}
			else{
				HX_STACK_LINE(108)
				this->velocity->set_y(-(this->maxVelocity->y));
			}
		}
		HX_STACK_LINE(111)
		this->super::update();
	}
return null();
}


Void Player_obj::onFloor( ){
{
		HX_STACK_FRAME("Player","onFloor",0xc2cf3a40,"Player.onFloor","Player.hx",120,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		this->jump = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,onFloor,(void))

Void Player_obj::movement( ){
{
		HX_STACK_FRAME("Player","movement",0x91ad8bbc,"Player.movement","Player.hx",124,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(125)
		bool pressed;		HX_STACK_VAR(pressed,"pressed");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(125)
			pressed = (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
		}
		HX_STACK_LINE(126)
		if ((pressed)){
			HX_STACK_LINE(128)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,movement,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(dead,"dead");
	HX_MARK_MEMBER_NAME(jump,"jump");
	HX_MARK_MEMBER_NAME(jumpLimit,"jumpLimit");
	HX_MARK_MEMBER_NAME(sfx_feet,"sfx_feet");
	HX_MARK_MEMBER_NAME(sfx_jump,"sfx_jump");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dead,"dead");
	HX_VISIT_MEMBER_NAME(jump,"jump");
	HX_VISIT_MEMBER_NAME(jumpLimit,"jumpLimit");
	HX_VISIT_MEMBER_NAME(sfx_feet,"sfx_feet");
	HX_VISIT_MEMBER_NAME(sfx_jump,"sfx_jump");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dead") ) { return dead; }
		if (HX_FIELD_EQ(inName,"jump") ) { return jump; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onFloor") ) { return onFloor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sfx_feet") ) { return sfx_feet; }
		if (HX_FIELD_EQ(inName,"sfx_jump") ) { return sfx_jump; }
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"jumpLimit") ) { return jumpLimit; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dead") ) { dead=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jump") ) { jump=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sfx_feet") ) { sfx_feet=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sfx_jump") ) { sfx_jump=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"jumpLimit") ) { jumpLimit=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dead"));
	outFields->push(HX_CSTRING("jump"));
	outFields->push(HX_CSTRING("jumpLimit"));
	outFields->push(HX_CSTRING("sfx_feet"));
	outFields->push(HX_CSTRING("sfx_jump"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Player_obj,dead),HX_CSTRING("dead")},
	{hx::fsFloat,(int)offsetof(Player_obj,jump),HX_CSTRING("jump")},
	{hx::fsFloat,(int)offsetof(Player_obj,jumpLimit),HX_CSTRING("jumpLimit")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Player_obj,sfx_feet),HX_CSTRING("sfx_feet")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(Player_obj,sfx_jump),HX_CSTRING("sfx_jump")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dead"),
	HX_CSTRING("jump"),
	HX_CSTRING("jumpLimit"),
	HX_CSTRING("sfx_feet"),
	HX_CSTRING("sfx_jump"),
	HX_CSTRING("update"),
	HX_CSTRING("onFloor"),
	HX_CSTRING("movement"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

