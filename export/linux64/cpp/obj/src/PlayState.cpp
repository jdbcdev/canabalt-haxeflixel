#include <hxcpp.h>

#ifndef INCLUDED_BG
#include <BG.h>
#endif
#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Sequence
#include <Sequence.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",17,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(17)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",41,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::flixel::FlxG_obj::debugger->visible = true;
		HX_STACK_LINE(46)
		::flixel::FlxG_obj::cameras->set_bgColor((int)-13395457);
		HX_STACK_LINE(48)
		::BG _g = ::BG_obj::__new((int)0,(int)66,HX_CSTRING("assets/images/background-trimmed.png"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(48)
		this->background = _g;
		HX_STACK_LINE(49)
		this->background->scrollFactor->set_x(0.15);
		HX_STACK_LINE(50)
		this->background->scrollFactor->set_y(0.25);
		HX_STACK_LINE(51)
		this->add(this->background);
		HX_STACK_LINE(53)
		::BG _g1 = ::BG_obj::__new(::flixel::FlxG_obj::width,(int)66,HX_CSTRING("assets/images/background-trimmed.png"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->background2 = _g1;
		HX_STACK_LINE(54)
		this->background2->scrollFactor->set_x(0.15);
		HX_STACK_LINE(55)
		this->background2->scrollFactor->set_y(0.25);
		HX_STACK_LINE(56)
		this->add(this->background2);
		HX_STACK_LINE(58)
		::BG _g2 = ::BG_obj::__new((int)0,(int)114,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(58)
		this->backgroundRect = _g2;
		HX_STACK_LINE(59)
		this->backgroundRect->makeGraphic((::flixel::FlxG_obj::width * (int)2),(int)88,(int)-7960938,null(),null());
		HX_STACK_LINE(60)
		this->backgroundRect->scrollFactor->set_x((int)0);
		HX_STACK_LINE(61)
		this->backgroundRect->scrollFactor->set_y(0.25);
		HX_STACK_LINE(62)
		this->add(this->backgroundRect);
		HX_STACK_LINE(64)
		::BG _g3 = ::BG_obj::__new((int)0,(int)112,HX_CSTRING("assets/images/midground1-trimmed.png"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(64)
		this->midground1 = _g3;
		HX_STACK_LINE(65)
		this->midground1->scrollFactor->set_x(0.4);
		HX_STACK_LINE(66)
		this->midground1->scrollFactor->set_y(0.5);
		HX_STACK_LINE(67)
		this->add(this->midground1);
		HX_STACK_LINE(69)
		::BG _g4 = ::BG_obj::__new(::flixel::FlxG_obj::width,(int)112,HX_CSTRING("assets/images/midground2-trimmed.png"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(69)
		this->midground2 = _g4;
		HX_STACK_LINE(70)
		this->midground2->scrollFactor->set_x(0.4);
		HX_STACK_LINE(71)
		this->midground2->scrollFactor->set_y(0.5);
		HX_STACK_LINE(72)
		this->add(this->midground2);
		HX_STACK_LINE(74)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new((int)0,(int)202,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(74)
		this->bottonground = _g5;
		HX_STACK_LINE(75)
		this->bottonground->makeGraphic((::flixel::FlxG_obj::width * (int)2),(int)223,(int)-10196355,null(),null());
		HX_STACK_LINE(76)
		this->bottonground->scrollFactor->set_x((int)0);
		HX_STACK_LINE(77)
		this->bottonground->scrollFactor->set_y(0.5);
		HX_STACK_LINE(78)
		this->add(this->bottonground);
		HX_STACK_LINE(80)
		::Player _g6 = ::Player_obj::__new((int)0,(int)100);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(80)
		this->player = _g6;
		HX_STACK_LINE(81)
		this->add(this->player);
		HX_STACK_LINE(83)
		this->player->animation->play(HX_CSTRING("run2"),null(),null());
		HX_STACK_LINE(86)
		::Sequence_obj::initialize();
		HX_STACK_LINE(88)
		::Sequence _g7 = ::Sequence_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(88)
		this->seqA = _g7;
		HX_STACK_LINE(89)
		this->add(this->seqA);
		HX_STACK_LINE(90)
		this->add(this->seqA->renderLayer);
		HX_STACK_LINE(92)
		::Sequence _g8 = ::Sequence_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(92)
		this->seqB = _g8;
		HX_STACK_LINE(93)
		this->add(this->seqB);
		HX_STACK_LINE(94)
		this->add(this->seqB->renderLayer);
		HX_STACK_LINE(97)
		this->paused = false;
		HX_STACK_LINE(100)
		::flixel::FlxSprite _g9 = ::flixel::FlxSprite_obj::__new((this->player->x + (int)200),this->player->y,null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(100)
		this->ghost = _g9;
		HX_STACK_LINE(101)
		::flixel::FlxG_obj::camera->follow(this->ghost,null(),null(),null());
		HX_STACK_LINE(104)
		::flixel::system::FlxSound _g10 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/crumble.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(104)
		this->sfx_crumble = _g10;
		HX_STACK_LINE(105)
		this->sfx_crumble->play(null());
		HX_STACK_LINE(108)
		::HUD _g11 = ::HUD_obj::__new((::flixel::FlxG_obj::width - (int)20),(int)5);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(108)
		this->hud = _g11;
		HX_STACK_LINE(109)
		this->hud->set_text(HX_CSTRING("0"));
		HX_STACK_LINE(110)
		this->add(this->hud);
		HX_STACK_LINE(112)
		this->super::create();
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",120,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->super::destroy();
		HX_STACK_LINE(123)
		this->player->destroy();
		HX_STACK_LINE(124)
		this->seqA->destroy();
		HX_STACK_LINE(125)
		this->seqB->destroy();
		HX_STACK_LINE(127)
		this->background->destroy();
		HX_STACK_LINE(128)
		this->background2->destroy();
		HX_STACK_LINE(129)
		this->backgroundRect->destroy();
		HX_STACK_LINE(130)
		this->midground1->destroy_dyn();
		HX_STACK_LINE(131)
		this->midground2->destroy();
		HX_STACK_LINE(132)
		this->bottonground->destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",140,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		if ((!(this->paused))){
			HX_STACK_LINE(142)
			::flixel::FlxG_obj::overlap(this->seqA->renderLayer,this->player,this->onCollide_dyn(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(143)
			::flixel::FlxG_obj::overlap(this->seqB->renderLayer,this->player,this->onCollide_dyn(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(145)
			this->ghost->set_x((this->player->x + (int)200));
			HX_STACK_LINE(146)
			this->super::update();
		}
	}
return null();
}


Void PlayState_obj::onCollide( ::flixel::FlxObject object1,::flixel::FlxObject object2){
{
		HX_STACK_FRAME("PlayState","onCollide",0x01612bce,"PlayState.onCollide","PlayState.hx",157,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object1,"object1")
		HX_STACK_ARG(object2,"object2")
		HX_STACK_LINE(157)
		this->player->onFloor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,onCollide,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(background2,"background2");
	HX_MARK_MEMBER_NAME(backgroundRect,"backgroundRect");
	HX_MARK_MEMBER_NAME(midground1,"midground1");
	HX_MARK_MEMBER_NAME(midground2,"midground2");
	HX_MARK_MEMBER_NAME(bottonground,"bottonground");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(ghost,"ghost");
	HX_MARK_MEMBER_NAME(seqA,"seqA");
	HX_MARK_MEMBER_NAME(seqB,"seqB");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(sfx_crumble,"sfx_crumble");
	HX_MARK_MEMBER_NAME(hud,"hud");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(background2,"background2");
	HX_VISIT_MEMBER_NAME(backgroundRect,"backgroundRect");
	HX_VISIT_MEMBER_NAME(midground1,"midground1");
	HX_VISIT_MEMBER_NAME(midground2,"midground2");
	HX_VISIT_MEMBER_NAME(bottonground,"bottonground");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(ghost,"ghost");
	HX_VISIT_MEMBER_NAME(seqA,"seqA");
	HX_VISIT_MEMBER_NAME(seqB,"seqB");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(sfx_crumble,"sfx_crumble");
	HX_VISIT_MEMBER_NAME(hud,"hud");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hud") ) { return hud; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"seqA") ) { return seqA; }
		if (HX_FIELD_EQ(inName,"seqB") ) { return seqB; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ghost") ) { return ghost; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onCollide") ) { return onCollide_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"midground1") ) { return midground1; }
		if (HX_FIELD_EQ(inName,"midground2") ) { return midground2; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"background2") ) { return background2; }
		if (HX_FIELD_EQ(inName,"sfx_crumble") ) { return sfx_crumble; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bottonground") ) { return bottonground; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backgroundRect") ) { return backgroundRect; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hud") ) { hud=inValue.Cast< ::HUD >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"seqA") ) { seqA=inValue.Cast< ::Sequence >(); return inValue; }
		if (HX_FIELD_EQ(inName,"seqB") ) { seqB=inValue.Cast< ::Sequence >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ghost") ) { ghost=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< ::BG >(); return inValue; }
		if (HX_FIELD_EQ(inName,"midground1") ) { midground1=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"midground2") ) { midground2=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"background2") ) { background2=inValue.Cast< ::BG >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sfx_crumble") ) { sfx_crumble=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bottonground") ) { bottonground=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backgroundRect") ) { backgroundRect=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("background2"));
	outFields->push(HX_CSTRING("backgroundRect"));
	outFields->push(HX_CSTRING("midground1"));
	outFields->push(HX_CSTRING("midground2"));
	outFields->push(HX_CSTRING("bottonground"));
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("ghost"));
	outFields->push(HX_CSTRING("seqA"));
	outFields->push(HX_CSTRING("seqB"));
	outFields->push(HX_CSTRING("paused"));
	outFields->push(HX_CSTRING("sfx_crumble"));
	outFields->push(HX_CSTRING("hud"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::BG*/ ,(int)offsetof(PlayState_obj,background),HX_CSTRING("background")},
	{hx::fsObject /*::BG*/ ,(int)offsetof(PlayState_obj,background2),HX_CSTRING("background2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,backgroundRect),HX_CSTRING("backgroundRect")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,midground1),HX_CSTRING("midground1")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,midground2),HX_CSTRING("midground2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,bottonground),HX_CSTRING("bottonground")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,ghost),HX_CSTRING("ghost")},
	{hx::fsObject /*::Sequence*/ ,(int)offsetof(PlayState_obj,seqA),HX_CSTRING("seqA")},
	{hx::fsObject /*::Sequence*/ ,(int)offsetof(PlayState_obj,seqB),HX_CSTRING("seqB")},
	{hx::fsBool,(int)offsetof(PlayState_obj,paused),HX_CSTRING("paused")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,sfx_crumble),HX_CSTRING("sfx_crumble")},
	{hx::fsObject /*::HUD*/ ,(int)offsetof(PlayState_obj,hud),HX_CSTRING("hud")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("background"),
	HX_CSTRING("background2"),
	HX_CSTRING("backgroundRect"),
	HX_CSTRING("midground1"),
	HX_CSTRING("midground2"),
	HX_CSTRING("bottonground"),
	HX_CSTRING("player"),
	HX_CSTRING("ghost"),
	HX_CSTRING("seqA"),
	HX_CSTRING("seqB"),
	HX_CSTRING("paused"),
	HX_CSTRING("sfx_crumble"),
	HX_CSTRING("hud"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("onCollide"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

