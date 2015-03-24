#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
namespace openfl{
namespace display{

Void JPEGEncoderOptions_obj::__construct(hx::Null< int >  __o_quality)
{
HX_STACK_FRAME("openfl.display.JPEGEncoderOptions","new",0xdec807a6,"openfl.display.JPEGEncoderOptions.new","openfl/display/JPEGEncoderOptions.hx",12,0xc451ba48)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_quality,"quality")
int quality = __o_quality.Default(80);
{
	HX_STACK_LINE(12)
	this->quality = quality;
}
;
	return null();
}

//JPEGEncoderOptions_obj::~JPEGEncoderOptions_obj() { }

Dynamic JPEGEncoderOptions_obj::__CreateEmpty() { return  new JPEGEncoderOptions_obj; }
hx::ObjectPtr< JPEGEncoderOptions_obj > JPEGEncoderOptions_obj::__new(hx::Null< int >  __o_quality)
{  hx::ObjectPtr< JPEGEncoderOptions_obj > result = new JPEGEncoderOptions_obj();
	result->__construct(__o_quality);
	return result;}

Dynamic JPEGEncoderOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JPEGEncoderOptions_obj > result = new JPEGEncoderOptions_obj();
	result->__construct(inArgs[0]);
	return result;}


JPEGEncoderOptions_obj::JPEGEncoderOptions_obj()
{
}

Dynamic JPEGEncoderOptions_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JPEGEncoderOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JPEGEncoderOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("quality"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(JPEGEncoderOptions_obj,quality),HX_CSTRING("quality")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("quality"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JPEGEncoderOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEGEncoderOptions_obj::__mClass,"__mClass");
};

#endif

Class JPEGEncoderOptions_obj::__mClass;

void JPEGEncoderOptions_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display.JPEGEncoderOptions"), hx::TCanCast< JPEGEncoderOptions_obj> ,sStaticFields,sMemberFields,
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

void JPEGEncoderOptions_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display
