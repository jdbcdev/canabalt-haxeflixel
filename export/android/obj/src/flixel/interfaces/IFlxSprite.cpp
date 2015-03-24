#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC2(IFlxSprite_obj,reset,)

HX_DEFINE_DYNAMIC_FUNC2(IFlxSprite_obj,setPosition,)


static ::String sMemberFields[] = {
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("alpha"),
	HX_CSTRING("angle"),
	HX_CSTRING("facing"),
	HX_CSTRING("moves"),
	HX_CSTRING("immovable"),
	HX_CSTRING("offset"),
	HX_CSTRING("origin"),
	HX_CSTRING("scale"),
	HX_CSTRING("velocity"),
	HX_CSTRING("maxVelocity"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("drag"),
	HX_CSTRING("scrollFactor"),
	HX_CSTRING("reset"),
	HX_CSTRING("setPosition"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxSprite_obj::__mClass,"__mClass");
};

#endif

Class IFlxSprite_obj::__mClass;

void IFlxSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.interfaces.IFlxSprite"), hx::TCanCast< IFlxSprite_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IFlxSprite_obj::__boot()
{
}

} // end namespace flixel
} // end namespace interfaces
