#include <hxcpp.h>

#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
namespace openfl{
namespace media{

Void SoundLoaderContext_obj::__construct(hx::Null< Float >  __o_bufferTime,hx::Null< bool >  __o_checkPolicyFile)
{
HX_STACK_FRAME("openfl.media.SoundLoaderContext","new",0xafd95147,"openfl.media.SoundLoaderContext.new","openfl/media/SoundLoaderContext.hx",154,0x79afda07)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_bufferTime,"bufferTime")
HX_STACK_ARG(__o_checkPolicyFile,"checkPolicyFile")
Float bufferTime = __o_bufferTime.Default(0);
bool checkPolicyFile = __o_checkPolicyFile.Default(false);
{
	HX_STACK_LINE(156)
	this->bufferTime = bufferTime;
	HX_STACK_LINE(157)
	this->checkPolicyFile = checkPolicyFile;
}
;
	return null();
}

//SoundLoaderContext_obj::~SoundLoaderContext_obj() { }

Dynamic SoundLoaderContext_obj::__CreateEmpty() { return  new SoundLoaderContext_obj; }
hx::ObjectPtr< SoundLoaderContext_obj > SoundLoaderContext_obj::__new(hx::Null< Float >  __o_bufferTime,hx::Null< bool >  __o_checkPolicyFile)
{  hx::ObjectPtr< SoundLoaderContext_obj > result = new SoundLoaderContext_obj();
	result->__construct(__o_bufferTime,__o_checkPolicyFile);
	return result;}

Dynamic SoundLoaderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundLoaderContext_obj > result = new SoundLoaderContext_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


SoundLoaderContext_obj::SoundLoaderContext_obj()
{
}

Dynamic SoundLoaderContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { return bufferTime; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { return checkPolicyFile; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundLoaderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"bufferTime") ) { bufferTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkPolicyFile") ) { checkPolicyFile=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundLoaderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bufferTime"));
	outFields->push(HX_CSTRING("checkPolicyFile"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundLoaderContext_obj,bufferTime),HX_CSTRING("bufferTime")},
	{hx::fsBool,(int)offsetof(SoundLoaderContext_obj,checkPolicyFile),HX_CSTRING("checkPolicyFile")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bufferTime"),
	HX_CSTRING("checkPolicyFile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundLoaderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundLoaderContext_obj::__mClass,"__mClass");
};

#endif

Class SoundLoaderContext_obj::__mClass;

void SoundLoaderContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.media.SoundLoaderContext"), hx::TCanCast< SoundLoaderContext_obj> ,sStaticFields,sMemberFields,
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

void SoundLoaderContext_obj::__boot()
{
}

} // end namespace openfl
} // end namespace media
