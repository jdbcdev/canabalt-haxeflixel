#include <hxcpp.h>

#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace openfl{
namespace _v2{
namespace display{

Void Tilesheet_obj::__construct(::openfl::_v2::display::BitmapData image)
{
HX_STACK_FRAME("openfl._v2.display.Tilesheet","new",0xc575eee6,"openfl._v2.display.Tilesheet.new","openfl/_v2/display/Tilesheet.hx",39,0xeaf30e4d)
HX_STACK_THIS(this)
HX_STACK_ARG(image,"image")
{
	HX_STACK_LINE(41)
	this->__bitmap = image;
	HX_STACK_LINE(42)
	Dynamic _g = ::openfl::_v2::display::Tilesheet_obj::lime_tilesheet_create(image->__handle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(42)
	this->__handle = _g;
	HX_STACK_LINE(44)
	int _g1 = this->__bitmap->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(44)
	this->_bitmapWidth = _g1;
	HX_STACK_LINE(45)
	int _g2 = this->__bitmap->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(45)
	this->_bitmapHeight = _g2;
	HX_STACK_LINE(47)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(47)
	this->_tilePoints = _g3;
	HX_STACK_LINE(48)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(48)
	this->_tiles = _g4;
	HX_STACK_LINE(49)
	Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(49)
	this->_tileUVs = _g5;
}
;
	return null();
}

//Tilesheet_obj::~Tilesheet_obj() { }

Dynamic Tilesheet_obj::__CreateEmpty() { return  new Tilesheet_obj; }
hx::ObjectPtr< Tilesheet_obj > Tilesheet_obj::__new(::openfl::_v2::display::BitmapData image)
{  hx::ObjectPtr< Tilesheet_obj > result = new Tilesheet_obj();
	result->__construct(image);
	return result;}

Dynamic Tilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilesheet_obj > result = new Tilesheet_obj();
	result->__construct(inArgs[0]);
	return result;}

int Tilesheet_obj::addTileRect( ::openfl::_v2::geom::Rectangle rectangle,::openfl::_v2::geom::Point centerPoint){
	HX_STACK_FRAME("openfl._v2.display.Tilesheet","addTileRect",0x22d6bf39,"openfl._v2.display.Tilesheet.addTileRect","openfl/_v2/display/Tilesheet.hx",54,0xeaf30e4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rectangle,"rectangle")
	HX_STACK_ARG(centerPoint,"centerPoint")
	HX_STACK_LINE(56)
	this->_tiles->push(rectangle);
	HX_STACK_LINE(57)
	if (((centerPoint == null()))){
		HX_STACK_LINE(57)
		this->_tilePoints->push(::openfl::_v2::display::Tilesheet_obj::defaultRatio);
	}
	else{
		HX_STACK_LINE(58)
		::openfl::_v2::geom::Point _g = ::openfl::_v2::geom::Point_obj::__new((Float(centerPoint->x) / Float(rectangle->width)),(Float(centerPoint->y) / Float(rectangle->height)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		this->_tilePoints->push(_g);
	}
	HX_STACK_LINE(59)
	Float _g1 = rectangle->get_left();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(59)
	Float _g2 = (Float(_g1) / Float(this->_bitmapWidth));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(59)
	Float _g3 = rectangle->get_top();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(59)
	Float _g4 = (Float(_g3) / Float(this->_bitmapHeight));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(59)
	Float _g5 = rectangle->get_right();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(59)
	Float _g6 = (Float(_g5) / Float(this->_bitmapWidth));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(59)
	Float _g7 = rectangle->get_bottom();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(59)
	Float _g8 = (Float(_g7) / Float(this->_bitmapHeight));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(59)
	::openfl::_v2::geom::Rectangle _g9 = ::openfl::_v2::geom::Rectangle_obj::__new(_g2,_g4,_g6,_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(59)
	this->_tileUVs->push(_g9);
	HX_STACK_LINE(60)
	return ::openfl::_v2::display::Tilesheet_obj::lime_tilesheet_add_rect(this->__handle,rectangle,centerPoint);
}


HX_DEFINE_DYNAMIC_FUNC2(Tilesheet_obj,addTileRect,return )

Void Tilesheet_obj::drawTiles( ::openfl::_v2::display::Graphics graphics,Array< Float > tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._v2.display.Tilesheet","drawTiles",0x6b08f9e7,"openfl._v2.display.Tilesheet.drawTiles","openfl/_v2/display/Tilesheet.hx",67,0xeaf30e4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(67)
		graphics->drawTiles(hx::ObjectPtr<OBJ_>(this),tileData,smooth,flags,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Tilesheet_obj,drawTiles,(void))

::openfl::_v2::geom::Point Tilesheet_obj::getTileCenter( int index){
	HX_STACK_FRAME("openfl._v2.display.Tilesheet","getTileCenter",0x8f8419df,"openfl._v2.display.Tilesheet.getTileCenter","openfl/_v2/display/Tilesheet.hx",73,0xeaf30e4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(73)
	return this->_tilePoints->__get(index).StaticCast< ::openfl::_v2::geom::Point >();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileCenter,return )

::openfl::_v2::geom::Rectangle Tilesheet_obj::getTileRect( int index){
	HX_STACK_FRAME("openfl._v2.display.Tilesheet","getTileRect",0x176e4aae,"openfl._v2.display.Tilesheet.getTileRect","openfl/_v2/display/Tilesheet.hx",77,0xeaf30e4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(77)
	return this->_tiles->__get(index).StaticCast< ::openfl::_v2::geom::Rectangle >();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileRect,return )

::openfl::_v2::geom::Rectangle Tilesheet_obj::getTileUVs( int index){
	HX_STACK_FRAME("openfl._v2.display.Tilesheet","getTileUVs",0x71c394c8,"openfl._v2.display.Tilesheet.getTileUVs","openfl/_v2/display/Tilesheet.hx",81,0xeaf30e4d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(81)
	return this->_tileUVs->__get(index).StaticCast< ::openfl::_v2::geom::Rectangle >();
}


HX_DEFINE_DYNAMIC_FUNC1(Tilesheet_obj,getTileUVs,return )

int Tilesheet_obj::TILE_SCALE;

int Tilesheet_obj::TILE_ROTATION;

int Tilesheet_obj::TILE_RGB;

int Tilesheet_obj::TILE_ALPHA;

int Tilesheet_obj::TILE_TRANS_2x2;

int Tilesheet_obj::TILE_RECT;

int Tilesheet_obj::TILE_ORIGIN;

int Tilesheet_obj::TILE_BLEND_NORMAL;

int Tilesheet_obj::TILE_BLEND_ADD;

int Tilesheet_obj::TILE_BLEND_MULTIPLY;

int Tilesheet_obj::TILE_BLEND_SCREEN;

int Tilesheet_obj::TILE_BLEND_SUBTRACT;

::openfl::_v2::geom::Point Tilesheet_obj::defaultRatio;

Dynamic Tilesheet_obj::lime_tilesheet_create;

Dynamic Tilesheet_obj::lime_tilesheet_add_rect;


Tilesheet_obj::Tilesheet_obj()
{
}

void Tilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilesheet);
	HX_MARK_MEMBER_NAME(__bitmap,"__bitmap");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(_bitmapHeight,"_bitmapHeight");
	HX_MARK_MEMBER_NAME(_bitmapWidth,"_bitmapWidth");
	HX_MARK_MEMBER_NAME(_tilePoints,"_tilePoints");
	HX_MARK_MEMBER_NAME(_tiles,"_tiles");
	HX_MARK_MEMBER_NAME(_tileUVs,"_tileUVs");
	HX_MARK_END_CLASS();
}

void Tilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__bitmap,"__bitmap");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(_bitmapHeight,"_bitmapHeight");
	HX_VISIT_MEMBER_NAME(_bitmapWidth,"_bitmapWidth");
	HX_VISIT_MEMBER_NAME(_tilePoints,"_tilePoints");
	HX_VISIT_MEMBER_NAME(_tiles,"_tiles");
	HX_VISIT_MEMBER_NAME(_tileUVs,"_tileUVs");
}

Dynamic Tilesheet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { return _tiles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bitmap") ) { return __bitmap; }
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"_tileUVs") ) { return _tileUVs; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTileUVs") ) { return getTileUVs_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tilePoints") ) { return _tilePoints; }
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileRect") ) { return getTileRect_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultRatio") ) { return defaultRatio; }
		if (HX_FIELD_EQ(inName,"_bitmapWidth") ) { return _bitmapWidth; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_bitmapHeight") ) { return _bitmapHeight; }
		if (HX_FIELD_EQ(inName,"getTileCenter") ) { return getTileCenter_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_tilesheet_create") ) { return lime_tilesheet_create; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_tilesheet_add_rect") ) { return lime_tilesheet_add_rect; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { _tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__bitmap") ) { __bitmap=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileUVs") ) { _tileUVs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tilePoints") ) { _tilePoints=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultRatio") ) { defaultRatio=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmapWidth") ) { _bitmapWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_bitmapHeight") ) { _bitmapHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_tilesheet_create") ) { lime_tilesheet_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_tilesheet_add_rect") ) { lime_tilesheet_add_rect=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__bitmap"));
	outFields->push(HX_CSTRING("__handle"));
	outFields->push(HX_CSTRING("_bitmapHeight"));
	outFields->push(HX_CSTRING("_bitmapWidth"));
	outFields->push(HX_CSTRING("_tilePoints"));
	outFields->push(HX_CSTRING("_tiles"));
	outFields->push(HX_CSTRING("_tileUVs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TILE_SCALE"),
	HX_CSTRING("TILE_ROTATION"),
	HX_CSTRING("TILE_RGB"),
	HX_CSTRING("TILE_ALPHA"),
	HX_CSTRING("TILE_TRANS_2x2"),
	HX_CSTRING("TILE_RECT"),
	HX_CSTRING("TILE_ORIGIN"),
	HX_CSTRING("TILE_BLEND_NORMAL"),
	HX_CSTRING("TILE_BLEND_ADD"),
	HX_CSTRING("TILE_BLEND_MULTIPLY"),
	HX_CSTRING("TILE_BLEND_SCREEN"),
	HX_CSTRING("TILE_BLEND_SUBTRACT"),
	HX_CSTRING("defaultRatio"),
	HX_CSTRING("lime_tilesheet_create"),
	HX_CSTRING("lime_tilesheet_add_rect"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(Tilesheet_obj,__bitmap),HX_CSTRING("__bitmap")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tilesheet_obj,__handle),HX_CSTRING("__handle")},
	{hx::fsInt,(int)offsetof(Tilesheet_obj,_bitmapHeight),HX_CSTRING("_bitmapHeight")},
	{hx::fsInt,(int)offsetof(Tilesheet_obj,_bitmapWidth),HX_CSTRING("_bitmapWidth")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,_tilePoints),HX_CSTRING("_tilePoints")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,_tiles),HX_CSTRING("_tiles")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tilesheet_obj,_tileUVs),HX_CSTRING("_tileUVs")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__bitmap"),
	HX_CSTRING("__handle"),
	HX_CSTRING("_bitmapHeight"),
	HX_CSTRING("_bitmapWidth"),
	HX_CSTRING("_tilePoints"),
	HX_CSTRING("_tiles"),
	HX_CSTRING("_tileUVs"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("drawTiles"),
	HX_CSTRING("getTileCenter"),
	HX_CSTRING("getTileRect"),
	HX_CSTRING("getTileUVs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::defaultRatio,"defaultRatio");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::lime_tilesheet_create,"lime_tilesheet_create");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::lime_tilesheet_add_rect,"lime_tilesheet_add_rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::defaultRatio,"defaultRatio");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::lime_tilesheet_create,"lime_tilesheet_create");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::lime_tilesheet_add_rect,"lime_tilesheet_add_rect");
};

#endif

Class Tilesheet_obj::__mClass;

void Tilesheet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.display.Tilesheet"), hx::TCanCast< Tilesheet_obj> ,sStaticFields,sMemberFields,
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

void Tilesheet_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	TILE_BLEND_MULTIPLY= (int)131072;
	TILE_BLEND_SCREEN= (int)262144;
	TILE_BLEND_SUBTRACT= (int)524288;
	defaultRatio= ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);
	lime_tilesheet_create= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_tilesheet_create"),(int)1);
	lime_tilesheet_add_rect= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_tilesheet_add_rect"),(int)3);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace display
