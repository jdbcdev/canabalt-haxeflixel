#include <hxcpp.h>

#ifndef INCLUDED_CBlock
#include <CBlock.h>
#endif
#ifndef INCLUDED_Hall
#include <Hall.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Hall_obj::__construct(Dynamic X,Dynamic Y,Dynamic MaxSize)
{
HX_STACK_FRAME("Hall","new",0x545f574b,"Hall.new","Hall.hx",10,0xf1745a85)
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

//Hall_obj::~Hall_obj() { }

Dynamic Hall_obj::__CreateEmpty() { return  new Hall_obj; }
hx::ObjectPtr< Hall_obj > Hall_obj::__new(Dynamic X,Dynamic Y,Dynamic MaxSize)
{  hx::ObjectPtr< Hall_obj > result = new Hall_obj();
	result->__construct(X,Y,MaxSize);
	return result;}

Dynamic Hall_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Hall_obj > result = new Hall_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Hall_obj::initWithMaxWidth( int maxWidth){
{
		HX_STACK_FRAME("Hall","initWithMaxWidth",0xb04ed24d,"Hall.initWithMaxWidth","Hall.hx",58,0xf1745a85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maxWidth,"maxWidth")
		HX_STACK_LINE(59)
		::flixel::tile::FlxTileblock _g = ::flixel::tile::FlxTileblock_obj::__new((int)0,(int)0,::Hall_obj::TILE_SIZE,(int)400);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		this->leftEdge = _g;
		HX_STACK_LINE(61)
		this->leftEdge->loadTiles((HX_CSTRING("assets/images/") + ::Hall_obj::leftWalls->__get((int)1)),::Hall_obj::TILE_SIZE,::Hall_obj::TILE_SIZE,null());
		HX_STACK_LINE(62)
		this->add(this->leftEdge);
		HX_STACK_LINE(64)
		::flixel::tile::FlxTileblock _g1 = ::flixel::tile::FlxTileblock_obj::__new((int)0,(int)0,::Hall_obj::TILE_SIZE,(int)400);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		this->rightEdge = _g1;
		HX_STACK_LINE(66)
		this->rightEdge->loadTiles((HX_CSTRING("assets/images/") + ::Hall_obj::rightWalls->__get((int)1)),::Hall_obj::TILE_SIZE,::Hall_obj::TILE_SIZE,null());
		HX_STACK_LINE(67)
		this->add(this->rightEdge);
		HX_STACK_LINE(69)
		::CBlock _g2 = ::CBlock_obj::__new((int)0,(int)0,maxWidth,::Hall_obj::TILE_SIZE);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(69)
		this->hall1 = _g2;
		HX_STACK_LINE(70)
		this->hall1->loadTiles(HX_CSTRING("assets/images/wall2-middle.png"),::Hall_obj::TILE_SIZE,::Hall_obj::TILE_SIZE,null());
		HX_STACK_LINE(71)
		this->hall1->scrollFactor->set_x((int)1);
		HX_STACK_LINE(72)
		this->hall1->scrollFactor->set_y((int)1);
		HX_STACK_LINE(76)
		::CBlock _g3 = ::CBlock_obj::__new((int)0,(int)0,maxWidth,::Hall_obj::TILE_SIZE);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(76)
		this->hall2 = _g3;
		HX_STACK_LINE(77)
		this->hall2->loadTiles(HX_CSTRING("assets/images/wall2-middle-cracked.png"),::Hall_obj::TILE_SIZE,::Hall_obj::TILE_SIZE,null());
		HX_STACK_LINE(78)
		this->hall1->scrollFactor->set_x((int)1);
		HX_STACK_LINE(79)
		this->hall1->scrollFactor->set_y((int)1);
		HX_STACK_LINE(82)
		::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(82)
		this->hall3 = _g4;
		HX_STACK_LINE(85)
		Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(85)
		this->doors = _g5;
		HX_STACK_LINE(86)
		Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(86)
		this->extraWindows = _g6;
		HX_STACK_LINE(88)
		Array< ::Dynamic > _g7 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(88)
		this->extraWalls = _g7;
		HX_STACK_LINE(89)
		Array< ::Dynamic > _g8 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(89)
		this->extraDoors = _g8;
		HX_STACK_LINE(91)
		int n = (int)12;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(92)
		{
			HX_STACK_LINE(92)
			int _g9 = (int)1;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(92)
			while((true)){
				HX_STACK_LINE(92)
				if ((!(((_g9 < n))))){
					HX_STACK_LINE(92)
					break;
				}
				HX_STACK_LINE(92)
				int i = (_g9)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(93)
				int width = (maxWidth - ((int)2 * ::Hall_obj::TILE_SIZE));		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(95)
				::flixel::FlxSprite wall = ::flixel::FlxSprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(wall,"wall");
				HX_STACK_LINE(96)
				wall->loadGraphic((HX_CSTRING("assets/images/") + ::Hall_obj::middleWalls->__get((int)3)),null(),null(),null(),null(),null());
				HX_STACK_LINE(97)
				this->add(wall);
				HX_STACK_LINE(98)
				this->extraWalls->push(wall);
			}
		}
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			int _g9 = (int)1;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(101)
			while((true)){
				HX_STACK_LINE(101)
				if ((!(((_g9 < n))))){
					HX_STACK_LINE(101)
					break;
				}
				HX_STACK_LINE(101)
				int i = (_g9)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(102)
				int width = (maxWidth - ((int)2 * ::Hall_obj::TILE_SIZE));		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(103)
				::flixel::tile::FlxTileblock window = ::flixel::tile::FlxTileblock_obj::__new((int)0,(int)0,width,::Hall_obj::TILE_SIZE);		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(104)
				window->loadGraphic((HX_CSTRING("assets/images/") + ::Hall_obj::windowImages->__get((int)3)),null(),null(),null(),null(),null());
				HX_STACK_LINE(105)
				this->add(window);
				HX_STACK_LINE(106)
				this->extraWindows->push(window);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Hall_obj,initWithMaxWidth,(void))

Void Hall_obj::createWithX( Float x,Float y,Float width,Float height,int tileSize,int hallHeight,int wallType,int windowType){
{
		HX_STACK_FRAME("Hall","createWithX",0xcb86f0e1,"Hall.createWithX","Hall.hx",112,0xf1745a85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(tileSize,"tileSize")
		HX_STACK_ARG(hallHeight,"hallHeight")
		HX_STACK_ARG(wallType,"wallType")
		HX_STACK_ARG(windowType,"windowType")
		HX_STACK_LINE(113)
		this->set_x(x);
		HX_STACK_LINE(114)
		this->set_y(y);
		HX_STACK_LINE(115)
		this->set_width(width);
		HX_STACK_LINE(116)
		this->set_height(height);
		HX_STACK_LINE(118)
		::haxe::Log_obj::trace((HX_CSTRING("width ") + width),hx::SourceInfo(HX_CSTRING("Hall.hx"),118,HX_CSTRING("Hall"),HX_CSTRING("createWithX")));
		HX_STACK_LINE(119)
		::haxe::Log_obj::trace((HX_CSTRING("height ") + height),hx::SourceInfo(HX_CSTRING("Hall.hx"),119,HX_CSTRING("Hall"),HX_CSTRING("createWithX")));
		HX_STACK_LINE(121)
		this->leftEdge->set_x(x);
		HX_STACK_LINE(122)
		this->leftEdge->set_y((int)0);
		HX_STACK_LINE(123)
		this->leftEdge->set_width(tileSize);
		HX_STACK_LINE(124)
		this->leftEdge->set_height((y - hallHeight));
		HX_STACK_LINE(127)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(127)
		Float _g1 = (this->x + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		Float _g2 = (_g1 - tileSize);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(127)
		this->rightEdge->set_x(_g2);
		HX_STACK_LINE(128)
		this->rightEdge->set_y((int)0);
		HX_STACK_LINE(129)
		this->rightEdge->set_width(tileSize);
		HX_STACK_LINE(130)
		this->rightEdge->set_height((this->y - hallHeight));
		HX_STACK_LINE(133)
		this->hall1->set_x(this->x);
		HX_STACK_LINE(134)
		this->hall1->set_y((this->y - tileSize));
		HX_STACK_LINE(135)
		Float _g3 = this->get_width();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(135)
		this->hall1->set_width(_g3);
		HX_STACK_LINE(136)
		this->hall1->set_height(tileSize);
		HX_STACK_LINE(138)
		this->hall2->set_x(this->x);
		HX_STACK_LINE(139)
		this->hall2->set_y((this->y - ((int)2 * tileSize)));
		HX_STACK_LINE(140)
		Float _g4 = this->get_width();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(140)
		this->hall2->set_width(_g4);
		HX_STACK_LINE(141)
		this->hall2->set_height(tileSize);
		HX_STACK_LINE(143)
		this->hall3->set_x(x);
		HX_STACK_LINE(144)
		this->hall3->set_y((y - hallHeight));
		HX_STACK_LINE(145)
		int _g5 = ::Math_obj::floor(width);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(145)
		int _g6 = ::Math_obj::floor((hallHeight - ((int)2 * tileSize)));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(145)
		this->hall3->makeGraphic(_g5,_g6,(int)-13290179,null(),null());
		HX_STACK_LINE(147)
		int n = (int)12;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(149)
			int _g7 = (n - (int)1);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				if ((!(((_g11 < _g7))))){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(152)
				::flixel::FlxSprite wall = this->extraWalls->__get(i).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(wall,"wall");
				HX_STACK_LINE(153)
				wall->set_x((this->x + tileSize));
				HX_STACK_LINE(154)
				wall->set_y(((this->y - hallHeight) - ((((int)1 + (i * (int)2))) * tileSize)));
				HX_STACK_LINE(155)
				Float _g71 = this->get_width();		HX_STACK_VAR(_g71,"_g71");
				HX_STACK_LINE(155)
				Float _g8 = (_g71 - ((int)2 * tileSize));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(155)
				wall->set_width(_g8);
				HX_STACK_LINE(156)
				wall->set_height(tileSize);
			}
		}
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(160)
			int _g7 = (n - (int)1);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(160)
			while((true)){
				HX_STACK_LINE(160)
				if ((!(((_g11 < _g7))))){
					HX_STACK_LINE(160)
					break;
				}
				HX_STACK_LINE(160)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(162)
				::flixel::tile::FlxTileblock window = this->extraWindows->__get(i).StaticCast< ::flixel::tile::FlxTileblock >();		HX_STACK_VAR(window,"window");
				HX_STACK_LINE(163)
				window->set_x((this->x + tileSize));
				HX_STACK_LINE(164)
				window->set_y(((this->y - hallHeight) - ((((int)2 + (i * (int)2))) * tileSize)));
				HX_STACK_LINE(165)
				Float _g9 = this->get_width();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(165)
				Float _g10 = (_g9 - ((int)2 * tileSize));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(165)
				window->set_width(_g10);
				HX_STACK_LINE(166)
				window->set_height(tileSize);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Hall_obj,createWithX,(void))

int Hall_obj::TILE_SIZE;

Array< ::String > Hall_obj::leftWalls;

Array< ::String > Hall_obj::rightWalls;

Array< ::String > Hall_obj::middleWalls;

Array< ::String > Hall_obj::windowImages;

Void Hall_obj::initialize( ){
{
		HX_STACK_FRAME("Hall","initialize",0xe91b2dc5,"Hall.initialize","Hall.hx",34,0xf1745a85)
		HX_STACK_LINE(35)
		::Hall_obj::leftWalls = Array_obj< ::String >::__new().Add(HX_CSTRING("wall1-left.png")).Add(HX_CSTRING("wall2-left.png")).Add(HX_CSTRING("wall3-left.png")).Add(HX_CSTRING("wall4-left.png"));
		HX_STACK_LINE(40)
		::Hall_obj::middleWalls = Array_obj< ::String >::__new().Add(HX_CSTRING("wall1-middle.png")).Add(HX_CSTRING("wall2-middle.png")).Add(HX_CSTRING("wall3-middle.png")).Add(HX_CSTRING("wall4-middle.png"));
		HX_STACK_LINE(45)
		::Hall_obj::rightWalls = Array_obj< ::String >::__new().Add(HX_CSTRING("wall1-right.png")).Add(HX_CSTRING("wall2-right.png")).Add(HX_CSTRING("wall3-right.png")).Add(HX_CSTRING("wall4-right.png"));
		HX_STACK_LINE(50)
		::Hall_obj::windowImages = Array_obj< ::String >::__new().Add(HX_CSTRING("window1.png")).Add(HX_CSTRING("window2.png")).Add(HX_CSTRING("window3.png")).Add(HX_CSTRING("window4.png"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Hall_obj,initialize,(void))


Hall_obj::Hall_obj()
{
}

void Hall_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Hall);
	HX_MARK_MEMBER_NAME(leftEdge,"leftEdge");
	HX_MARK_MEMBER_NAME(rightEdge,"rightEdge");
	HX_MARK_MEMBER_NAME(hall1,"hall1");
	HX_MARK_MEMBER_NAME(hall2,"hall2");
	HX_MARK_MEMBER_NAME(hall3,"hall3");
	HX_MARK_MEMBER_NAME(doors,"doors");
	HX_MARK_MEMBER_NAME(extraWindows,"extraWindows");
	HX_MARK_MEMBER_NAME(extraWalls,"extraWalls");
	HX_MARK_MEMBER_NAME(extraDoors,"extraDoors");
	::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Hall_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftEdge,"leftEdge");
	HX_VISIT_MEMBER_NAME(rightEdge,"rightEdge");
	HX_VISIT_MEMBER_NAME(hall1,"hall1");
	HX_VISIT_MEMBER_NAME(hall2,"hall2");
	HX_VISIT_MEMBER_NAME(hall3,"hall3");
	HX_VISIT_MEMBER_NAME(doors,"doors");
	HX_VISIT_MEMBER_NAME(extraWindows,"extraWindows");
	HX_VISIT_MEMBER_NAME(extraWalls,"extraWalls");
	HX_VISIT_MEMBER_NAME(extraDoors,"extraDoors");
	::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Hall_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"hall1") ) { return hall1; }
		if (HX_FIELD_EQ(inName,"hall2") ) { return hall2; }
		if (HX_FIELD_EQ(inName,"hall3") ) { return hall3; }
		if (HX_FIELD_EQ(inName,"doors") ) { return doors; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftEdge") ) { return leftEdge; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TILE_SIZE") ) { return TILE_SIZE; }
		if (HX_FIELD_EQ(inName,"leftWalls") ) { return leftWalls; }
		if (HX_FIELD_EQ(inName,"rightEdge") ) { return rightEdge; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightWalls") ) { return rightWalls; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"extraWalls") ) { return extraWalls; }
		if (HX_FIELD_EQ(inName,"extraDoors") ) { return extraDoors; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"middleWalls") ) { return middleWalls; }
		if (HX_FIELD_EQ(inName,"createWithX") ) { return createWithX_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowImages") ) { return windowImages; }
		if (HX_FIELD_EQ(inName,"extraWindows") ) { return extraWindows; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initWithMaxWidth") ) { return initWithMaxWidth_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Hall_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"hall1") ) { hall1=inValue.Cast< ::CBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hall2") ) { hall2=inValue.Cast< ::CBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hall3") ) { hall3=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"doors") ) { doors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftEdge") ) { leftEdge=inValue.Cast< ::flixel::tile::FlxTileblock >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TILE_SIZE") ) { TILE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftWalls") ) { leftWalls=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightEdge") ) { rightEdge=inValue.Cast< ::flixel::tile::FlxTileblock >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rightWalls") ) { rightWalls=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"extraWalls") ) { extraWalls=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"extraDoors") ) { extraDoors=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"middleWalls") ) { middleWalls=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowImages") ) { windowImages=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"extraWindows") ) { extraWindows=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Hall_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("leftEdge"));
	outFields->push(HX_CSTRING("rightEdge"));
	outFields->push(HX_CSTRING("hall1"));
	outFields->push(HX_CSTRING("hall2"));
	outFields->push(HX_CSTRING("hall3"));
	outFields->push(HX_CSTRING("doors"));
	outFields->push(HX_CSTRING("extraWindows"));
	outFields->push(HX_CSTRING("extraWalls"));
	outFields->push(HX_CSTRING("extraDoors"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TILE_SIZE"),
	HX_CSTRING("leftWalls"),
	HX_CSTRING("rightWalls"),
	HX_CSTRING("middleWalls"),
	HX_CSTRING("windowImages"),
	HX_CSTRING("initialize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::tile::FlxTileblock*/ ,(int)offsetof(Hall_obj,leftEdge),HX_CSTRING("leftEdge")},
	{hx::fsObject /*::flixel::tile::FlxTileblock*/ ,(int)offsetof(Hall_obj,rightEdge),HX_CSTRING("rightEdge")},
	{hx::fsObject /*::CBlock*/ ,(int)offsetof(Hall_obj,hall1),HX_CSTRING("hall1")},
	{hx::fsObject /*::CBlock*/ ,(int)offsetof(Hall_obj,hall2),HX_CSTRING("hall2")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Hall_obj,hall3),HX_CSTRING("hall3")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Hall_obj,doors),HX_CSTRING("doors")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Hall_obj,extraWindows),HX_CSTRING("extraWindows")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Hall_obj,extraWalls),HX_CSTRING("extraWalls")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Hall_obj,extraDoors),HX_CSTRING("extraDoors")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("leftEdge"),
	HX_CSTRING("rightEdge"),
	HX_CSTRING("hall1"),
	HX_CSTRING("hall2"),
	HX_CSTRING("hall3"),
	HX_CSTRING("doors"),
	HX_CSTRING("extraWindows"),
	HX_CSTRING("extraWalls"),
	HX_CSTRING("extraDoors"),
	HX_CSTRING("initWithMaxWidth"),
	HX_CSTRING("createWithX"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Hall_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Hall_obj::TILE_SIZE,"TILE_SIZE");
	HX_MARK_MEMBER_NAME(Hall_obj::leftWalls,"leftWalls");
	HX_MARK_MEMBER_NAME(Hall_obj::rightWalls,"rightWalls");
	HX_MARK_MEMBER_NAME(Hall_obj::middleWalls,"middleWalls");
	HX_MARK_MEMBER_NAME(Hall_obj::windowImages,"windowImages");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Hall_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Hall_obj::TILE_SIZE,"TILE_SIZE");
	HX_VISIT_MEMBER_NAME(Hall_obj::leftWalls,"leftWalls");
	HX_VISIT_MEMBER_NAME(Hall_obj::rightWalls,"rightWalls");
	HX_VISIT_MEMBER_NAME(Hall_obj::middleWalls,"middleWalls");
	HX_VISIT_MEMBER_NAME(Hall_obj::windowImages,"windowImages");
};

#endif

Class Hall_obj::__mClass;

void Hall_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Hall"), hx::TCanCast< Hall_obj> ,sStaticFields,sMemberFields,
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

void Hall_obj::__boot()
{
	TILE_SIZE= (int)16;
}

