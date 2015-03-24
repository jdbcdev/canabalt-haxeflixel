#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ArrayBufferView
#include <openfl/_v2/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_Int16Array
#include <openfl/_v2/utils/Int16Array.h>
#endif
namespace openfl{
namespace _v2{
namespace utils{

Void Int16Array_obj::__construct(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{
HX_STACK_FRAME("openfl._v2.utils.Int16Array","new",0x4f9c5365,"openfl._v2.utils.Int16Array.new","openfl/_v2/utils/Int16Array.hx",19,0xf81ab7c8)
HX_STACK_THIS(this)
HX_STACK_ARG(bufferOrArray,"bufferOrArray")
HX_STACK_ARG(__o_start,"start")
HX_STACK_ARG(elements,"elements")
int start = __o_start.Default(0);
{
	HX_STACK_LINE(21)
	this->BYTES_PER_ELEMENT = (int)2;
	HX_STACK_LINE(23)
	if ((::Std_obj::is(bufferOrArray,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(25)
		int _g = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		int _g1 = (int(_g) << int((int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		super::__construct(_g1,null(),null());
		HX_STACK_LINE(26)
		int _g2 = ::Std_obj::_int(bufferOrArray);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		this->length = _g2;
	}
	else{
		HX_STACK_LINE(28)
		if ((::Std_obj::is(bufferOrArray,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(30)
			Array< int > ints = bufferOrArray;		HX_STACK_VAR(ints,"ints");
			HX_STACK_LINE(32)
			if (((elements != null()))){
				HX_STACK_LINE(34)
				this->length = elements;
			}
			else{
				HX_STACK_LINE(38)
				this->length = (ints->length - start);
			}
			HX_STACK_LINE(42)
			super::__construct((int(this->length) << int((int)1)),null(),null());
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(48)
				int _g = this->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(48)
				while((true)){
					HX_STACK_LINE(48)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(48)
						break;
					}
					HX_STACK_LINE(48)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(51)
					::__hxcpp_memory_set_i16(this->bytes,(int(i) << int((int)1)),ints->__get(i));
				}
			}
		}
		else{
			HX_STACK_LINE(94)
			super::__construct(bufferOrArray,start,(  (((elements != null()))) ? Dynamic((elements * (int)2)) : Dynamic(null()) ));
			HX_STACK_LINE(96)
			if (((((int(this->byteLength) & int((int)1))) > (int)0))){
				HX_STACK_LINE(98)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid array size"));
			}
			HX_STACK_LINE(102)
			this->length = (int(this->byteLength) >> int((int)1));
			HX_STACK_LINE(104)
			if ((((int(this->length) << int((int)1)) != this->byteLength))){
				HX_STACK_LINE(106)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid length multiple"));
			}
		}
	}
}
;
	return null();
}

//Int16Array_obj::~Int16Array_obj() { }

Dynamic Int16Array_obj::__CreateEmpty() { return  new Int16Array_obj; }
hx::ObjectPtr< Int16Array_obj > Int16Array_obj::__new(Dynamic bufferOrArray,hx::Null< int >  __o_start,Dynamic elements)
{  hx::ObjectPtr< Int16Array_obj > result = new Int16Array_obj();
	result->__construct(bufferOrArray,__o_start,elements);
	return result;}

Dynamic Int16Array_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Int16Array_obj > result = new Int16Array_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int Int16Array_obj::__get( int index){
	HX_STACK_FRAME("openfl._v2.utils.Int16Array","__get",0x06ddefbb,"openfl._v2.utils.Int16Array.__get","openfl/_v2/utils/Int16Array.hx",115,0xf81ab7c8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(115)
	return ::__hxcpp_memory_get_i16(this->bytes,(((int(index) << int((int)1))) + this->byteOffset));
}


HX_DEFINE_DYNAMIC_FUNC1(Int16Array_obj,__get,return )

Void Int16Array_obj::__set( int index,int value){
{
		HX_STACK_FRAME("openfl._v2.utils.Int16Array","__set",0x06e70ac7,"openfl._v2.utils.Int16Array.__set","openfl/_v2/utils/Int16Array.hx",116,0xf81ab7c8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(116)
		::__hxcpp_memory_set_i16(this->bytes,(((int(index) << int((int)1))) + this->byteOffset),value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Int16Array_obj,__set,(void))

int Int16Array_obj::SBYTES_PER_ELEMENT;


Int16Array_obj::Int16Array_obj()
{
}

Dynamic Int16Array_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return BYTES_PER_ELEMENT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Int16Array_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void Int16Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("BYTES_PER_ELEMENT"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SBYTES_PER_ELEMENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Int16Array_obj,BYTES_PER_ELEMENT),HX_CSTRING("BYTES_PER_ELEMENT")},
	{hx::fsInt,(int)offsetof(Int16Array_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("BYTES_PER_ELEMENT"),
	HX_CSTRING("length"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Int16Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Int16Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Int16Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#endif

Class Int16Array_obj::__mClass;

void Int16Array_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.utils.Int16Array"), hx::TCanCast< Int16Array_obj> ,sStaticFields,sMemberFields,
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

void Int16Array_obj::__boot()
{
	SBYTES_PER_ELEMENT= (int)2;
}

} // end namespace openfl
} // end namespace _v2
} // end namespace utils
