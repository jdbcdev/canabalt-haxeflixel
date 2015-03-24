#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
namespace openfl{
namespace display{

Void PNGEncoderOptions_obj::__construct(hx::Null< bool >  __o_fastCompression)
{
HX_STACK_FRAME("openfl.display.PNGEncoderOptions","new",0x5da61973,"openfl.display.PNGEncoderOptions.new","openfl/display/PNGEncoderOptions.hx",12,0xcb23cb5f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_fastCompression,"fastCompression")
bool fastCompression = __o_fastCompression.Default(false);
{
	HX_STACK_LINE(12)
	this->fastCompression = fastCompression;
}
;
	return null();
}

//PNGEncoderOptions_obj::~PNGEncoderOptions_obj() { }

Dynamic PNGEncoderOptions_obj::__CreateEmpty() { return  new PNGEncoderOptions_obj; }
hx::ObjectPtr< PNGEncoderOptions_obj > PNGEncoderOptions_obj::__new(hx::Null< bool >  __o_fastCompression)
{  hx::ObjectPtr< PNGEncoderOptions_obj > result = new PNGEncoderOptions_obj();
	result->__construct(__o_fastCompression);
	return result;}

Dynamic PNGEncoderOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PNGEncoderOptions_obj > result = new PNGEncoderOptions_obj();
	result->__construct(inArgs[0]);
	return result;}


PNGEncoderOptions_obj::PNGEncoderOptions_obj()
{
}

Dynamic PNGEncoderOptions_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"fastCompression") ) { return fastCompression; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PNGEncoderOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"fastCompression") ) { fastCompression=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PNGEncoderOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fastCompression"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PNGEncoderOptions_obj,fastCompression),HX_CSTRING("fastCompression")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fastCompression"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PNGEncoderOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PNGEncoderOptions_obj::__mClass,"__mClass");
};

#endif

Class PNGEncoderOptions_obj::__mClass;

void PNGEncoderOptions_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.PNGEncoderOptions"), hx::TCanCast< PNGEncoderOptions_obj> ,sStaticFields,sMemberFields,
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

void PNGEncoderOptions_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
