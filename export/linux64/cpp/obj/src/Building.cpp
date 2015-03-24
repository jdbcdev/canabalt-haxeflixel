#include <hxcpp.h>

#ifndef INCLUDED_Building
#include <Building.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void Building_obj::__construct(Dynamic X,Dynamic Y,Dynamic MaxSize)
{
HX_STACK_FRAME("Building","new",0x83aa1986,"Building.new","Building.hx",10,0x95d3f8aa)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(10)
	super::__construct(X,Y,MaxSize);
}
;
	return null();
}

//Building_obj::~Building_obj() { }

Dynamic Building_obj::__CreateEmpty() { return  new Building_obj; }
hx::ObjectPtr< Building_obj > Building_obj::__new(Dynamic X,Dynamic Y,Dynamic MaxSize)
{  hx::ObjectPtr< Building_obj > result = new Building_obj();
	result->__construct(X,Y,MaxSize);
	return result;}

Dynamic Building_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Building_obj > result = new Building_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Building_obj::initWithMaxWidth( int maxWidth){
{
		HX_STACK_FRAME("Building","initWithMaxWidth",0x71e50732,"Building.initWithMaxWidth","Building.hx",128,0x95d3f8aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maxWidth,"maxWidth")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Building_obj,initWithMaxWidth,(void))

Void Building_obj::createWithX( Float x,Float y,Float width,Float height,int wallType,int windowType){
{
		HX_STACK_FRAME("Building","createWithX",0xe406e61c,"Building.createWithX","Building.hx",143,0x95d3f8aa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(wallType,"wallType")
		HX_STACK_ARG(windowType,"windowType")
		HX_STACK_LINE(144)
		this->set_x(x);
		HX_STACK_LINE(145)
		this->set_y(y);
		HX_STACK_LINE(146)
		this->set_width(width);
		HX_STACK_LINE(147)
		this->set_height((int)400);
		HX_STACK_LINE(149)
		::haxe::Log_obj::trace((HX_CSTRING("width ") + width),hx::SourceInfo(HX_CSTRING("Building.hx"),149,HX_CSTRING("Building"),HX_CSTRING("createWithX")));
		HX_STACK_LINE(150)
		::haxe::Log_obj::trace((HX_CSTRING("height ") + height),hx::SourceInfo(HX_CSTRING("Building.hx"),150,HX_CSTRING("Building"),HX_CSTRING("createWithX")));
		HX_STACK_LINE(152)
		this->velocity->set_y((int)0);
		HX_STACK_LINE(153)
		this->acceleration->set_y((int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Building_obj,createWithX,(void))

Void Building_obj::create( ){
{
		HX_STACK_FRAME("Building","create",0x8c2ad996,"Building.create","Building.hx",167,0x95d3f8aa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(168)
		int maxTiles = ::flixel::util::FlxRandom_obj::intRanged((int)30,(int)40,null());		HX_STACK_VAR(maxTiles,"maxTiles");
		HX_STACK_LINE(170)
		::flixel::tile::FlxTileblock roofLeft = ::flixel::tile::FlxTileblock_obj::__new((int)0,(int)130,::Building_obj::TILE_SIZE,::Building_obj::TILE_SIZE);		HX_STACK_VAR(roofLeft,"roofLeft");
		HX_STACK_LINE(171)
		roofLeft->loadGraphic((::Building_obj::ASSETS_IMAGES + HX_CSTRING("roof1-left.png")),null(),::Building_obj::TILE_SIZE,::Building_obj::TILE_SIZE,null(),null());
		HX_STACK_LINE(172)
		this->add(roofLeft);
		HX_STACK_LINE(174)
		::flixel::tile::FlxTileblock roofMiddle = ::flixel::tile::FlxTileblock_obj::__new(::Building_obj::TILE_SIZE,(int)130,(maxTiles * ::Building_obj::TILE_SIZE),::Building_obj::TILE_SIZE);		HX_STACK_VAR(roofMiddle,"roofMiddle");
		HX_STACK_LINE(175)
		roofMiddle->loadTiles((::Building_obj::ASSETS_IMAGES + HX_CSTRING("roof1-middle.png")),::Building_obj::TILE_SIZE,::Building_obj::TILE_SIZE,null());
		HX_STACK_LINE(176)
		this->add(roofMiddle);
		HX_STACK_LINE(178)
		::flixel::tile::FlxTileblock roofRight = ::flixel::tile::FlxTileblock_obj::__new((::Building_obj::TILE_SIZE * ((maxTiles + (int)1))),(int)130,::Building_obj::TILE_SIZE,::Building_obj::TILE_SIZE);		HX_STACK_VAR(roofRight,"roofRight");
		HX_STACK_LINE(179)
		roofRight->loadGraphic((::Building_obj::ASSETS_IMAGES + HX_CSTRING("roof1-right.png")),null(),::Building_obj::TILE_SIZE,::Building_obj::TILE_SIZE,null(),null());
		HX_STACK_LINE(180)
		this->add(roofRight);
		HX_STACK_LINE(182)
		::flixel::tile::FlxTileblock wallLeft = ::flixel::tile::FlxTileblock_obj::__new((int)0,((int)130 + ::Building_obj::TILE_SIZE),::Building_obj::TILE_SIZE,(::Building_obj::TILE_SIZE * maxTiles));		HX_STACK_VAR(wallLeft,"wallLeft");
		HX_STACK_LINE(183)
		wallLeft->loadTiles((::Building_obj::ASSETS_IMAGES + HX_CSTRING("wall1-left.png")),::Building_obj::TILE_SIZE,::Building_obj::TILE_SIZE,null());
		HX_STACK_LINE(184)
		this->add(wallLeft);
		HX_STACK_LINE(186)
		::flixel::tile::FlxTileblock wallMiddle = ::flixel::tile::FlxTileblock_obj::__new(::Building_obj::TILE_SIZE,((int)130 + ::Building_obj::TILE_SIZE),(maxTiles * ::Building_obj::TILE_SIZE),(::Building_obj::TILE_SIZE * (int)20));		HX_STACK_VAR(wallMiddle,"wallMiddle");
		HX_STACK_LINE(187)
		wallMiddle->loadTiles((::Building_obj::ASSETS_IMAGES + HX_CSTRING("wall1-middle.png")),::Building_obj::TILE_SIZE,::Building_obj::TILE_SIZE,null());
		HX_STACK_LINE(188)
		this->add(wallMiddle);
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			while((true)){
				HX_STACK_LINE(190)
				if ((!(((_g < (int)10))))){
					HX_STACK_LINE(190)
					break;
				}
				HX_STACK_LINE(190)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(192)
				::flixel::tile::FlxTileblock window = ::flixel::tile::FlxTileblock_obj::__new(::Building_obj::TILE_SIZE,(((int)130 + (::Building_obj::TILE_SIZE * (int)2)) + (((int)2 * i) * ::Building_obj::TILE_SIZE)),(maxTiles * ::Building_obj::TILE_SIZE),::Building_obj::TILE_SIZE);		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(193)
				window->loadTiles((::Building_obj::ASSETS_IMAGES + HX_CSTRING("window2.png")),::Building_obj::TILE_SIZE,::Building_obj::TILE_SIZE,null());
				HX_STACK_LINE(194)
				this->add(window);
			}
		}
		HX_STACK_LINE(197)
		::flixel::tile::FlxTileblock wallRight = ::flixel::tile::FlxTileblock_obj::__new((::Building_obj::TILE_SIZE * ((maxTiles + (int)1))),((int)130 + ::Building_obj::TILE_SIZE),::Building_obj::TILE_SIZE,(::Building_obj::TILE_SIZE * maxTiles));		HX_STACK_VAR(wallRight,"wallRight");
		HX_STACK_LINE(198)
		wallRight->loadTiles((::Building_obj::ASSETS_IMAGES + HX_CSTRING("wall1-right.png")),::Building_obj::TILE_SIZE,::Building_obj::TILE_SIZE,null());
		HX_STACK_LINE(199)
		this->add(wallRight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Building_obj,create,(void))

Void Building_obj::createRect( ){
{
		HX_STACK_FRAME("Building","createRect",0x71a6d5da,"Building.createRect","Building.hx",204,0x95d3f8aa)
		HX_STACK_THIS(this)
		HX_STACK_LINE(205)
		int numTiles = ::flixel::util::FlxRandom_obj::intRanged((int)30,(int)50,null());		HX_STACK_VAR(numTiles,"numTiles");
		HX_STACK_LINE(206)
		int startY = ::flixel::util::FlxRandom_obj::intRanged((int)100,(int)200,null());		HX_STACK_VAR(startY,"startY");
		HX_STACK_LINE(208)
		::flixel::FlxSprite rect = ::flixel::FlxSprite_obj::__new((int)0,startY,null());		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(209)
		rect->makeGraphic((numTiles * ::Building_obj::TILE_SIZE),((int)20 * ::Building_obj::TILE_SIZE),(int)-1,null(),null());
		HX_STACK_LINE(210)
		this->add(rect);
		HX_STACK_LINE(212)
		rect->set_immovable(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Building_obj,createRect,(void))

Array< ::String > Building_obj::leftWalls;

Array< ::String > Building_obj::rightWalls;

Array< ::String > Building_obj::middleWalls;

Array< ::String > Building_obj::leftWallsCracked;

Array< ::String > Building_obj::middleWallsCracked;

Array< ::String > Building_obj::rightWallsCracked;

Array< ::String > Building_obj::leftFloors;

Array< ::String > Building_obj::middleFloors;

Array< ::String > Building_obj::rightFloors;

Array< ::String > Building_obj::leftRoofs;

Array< ::String > Building_obj::middleRoofs;

Array< ::String > Building_obj::rightRoofs;

Array< ::String > Building_obj::leftRoofsCracked;

Array< ::String > Building_obj::middleRoofsCracked;

Array< ::String > Building_obj::rightRoofsCracked;

Array< ::String > Building_obj::windowImages;

int Building_obj::TILE_SIZE;

::String Building_obj::ASSETS_IMAGES;

Void Building_obj::initialize( ){
{
		HX_STACK_FRAME("Building","initialize",0x002cf8ea,"Building.initialize","Building.hx",53,0x95d3f8aa)
		HX_STACK_LINE(55)
		::Building_obj::leftWalls = Array_obj< ::String >::__new().Add(HX_CSTRING("wall1-left.png")).Add(HX_CSTRING("wall2-left.png")).Add(HX_CSTRING("wall3-left.png")).Add(HX_CSTRING("wall4-left.png"));
		HX_STACK_LINE(60)
		::Building_obj::middleWalls = Array_obj< ::String >::__new().Add(HX_CSTRING("wall1-middle.png")).Add(HX_CSTRING("wall2-middle.png")).Add(HX_CSTRING("wall3-middle.png")).Add(HX_CSTRING("wall4-middle.png"));
		HX_STACK_LINE(65)
		::Building_obj::rightWalls = Array_obj< ::String >::__new().Add(HX_CSTRING("wall1-right.png")).Add(HX_CSTRING("wall2-right.png")).Add(HX_CSTRING("wall3-right.png")).Add(HX_CSTRING("wall4-right.png"));
		HX_STACK_LINE(70)
		::Building_obj::leftWallsCracked = Array_obj< ::String >::__new().Add(HX_CSTRING("wall1-left-cracked.png")).Add(HX_CSTRING("wall2-left-cracked.png")).Add(HX_CSTRING("wall3-left-cracked.png")).Add(HX_CSTRING("wall4-left-cracked.png"));
		HX_STACK_LINE(75)
		::Building_obj::middleWallsCracked = Array_obj< ::String >::__new().Add(HX_CSTRING("wall1-middle-cracked.png")).Add(HX_CSTRING("wall2-middle-cracked.png")).Add(HX_CSTRING("wall3-middle-cracked.png")).Add(HX_CSTRING("wall4-middle-cracked.png"));
		HX_STACK_LINE(80)
		::Building_obj::rightWallsCracked = Array_obj< ::String >::__new().Add(HX_CSTRING("wall1-right-cracked.png")).Add(HX_CSTRING("wall2-right-cracked.png")).Add(HX_CSTRING("wall3-right-cracked.png")).Add(HX_CSTRING("wall4-right-cracked.png"));
		HX_STACK_LINE(85)
		::Building_obj::leftRoofs = Array_obj< ::String >::__new().Add(HX_CSTRING("roof1-left.png")).Add(HX_CSTRING("roof2-left.png")).Add(HX_CSTRING("roof3-left.png")).Add(HX_CSTRING("roof4-left.png"));
		HX_STACK_LINE(90)
		::Building_obj::middleRoofs = Array_obj< ::String >::__new().Add(HX_CSTRING("roof1-middle.png")).Add(HX_CSTRING("roof2-middle.png")).Add(HX_CSTRING("roof3-middle.png")).Add(HX_CSTRING("roof4-middle.png"));
		HX_STACK_LINE(95)
		::Building_obj::rightRoofs = Array_obj< ::String >::__new().Add(HX_CSTRING("roof1-right.png")).Add(HX_CSTRING("roof2-right.png")).Add(HX_CSTRING("roof3-right.png")).Add(HX_CSTRING("roof4-right.png"));
		HX_STACK_LINE(100)
		::Building_obj::leftRoofsCracked = Array_obj< ::String >::__new().Add(HX_CSTRING("roof1-left-cracked.png")).Add(HX_CSTRING("roof2-left-cracked.png")).Add(HX_CSTRING("roof3-left-cracked.png")).Add(HX_CSTRING("roof4-left-cracked.png")).Add(HX_CSTRING("roof5-left-cracked.png")).Add(HX_CSTRING("roof6-left-cracked.png"));
		HX_STACK_LINE(107)
		::Building_obj::middleRoofsCracked = Array_obj< ::String >::__new().Add(HX_CSTRING("roof1-middle-cracked.png")).Add(HX_CSTRING("roof2-middle-cracked.png")).Add(HX_CSTRING("roof3-middle-cracked.png")).Add(HX_CSTRING("roof4-middle-cracked.png")).Add(HX_CSTRING("roof5-middle-cracked.png")).Add(HX_CSTRING("roof6-middle-cracked.png"));
		HX_STACK_LINE(114)
		::Building_obj::rightRoofsCracked = Array_obj< ::String >::__new().Add(HX_CSTRING("roof1-right-cracked.png")).Add(HX_CSTRING("roof2-right-cracked.png")).Add(HX_CSTRING("roof3-right-cracked.png")).Add(HX_CSTRING("roof4-right-cracked.png")).Add(HX_CSTRING("roof5-right-cracked.png")).Add(HX_CSTRING("roof6-right-cracked.png"));
		HX_STACK_LINE(121)
		::Building_obj::windowImages = Array_obj< ::String >::__new().Add(HX_CSTRING("window1.png")).Add(HX_CSTRING("window2.png")).Add(HX_CSTRING("window3.png")).Add(HX_CSTRING("window4.png"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Building_obj,initialize,(void))


Building_obj::Building_obj()
{
}

void Building_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Building);
	HX_MARK_MEMBER_NAME(leftCorner,"leftCorner");
	HX_MARK_MEMBER_NAME(rightCorner,"rightCorner");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Building_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftCorner,"leftCorner");
	HX_VISIT_MEMBER_NAME(rightCorner,"rightCorner");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Building_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftWalls") ) { return leftWalls; }
		if (HX_FIELD_EQ(inName,"leftRoofs") ) { return leftRoofs; }
		if (HX_FIELD_EQ(inName,"TILE_SIZE") ) { return TILE_SIZE; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightWalls") ) { return rightWalls; }
		if (HX_FIELD_EQ(inName,"leftFloors") ) { return leftFloors; }
		if (HX_FIELD_EQ(inName,"rightRoofs") ) { return rightRoofs; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"leftCorner") ) { return leftCorner; }
		if (HX_FIELD_EQ(inName,"createRect") ) { return createRect_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"middleWalls") ) { return middleWalls; }
		if (HX_FIELD_EQ(inName,"rightFloors") ) { return rightFloors; }
		if (HX_FIELD_EQ(inName,"middleRoofs") ) { return middleRoofs; }
		if (HX_FIELD_EQ(inName,"rightCorner") ) { return rightCorner; }
		if (HX_FIELD_EQ(inName,"createWithX") ) { return createWithX_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleFloors") ) { return middleFloors; }
		if (HX_FIELD_EQ(inName,"windowImages") ) { return windowImages; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ASSETS_IMAGES") ) { return ASSETS_IMAGES; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"leftWallsCracked") ) { return leftWallsCracked; }
		if (HX_FIELD_EQ(inName,"leftRoofsCracked") ) { return leftRoofsCracked; }
		if (HX_FIELD_EQ(inName,"initWithMaxWidth") ) { return initWithMaxWidth_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rightWallsCracked") ) { return rightWallsCracked; }
		if (HX_FIELD_EQ(inName,"rightRoofsCracked") ) { return rightRoofsCracked; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"middleWallsCracked") ) { return middleWallsCracked; }
		if (HX_FIELD_EQ(inName,"middleRoofsCracked") ) { return middleRoofsCracked; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Building_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftWalls") ) { leftWalls=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftRoofs") ) { leftRoofs=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TILE_SIZE") ) { TILE_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightWalls") ) { rightWalls=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftFloors") ) { leftFloors=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightRoofs") ) { rightRoofs=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftCorner") ) { leftCorner=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"middleWalls") ) { middleWalls=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightFloors") ) { rightFloors=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleRoofs") ) { middleRoofs=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightCorner") ) { rightCorner=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleFloors") ) { middleFloors=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowImages") ) { windowImages=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ASSETS_IMAGES") ) { ASSETS_IMAGES=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"leftWallsCracked") ) { leftWallsCracked=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftRoofsCracked") ) { leftRoofsCracked=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"rightWallsCracked") ) { rightWallsCracked=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightRoofsCracked") ) { rightRoofsCracked=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"middleWallsCracked") ) { middleWallsCracked=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"middleRoofsCracked") ) { middleRoofsCracked=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Building_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("leftCorner"));
	outFields->push(HX_CSTRING("rightCorner"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("leftWalls"),
	HX_CSTRING("rightWalls"),
	HX_CSTRING("middleWalls"),
	HX_CSTRING("leftWallsCracked"),
	HX_CSTRING("middleWallsCracked"),
	HX_CSTRING("rightWallsCracked"),
	HX_CSTRING("leftFloors"),
	HX_CSTRING("middleFloors"),
	HX_CSTRING("rightFloors"),
	HX_CSTRING("leftRoofs"),
	HX_CSTRING("middleRoofs"),
	HX_CSTRING("rightRoofs"),
	HX_CSTRING("leftRoofsCracked"),
	HX_CSTRING("middleRoofsCracked"),
	HX_CSTRING("rightRoofsCracked"),
	HX_CSTRING("windowImages"),
	HX_CSTRING("TILE_SIZE"),
	HX_CSTRING("ASSETS_IMAGES"),
	HX_CSTRING("initialize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Building_obj,leftCorner),HX_CSTRING("leftCorner")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Building_obj,rightCorner),HX_CSTRING("rightCorner")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("leftCorner"),
	HX_CSTRING("rightCorner"),
	HX_CSTRING("initWithMaxWidth"),
	HX_CSTRING("createWithX"),
	HX_CSTRING("create"),
	HX_CSTRING("createRect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Building_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Building_obj::leftWalls,"leftWalls");
	HX_MARK_MEMBER_NAME(Building_obj::rightWalls,"rightWalls");
	HX_MARK_MEMBER_NAME(Building_obj::middleWalls,"middleWalls");
	HX_MARK_MEMBER_NAME(Building_obj::leftWallsCracked,"leftWallsCracked");
	HX_MARK_MEMBER_NAME(Building_obj::middleWallsCracked,"middleWallsCracked");
	HX_MARK_MEMBER_NAME(Building_obj::rightWallsCracked,"rightWallsCracked");
	HX_MARK_MEMBER_NAME(Building_obj::leftFloors,"leftFloors");
	HX_MARK_MEMBER_NAME(Building_obj::middleFloors,"middleFloors");
	HX_MARK_MEMBER_NAME(Building_obj::rightFloors,"rightFloors");
	HX_MARK_MEMBER_NAME(Building_obj::leftRoofs,"leftRoofs");
	HX_MARK_MEMBER_NAME(Building_obj::middleRoofs,"middleRoofs");
	HX_MARK_MEMBER_NAME(Building_obj::rightRoofs,"rightRoofs");
	HX_MARK_MEMBER_NAME(Building_obj::leftRoofsCracked,"leftRoofsCracked");
	HX_MARK_MEMBER_NAME(Building_obj::middleRoofsCracked,"middleRoofsCracked");
	HX_MARK_MEMBER_NAME(Building_obj::rightRoofsCracked,"rightRoofsCracked");
	HX_MARK_MEMBER_NAME(Building_obj::windowImages,"windowImages");
	HX_MARK_MEMBER_NAME(Building_obj::TILE_SIZE,"TILE_SIZE");
	HX_MARK_MEMBER_NAME(Building_obj::ASSETS_IMAGES,"ASSETS_IMAGES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Building_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Building_obj::leftWalls,"leftWalls");
	HX_VISIT_MEMBER_NAME(Building_obj::rightWalls,"rightWalls");
	HX_VISIT_MEMBER_NAME(Building_obj::middleWalls,"middleWalls");
	HX_VISIT_MEMBER_NAME(Building_obj::leftWallsCracked,"leftWallsCracked");
	HX_VISIT_MEMBER_NAME(Building_obj::middleWallsCracked,"middleWallsCracked");
	HX_VISIT_MEMBER_NAME(Building_obj::rightWallsCracked,"rightWallsCracked");
	HX_VISIT_MEMBER_NAME(Building_obj::leftFloors,"leftFloors");
	HX_VISIT_MEMBER_NAME(Building_obj::middleFloors,"middleFloors");
	HX_VISIT_MEMBER_NAME(Building_obj::rightFloors,"rightFloors");
	HX_VISIT_MEMBER_NAME(Building_obj::leftRoofs,"leftRoofs");
	HX_VISIT_MEMBER_NAME(Building_obj::middleRoofs,"middleRoofs");
	HX_VISIT_MEMBER_NAME(Building_obj::rightRoofs,"rightRoofs");
	HX_VISIT_MEMBER_NAME(Building_obj::leftRoofsCracked,"leftRoofsCracked");
	HX_VISIT_MEMBER_NAME(Building_obj::middleRoofsCracked,"middleRoofsCracked");
	HX_VISIT_MEMBER_NAME(Building_obj::rightRoofsCracked,"rightRoofsCracked");
	HX_VISIT_MEMBER_NAME(Building_obj::windowImages,"windowImages");
	HX_VISIT_MEMBER_NAME(Building_obj::TILE_SIZE,"TILE_SIZE");
	HX_VISIT_MEMBER_NAME(Building_obj::ASSETS_IMAGES,"ASSETS_IMAGES");
};

#endif

Class Building_obj::__mClass;

void Building_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Building"), hx::TCanCast< Building_obj> ,sStaticFields,sMemberFields,
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

void Building_obj::__boot()
{
	TILE_SIZE= (int)16;
	ASSETS_IMAGES= HX_CSTRING("assets/images/");
}

