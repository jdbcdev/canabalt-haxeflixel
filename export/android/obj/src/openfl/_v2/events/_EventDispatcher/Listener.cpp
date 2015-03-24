#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__v2_events__EventDispatcher_Listener
#include <openfl/_v2/events/_EventDispatcher/Listener.h>
#endif
namespace openfl{
namespace _v2{
namespace events{
namespace _EventDispatcher{

Void Listener_obj::__construct(Dynamic callback,bool useCapture,int priority)
{
HX_STACK_FRAME("openfl._v2.events._EventDispatcher.Listener","new",0x3ba3d56e,"openfl._v2.events._EventDispatcher.Listener.new","openfl/_v2/events/EventDispatcher.hx",212,0x3e68c260)
HX_STACK_THIS(this)
HX_STACK_ARG(callback,"callback")
HX_STACK_ARG(useCapture,"useCapture")
HX_STACK_ARG(priority,"priority")
{
	HX_STACK_LINE(214)
	this->callback = callback;
	HX_STACK_LINE(215)
	this->useCapture = useCapture;
	HX_STACK_LINE(216)
	this->priority = priority;
}
;
	return null();
}

//Listener_obj::~Listener_obj() { }

Dynamic Listener_obj::__CreateEmpty() { return  new Listener_obj; }
hx::ObjectPtr< Listener_obj > Listener_obj::__new(Dynamic callback,bool useCapture,int priority)
{  hx::ObjectPtr< Listener_obj > result = new Listener_obj();
	result->__construct(callback,useCapture,priority);
	return result;}

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Listener_obj > result = new Listener_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

bool Listener_obj::match( Dynamic callback,bool useCapture){
	HX_STACK_FRAME("openfl._v2.events._EventDispatcher.Listener","match",0xb6492dd3,"openfl._v2.events._EventDispatcher.Listener.match","openfl/_v2/events/EventDispatcher.hx",223,0x3e68c260)
	HX_STACK_THIS(this)
	HX_STACK_ARG(callback,"callback")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_LINE(223)
	if ((::Reflect_obj::compareMethods(this->callback_dyn(),callback))){
		HX_STACK_LINE(223)
		return (this->useCapture == useCapture);
	}
	else{
		HX_STACK_LINE(223)
		return false;
	}
	HX_STACK_LINE(223)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Listener_obj,match,return )


Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(priority,"priority");
	HX_MARK_MEMBER_NAME(useCapture,"useCapture");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(priority,"priority");
	HX_VISIT_MEMBER_NAME(useCapture,"useCapture");
}

Dynamic Listener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return match_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"priority") ) { return priority; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { return useCapture; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"priority") ) { priority=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"useCapture") ) { useCapture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("priority"));
	outFields->push(HX_CSTRING("useCapture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Listener_obj,callback),HX_CSTRING("callback")},
	{hx::fsInt,(int)offsetof(Listener_obj,priority),HX_CSTRING("priority")},
	{hx::fsBool,(int)offsetof(Listener_obj,useCapture),HX_CSTRING("useCapture")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("callback"),
	HX_CSTRING("priority"),
	HX_CSTRING("useCapture"),
	HX_CSTRING("match"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
};

#endif

Class Listener_obj::__mClass;

void Listener_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.events._EventDispatcher.Listener"), hx::TCanCast< Listener_obj> ,sStaticFields,sMemberFields,
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

void Listener_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace events
} // end namespace _EventDispatcher
