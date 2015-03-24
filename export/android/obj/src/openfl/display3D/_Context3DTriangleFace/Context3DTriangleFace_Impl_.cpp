#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DTriangleFace_Context3DTriangleFace_Impl_
#include <openfl/display3D/_Context3DTriangleFace/Context3DTriangleFace_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DTriangleFace{

Void Context3DTriangleFace_Impl__obj::__construct()
{
	return null();
}

//Context3DTriangleFace_Impl__obj::~Context3DTriangleFace_Impl__obj() { }

Dynamic Context3DTriangleFace_Impl__obj::__CreateEmpty() { return  new Context3DTriangleFace_Impl__obj; }
hx::ObjectPtr< Context3DTriangleFace_Impl__obj > Context3DTriangleFace_Impl__obj::__new()
{  hx::ObjectPtr< Context3DTriangleFace_Impl__obj > result = new Context3DTriangleFace_Impl__obj();
	result->__construct();
	return result;}

Dynamic Context3DTriangleFace_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DTriangleFace_Impl__obj > result = new Context3DTriangleFace_Impl__obj();
	result->__construct();
	return result;}

int Context3DTriangleFace_Impl__obj::BACK;

int Context3DTriangleFace_Impl__obj::FRONT;

int Context3DTriangleFace_Impl__obj::FRONT_AND_BACK;

int Context3DTriangleFace_Impl__obj::NONE;

int Context3DTriangleFace_Impl__obj::_new( int a){
	HX_STACK_FRAME("openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","_new",0xb305aa19,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_._new","openfl/display3D/Context3DTriangleFace.hx",18,0x186e7db4)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(18)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTriangleFace_Impl__obj,_new,return )

int Context3DTriangleFace_Impl__obj::fromInt( int s){
	HX_STACK_FRAME("openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","fromInt",0x25080bed,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.fromInt","openfl/display3D/Context3DTriangleFace.hx",25,0x186e7db4)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(25)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTriangleFace_Impl__obj,fromInt,return )

int Context3DTriangleFace_Impl__obj::toInt( int this1){
	HX_STACK_FRAME("openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_","toInt",0x09ed4a7c,"openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_.toInt","openfl/display3D/Context3DTriangleFace.hx",32,0x186e7db4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(32)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTriangleFace_Impl__obj,toInt,return )


Context3DTriangleFace_Impl__obj::Context3DTriangleFace_Impl__obj()
{
}

Dynamic Context3DTriangleFace_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { return toInt_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { return fromInt_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DTriangleFace_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DTriangleFace_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BACK"),
	HX_CSTRING("FRONT"),
	HX_CSTRING("FRONT_AND_BACK"),
	HX_CSTRING("NONE"),
	HX_CSTRING("_new"),
	HX_CSTRING("fromInt"),
	HX_CSTRING("toInt"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::BACK,"BACK");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT,"FRONT");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_MARK_MEMBER_NAME(Context3DTriangleFace_Impl__obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::BACK,"BACK");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT,"FRONT");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::FRONT_AND_BACK,"FRONT_AND_BACK");
	HX_VISIT_MEMBER_NAME(Context3DTriangleFace_Impl__obj::NONE,"NONE");
};

#endif

Class Context3DTriangleFace_Impl__obj::__mClass;

void Context3DTriangleFace_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D._Context3DTriangleFace.Context3DTriangleFace_Impl_"), hx::TCanCast< Context3DTriangleFace_Impl__obj> ,sStaticFields,sMemberFields,
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

void Context3DTriangleFace_Impl__obj::__boot()
{
	BACK= (int)1028;
	FRONT= (int)1029;
	FRONT_AND_BACK= (int)1032;
	NONE= (int)0;
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DTriangleFace
