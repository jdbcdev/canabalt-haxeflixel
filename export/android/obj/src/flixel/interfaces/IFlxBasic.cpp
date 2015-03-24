#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
namespace flixel{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,draw,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,update,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,destroy,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,kill,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,revive,)

HX_DEFINE_DYNAMIC_FUNC0(IFlxBasic_obj,toString,return )


static ::String sMemberFields[] = {
	HX_CSTRING("ID"),
	HX_CSTRING("active"),
	HX_CSTRING("visible"),
	HX_CSTRING("alive"),
	HX_CSTRING("exists"),
	HX_CSTRING("draw"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("kill"),
	HX_CSTRING("revive"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxBasic_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxBasic_obj::__mClass,"__mClass");
};

#endif

Class IFlxBasic_obj::__mClass;

void IFlxBasic_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.interfaces.IFlxBasic"), hx::TCanCast< IFlxBasic_obj> ,0,sMemberFields,
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

void IFlxBasic_obj::__boot()
{
}

} // end namespace flixel
} // end namespace interfaces
