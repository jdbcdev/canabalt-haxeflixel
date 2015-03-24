#include <hxcpp.h>

#ifndef INCLUDED_Billboard
#include <Billboard.h>
#endif
#ifndef INCLUDED_Building
#include <Building.h>
#endif
#ifndef INCLUDED_Hall
#include <Hall.h>
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
#ifndef INCLUDED_flixel_effects_particles_FlxEmitter
#include <flixel/effects/particles/FlxEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif

Void Sequence_obj::__construct()
{
HX_STACK_FRAME("Sequence","new",0xbcadbfd3,"Sequence.new","Sequence.hx",66,0x8ce65afd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(67)
	super::__construct(::Sequence_obj::nextX,(int)0,null(),null());
	HX_STACK_LINE(69)
	::flixel::group::FlxGroup _g = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(69)
	this->renderLayer = _g;
	HX_STACK_LINE(70)
	this->createBuilding();
	HX_STACK_LINE(72)
	this->set_immovable(true);
}
;
	return null();
}

//Sequence_obj::~Sequence_obj() { }

Dynamic Sequence_obj::__CreateEmpty() { return  new Sequence_obj; }
hx::ObjectPtr< Sequence_obj > Sequence_obj::__new()
{  hx::ObjectPtr< Sequence_obj > result = new Sequence_obj();
	result->__construct();
	return result;}

Dynamic Sequence_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sequence_obj > result = new Sequence_obj();
	result->__construct();
	return result;}

Void Sequence_obj::initWithPlayer( ::Player player){
{
		HX_STACK_FRAME("Sequence","initWithPlayer",0x68ea80a4,"Sequence.initWithPlayer","Sequence.hx",80,0x8ce65afd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(81)
		this->player = player;
		HX_STACK_LINE(104)
		this->createBuilding();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sequence_obj,initWithPlayer,(void))

Void Sequence_obj::resetBuilding( ){
{
		HX_STACK_FRAME("Sequence","resetBuilding",0x140bac96,"Sequence.resetBuilding","Sequence.hx",109,0x8ce65afd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->renderLayer->remove(this->building,null());
		HX_STACK_LINE(113)
		this->building->kill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sequence_obj,resetBuilding,(void))

Void Sequence_obj::createBuilding( ){
{
		HX_STACK_FRAME("Sequence","createBuilding",0xc69f10fd,"Sequence.createBuilding","Sequence.hx",117,0x8ce65afd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->set_x(::Sequence_obj::nextX);
		HX_STACK_LINE(120)
		::Building _g = ::Building_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		this->building = _g;
		HX_STACK_LINE(121)
		this->building->set_x(::Sequence_obj::nextX);
		HX_STACK_LINE(124)
		this->building->create();
		HX_STACK_LINE(125)
		this->renderLayer->add(this->building);
		HX_STACK_LINE(127)
		Float _g1 = this->building->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		this->set_width(_g1);
		HX_STACK_LINE(128)
		Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(128)
		Float _g3 = (::Sequence_obj::nextX + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(128)
		int _g4 = ::flixel::util::FlxRandom_obj::intRanged((int)5,(int)7,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(128)
		int _g5 = (_g4 * ::Sequence_obj::TILE_SIZE);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(128)
		Float _g6 = (_g3 + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(128)
		::Sequence_obj::nextX = _g6;
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(130)
			Float _g7 = this->get_width();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(130)
			Float Width = (::Sequence_obj::nextX + _g7);		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(130)
			_this->width = Width;
			HX_STACK_LINE(130)
			_this->height = ::flixel::FlxG_obj::height;
			HX_STACK_LINE(130)
			_this;
		}
		HX_STACK_LINE(133)
		Dynamic();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sequence_obj,createBuilding,(void))

Void Sequence_obj::update( ){
{
		HX_STACK_FRAME("Sequence","update",0x8e4e8076,"Sequence.update","Sequence.hx",140,0x8ce65afd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(141)
		::flixel::util::FlxPoint point = this->getScreenXY(null(),null());		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(142)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		Float checkValue = (point->x + _g);		HX_STACK_VAR(checkValue,"checkValue");
		HX_STACK_LINE(146)
		Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(146)
		Float _g2 = (point->x + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(146)
		if (((_g2 < (int)0))){
			HX_STACK_LINE(156)
			this->resetBuilding();
			HX_STACK_LINE(157)
			this->createBuilding();
		}
		HX_STACK_LINE(166)
		this->super::update();
	}
return null();
}


int Sequence_obj::sequenceIndex;

::Hall Sequence_obj::hall;

::Billboard Sequence_obj::billboard;

int Sequence_obj::TILE_SIZE;

::String Sequence_obj::ASSETS_IMAGES;

Float Sequence_obj::nextX;

Void Sequence_obj::initialize( ){
{
		HX_STACK_FRAME("Sequence","initialize",0x27b6663d,"Sequence.initialize","Sequence.hx",56,0x8ce65afd)
		HX_STACK_LINE(56)
		::Building_obj::initialize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sequence_obj,initialize,(void))


Sequence_obj::Sequence_obj()
{
}

void Sequence_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sequence);
	HX_MARK_MEMBER_NAME(renderLayer,"renderLayer");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(backgroundRenderLayer,"backgroundRenderLayer");
	HX_MARK_MEMBER_NAME(layerLeg,"layerLeg");
	HX_MARK_MEMBER_NAME(seq,"seq");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(roof,"roof");
	HX_MARK_MEMBER_NAME(shardsA,"shardsA");
	HX_MARK_MEMBER_NAME(shardsB,"shardsB");
	HX_MARK_MEMBER_NAME(building,"building");
	HX_MARK_MEMBER_NAME(escape,"escape");
	HX_MARK_MEMBER_NAME(fence,"fence");
	HX_MARK_MEMBER_NAME(curIndex,"curIndex");
	HX_MARK_MEMBER_NAME(nextIndex,"nextIndex");
	HX_MARK_MEMBER_NAME(nextType,"nextType");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sequence_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(renderLayer,"renderLayer");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(backgroundRenderLayer,"backgroundRenderLayer");
	HX_VISIT_MEMBER_NAME(layerLeg,"layerLeg");
	HX_VISIT_MEMBER_NAME(seq,"seq");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(roof,"roof");
	HX_VISIT_MEMBER_NAME(shardsA,"shardsA");
	HX_VISIT_MEMBER_NAME(shardsB,"shardsB");
	HX_VISIT_MEMBER_NAME(building,"building");
	HX_VISIT_MEMBER_NAME(escape,"escape");
	HX_VISIT_MEMBER_NAME(fence,"fence");
	HX_VISIT_MEMBER_NAME(curIndex,"curIndex");
	HX_VISIT_MEMBER_NAME(nextIndex,"nextIndex");
	HX_VISIT_MEMBER_NAME(nextType,"nextType");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sequence_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"seq") ) { return seq; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hall") ) { return hall; }
		if (HX_FIELD_EQ(inName,"roof") ) { return roof; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nextX") ) { return nextX; }
		if (HX_FIELD_EQ(inName,"layer") ) { return layer; }
		if (HX_FIELD_EQ(inName,"fence") ) { return fence; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"escape") ) { return escape; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shardsA") ) { return shardsA; }
		if (HX_FIELD_EQ(inName,"shardsB") ) { return shardsB; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"layerLeg") ) { return layerLeg; }
		if (HX_FIELD_EQ(inName,"building") ) { return building; }
		if (HX_FIELD_EQ(inName,"curIndex") ) { return curIndex; }
		if (HX_FIELD_EQ(inName,"nextType") ) { return nextType; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"billboard") ) { return billboard; }
		if (HX_FIELD_EQ(inName,"TILE_SIZE") ) { return TILE_SIZE; }
		if (HX_FIELD_EQ(inName,"nextIndex") ) { return nextIndex; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderLayer") ) { return renderLayer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sequenceIndex") ) { return sequenceIndex; }
		if (HX_FIELD_EQ(inName,"ASSETS_IMAGES") ) { return ASSETS_IMAGES; }
		if (HX_FIELD_EQ(inName,"resetBuilding") ) { return resetBuilding_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initWithPlayer") ) { return initWithPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuilding") ) { return createBuilding_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"backgroundRenderLayer") ) { return backgroundRenderLayer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sequence_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"seq") ) { seq=inValue.Cast< ::Sequence >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hall") ) { hall=inValue.Cast< ::Hall >(); return inValue; }
		if (HX_FIELD_EQ(inName,"roof") ) { roof=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nextX") ) { nextX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { layer=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fence") ) { fence=inValue.Cast< ::flixel::tile::FlxTileblock >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"escape") ) { escape=inValue.Cast< ::flixel::tile::FlxTileblock >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"shardsA") ) { shardsA=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shardsB") ) { shardsB=inValue.Cast< ::flixel::effects::particles::FlxEmitter >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"layerLeg") ) { layerLeg=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"building") ) { building=inValue.Cast< ::Building >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curIndex") ) { curIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextType") ) { nextType=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"billboard") ) { billboard=inValue.Cast< ::Billboard >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TILE_SIZE") ) { TILE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextIndex") ) { nextIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"renderLayer") ) { renderLayer=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sequenceIndex") ) { sequenceIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ASSETS_IMAGES") ) { ASSETS_IMAGES=inValue.Cast< ::String >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"backgroundRenderLayer") ) { backgroundRenderLayer=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sequence_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("renderLayer"));
	outFields->push(HX_CSTRING("layer"));
	outFields->push(HX_CSTRING("backgroundRenderLayer"));
	outFields->push(HX_CSTRING("layerLeg"));
	outFields->push(HX_CSTRING("seq"));
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("roof"));
	outFields->push(HX_CSTRING("shardsA"));
	outFields->push(HX_CSTRING("shardsB"));
	outFields->push(HX_CSTRING("building"));
	outFields->push(HX_CSTRING("escape"));
	outFields->push(HX_CSTRING("fence"));
	outFields->push(HX_CSTRING("curIndex"));
	outFields->push(HX_CSTRING("nextIndex"));
	outFields->push(HX_CSTRING("nextType"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sequenceIndex"),
	HX_CSTRING("hall"),
	HX_CSTRING("billboard"),
	HX_CSTRING("TILE_SIZE"),
	HX_CSTRING("ASSETS_IMAGES"),
	HX_CSTRING("nextX"),
	HX_CSTRING("initialize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(Sequence_obj,renderLayer),HX_CSTRING("renderLayer")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(Sequence_obj,layer),HX_CSTRING("layer")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(Sequence_obj,backgroundRenderLayer),HX_CSTRING("backgroundRenderLayer")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(Sequence_obj,layerLeg),HX_CSTRING("layerLeg")},
	{hx::fsObject /*::Sequence*/ ,(int)offsetof(Sequence_obj,seq),HX_CSTRING("seq")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Sequence_obj,player),HX_CSTRING("player")},
	{hx::fsBool,(int)offsetof(Sequence_obj,roof),HX_CSTRING("roof")},
	{hx::fsObject /*::flixel::effects::particles::FlxEmitter*/ ,(int)offsetof(Sequence_obj,shardsA),HX_CSTRING("shardsA")},
	{hx::fsObject /*::flixel::effects::particles::FlxEmitter*/ ,(int)offsetof(Sequence_obj,shardsB),HX_CSTRING("shardsB")},
	{hx::fsObject /*::Building*/ ,(int)offsetof(Sequence_obj,building),HX_CSTRING("building")},
	{hx::fsObject /*::flixel::tile::FlxTileblock*/ ,(int)offsetof(Sequence_obj,escape),HX_CSTRING("escape")},
	{hx::fsObject /*::flixel::tile::FlxTileblock*/ ,(int)offsetof(Sequence_obj,fence),HX_CSTRING("fence")},
	{hx::fsInt,(int)offsetof(Sequence_obj,curIndex),HX_CSTRING("curIndex")},
	{hx::fsInt,(int)offsetof(Sequence_obj,nextIndex),HX_CSTRING("nextIndex")},
	{hx::fsInt,(int)offsetof(Sequence_obj,nextType),HX_CSTRING("nextType")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("renderLayer"),
	HX_CSTRING("layer"),
	HX_CSTRING("backgroundRenderLayer"),
	HX_CSTRING("layerLeg"),
	HX_CSTRING("seq"),
	HX_CSTRING("player"),
	HX_CSTRING("roof"),
	HX_CSTRING("shardsA"),
	HX_CSTRING("shardsB"),
	HX_CSTRING("building"),
	HX_CSTRING("escape"),
	HX_CSTRING("fence"),
	HX_CSTRING("curIndex"),
	HX_CSTRING("nextIndex"),
	HX_CSTRING("nextType"),
	HX_CSTRING("initWithPlayer"),
	HX_CSTRING("resetBuilding"),
	HX_CSTRING("createBuilding"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sequence_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sequence_obj::sequenceIndex,"sequenceIndex");
	HX_MARK_MEMBER_NAME(Sequence_obj::hall,"hall");
	HX_MARK_MEMBER_NAME(Sequence_obj::billboard,"billboard");
	HX_MARK_MEMBER_NAME(Sequence_obj::TILE_SIZE,"TILE_SIZE");
	HX_MARK_MEMBER_NAME(Sequence_obj::ASSETS_IMAGES,"ASSETS_IMAGES");
	HX_MARK_MEMBER_NAME(Sequence_obj::nextX,"nextX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sequence_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sequence_obj::sequenceIndex,"sequenceIndex");
	HX_VISIT_MEMBER_NAME(Sequence_obj::hall,"hall");
	HX_VISIT_MEMBER_NAME(Sequence_obj::billboard,"billboard");
	HX_VISIT_MEMBER_NAME(Sequence_obj::TILE_SIZE,"TILE_SIZE");
	HX_VISIT_MEMBER_NAME(Sequence_obj::ASSETS_IMAGES,"ASSETS_IMAGES");
	HX_VISIT_MEMBER_NAME(Sequence_obj::nextX,"nextX");
};

#endif

Class Sequence_obj::__mClass;

void Sequence_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Sequence"), hx::TCanCast< Sequence_obj> ,sStaticFields,sMemberFields,
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

void Sequence_obj::__boot()
{
	TILE_SIZE= (int)16;
	ASSETS_IMAGES= HX_CSTRING("assets/images/");
	nextX= (int)0;
}

