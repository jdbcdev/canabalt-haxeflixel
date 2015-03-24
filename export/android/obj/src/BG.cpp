#include <hxcpp.h>

#ifndef INCLUDED_BG
#include <BG.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void BG_obj::__construct(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("BG","new",0x63bca137,"BG.new","BG.hx",12,0x2f83b219)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Dynamic X = __o_X.Default(0);
Dynamic Y = __o_Y.Default(0);
{
	HX_STACK_LINE(12)
	super::__construct(X,Y,SimpleGraphic);
}
;
	return null();
}

//BG_obj::~BG_obj() { }

Dynamic BG_obj::__CreateEmpty() { return  new BG_obj; }
hx::ObjectPtr< BG_obj > BG_obj::__new(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< BG_obj > result = new BG_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic BG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BG_obj > result = new BG_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void BG_obj::update( ){
{
		HX_STACK_FRAME("BG","update",0x3f1b9592,"BG.update","BG.hx",19,0x2f83b219)
		HX_STACK_THIS(this)
		HX_STACK_LINE(20)
		this->super::update();
		HX_STACK_LINE(22)
		::flixel::util::FlxPoint point = this->getScreenXY(null(),null());		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(24)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		Float _g1 = (point->x + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(24)
		if (((_g1 < (int)0))){
			HX_STACK_LINE(27)
			::BG _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(27)
			Float _g21 = this->get_width();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(27)
			Float _g3 = (_g21 * (int)2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(27)
			Float _g4 = (_g2->x + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(27)
			_g2->set_x(_g4);
		}
	}
return null();
}



BG_obj::BG_obj()
{
}

Dynamic BG_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BG_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BG_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BG_obj::__mClass,"__mClass");
};

#endif

Class BG_obj::__mClass;

void BG_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("BG"), hx::TCanCast< BG_obj> ,sStaticFields,sMemberFields,
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

void BG_obj::__boot()
{
}

