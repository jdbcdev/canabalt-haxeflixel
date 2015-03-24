#include <hxcpp.h>

#ifndef INCLUDED_CBlock
#include <CBlock.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif

Void CBlock_obj::__construct(int X,int Y,int Width,int Height)
{
HX_STACK_FRAME("CBlock","new",0x2ec17ffc,"CBlock.new","CBlock.hx",5,0x286392f4)
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

//CBlock_obj::~CBlock_obj() { }

Dynamic CBlock_obj::__CreateEmpty() { return  new CBlock_obj; }
hx::ObjectPtr< CBlock_obj > CBlock_obj::__new(int X,int Y,int Width,int Height)
{  hx::ObjectPtr< CBlock_obj > result = new CBlock_obj();
	result->__construct(X,Y,Width,Height);
	return result;}

Dynamic CBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CBlock_obj > result = new CBlock_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


CBlock_obj::CBlock_obj()
{
}

Dynamic CBlock_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CBlock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CBlock_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(CBlock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CBlock_obj::__mClass,"__mClass");
};

#endif

Class CBlock_obj::__mClass;

void CBlock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CBlock"), hx::TCanCast< CBlock_obj> ,sStaticFields,sMemberFields,
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

void CBlock_obj::__boot()
{
}

