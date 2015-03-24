#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#include <flixel/interfaces/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
namespace flixel{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(IFlxParticle_obj,onEmit,)


static ::String sMemberFields[] = {
	HX_CSTRING("lifespan"),
	HX_CSTRING("friction"),
	HX_CSTRING("useFading"),
	HX_CSTRING("useScaling"),
	HX_CSTRING("useColoring"),
	HX_CSTRING("maxLifespan"),
	HX_CSTRING("startAlpha"),
	HX_CSTRING("rangeAlpha"),
	HX_CSTRING("startScale"),
	HX_CSTRING("rangeScale"),
	HX_CSTRING("startRed"),
	HX_CSTRING("startGreen"),
	HX_CSTRING("startBlue"),
	HX_CSTRING("rangeRed"),
	HX_CSTRING("rangeGreen"),
	HX_CSTRING("rangeBlue"),
	HX_CSTRING("onEmit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

#endif

Class IFlxParticle_obj::__mClass;

void IFlxParticle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.interfaces.IFlxParticle"), hx::TCanCast< IFlxParticle_obj> ,0,sMemberFields,
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

void IFlxParticle_obj::__boot()
{
}

} // end namespace flixel
} // end namespace interfaces
