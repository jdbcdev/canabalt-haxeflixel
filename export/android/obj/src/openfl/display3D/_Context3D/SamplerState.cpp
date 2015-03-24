#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DMipFilter
#include <openfl/display3D/Context3DMipFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFilter
#include <openfl/display3D/Context3DTextureFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DWrapMode
#include <openfl/display3D/Context3DWrapMode.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3D_SamplerState
#include <openfl/display3D/_Context3D/SamplerState.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3D{

Void SamplerState_obj::__construct()
{
HX_STACK_FRAME("openfl.display3D._Context3D.SamplerState","new",0xe10565af,"openfl.display3D._Context3D.SamplerState.new","openfl/display3D/Context3D.hx",1038,0xc899cbb9)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SamplerState_obj::~SamplerState_obj() { }

Dynamic SamplerState_obj::__CreateEmpty() { return  new SamplerState_obj; }
hx::ObjectPtr< SamplerState_obj > SamplerState_obj::__new()
{  hx::ObjectPtr< SamplerState_obj > result = new SamplerState_obj();
	result->__construct();
	return result;}

Dynamic SamplerState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SamplerState_obj > result = new SamplerState_obj();
	result->__construct();
	return result;}


SamplerState_obj::SamplerState_obj()
{
}

void SamplerState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerState);
	HX_MARK_MEMBER_NAME(wrap,"wrap");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(mipfilter,"mipfilter");
	HX_MARK_END_CLASS();
}

void SamplerState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(wrap,"wrap");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(mipfilter,"mipfilter");
}

Dynamic SamplerState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { return wrap; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { return mipfilter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SamplerState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"wrap") ) { wrap=inValue.Cast< ::openfl::display3D::Context3DWrapMode >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::openfl::display3D::Context3DTextureFilter >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mipfilter") ) { mipfilter=inValue.Cast< ::openfl::display3D::Context3DMipFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("wrap"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("mipfilter"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3DWrapMode*/ ,(int)offsetof(SamplerState_obj,wrap),HX_CSTRING("wrap")},
	{hx::fsObject /*::openfl::display3D::Context3DTextureFilter*/ ,(int)offsetof(SamplerState_obj,filter),HX_CSTRING("filter")},
	{hx::fsObject /*::openfl::display3D::Context3DMipFilter*/ ,(int)offsetof(SamplerState_obj,mipfilter),HX_CSTRING("mipfilter")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("wrap"),
	HX_CSTRING("filter"),
	HX_CSTRING("mipfilter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#endif

Class SamplerState_obj::__mClass;

void SamplerState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D._Context3D.SamplerState"), hx::TCanCast< SamplerState_obj> ,sStaticFields,sMemberFields,
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

void SamplerState_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3D
