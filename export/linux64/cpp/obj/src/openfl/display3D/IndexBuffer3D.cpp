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
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_Int16Array
#include <openfl/_v2/utils/Int16Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
namespace openfl{
namespace display3D{

Void IndexBuffer3D_obj::__construct(::openfl::_v2::gl::GLBuffer glBuffer,int numIndices)
{
HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","new",0x7b4eb39c,"openfl.display3D.IndexBuffer3D.new","openfl/display3D/IndexBuffer3D.hx",18,0x3d934296)
HX_STACK_THIS(this)
HX_STACK_ARG(glBuffer,"glBuffer")
HX_STACK_ARG(numIndices,"numIndices")
{
	HX_STACK_LINE(20)
	this->glBuffer = glBuffer;
	HX_STACK_LINE(21)
	this->numIndices = numIndices;
}
;
	return null();
}

//IndexBuffer3D_obj::~IndexBuffer3D_obj() { }

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return  new IndexBuffer3D_obj; }
hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new(::openfl::_v2::gl::GLBuffer glBuffer,int numIndices)
{  hx::ObjectPtr< IndexBuffer3D_obj > result = new IndexBuffer3D_obj();
	result->__construct(glBuffer,numIndices);
	return result;}

Dynamic IndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IndexBuffer3D_obj > result = new IndexBuffer3D_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void IndexBuffer3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","dispose",0xbcffb1db,"openfl.display3D.IndexBuffer3D.dispose","openfl/display3D/IndexBuffer3D.hx",28,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		::openfl::_v2::gl::GLBuffer buffer = this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(28)
		::openfl::_v2::gl::GL_obj::lime_gl_delete_buffer(buffer->id);
		HX_STACK_LINE(28)
		buffer->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer3D_obj,dispose,(void))

Void IndexBuffer3D_obj::uploadFromByteArray( ::openfl::_v2::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromByteArray",0x61713322,"openfl.display3D.IndexBuffer3D.uploadFromByteArray","openfl/display3D/IndexBuffer3D.hx",33,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(35)
		int bytesPerIndex = (int)2;		HX_STACK_VAR(bytesPerIndex,"bytesPerIndex");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			::openfl::_v2::gl::GLBuffer buffer = this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(36)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_buffer((int)34963,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(38)
		int length = (count * bytesPerIndex);		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(39)
		int offset = (byteArrayOffset + (startOffset * bytesPerIndex));		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(40)
		::openfl::_v2::utils::Int16Array indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(55)
		::openfl::_v2::utils::Int16Array _g = ::openfl::_v2::utils::Int16Array_obj::__new(byteArray,offset,length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		indices = _g;
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			::openfl::_v2::utils::ByteArray _g1 = indices->getByteBuffer();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(58)
			int _g2 = indices->getStart();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(58)
			int _g3 = indices->getLength();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(58)
			::openfl::_v2::gl::GL_obj::lime_gl_buffer_data((int)34963,_g1,_g2,_g3,(int)35044);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))

Void IndexBuffer3D_obj::uploadFromVector( Array< int > data,int startOffset,int count){
{
		HX_STACK_FRAME("openfl.display3D.IndexBuffer3D","uploadFromVector",0xaabe3672,"openfl.display3D.IndexBuffer3D.uploadFromVector","openfl/display3D/IndexBuffer3D.hx",63,0x3d934296)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(startOffset,"startOffset")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			::openfl::_v2::gl::GLBuffer buffer = this->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(65)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_buffer((int)34963,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(66)
		::openfl::_v2::utils::Int16Array indices;		HX_STACK_VAR(indices,"indices");
		HX_STACK_LINE(77)
		::openfl::_v2::utils::Int16Array _g = ::openfl::_v2::utils::Int16Array_obj::__new(data,startOffset,count);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		indices = _g;
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::openfl::_v2::utils::ByteArray _g1 = indices->getByteBuffer();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(80)
			int _g2 = indices->getStart();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(80)
			int _g3 = indices->getLength();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(80)
			::openfl::_v2::gl::GL_obj::lime_gl_buffer_data((int)34963,_g1,_g2,_g3,(int)35044);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))


IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(glBuffer,"glBuffer");
	HX_MARK_MEMBER_NAME(numIndices,"numIndices");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(glBuffer,"glBuffer");
	HX_VISIT_MEMBER_NAME(numIndices,"numIndices");
}

Dynamic IndexBuffer3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { return glBuffer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { return numIndices; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return uploadFromVector_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IndexBuffer3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"glBuffer") ) { glBuffer=inValue.Cast< ::openfl::_v2::gl::GLBuffer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numIndices") ) { numIndices=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("glBuffer"));
	outFields->push(HX_CSTRING("numIndices"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::gl::GLBuffer*/ ,(int)offsetof(IndexBuffer3D_obj,glBuffer),HX_CSTRING("glBuffer")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,numIndices),HX_CSTRING("numIndices")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("glBuffer"),
	HX_CSTRING("numIndices"),
	HX_CSTRING("dispose"),
	HX_CSTRING("uploadFromByteArray"),
	HX_CSTRING("uploadFromVector"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#endif

Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D.IndexBuffer3D"), hx::TCanCast< IndexBuffer3D_obj> ,sStaticFields,sMemberFields,
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

void IndexBuffer3D_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display3D
