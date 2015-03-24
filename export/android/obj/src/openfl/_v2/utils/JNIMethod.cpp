#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_JNIMethod
#include <openfl/_v2/utils/JNIMethod.h>
#endif
namespace openfl{
namespace _v2{
namespace utils{

Void JNIMethod_obj::__construct(Dynamic method)
{
HX_STACK_FRAME("openfl._v2.utils.JNIMethod","new",0x68af570a,"openfl._v2.utils.JNIMethod.new","openfl/_v2/utils/JNI.hx",290,0x9d23658a)
HX_STACK_THIS(this)
HX_STACK_ARG(method,"method")
{
	HX_STACK_LINE(290)
	this->method = method;
}
;
	return null();
}

//JNIMethod_obj::~JNIMethod_obj() { }

Dynamic JNIMethod_obj::__CreateEmpty() { return  new JNIMethod_obj; }
hx::ObjectPtr< JNIMethod_obj > JNIMethod_obj::__new(Dynamic method)
{  hx::ObjectPtr< JNIMethod_obj > result = new JNIMethod_obj();
	result->__construct(method);
	return result;}

Dynamic JNIMethod_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JNIMethod_obj > result = new JNIMethod_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic JNIMethod_obj::callMember( Dynamic args){
	HX_STACK_FRAME("openfl._v2.utils.JNIMethod","callMember",0xbc26bc2e,"openfl._v2.utils.JNIMethod.callMember","openfl/_v2/utils/JNI.hx",294,0x9d23658a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(296)
	Dynamic jobject = args->__Field(HX_CSTRING("shift"),true)();		HX_STACK_VAR(jobject,"jobject");
	HX_STACK_LINE(297)
	return ::openfl::_v2::utils::JNIMethod_obj::lime_jni_call_member(this->method,jobject,args);
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callMember,return )

Dynamic JNIMethod_obj::callStatic( Dynamic args){
	HX_STACK_FRAME("openfl._v2.utils.JNIMethod","callStatic",0xbd6cb682,"openfl._v2.utils.JNIMethod.callStatic","openfl/_v2/utils/JNI.hx",304,0x9d23658a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(304)
	return ::openfl::_v2::utils::JNIMethod_obj::lime_jni_call_static(this->method,args);
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,callStatic,return )

Dynamic JNIMethod_obj::getMemberMethod( bool useArray){
	HX_STACK_FRAME("openfl._v2.utils.JNIMethod","getMemberMethod",0x0510c03b,"openfl._v2.utils.JNIMethod.getMemberMethod","openfl/_v2/utils/JNI.hx",311,0x9d23658a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_LINE(311)
	if ((useArray)){
		HX_STACK_LINE(313)
		return this->callMember_dyn();
	}
	else{
		HX_STACK_LINE(317)
		return ::Reflect_obj::makeVarArgs(this->callMember_dyn());
	}
	HX_STACK_LINE(311)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getMemberMethod,return )

Dynamic JNIMethod_obj::getStaticMethod( bool useArray){
	HX_STACK_FRAME("openfl._v2.utils.JNIMethod","getStaticMethod",0x6319318f,"openfl._v2.utils.JNIMethod.getStaticMethod","openfl/_v2/utils/JNI.hx",326,0x9d23658a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useArray,"useArray")
	HX_STACK_LINE(326)
	if ((useArray)){
		HX_STACK_LINE(328)
		return this->callStatic_dyn();
	}
	else{
		HX_STACK_LINE(332)
		return ::Reflect_obj::makeVarArgs(this->callStatic_dyn());
	}
	HX_STACK_LINE(326)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JNIMethod_obj,getStaticMethod,return )

Dynamic JNIMethod_obj::lime_jni_call_member;

Dynamic JNIMethod_obj::lime_jni_call_static;


JNIMethod_obj::JNIMethod_obj()
{
}

void JNIMethod_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JNIMethod);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_END_CLASS();
}

void JNIMethod_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
}

Dynamic JNIMethod_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"callMember") ) { return callMember_dyn(); }
		if (HX_FIELD_EQ(inName,"callStatic") ) { return callStatic_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMemberMethod") ) { return getMemberMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"getStaticMethod") ) { return getStaticMethod_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_jni_call_member") ) { return lime_jni_call_member; }
		if (HX_FIELD_EQ(inName,"lime_jni_call_static") ) { return lime_jni_call_static; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JNIMethod_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_jni_call_member") ) { lime_jni_call_member=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_jni_call_static") ) { lime_jni_call_static=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JNIMethod_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("method"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_jni_call_member"),
	HX_CSTRING("lime_jni_call_static"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JNIMethod_obj,method),HX_CSTRING("method")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("method"),
	HX_CSTRING("callMember"),
	HX_CSTRING("callStatic"),
	HX_CSTRING("getMemberMethod"),
	HX_CSTRING("getStaticMethod"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JNIMethod_obj::lime_jni_call_member,"lime_jni_call_member");
	HX_MARK_MEMBER_NAME(JNIMethod_obj::lime_jni_call_static,"lime_jni_call_static");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::lime_jni_call_member,"lime_jni_call_member");
	HX_VISIT_MEMBER_NAME(JNIMethod_obj::lime_jni_call_static,"lime_jni_call_static");
};

#endif

Class JNIMethod_obj::__mClass;

void JNIMethod_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.utils.JNIMethod"), hx::TCanCast< JNIMethod_obj> ,sStaticFields,sMemberFields,
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

void JNIMethod_obj::__boot()
{
	lime_jni_call_member= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_call_member"),(int)3);
	lime_jni_call_static= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_jni_call_static"),(int)2);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace utils
