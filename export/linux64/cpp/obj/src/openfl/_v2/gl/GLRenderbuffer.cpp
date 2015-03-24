#include <hxcpp.h>

#ifndef INCLUDED_openfl__v2_gl_GLObject
#include <openfl/_v2/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLRenderbuffer
#include <openfl/_v2/gl/GLRenderbuffer.h>
#endif
namespace openfl{
namespace _v2{
namespace gl{

Void GLRenderbuffer_obj::__construct(int version,Dynamic id)
{
HX_STACK_FRAME("openfl._v2.gl.GLRenderbuffer","new",0x8c2585c5,"openfl._v2.gl.GLRenderbuffer.new","openfl/_v2/gl/GLRenderbuffer.hx",9,0x4b6ba9ac)
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

//GLRenderbuffer_obj::~GLRenderbuffer_obj() { }

Dynamic GLRenderbuffer_obj::__CreateEmpty() { return  new GLRenderbuffer_obj; }
hx::ObjectPtr< GLRenderbuffer_obj > GLRenderbuffer_obj::__new(int version,Dynamic id)
{  hx::ObjectPtr< GLRenderbuffer_obj > result = new GLRenderbuffer_obj();
	result->__construct(version,id);
	return result;}

Dynamic GLRenderbuffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderbuffer_obj > result = new GLRenderbuffer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String GLRenderbuffer_obj::getType( ){
	HX_STACK_FRAME("openfl._v2.gl.GLRenderbuffer","getType",0x16546e55,"openfl._v2.gl.GLRenderbuffer.getType","openfl/_v2/gl/GLRenderbuffer.hx",16,0x4b6ba9ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return HX_CSTRING("Renderbuffer");
}



GLRenderbuffer_obj::GLRenderbuffer_obj()
{
}

Dynamic GLRenderbuffer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLRenderbuffer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderbuffer_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(GLRenderbuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderbuffer_obj::__mClass,"__mClass");
};

#endif

Class GLRenderbuffer_obj::__mClass;

void GLRenderbuffer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.gl.GLRenderbuffer"), hx::TCanCast< GLRenderbuffer_obj> ,sStaticFields,sMemberFields,
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

void GLRenderbuffer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace gl
