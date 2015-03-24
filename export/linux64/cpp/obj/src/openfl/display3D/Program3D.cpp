#include <hxcpp.h>

#ifndef INCLUDED_openfl__v2_gl_GL
#include <openfl/_v2/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLObject
#include <openfl/_v2/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLProgram
#include <openfl/_v2/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLShader
#include <openfl/_v2/gl/GLShader.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
namespace openfl{
namespace display3D{

Void Program3D_obj::__construct(::openfl::_v2::gl::GLProgram program)
{
HX_STACK_FRAME("openfl.display3D.Program3D","new",0xcbd1926e,"openfl.display3D.Program3D.new","openfl/display3D/Program3D.hx",17,0x0a985b04)
HX_STACK_THIS(this)
HX_STACK_ARG(program,"program")
{
	HX_STACK_LINE(17)
	this->glProgram = program;
}
;
	return null();
}

//Program3D_obj::~Program3D_obj() { }

Dynamic Program3D_obj::__CreateEmpty() { return  new Program3D_obj; }
hx::ObjectPtr< Program3D_obj > Program3D_obj::__new(::openfl::_v2::gl::GLProgram program)
{  hx::ObjectPtr< Program3D_obj > result = new Program3D_obj();
	result->__construct(program);
	return result;}

Dynamic Program3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Program3D_obj > result = new Program3D_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Program3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","dispose",0x556f61ad,"openfl.display3D.Program3D.dispose","openfl/display3D/Program3D.hx",24,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::openfl::_v2::gl::GLProgram program = this->glProgram;		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(24)
		::openfl::_v2::gl::GL_obj::lime_gl_delete_program(program->id);
		HX_STACK_LINE(24)
		program->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Program3D_obj,dispose,(void))

Void Program3D_obj::upload( ::openfl::_v2::gl::GLShader vertexShader,::openfl::_v2::gl::GLShader fragmentShader){
{
		HX_STACK_FRAME("openfl.display3D.Program3D","upload",0x91a244b3,"openfl.display3D.Program3D.upload","openfl/display3D/Program3D.hx",29,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(vertexShader,"vertexShader")
		HX_STACK_ARG(fragmentShader,"fragmentShader")
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			::openfl::_v2::gl::GLProgram program = this->glProgram;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(33)
			program->attach(vertexShader);
			HX_STACK_LINE(33)
			::openfl::_v2::gl::GL_obj::lime_gl_attach_shader(program->id,vertexShader->id);
		}
		HX_STACK_LINE(34)
		{
			HX_STACK_LINE(34)
			::openfl::_v2::gl::GLProgram program = this->glProgram;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(34)
			program->attach(fragmentShader);
			HX_STACK_LINE(34)
			::openfl::_v2::gl::GL_obj::lime_gl_attach_shader(program->id,fragmentShader->id);
		}
		HX_STACK_LINE(35)
		::openfl::_v2::gl::GL_obj::lime_gl_link_program(this->glProgram->id);
		HX_STACK_LINE(37)
		int _g = ::openfl::_v2::gl::GL_obj::lime_gl_get_program_parameter(this->glProgram->id,(int)35714);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		if (((_g == (int)0))){
			HX_STACK_LINE(39)
			::String result = ::openfl::_v2::gl::GL_obj::lime_gl_get_program_info_log(this->glProgram->id);		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(40)
			if (((result != HX_CSTRING("")))){
				HX_STACK_LINE(40)
				HX_STACK_DO_THROW(result);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Program3D_obj,upload,(void))


Program3D_obj::Program3D_obj()
{
}

void Program3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Program3D);
	HX_MARK_MEMBER_NAME(glProgram,"glProgram");
	HX_MARK_END_CLASS();
}

void Program3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(glProgram,"glProgram");
}

Dynamic Program3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"upload") ) { return upload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { return glProgram; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Program3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"glProgram") ) { glProgram=inValue.Cast< ::openfl::_v2::gl::GLProgram >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Program3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("glProgram"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::gl::GLProgram*/ ,(int)offsetof(Program3D_obj,glProgram),HX_CSTRING("glProgram")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("glProgram"),
	HX_CSTRING("dispose"),
	HX_CSTRING("upload"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Program3D_obj::__mClass,"__mClass");
};

#endif

Class Program3D_obj::__mClass;

void Program3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D.Program3D"), hx::TCanCast< Program3D_obj> ,sStaticFields,sMemberFields,
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

void Program3D_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display3D
