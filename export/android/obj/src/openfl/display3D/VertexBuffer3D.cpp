#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GL
#include <openfl/_v2/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLBuffer
#include <openfl/_v2/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLObject
#include <openfl/_v2/gl/GLObject.h>
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
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
namespace openfl{
namespace display3D{

Void VertexBuffer3D_obj::__construct(::openfl::_v2::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex)
{
HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","new",0xf0b52080,"openfl.display3D.VertexBuffer3D.new","openfl/display3D/VertexBuffer3D.hx",18,0xb1ad396e)
HX_STACK_THIS(this)
HX_STACK_ARG(glBuffer,"glBuffer")
HX_STACK_ARG(numVertices,"numVertices")
HX_STACK_ARG(data32PerVertex,"data32PerVertex")
{
	HX_STACK_LINE(20)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(21)
	this->numVertices = numVertices;
	HX_STACK_LINE(22)
	this->data32PerVertex = data32PerVertex;
}
;
	return null();
}

//VertexBuffer3D_obj::~VertexBuffer3D_obj() { }

Dynamic VertexBuffer3D_obj::__CreateEmpty() { return  new VertexBuffer3D_obj; }
hx::ObjectPtr< VertexBuffer3D_obj > VertexBuffer3D_obj::__new(::openfl::_v2::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex)
{  hx::ObjectPtr< VertexBuffer3D_obj > result = new VertexBuffer3D_obj();
	result->__construct(glBuffer,numVertices,data32PerVertex);
	return result;}

Dynamic VertexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VertexBuffer3D_obj > result = new VertexBuffer3D_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void VertexBuffer3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","dispose",0x6b6860bf,"openfl.display3D.VertexBuffer3D.dispose","openfl/display3D/VertexBuffer3D.hx",29,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::openfl::_v2::gl::GLBuffer buffer = this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(29)
		::openfl::_v2::gl::GL_obj::lime_gl_delete_buffer(buffer->id);
		HX_STACK_LINE(29)
		buffer->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VertexBuffer3D_obj,dispose,(void))

Void VertexBuffer3D_obj::uploadFromByteArray( ::openfl::_v2::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromByteArray",0x0096a806,"openfl.display3D.VertexBuffer3D.uploadFromByteArray","openfl/display3D/VertexBuffer3D.hx",34,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(36)
		int bytesPerVertex = (this->data32PerVertex * (int)4);		HX_STACK_VAR(bytesPerVertex,"bytesPerVertex");
		HX_STACK_LINE(38)
		{
			HX_STACK_LINE(38)
			::openfl::_v2::gl::GLBuffer buffer = this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(38)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(40)
		int length = (count * bytesPerVertex);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(41)
		int offset = (byteArrayOffset + (startOffset * bytesPerVertex));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(42)
		::openfl::_v2::utils::Float32Array float32Array;		HX_STACK_VAR(float32Array,"float32Array");
		HX_STACK_LINE(57)
		::openfl::_v2::utils::Float32Array _g = ::openfl::_v2::utils::Float32Array_obj::__new(byteArray,offset,length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		float32Array = _g;
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::openfl::_v2::utils::ByteArray _g1 = float32Array->getByteBuffer();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(60)
			int _g2 = float32Array->getStart();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(60)
			int _g3 = float32Array->getLength();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(60)
			::openfl::_v2::gl::GL_obj::lime_gl_buffer_data((int)34962,_g1,_g2,_g3,(int)35044);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(VertexBuffer3D_obj,uploadFromByteArray,(void))

Void VertexBuffer3D_obj::uploadFromVector( Array< Float > data,int startVertex,int numVertices){
{
		HX_STACK_FRAME("openfl.display3D.VertexBuffer3D","uploadFromVector",0xcf228b0e,"openfl.display3D.VertexBuffer3D.uploadFromVector","openfl/display3D/VertexBuffer3D.hx",75,0xb1ad396e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(startVertex,"startVertex")
		HX_STACK_ARG(numVertices,"numVertices")
		HX_STACK_LINE(77)
		int bytesPerVertex = (this->data32PerVertex * (int)4);		HX_STACK_VAR(bytesPerVertex,"bytesPerVertex");
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::openfl::_v2::gl::GLBuffer buffer = this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(79)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(81)
		int length = (numVertices * this->data32PerVertex);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(82)
		int offset = startVertex;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(83)
		::openfl::_v2::utils::Float32Array float32Array;		HX_STACK_VAR(float32Array,"float32Array");
		HX_STACK_LINE(94)
		::openfl::_v2::utils::Float32Array _g = ::openfl::_v2::utils::Float32Array_obj::__new(data,offset,length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		float32Array = _g;
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::openfl::_v2::utils::ByteArray _g1 = float32Array->getByteBuffer();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(97)
			int _g2 = float32Array->getStart();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(97)
			int _g3 = float32Array->getLength();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(97)
			::openfl::_v2::gl::GL_obj::lime_gl_buffer_data((int)34962,_g1,_g2,_g3,(int)35044);
		}
		HX_STACK_LINE(99)
		float32Array = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(VertexBuffer3D_obj,uploadFromVector,(void))


VertexBuffer3D_obj::VertexBuffer3D_obj()
{
}

void VertexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VertexBuffer3D);
	HX_MARK_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(numVertices,"numVertices");
	HX_MARK_END_CLASS();
}

void VertexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data32PerVertex,"data32PerVertex");
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(numVertices,"numVertices");
}

Dynamic VertexBuffer3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { return numVertices; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { return data32PerVertex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VertexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::openfl::_v2::gl::GLBuffer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numVertices") ) { numVertices=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"data32PerVertex") ) { data32PerVertex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VertexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data32PerVertex"));
	outFields->push(HX_CSTRING("glBuffer"));
	outFields->push(HX_CSTRING("numVertices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,data32PerVertex),HX_CSTRING("data32PerVertex")},
	{hx::fsObject /*::openfl::_v2::gl::GLBuffer*/ ,(int)offsetof(VertexBuffer3D_obj,glBuffer),HX_CSTRING("glBuffer")},
	{hx::fsInt,(int)offsetof(VertexBuffer3D_obj,numVertices),HX_CSTRING("numVertices")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data32PerVertex"),
	HX_CSTRING("glBuffer"),
	HX_CSTRING("numVertices"),
	HX_CSTRING("dispose"),
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("uploadFromVector"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VertexBuffer3D_obj::__mClass,"__mClass");
};

#endif

Class VertexBuffer3D_obj::__mClass;

void VertexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D.VertexBuffer3D"), hx::TCanCast< VertexBuffer3D_obj> ,sStaticFields,sMemberFields,
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

void VertexBuffer3D_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display3D
