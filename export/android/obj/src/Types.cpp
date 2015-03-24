#include <hxcpp.h>

#ifndef INCLUDED_Types
#include <Types.h>
#endif

::Types Types_obj::BILLBOARD;

::Types Types_obj::COLLAPSE;

::Types Types_obj::ROOF;

HX_DEFINE_CREATE_ENUM(Types_obj)

int Types_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BILLBOARD")) return 2;
	if (inName==HX_CSTRING("COLLAPSE")) return 1;
	if (inName==HX_CSTRING("ROOF")) return 0;
	return super::__FindIndex(inName);
}

int Types_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BILLBOARD")) return 0;
	if (inName==HX_CSTRING("COLLAPSE")) return 0;
	if (inName==HX_CSTRING("ROOF")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Types_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BILLBOARD")) return BILLBOARD;
	if (inName==HX_CSTRING("COLLAPSE")) return COLLAPSE;
	if (inName==HX_CSTRING("ROOF")) return ROOF;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("ROOF"),
	HX_CSTRING("COLLAPSE"),
	HX_CSTRING("BILLBOARD"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Types_obj::BILLBOARD,"BILLBOARD");
	HX_MARK_MEMBER_NAME(Types_obj::COLLAPSE,"COLLAPSE");
	HX_MARK_MEMBER_NAME(Types_obj::ROOF,"ROOF");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Types_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Types_obj::BILLBOARD,"BILLBOARD");
	HX_VISIT_MEMBER_NAME(Types_obj::COLLAPSE,"COLLAPSE");
	HX_VISIT_MEMBER_NAME(Types_obj::ROOF,"ROOF");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Types_obj::__mClass;

Dynamic __Create_Types_obj() { return new Types_obj; }

void Types_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Types"), hx::TCanCast< Types_obj >,sStaticFields,sMemberFields,
	&__Create_Types_obj, &__Create,
	&super::__SGetClass(), &CreateTypes_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Types_obj::__boot()
{
hx::Static(BILLBOARD) = hx::CreateEnum< Types_obj >(HX_CSTRING("BILLBOARD"),2);
hx::Static(COLLAPSE) = hx::CreateEnum< Types_obj >(HX_CSTRING("COLLAPSE"),1);
hx::Static(ROOF) = hx::CreateEnum< Types_obj >(HX_CSTRING("ROOF"),0);
}


