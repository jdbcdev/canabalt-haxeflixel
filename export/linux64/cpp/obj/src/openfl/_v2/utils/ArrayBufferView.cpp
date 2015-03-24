#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
namespace openfl{
namespace _v2{
namespace utils{

Void ArrayBufferView_obj::__construct(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{
HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","new",0xce39d322,"openfl._v2.utils.ArrayBufferView.new","openfl/_v2/utils/ArrayBufferView.hx",24,0x7fe00551)
HX_STACK_THIS(this)
HX_STACK_ARG(lengthOrBuffer,"lengthOrBuffer")
HX_STACK_ARG(__o_byteOffset,"byteOffset")
HX_STACK_ARG(length,"length")
int byteOffset = __o_byteOffset.Default(0);
{
	HX_STACK_LINE(26)
	if ((::Std_obj::is(lengthOrBuffer,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(28)
		int _g = ::Std_obj::_int(lengthOrBuffer);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		this->byteLength = _g;
		HX_STACK_LINE(29)
		this->byteOffset = (int)0;
		HX_STACK_LINE(30)
		int _g1 = ::Std_obj::_int(lengthOrBuffer);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		::openfl::_v2::utils::ByteArray _g2 = ::openfl::_v2::utils::ByteArray_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(30)
		this->buffer = _g2;
	}
	else{
		HX_STACK_LINE(34)
		this->buffer = lengthOrBuffer;
		HX_STACK_LINE(36)
		if (((this->buffer == null()))){
			HX_STACK_LINE(38)
			HX_STACK_DO_THROW(HX_CSTRING("Invalid input buffer"));
		}
		HX_STACK_LINE(42)
		this->byteOffset = byteOffset;
		HX_STACK_LINE(44)
		if (((byteOffset > this->buffer->length))){
			HX_STACK_LINE(46)
			HX_STACK_DO_THROW(HX_CSTRING("Invalid starting position"));
		}
		HX_STACK_LINE(50)
		if (((length == null()))){
			HX_STACK_LINE(52)
			this->byteLength = (this->buffer->length - byteOffset);
		}
		else{
			HX_STACK_LINE(56)
			this->byteLength = length;
			HX_STACK_LINE(58)
			if ((((this->byteLength + byteOffset) > this->buffer->length))){
				HX_STACK_LINE(60)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid buffer length"));
			}
		}
	}
	HX_STACK_LINE(68)
	this->buffer->bigEndian = false;
	HX_STACK_LINE(71)
	this->bytes = this->buffer->b;
}
;
	return null();
}

//ArrayBufferView_obj::~ArrayBufferView_obj() { }

Dynamic ArrayBufferView_obj::__CreateEmpty() { return  new ArrayBufferView_obj; }
hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new(Dynamic lengthOrBuffer,hx::Null< int >  __o_byteOffset,Dynamic length)
{  hx::ObjectPtr< ArrayBufferView_obj > result = new ArrayBufferView_obj();
	result->__construct(lengthOrBuffer,__o_byteOffset,length);
	return result;}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayBufferView_obj > result = new ArrayBufferView_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *ArrayBufferView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_v2::utils::IMemoryRange_obj)) return operator ::openfl::_v2::utils::IMemoryRange_obj *();
	return super::__ToInterface(inType);
}

::openfl::_v2::utils::ByteArray ArrayBufferView_obj::getByteBuffer( ){
	HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","getByteBuffer",0xd3d56ba0,"openfl._v2.utils.ArrayBufferView.getByteBuffer","openfl/_v2/utils/ArrayBufferView.hx",79,0x7fe00551)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return this->buffer;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getByteBuffer,return )

Float ArrayBufferView_obj::getFloat32( int position){
	HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","getFloat32",0x5162d0c3,"openfl._v2.utils.ArrayBufferView.getFloat32","openfl/_v2/utils/ArrayBufferView.hx",87,0x7fe00551)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(87)
	return ::__hxcpp_memory_get_float(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getFloat32,return )

int ArrayBufferView_obj::getInt16( int position){
	HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","getInt16",0x76465f1c,"openfl._v2.utils.ArrayBufferView.getInt16","openfl/_v2/utils/ArrayBufferView.hx",99,0x7fe00551)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(99)
	return ::__hxcpp_memory_get_i16(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt16,return )

int ArrayBufferView_obj::getInt32( int position){
	HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","getInt32",0x764660d6,"openfl._v2.utils.ArrayBufferView.getInt32","openfl/_v2/utils/ArrayBufferView.hx",111,0x7fe00551)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(111)
	return ::__hxcpp_memory_get_i32(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt32,return )

int ArrayBufferView_obj::getLength( ){
	HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","getLength",0x07f59e5e,"openfl._v2.utils.ArrayBufferView.getLength","openfl/_v2/utils/ArrayBufferView.hx",122,0x7fe00551)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	return this->byteLength;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getLength,return )

Dynamic ArrayBufferView_obj::getNativePointer( ){
	HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","getNativePointer",0x56ad256e,"openfl._v2.utils.ArrayBufferView.getNativePointer","openfl/_v2/utils/ArrayBufferView.hx",129,0x7fe00551)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return this->buffer->getNativePointer();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getNativePointer,return )

int ArrayBufferView_obj::getStart( ){
	HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","getStart",0x3c3141ea,"openfl._v2.utils.ArrayBufferView.getStart","openfl/_v2/utils/ArrayBufferView.hx",136,0x7fe00551)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	return this->byteOffset;
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getStart,return )

int ArrayBufferView_obj::getUInt8( int position){
	HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","getUInt8",0x469c1d06,"openfl._v2.utils.ArrayBufferView.getUInt8","openfl/_v2/utils/ArrayBufferView.hx",144,0x7fe00551)
	HX_STACK_THIS(this)
	HX_STACK_ARG(position,"position")
	HX_STACK_LINE(144)
	return ::__hxcpp_memory_get_byte(this->bytes,(position + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt8,return )

Void ArrayBufferView_obj::setFloat32( int position,Float value){
{
		HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","setFloat32",0x54e06f37,"openfl._v2.utils.ArrayBufferView.setFloat32","openfl/_v2/utils/ArrayBufferView.hx",156,0x7fe00551)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(156)
		::__hxcpp_memory_set_float(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setFloat32,(void))

Void ArrayBufferView_obj::setInt16( int position,int value){
{
		HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","setInt16",0x24a3b890,"openfl._v2.utils.ArrayBufferView.setInt16","openfl/_v2/utils/ArrayBufferView.hx",168,0x7fe00551)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(168)
		::__hxcpp_memory_set_i16(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt16,(void))

Void ArrayBufferView_obj::setInt32( int position,int value){
{
		HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","setInt32",0x24a3ba4a,"openfl._v2.utils.ArrayBufferView.setInt32","openfl/_v2/utils/ArrayBufferView.hx",180,0x7fe00551)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(180)
		::__hxcpp_memory_set_i32(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt32,(void))

Void ArrayBufferView_obj::setUInt8( int position,int value){
{
		HX_STACK_FRAME("openfl._v2.utils.ArrayBufferView","setUInt8",0xf4f9767a,"openfl._v2.utils.ArrayBufferView.setUInt8","openfl/_v2/utils/ArrayBufferView.hx",192,0x7fe00551)
		HX_STACK_THIS(this)
		HX_STACK_ARG(position,"position")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(192)
		::__hxcpp_memory_set_byte(this->bytes,(position + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt8,(void))

::String ArrayBufferView_obj::invalidDataIndex;


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
}

Dynamic ArrayBufferView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getInt16") ) { return getInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return getInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"getUInt8") ) { return getUInt8_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt16") ) { return setInt16_dyn(); }
		if (HX_FIELD_EQ(inName,"setInt32") ) { return setInt32_dyn(); }
		if (HX_FIELD_EQ(inName,"setUInt8") ) { return setUInt8_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return byteOffset; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return byteLength; }
		if (HX_FIELD_EQ(inName,"getFloat32") ) { return getFloat32_dyn(); }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { return setFloat32_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidDataIndex") ) { return invalidDataIndex; }
		if (HX_FIELD_EQ(inName,"getNativePointer") ) { return getNativePointer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayBufferView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::_v2::utils::ByteArray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"invalidDataIndex") ) { invalidDataIndex=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("byteOffset"));
	outFields->push(HX_CSTRING("byteLength"));
	outFields->push(HX_CSTRING("bytes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("invalidDataIndex"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::utils::ByteArray*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_CSTRING("byteOffset")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_CSTRING("byteLength")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(ArrayBufferView_obj,bytes),HX_CSTRING("bytes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("byteOffset"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("bytes"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("getFloat32"),
	HX_CSTRING("getInt16"),
	HX_CSTRING("getInt32"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getNativePointer"),
	HX_CSTRING("getStart"),
	HX_CSTRING("getUInt8"),
	HX_CSTRING("setFloat32"),
	HX_CSTRING("setInt16"),
	HX_CSTRING("setInt32"),
	HX_CSTRING("setUInt8"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::invalidDataIndex,"invalidDataIndex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::invalidDataIndex,"invalidDataIndex");
};

#endif

Class ArrayBufferView_obj::__mClass;

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.utils.ArrayBufferView"), hx::TCanCast< ArrayBufferView_obj> ,sStaticFields,sMemberFields,
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

void ArrayBufferView_obj::__boot()
{
	invalidDataIndex= HX_CSTRING("Invalid data index");
}

} // end namespace openfl
} // end namespace _v2
} // end namespace utils
