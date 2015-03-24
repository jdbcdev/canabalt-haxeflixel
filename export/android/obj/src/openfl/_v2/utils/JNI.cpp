#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_JNI
#include <openfl/_v2/utils/JNI.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_JNIMemberField
#include <openfl/_v2/utils/JNIMemberField.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_JNIMethod
#include <openfl/_v2/utils/JNIMethod.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_JNIStaticField
#include <openfl/_v2/utils/JNIStaticField.h>
#endif
namespace openfl{
namespace _v2{
namespace utils{

Void JNI_obj::__construct()
{
	return null();
}

//JNI_obj::~JNI_obj() { }

Dynamic JNI_obj::__CreateEmpty() { return  new JNI_obj; }
hx::ObjectPtr< JNI_obj > JNI_obj::__new()
{  hx::ObjectPtr< JNI_obj > result = new JNI_obj();
	result->__construct();
	return result;}

Dynamic JNI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNI_obj > result = new JNI_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap JNI_obj::alreadyCreated;

::String JNI_obj::base64;

bool JNI_obj::initialized;

Dynamic JNI_obj::callMember( Dynamic method,Dynamic jobject,Dynamic a){
	HX_STACK_FRAME("openfl._v2.utils.JNI","callMember",0x4d808ccf,"openfl._v2.utils.JNI.callMember","openfl/_v2/utils/JNI.hx",21,0x9d23658a)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(jobject,"jobject")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(21)
	int _g = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	switch( (int)(_g)){
		case (int)0: {
			HX_STACK_LINE(23)
			return method(jobject);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(24)
			return method(jobject,a->__GetItem((int)0));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(25)
			return method(jobject,a->__GetItem((int)0),a->__GetItem((int)1));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(26)
			return method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2));
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(27)
			return method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3));
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(28)
			return method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4));
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(29)
			return method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5));
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(30)
			return method(jobject,a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5),a->__GetItem((int)6));
		}
		;break;
		default: {
			HX_STACK_LINE(31)
			return null();
		}
	}
	HX_STACK_LINE(21)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,callMember,return )

Dynamic JNI_obj::callStatic( Dynamic method,Dynamic a){
	HX_STACK_FRAME("openfl._v2.utils.JNI","callStatic",0x4ec68723,"openfl._v2.utils.JNI.callStatic","openfl/_v2/utils/JNI.hx",40,0x9d23658a)
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(40)
	int _g = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	switch( (int)(_g)){
		case (int)0: {
			HX_STACK_LINE(42)
			return method();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(43)
			return method(a->__GetItem((int)0));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(44)
			return method(a->__GetItem((int)0),a->__GetItem((int)1));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(45)
			return method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2));
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(46)
			return method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3));
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(47)
			return method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4));
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(48)
			return method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5));
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(49)
			return method(a->__GetItem((int)0),a->__GetItem((int)1),a->__GetItem((int)2),a->__GetItem((int)3),a->__GetItem((int)4),a->__GetItem((int)5),a->__GetItem((int)6));
		}
		;break;
		default: {
			HX_STACK_LINE(50)
			return null();
		}
	}
	HX_STACK_LINE(40)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JNI_obj,callStatic,return )

Dynamic JNI_obj::createInterface( Dynamic haxeClass,::String className,::String classDef){
	HX_STACK_FRAME("openfl._v2.utils.JNI","createInterface",0x79b81086,"openfl._v2.utils.JNI.createInterface","openfl/_v2/utils/JNI.hx",57,0x9d23658a)
	HX_STACK_ARG(haxeClass,"haxeClass")
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(classDef,"classDef")
	HX_STACK_LINE(59)
	::haxe::io::Bytes bytes = null();		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(61)
	if ((!(::openfl::_v2::utils::JNI_obj::alreadyCreated->get(className)))){
		HX_STACK_LINE(63)
		::String _g = ::haxe::crypto::BaseCode_obj::decode(classDef,::openfl::_v2::utils::JNI_obj::base64);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofString(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(63)
		bytes = _g1;
		HX_STACK_LINE(64)
		::haxe::io::Bytes _g2 = ::haxe::zip::Uncompress_obj::run(bytes,(int)9);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(64)
		bytes = _g2;
		HX_STACK_LINE(65)
		::openfl::_v2::utils::JNI_obj::alreadyCreated->set(className,true);
	}
	HX_STACK_LINE(69)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createInterface,return )

::openfl::_v2::utils::JNIMemberField JNI_obj::createMemberField( ::String className,::String memberName,::String signature){
	HX_STACK_FRAME("openfl._v2.utils.JNI","createMemberField",0x5cc3480d,"openfl._v2.utils.JNI.createMemberField","openfl/_v2/utils/JNI.hx",75,0x9d23658a)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_LINE(77)
	::openfl::_v2::utils::JNI_obj::init();
	HX_STACK_LINE(79)
	Dynamic _g = ::openfl::_v2::utils::JNI_obj::lime_jni_create_field(className,memberName,signature,false);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(79)
	return ::openfl::_v2::utils::JNIMemberField_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createMemberField,return )

Dynamic JNI_obj::createMemberMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
	HX_STACK_FRAME("openfl._v2.utils.JNI","createMemberMethod",0x56e82c2e,"openfl._v2.utils.JNI.createMemberMethod","openfl/_v2/utils/JNI.hx",84,0x9d23658a)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_ARG(quietFail,"quietFail")
{
		HX_STACK_LINE(86)
		::openfl::_v2::utils::JNI_obj::init();
		HX_STACK_LINE(88)
		::String _g = className.split(HX_CSTRING("."))->join(HX_CSTRING("/"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		className = _g;
		HX_STACK_LINE(89)
		Dynamic handle = ::openfl::_v2::utils::JNI_obj::lime_jni_create_method(className,memberName,signature,false,quietFail);		HX_STACK_VAR(handle,"handle");
		HX_STACK_LINE(91)
		if (((handle == null()))){
			HX_STACK_LINE(93)
			if ((quietFail)){
				HX_STACK_LINE(95)
				return null();
			}
			HX_STACK_LINE(99)
			HX_STACK_DO_THROW(((HX_CSTRING("Could not find member function \"") + memberName) + HX_CSTRING("\"")));
		}
		HX_STACK_LINE(103)
		::openfl::_v2::utils::JNIMethod method = ::openfl::_v2::utils::JNIMethod_obj::__new(handle);		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(104)
		return method->getMemberMethod(useArray);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createMemberMethod,return )

::openfl::_v2::utils::JNIStaticField JNI_obj::createStaticField( ::String className,::String memberName,::String signature){
	HX_STACK_FRAME("openfl._v2.utils.JNI","createStaticField",0x6f8d5d39,"openfl._v2.utils.JNI.createStaticField","openfl/_v2/utils/JNI.hx",109,0x9d23658a)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_LINE(111)
	::openfl::_v2::utils::JNI_obj::init();
	HX_STACK_LINE(113)
	Dynamic _g = ::openfl::_v2::utils::JNI_obj::lime_jni_create_field(className,memberName,signature,true);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(113)
	return ::openfl::_v2::utils::JNIStaticField_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,createStaticField,return )

Dynamic JNI_obj::createStaticMethod( ::String className,::String memberName,::String signature,hx::Null< bool >  __o_useArray,hx::Null< bool >  __o_quietFail){
bool useArray = __o_useArray.Default(false);
bool quietFail = __o_quietFail.Default(false);
	HX_STACK_FRAME("openfl._v2.utils.JNI","createStaticMethod",0xb4f09d82,"openfl._v2.utils.JNI.createStaticMethod","openfl/_v2/utils/JNI.hx",118,0x9d23658a)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(memberName,"memberName")
	HX_STACK_ARG(signature,"signature")
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_ARG(quietFail,"quietFail")
{
		HX_STACK_LINE(120)
		::openfl::_v2::utils::JNI_obj::init();
		HX_STACK_LINE(122)
		::String _g = className.split(HX_CSTRING("."))->join(HX_CSTRING("/"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		className = _g;
		HX_STACK_LINE(123)
		Dynamic handle = ::openfl::_v2::utils::JNI_obj::lime_jni_create_method(className,memberName,signature,true,quietFail);		HX_STACK_VAR(handle,"handle");
		HX_STACK_LINE(125)
		if (((handle == null()))){
			HX_STACK_LINE(127)
			if ((quietFail)){
				HX_STACK_LINE(129)
				return null();
			}
			HX_STACK_LINE(133)
			HX_STACK_DO_THROW(((HX_CSTRING("Could not find static function \"") + memberName) + HX_CSTRING("\"")));
		}
		HX_STACK_LINE(137)
		::openfl::_v2::utils::JNIMethod method = ::openfl::_v2::utils::JNIMethod_obj::__new(handle);		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(138)
		return method->getStaticMethod(useArray);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(JNI_obj,createStaticMethod,return )

Dynamic JNI_obj::getEnv( ){
	HX_STACK_FRAME("openfl._v2.utils.JNI","getEnv",0x18f168ae,"openfl._v2.utils.JNI.getEnv","openfl/_v2/utils/JNI.hx",143,0x9d23658a)
	HX_STACK_LINE(145)
	::openfl::_v2::utils::JNI_obj::init();
	HX_STACK_LINE(147)
	return ::openfl::_v2::utils::JNI_obj::lime_jni_get_env();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,getEnv,return )

Void JNI_obj::init( ){
{
		HX_STACK_FRAME("openfl._v2.utils.JNI","init",0x4c973b07,"openfl._v2.utils.JNI.init","openfl/_v2/utils/JNI.hx",154,0x9d23658a)
		HX_STACK_LINE(154)
		if ((!(::openfl::_v2::utils::JNI_obj::initialized))){
			HX_STACK_LINE(156)
			::openfl::_v2::utils::JNI_obj::initialized = true;
			HX_STACK_LINE(157)
			Dynamic method = ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_init_callback"),(int)1);		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(158)
			method(::openfl::_v2::utils::JNI_obj::onCallback_dyn());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNI_obj,init,(void))

Dynamic JNI_obj::onCallback( Dynamic object,Dynamic method,Dynamic args){
	HX_STACK_FRAME("openfl._v2.utils.JNI","onCallback",0x7a58413b,"openfl._v2.utils.JNI.onCallback","openfl/_v2/utils/JNI.hx",165,0x9d23658a)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(167)
	Dynamic field = ::Reflect_obj::field(object,method);		HX_STACK_VAR(field,"field");
	HX_STACK_LINE(169)
	if (((field != null()))){
		HX_STACK_LINE(171)
		return ::Reflect_obj::callMethod(object,field,args);
	}
	HX_STACK_LINE(175)
	::String _g = ::Std_obj::string(method);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(175)
	::String _g1 = (HX_CSTRING("onCallback - unknown field ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(175)
	::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("JNI.hx"),175,HX_CSTRING("openfl._v2.utils.JNI"),HX_CSTRING("onCallback")));
	HX_STACK_LINE(176)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JNI_obj,onCallback,return )

Dynamic JNI_obj::lime_jni_create_field;

Dynamic JNI_obj::lime_jni_create_method;

Dynamic JNI_obj::lime_jni_get_env;

Dynamic JNI_obj::lime_jni_call_member;

Dynamic JNI_obj::lime_jni_call_static;


JNI_obj::JNI_obj()
{
}

Dynamic JNI_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"base64") ) { return base64; }
		if (HX_FIELD_EQ(inName,"getEnv") ) { return getEnv_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { return callMember_dyn(); }
		if (HX_FIELD_EQ(inName,"callStatic") ) { return callStatic_dyn(); }
		if (HX_FIELD_EQ(inName,"onCallback") ) { return onCallback_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { return alreadyCreated; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createInterface") ) { return createInterface_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_jni_get_env") ) { return lime_jni_get_env; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createMemberField") ) { return createMemberField_dyn(); }
		if (HX_FIELD_EQ(inName,"createStaticField") ) { return createStaticField_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createMemberMethod") ) { return createMemberMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"createStaticMethod") ) { return createStaticMethod_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_jni_call_member") ) { return lime_jni_call_member; }
		if (HX_FIELD_EQ(inName,"lime_jni_call_static") ) { return lime_jni_call_static; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_jni_create_field") ) { return lime_jni_create_field; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_jni_create_method") ) { return lime_jni_create_method; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JNI_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"base64") ) { base64=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"alreadyCreated") ) { alreadyCreated=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_jni_get_env") ) { lime_jni_get_env=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_jni_call_member") ) { lime_jni_call_member=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_jni_call_static") ) { lime_jni_call_static=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_jni_create_field") ) { lime_jni_create_field=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_jni_create_method") ) { lime_jni_create_method=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNI_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("alreadyCreated"),
	HX_CSTRING("base64"),
	HX_CSTRING("initialized"),
	HX_CSTRING("callMember"),
	HX_CSTRING("callStatic"),
	HX_CSTRING("createInterface"),
	HX_CSTRING("createMemberField"),
	HX_CSTRING("createMemberMethod"),
	HX_CSTRING("createStaticField"),
	HX_CSTRING("createStaticMethod"),
	HX_CSTRING("getEnv"),
	HX_CSTRING("init"),
	HX_CSTRING("onCallback"),
	HX_CSTRING("lime_jni_create_field"),
	HX_CSTRING("lime_jni_create_method"),
	HX_CSTRING("lime_jni_get_env"),
	HX_CSTRING("lime_jni_call_member"),
	HX_CSTRING("lime_jni_call_static"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_MARK_MEMBER_NAME(JNI_obj::base64,"base64");
	HX_MARK_MEMBER_NAME(JNI_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_create_field,"lime_jni_create_field");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_create_method,"lime_jni_create_method");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_get_env,"lime_jni_get_env");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_call_member,"lime_jni_call_member");
	HX_MARK_MEMBER_NAME(JNI_obj::lime_jni_call_static,"lime_jni_call_static");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNI_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNI_obj::alreadyCreated,"alreadyCreated");
	HX_VISIT_MEMBER_NAME(JNI_obj::base64,"base64");
	HX_VISIT_MEMBER_NAME(JNI_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_create_field,"lime_jni_create_field");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_create_method,"lime_jni_create_method");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_get_env,"lime_jni_get_env");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_call_member,"lime_jni_call_member");
	HX_VISIT_MEMBER_NAME(JNI_obj::lime_jni_call_static,"lime_jni_call_static");
};

#endif

Class JNI_obj::__mClass;

void JNI_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.utils.JNI"), hx::TCanCast< JNI_obj> ,sStaticFields,sMemberFields,
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

void JNI_obj::__boot()
{
	alreadyCreated= ::haxe::ds::StringMap_obj::__new();
	base64= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
	initialized= false;
	lime_jni_create_field= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_create_field"),(int)4);
	lime_jni_create_method= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_create_method"),(int)5);
	lime_jni_get_env= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_get_env"),(int)0);
	lime_jni_call_member= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_call_member"),(int)3);
	lime_jni_call_static= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_call_static"),(int)2);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace utils
