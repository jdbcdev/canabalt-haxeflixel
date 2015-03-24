#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DTextureFilter
#include <openfl/display3D/Context3DTextureFilter.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::ANISOTROPIC16X;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::ANISOTROPIC2X;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::ANISOTROPIC4X;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::ANISOTROPIC8X;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::LINEAR;

::openfl::display3D::Context3DTextureFilter Context3DTextureFilter_obj::NEAREST;

HX_DEFINE_CREATE_ENUM(Context3DTextureFilter_obj)

int Context3DTextureFilter_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ANISOTROPIC16X")) return 3;
	if (inName==HX_CSTRING("ANISOTROPIC2X")) return 0;
	if (inName==HX_CSTRING("ANISOTROPIC4X")) return 1;
	if (inName==HX_CSTRING("ANISOTROPIC8X")) return 2;
	if (inName==HX_CSTRING("LINEAR")) return 4;
	if (inName==HX_CSTRING("NEAREST")) return 5;
	return super::__FindIndex(inName);
}

int Context3DTextureFilter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ANISOTROPIC16X")) return 0;
	if (inName==HX_CSTRING("ANISOTROPIC2X")) return 0;
	if (inName==HX_CSTRING("ANISOTROPIC4X")) return 0;
	if (inName==HX_CSTRING("ANISOTROPIC8X")) return 0;
	if (inName==HX_CSTRING("LINEAR")) return 0;
	if (inName==HX_CSTRING("NEAREST")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DTextureFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ANISOTROPIC16X")) return ANISOTROPIC16X;
	if (inName==HX_CSTRING("ANISOTROPIC2X")) return ANISOTROPIC2X;
	if (inName==HX_CSTRING("ANISOTROPIC4X")) return ANISOTROPIC4X;
	if (inName==HX_CSTRING("ANISOTROPIC8X")) return ANISOTROPIC8X;
	if (inName==HX_CSTRING("LINEAR")) return LINEAR;
	if (inName==HX_CSTRING("NEAREST")) return NEAREST;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("ANISOTROPIC2X"),
	HX_CSTRING("ANISOTROPIC4X"),
	HX_CSTRING("ANISOTROPIC8X"),
	HX_CSTRING("ANISOTROPIC16X"),
	HX_CSTRING("LINEAR"),
	HX_CSTRING("NEAREST"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(Context3DTextureFilter_obj::NEAREST,"NEAREST");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC16X,"ANISOTROPIC16X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC2X,"ANISOTROPIC2X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC4X,"ANISOTROPIC4X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::ANISOTROPIC8X,"ANISOTROPIC8X");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(Context3DTextureFilter_obj::NEAREST,"NEAREST");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Context3DTextureFilter_obj::__mClass;

Dynamic __Create_Context3DTextureFilter_obj() { return new Context3DTextureFilter_obj; }

void Context3DTextureFilter_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D.Context3DTextureFilter"), hx::TCanCast< Context3DTextureFilter_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DTextureFilter_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DTextureFilter_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Context3DTextureFilter_obj::__boot()
{
hx::Static(ANISOTROPIC16X) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_CSTRING("ANISOTROPIC16X"),3);
hx::Static(ANISOTROPIC2X) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_CSTRING("ANISOTROPIC2X"),0);
hx::Static(ANISOTROPIC4X) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_CSTRING("ANISOTROPIC4X"),1);
hx::Static(ANISOTROPIC8X) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_CSTRING("ANISOTROPIC8X"),2);
hx::Static(LINEAR) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_CSTRING("LINEAR"),4);
hx::Static(NEAREST) = hx::CreateEnum< Context3DTextureFilter_obj >(HX_CSTRING("NEAREST"),5);
}


} // end namespace openfl
} // end namespace display3D
