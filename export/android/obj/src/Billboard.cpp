#include <hxcpp.h>

#ifndef INCLUDED_Billboard
#include <Billboard.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif

Void Billboard_obj::__construct(Dynamic X,Dynamic Y,Dynamic Width,Dynamic Height)
{
HX_STACK_FRAME("Billboard","new",0x06cc9591,"Billboard.new","Billboard.hx",5,0x877e06ff)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
{
	HX_STACK_LINE(5)
	super::__construct(X,Y,Width,Height);
}
;
	return null();
}

//Billboard_obj::~Billboard_obj() { }

Dynamic Billboard_obj::__CreateEmpty() { return  new Billboard_obj; }
hx::ObjectPtr< Billboard_obj > Billboard_obj::__new(Dynamic X,Dynamic Y,Dynamic Width,Dynamic Height)
{  hx::ObjectPtr< Billboard_obj > result = new Billboard_obj();
	result->__construct(X,Y,Width,Height);
	return result;}

Dynamic Billboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Billboard_obj > result = new Billboard_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


Billboard_obj::Billboard_obj()
{
}

Dynamic Billboard_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Billboard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Billboard_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Billboard_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Billboard_obj::__mClass,"__mClass");
};

#endif

Class Billboard_obj::__mClass;

void Billboard_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Billboard"), hx::TCanCast< Billboard_obj> ,sStaticFields,sMemberFields,
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

void Billboard_obj::__boot()
{
}

