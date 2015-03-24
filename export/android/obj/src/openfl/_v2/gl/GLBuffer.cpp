#include <hxcpp.h>

#ifndef INCLUDED_openfl__v2_gl_GLBuffer
#include <openfl/_v2/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLObject
#include <openfl/_v2/gl/GLObject.h>
#endif
namespace openfl{
namespace _v2{
namespace gl{

Void GLBuffer_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("openfl._v2.gl.GLBuffer","new",0xcf9e472f,"openfl._v2.gl.GLBuffer.new","openfl/_v2/gl/GLBuffer.hx",9,0x87c314c2)
HX_STACK_THIS(this)
HX_STACK_ARG(version,"version")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(9)
	super::__construct(version,id);
}
;
	return null();
}

//GLBuffer_obj::~GLBuffer_obj() { }

Dynamic GLBuffer_obj::__CreateEmpty() { return  new GLBuffer_obj; }
hx::ObjectPtr< GLBuffer_obj > GLBuffer_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLBuffer_obj > result = new GLBuffer_obj();
	result->__construct(version,id);
	return result;}

Dynamic GLBuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLBuffer_obj > result = new GLBuffer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String GLBuffer_obj::getType( ){
	HX_STACK_FRAME("openfl._v2.gl.GLBuffer","getType",0xd43b2cbf,"openfl._v2.gl.GLBuffer.getType","openfl/_v2/gl/GLBuffer.hx",16,0x87c314c2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return HX_CSTRING("Buffer");
}



GLBuffer_obj::GLBuffer_obj()
{
}

Dynamic GLBuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLBuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBuffer_obj::__mClass,"__mClass");
};

#endif

Class GLBuffer_obj::__mClass;

void GLBuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.gl.GLBuffer"), hx::TCanCast< GLBuffer_obj> ,sStaticFields,sMemberFields,
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

void GLBuffer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace gl
