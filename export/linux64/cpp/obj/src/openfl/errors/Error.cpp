#include <hxcpp.h>

#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace openfl{
namespace errors{

Void Error_obj::__construct(::String __o_message,hx::Null< int >  __o_id)
{
HX_STACK_FRAME("openfl.errors.Error","new",0xefad98b5,"openfl.errors.Error.new","openfl/errors/Error.hx",17,0x5096467b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
HX_STACK_ARG(__o_id,"id")
::String message = __o_message.Default(HX_CSTRING(""));
int id = __o_id.Default(0);
{
	HX_STACK_LINE(19)
	this->message = message;
	HX_STACK_LINE(20)
	this->errorID = id;
	HX_STACK_LINE(21)
	this->name = HX_CSTRING("Error");
}
;
	return null();
}

//Error_obj::~Error_obj() { }

Dynamic Error_obj::__CreateEmpty() { return  new Error_obj; }
hx::ObjectPtr< Error_obj > Error_obj::__new(::String __o_message,hx::Null< int >  __o_id)
{  hx::ObjectPtr< Error_obj > result = new Error_obj();
	result->__construct(__o_message,__o_id);
	return result;}

Dynamic Error_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Error_obj > result = new Error_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Error_obj::getStackTrace( ){
	HX_STACK_FRAME("openfl.errors.Error","getStackTrace",0x0bedf2e8,"openfl.errors.Error.getStackTrace","openfl/errors/Error.hx",26,0x5096467b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	Array< ::Dynamic > _g = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	return ::haxe::CallStack_obj::toString(_g);
}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,getStackTrace,return )

::String Error_obj::toString( ){
	HX_STACK_FRAME("openfl.errors.Error","toString",0x62f5b437,"openfl.errors.Error.toString","openfl/errors/Error.hx",35,0x5096467b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	if (((this->message != null()))){
		HX_STACK_LINE(37)
		return this->message;
	}
	else{
		HX_STACK_LINE(41)
		return HX_CSTRING("Error");
	}
	HX_STACK_LINE(35)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,toString,return )

::String Error_obj::DEFAULT_TO_STRING;


Error_obj::Error_obj()
{
}

void Error_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Error);
	HX_MARK_MEMBER_NAME(errorID,"errorID");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Error_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(errorID,"errorID");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Error_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return errorID; }
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getStackTrace") ) { return getStackTrace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Error_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Error_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("errorID"));
	outFields->push(HX_CSTRING("message"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT_TO_STRING"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Error_obj,errorID),HX_CSTRING("errorID")},
	{hx::fsString,(int)offsetof(Error_obj,message),HX_CSTRING("message")},
	{hx::fsString,(int)offsetof(Error_obj,name),HX_CSTRING("name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("errorID"),
	HX_CSTRING("message"),
	HX_CSTRING("name"),
	HX_CSTRING("getStackTrace"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Error_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Error_obj::DEFAULT_TO_STRING,"DEFAULT_TO_STRING");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Error_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Error_obj::DEFAULT_TO_STRING,"DEFAULT_TO_STRING");
};

#endif

Class Error_obj::__mClass;

void Error_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.errors.Error"), hx::TCanCast< Error_obj> ,sStaticFields,sMemberFields,
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

void Error_obj::__boot()
{
	DEFAULT_TO_STRING= HX_CSTRING("Error");
}

} // end namespace openfl
} // end namespace errors
