#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_gl__GL_Float32Data_Impl_
#include <openfl/_v2/gl/_GL/Float32Data_Impl_.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ArrayBufferView
#include <openfl/_v2/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_Float32Array
#include <openfl/_v2/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace openfl{
namespace _v2{
namespace gl{
namespace _GL{

Void Float32Data_Impl__obj::__construct()
{
	return null();
}

//Float32Data_Impl__obj::~Float32Data_Impl__obj() { }

Dynamic Float32Data_Impl__obj::__CreateEmpty() { return  new Float32Data_Impl__obj; }
hx::ObjectPtr< Float32Data_Impl__obj > Float32Data_Impl__obj::__new()
{  hx::ObjectPtr< Float32Data_Impl__obj > result = new Float32Data_Impl__obj();
	result->__construct();
	return result;}

Dynamic Float32Data_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Float32Data_Impl__obj > result = new Float32Data_Impl__obj();
	result->__construct();
	return result;}

Dynamic Float32Data_Impl__obj::_new( Dynamic data){
	HX_STACK_FRAME("openfl._v2.gl._GL.Float32Data_Impl_","_new",0x5a362ecc,"openfl._v2.gl._GL.Float32Data_Impl_._new","openfl/_v2/gl/GL.hx",1336,0x4b5f1ee2)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1336)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,_new,return )

Array< Float > Float32Data_Impl__obj::toDynamic( Dynamic this1){
	HX_STACK_FRAME("openfl._v2.gl._GL.Float32Data_Impl_","toDynamic",0x6b67b9f9,"openfl._v2.gl._GL.Float32Data_Impl_.toDynamic","openfl/_v2/gl/GL.hx",1337,0x4b5f1ee2)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(1337)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,toDynamic,return )

Dynamic Float32Data_Impl__obj::fromFloat32Array( ::openfl::_v2::utils::Float32Array f){
	HX_STACK_FRAME("openfl._v2.gl._GL.Float32Data_Impl_","fromFloat32Array",0x36ce6cd3,"openfl._v2.gl._GL.Float32Data_Impl_.fromFloat32Array","openfl/_v2/gl/GL.hx",1339,0x4b5f1ee2)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(1339)
	Dynamic data = f->getByteBuffer();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(1339)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,fromFloat32Array,return )

Dynamic Float32Data_Impl__obj::fromArrayFloat( Array< Float > f){
	HX_STACK_FRAME("openfl._v2.gl._GL.Float32Data_Impl_","fromArrayFloat",0x08375c78,"openfl._v2.gl._GL.Float32Data_Impl_.fromArrayFloat","openfl/_v2/gl/GL.hx",1341,0x4b5f1ee2)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(1341)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Data_Impl__obj,fromArrayFloat,return )


Float32Data_Impl__obj::Float32Data_Impl__obj()
{
}

Dynamic Float32Data_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toDynamic") ) { return toDynamic_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromArrayFloat") ) { return fromArrayFloat_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromFloat32Array") ) { return fromFloat32Array_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Float32Data_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Float32Data_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_new"),
	HX_CSTRING("toDynamic"),
	HX_CSTRING("fromFloat32Array"),
	HX_CSTRING("fromArrayFloat"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Data_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Data_Impl__obj::__mClass,"__mClass");
};

#endif

Class Float32Data_Impl__obj::__mClass;

void Float32Data_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.gl._GL.Float32Data_Impl_"), hx::TCanCast< Float32Data_Impl__obj> ,sStaticFields,sMemberFields,
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

void Float32Data_Impl__obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace gl
} // end namespace _GL
