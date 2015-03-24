#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DVertexBufferFormat
#include <openfl/display3D/Context3DVertexBufferFormat.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::BYTES_4;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_1;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_2;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_3;

::openfl::display3D::Context3DVertexBufferFormat Context3DVertexBufferFormat_obj::FLOAT_4;

HX_DEFINE_CREATE_ENUM(Context3DVertexBufferFormat_obj)

int Context3DVertexBufferFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BYTES_4")) return 0;
	if (inName==HX_CSTRING("FLOAT_1")) return 1;
	if (inName==HX_CSTRING("FLOAT_2")) return 2;
	if (inName==HX_CSTRING("FLOAT_3")) return 3;
	if (inName==HX_CSTRING("FLOAT_4")) return 4;
	return super::__FindIndex(inName);
}

int Context3DVertexBufferFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BYTES_4")) return 0;
	if (inName==HX_CSTRING("FLOAT_1")) return 0;
	if (inName==HX_CSTRING("FLOAT_2")) return 0;
	if (inName==HX_CSTRING("FLOAT_3")) return 0;
	if (inName==HX_CSTRING("FLOAT_4")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Context3DVertexBufferFormat_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BYTES_4")) return BYTES_4;
	if (inName==HX_CSTRING("FLOAT_1")) return FLOAT_1;
	if (inName==HX_CSTRING("FLOAT_2")) return FLOAT_2;
	if (inName==HX_CSTRING("FLOAT_3")) return FLOAT_3;
	if (inName==HX_CSTRING("FLOAT_4")) return FLOAT_4;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("BYTES_4"),
	HX_CSTRING("FLOAT_1"),
	HX_CSTRING("FLOAT_2"),
	HX_CSTRING("FLOAT_3"),
	HX_CSTRING("FLOAT_4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::BYTES_4,"BYTES_4");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_1,"FLOAT_1");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_2,"FLOAT_2");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_3,"FLOAT_3");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_4,"FLOAT_4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::BYTES_4,"BYTES_4");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_1,"FLOAT_1");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_2,"FLOAT_2");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_3,"FLOAT_3");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_obj::FLOAT_4,"FLOAT_4");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Context3DVertexBufferFormat_obj::__mClass;

Dynamic __Create_Context3DVertexBufferFormat_obj() { return new Context3DVertexBufferFormat_obj; }

void Context3DVertexBufferFormat_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D.Context3DVertexBufferFormat"), hx::TCanCast< Context3DVertexBufferFormat_obj >,sStaticFields,sMemberFields,
	&__Create_Context3DVertexBufferFormat_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DVertexBufferFormat_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Context3DVertexBufferFormat_obj::__boot()
{
hx::Static(BYTES_4) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("BYTES_4"),0);
hx::Static(FLOAT_1) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("FLOAT_1"),1);
hx::Static(FLOAT_2) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("FLOAT_2"),2);
hx::Static(FLOAT_3) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("FLOAT_3"),3);
hx::Static(FLOAT_4) = hx::CreateEnum< Context3DVertexBufferFormat_obj >(HX_CSTRING("FLOAT_4"),4);
}


} // end namespace openfl
} // end namespace display3D
