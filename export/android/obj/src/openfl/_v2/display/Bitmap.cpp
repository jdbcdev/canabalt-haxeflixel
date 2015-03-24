#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace openfl{
namespace _v2{
namespace display{

Void Bitmap_obj::__construct(::openfl::_v2::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("openfl._v2.display.Bitmap","new",0xa13b3bbe,"openfl._v2.display.Bitmap.new","openfl/_v2/display/Bitmap.hx",16,0x220ab68f)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmapData,"bitmapData")
HX_STACK_ARG(pixelSnapping,"pixelSnapping")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(18)
	Dynamic _g = ::openfl::_v2::display::DisplayObject_obj::lime_create_display_object();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(18)
	super::__construct(_g,HX_CSTRING("Bitmap"));
	HX_STACK_LINE(20)
	this->set_pixelSnapping((  (((pixelSnapping == null()))) ? ::openfl::display::PixelSnapping(::openfl::display::PixelSnapping_obj::AUTO) : ::openfl::display::PixelSnapping(pixelSnapping) ));
	HX_STACK_LINE(21)
	this->set_smoothing(smoothing);
	HX_STACK_LINE(23)
	if (((bitmapData != null()))){
		HX_STACK_LINE(25)
		this->set_bitmapData(bitmapData);
	}
	else{
		HX_STACK_LINE(27)
		if (((this->bitmapData != null()))){
			HX_STACK_LINE(29)
			this->__rebuild();
		}
	}
}
;
	return null();
}

//Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::openfl::_v2::display::BitmapData bitmapData,::openfl::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< Bitmap_obj > result = new Bitmap_obj();
	result->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return result;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > result = new Bitmap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Bitmap_obj::__rebuild( ){
{
		HX_STACK_FRAME("openfl._v2.display.Bitmap","__rebuild",0xa87ec559,"openfl._v2.display.Bitmap.__rebuild","openfl/_v2/display/Bitmap.hx",38,0x220ab68f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		if (((this->__handle != null()))){
			HX_STACK_LINE(40)
			::openfl::_v2::display::Graphics gfx = this->get_graphics();		HX_STACK_VAR(gfx,"gfx");
			HX_STACK_LINE(41)
			gfx->clear();
			HX_STACK_LINE(43)
			if (((this->bitmapData != null()))){
				HX_STACK_LINE(45)
				gfx->beginBitmapFill(this->bitmapData,null(),false,this->smoothing);
				HX_STACK_LINE(46)
				int _g = this->bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(46)
				int _g1 = this->bitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(46)
				gfx->drawRect((int)0,(int)0,_g,_g1);
				HX_STACK_LINE(47)
				gfx->endFill();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,__rebuild,(void))

::openfl::_v2::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::_v2::display::BitmapData value){
	HX_STACK_FRAME("openfl._v2.display.Bitmap","set_bitmapData",0x3b6adbd8,"openfl._v2.display.Bitmap.set_bitmapData","openfl/_v2/display/Bitmap.hx",63,0x220ab68f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(65)
	this->bitmapData = value;
	HX_STACK_LINE(66)
	this->__rebuild();
	HX_STACK_LINE(68)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

::openfl::display::PixelSnapping Bitmap_obj::get_pixelSnapping( ){
	HX_STACK_FRAME("openfl._v2.display.Bitmap","get_pixelSnapping",0x66630d97,"openfl._v2.display.Bitmap.get_pixelSnapping","openfl/_v2/display/Bitmap.hx",73,0x220ab68f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	int i = ::openfl::_v2::display::Bitmap_obj::lime_display_object_get_pixel_snapping(this->__handle);		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(76)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::display::PixelSnapping >(),i,null());
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,get_pixelSnapping,return )

::openfl::display::PixelSnapping Bitmap_obj::set_pixelSnapping( ::openfl::display::PixelSnapping value){
	HX_STACK_FRAME("openfl._v2.display.Bitmap","set_pixelSnapping",0x89d0e5a3,"openfl._v2.display.Bitmap.set_pixelSnapping","openfl/_v2/display/Bitmap.hx",81,0x220ab68f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(83)
	if (((value == null()))){
		HX_STACK_LINE(85)
		::openfl::_v2::display::Bitmap_obj::lime_display_object_set_pixel_snapping(this->__handle,(int)0);
	}
	else{
		HX_STACK_LINE(89)
		int _g = value->__Index();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		::openfl::_v2::display::Bitmap_obj::lime_display_object_set_pixel_snapping(this->__handle,_g);
	}
	HX_STACK_LINE(93)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_pixelSnapping,return )

bool Bitmap_obj::set_smoothing( bool value){
	HX_STACK_FRAME("openfl._v2.display.Bitmap","set_smoothing",0x4c721835,"openfl._v2.display.Bitmap.set_smoothing","openfl/_v2/display/Bitmap.hx",98,0x220ab68f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(100)
	this->smoothing = value;
	HX_STACK_LINE(101)
	this->__rebuild();
	HX_STACK_LINE(103)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_smoothing,return )

Dynamic Bitmap_obj::lime_display_object_get_pixel_snapping;

Dynamic Bitmap_obj::lime_display_object_set_pixel_snapping;


Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	::openfl::_v2::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	::openfl::_v2::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"__rebuild") ) { return __rebuild_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return get_pixelSnapping(); }
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return set_smoothing_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_pixelSnapping") ) { return get_pixelSnapping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixelSnapping") ) { return set_pixelSnapping_dyn(); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pixel_snapping") ) { return lime_display_object_get_pixel_snapping; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_pixel_snapping") ) { return lime_display_object_set_pixel_snapping; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp) return set_smoothing(inValue);smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp) return set_bitmapData(inValue);bitmapData=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return set_pixelSnapping(inValue); }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"lime_display_object_get_pixel_snapping") ) { lime_display_object_get_pixel_snapping=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_display_object_set_pixel_snapping") ) { lime_display_object_set_pixel_snapping=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmapData"));
	outFields->push(HX_CSTRING("pixelSnapping"));
	outFields->push(HX_CSTRING("smoothing"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_display_object_get_pixel_snapping"),
	HX_CSTRING("lime_display_object_set_pixel_snapping"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_CSTRING("bitmapData")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_CSTRING("smoothing")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitmapData"),
	HX_CSTRING("smoothing"),
	HX_CSTRING("__rebuild"),
	HX_CSTRING("set_bitmapData"),
	HX_CSTRING("get_pixelSnapping"),
	HX_CSTRING("set_pixelSnapping"),
	HX_CSTRING("set_smoothing"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Bitmap_obj::lime_display_object_get_pixel_snapping,"lime_display_object_get_pixel_snapping");
	HX_MARK_MEMBER_NAME(Bitmap_obj::lime_display_object_set_pixel_snapping,"lime_display_object_set_pixel_snapping");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bitmap_obj::lime_display_object_get_pixel_snapping,"lime_display_object_get_pixel_snapping");
	HX_VISIT_MEMBER_NAME(Bitmap_obj::lime_display_object_set_pixel_snapping,"lime_display_object_set_pixel_snapping");
};

#endif

Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.display.Bitmap"), hx::TCanCast< Bitmap_obj> ,sStaticFields,sMemberFields,
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

void Bitmap_obj::__boot()
{
	lime_display_object_get_pixel_snapping= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_display_object_get_pixel_snapping"),(int)1);
	lime_display_object_set_pixel_snapping= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_display_object_set_pixel_snapping"),(int)2);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace display
