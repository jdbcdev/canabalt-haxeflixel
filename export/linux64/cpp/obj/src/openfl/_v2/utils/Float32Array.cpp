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
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
namespace openfl{
namespace _v2{
namespace utils{

Void Float32Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{
HX_STACK_FRAME("openfl._v2.utils.Float32Array","new",0x20ee665e,"openfl._v2.utils.Float32Array.new","openfl/_v2/utils/Float32Array.hx",21,0x528de82f)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(elements,"elements")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(23)
	this->BYTES_PER_ELEMENT = (int)4;
	HX_STACK_LINE(25)
	if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(27)
		int _g = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		int _g1 = (_g * this->BYTES_PER_ELEMENT);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		super::__construct(_g1,null(),null());
		HX_STACK_LINE(28)
		int _g2 = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(28)
		this->length = _g2;
	}
	else{
		HX_STACK_LINE(30)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(32)
			Array< Float > floats = bufferOrArray;		HX_STACK_VAR(floats,"floats");
			HX_STACK_LINE(34)
			if (((elements != null()))){
				HX_STACK_LINE(36)
				this->length = elements;
			}
			else{
				HX_STACK_LINE(40)
				this->length = (floats->length - start);
			}
			HX_STACK_LINE(44)
			super::__construct((int(this->length) << int((int)2)),null(),null());
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(50)
				int _g = this->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(50)
				while((true)){
					HX_STACK_LINE(50)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(50)
						break;
					}
					HX_STACK_LINE(50)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(53)
					::__hxcpp_memory_set_float(this->bytes,(int(i) << int((int)2)),floats->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(96)
			super::__construct(bufferOrArray,start,(  (((elements != null()))) ? Dynamic((elements * (int)4)) : Dynamic(null()) ));
			HX_STACK_LINE(98)
			if (((((int(this->byteLength) & int((int)3))) > (int)0))){
				HX_STACK_LINE(100)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid array size"));
			}
			HX_STACK_LINE(104)
			this->length = (int(this->byteLength) >> int((int)2));
			HX_STACK_LINE(106)
			if ((((int(this->length) << int((int)2)) != this->byteLength))){
				HX_STACK_LINE(108)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid length multiple"));
			}
		}
	}
}
;
	return null();
}

//Float32Array_obj::~Float32Array_obj() { }

Dynamic Float32Array_obj::__CreateEmpty() { return  new Float32Array_obj; }
hx::ObjectPtr< Float32Array_obj > Float32Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{  hx::ObjectPtr< Float32Array_obj > result = new Float32Array_obj();
	result->__construct(bufferOrArray,__o_start,elements);
	return result;}

Dynamic Float32Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Float32Array_obj > result = new Float32Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Float32Array_obj::__setLength( int nbFloat){
{
		HX_STACK_FRAME("openfl._v2.utils.Float32Array","__setLength",0x45191706,"openfl._v2.utils.Float32Array.__setLength","openfl/_v2/utils/Float32Array.hx",116,0x528de82f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nbFloat,"nbFloat")
		HX_STACK_LINE(117)
		this->length = nbFloat;
		HX_STACK_LINE(118)
		this->byteLength = (int(nbFloat) << int((int)2));
		HX_STACK_LINE(119)
		this->buffer->setLength(this->byteLength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,__setLength,(void))

Float Float32Array_obj::__get( int index){
	HX_STACK_FRAME("openfl._v2.utils.Float32Array","__get",0x5f1572f4,"openfl._v2.utils.Float32Array.__get","openfl/_v2/utils/Float32Array.hx",129,0x528de82f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(129)
	return ::__hxcpp_memory_get_float(this->bytes,(((int(index) << int((int)2))) + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,__get,return )

Void Float32Array_obj::__set( int index,Float value){
{
		HX_STACK_FRAME("openfl._v2.utils.Float32Array","__set",0x5f1e8e00,"openfl._v2.utils.Float32Array.__set","openfl/_v2/utils/Float32Array.hx",130,0x528de82f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(130)
		::__hxcpp_memory_set_float(this->bytes,(((int(index) << int((int)2))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Float32Array_obj,__set,(void))

int Float32Array_obj::SBYTES_PER_ELEMENT;

::openfl::_v2::utils::Float32Array Float32Array_obj::fromMatrix( ::openfl::geom::Matrix3D matrix){
	HX_STACK_FRAME("openfl._v2.utils.Float32Array","fromMatrix",0xa22b810d,"openfl._v2.utils.Float32Array.fromMatrix","openfl/_v2/utils/Float32Array.hx",124,0x528de82f)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(124)
	return ::openfl::_v2::utils::Float32Array_obj::__new(matrix->rawData,null(),null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_obj,fromMatrix,return )


Float32Array_obj::Float32Array_obj()
{
}

Dynamic Float32Array_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromMatrix") ) { return fromMatrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__setLength") ) { return __setLength_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return BYTES_PER_ELEMENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Float32Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { BYTES_PER_ELEMENT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Float32Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("BYTES_PER_ELEMENT"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SBYTES_PER_ELEMENT"),
	HX_CSTRING("fromMatrix"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Float32Array_obj,BYTES_PER_ELEMENT),HX_CSTRING("BYTES_PER_ELEMENT")},
	{hx::fsInt,(int)offsetof(Float32Array_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("BYTES_PER_ELEMENT"),
	HX_CSTRING("length"),
	HX_CSTRING("__setLength"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Float32Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Float32Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#endif

Class Float32Array_obj::__mClass;

void Float32Array_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.utils.Float32Array"), hx::TCanCast< Float32Array_obj> ,sStaticFields,sMemberFields,
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

void Float32Array_obj::__boot()
{
	SBYTES_PER_ELEMENT= (int)4;
}

} // end namespace openfl
} // end namespace _v2
} // end namespace utils
