#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_sensors_Accelerometer
#include <openfl/_v2/sensors/Accelerometer.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_AccelerometerEvent
#include <openfl/events/AccelerometerEvent.h>
#endif
namespace openfl{
namespace _v2{
namespace sensors{

Void Accelerometer_obj::__construct()
{
HX_STACK_FRAME("openfl._v2.sensors.Accelerometer","new",0xd30f51fb,"openfl._v2.sensors.Accelerometer.new","openfl/_v2/sensors/Accelerometer.hx",22,0x5d14a258)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct(null());
	HX_STACK_LINE(26)
	this->muted = false;
	HX_STACK_LINE(27)
	this->setRequestedUpdateInterval(::openfl::_v2::sensors::Accelerometer_obj::__defaultInterval);
}
;
	return null();
}

//Accelerometer_obj::~Accelerometer_obj() { }

Dynamic Accelerometer_obj::__CreateEmpty() { return  new Accelerometer_obj; }
hx::ObjectPtr< Accelerometer_obj > Accelerometer_obj::__new()
{  hx::ObjectPtr< Accelerometer_obj > result = new Accelerometer_obj();
	result->__construct();
	return result;}

Dynamic Accelerometer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Accelerometer_obj > result = new Accelerometer_obj();
	result->__construct();
	return result;}

Void Accelerometer_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl._v2.sensors.Accelerometer","addEventListener",0xfbbd6552,"openfl._v2.sensors.Accelerometer.addEventListener","openfl/_v2/sensors/Accelerometer.hx",32,0x5d14a258)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(34)
		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
		HX_STACK_LINE(35)
		this->__update();
	}
return null();
}


Void Accelerometer_obj::setRequestedUpdateInterval( Float interval){
{
		HX_STACK_FRAME("openfl._v2.sensors.Accelerometer","setRequestedUpdateInterval",0x42d020bf,"openfl._v2.sensors.Accelerometer.setRequestedUpdateInterval","openfl/_v2/sensors/Accelerometer.hx",40,0x5d14a258)
		HX_STACK_THIS(this)
		HX_STACK_ARG(interval,"interval")
		HX_STACK_LINE(42)
		if (((interval < (int)0))){
			HX_STACK_LINE(44)
			HX_STACK_DO_THROW(::openfl::errors::ArgumentError_obj::__new(null()));
		}
		else{
			HX_STACK_LINE(46)
			if (((interval == (int)0))){
				HX_STACK_LINE(48)
				interval = ::openfl::_v2::sensors::Accelerometer_obj::__defaultInterval;
			}
		}
		HX_STACK_LINE(52)
		if (((this->__timer != null()))){
			HX_STACK_LINE(54)
			this->__timer->stop();
		}
		HX_STACK_LINE(58)
		if ((::openfl::_v2::sensors::Accelerometer_obj::get_isSupported())){
			HX_STACK_LINE(60)
			::haxe::Timer _g = ::haxe::Timer_obj::__new(interval);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			this->__timer = _g;
			HX_STACK_LINE(61)
			this->__timer->run = this->__update_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accelerometer_obj,setRequestedUpdateInterval,(void))

Void Accelerometer_obj::__update( ){
{
		HX_STACK_FRAME("openfl._v2.sensors.Accelerometer","__update",0x9976bdae,"openfl._v2.sensors.Accelerometer.__update","openfl/_v2/sensors/Accelerometer.hx",68,0x5d14a258)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		::openfl::events::AccelerometerEvent event = ::openfl::events::AccelerometerEvent_obj::__new(::openfl::events::AccelerometerEvent_obj::UPDATE,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(71)
		Dynamic data = ::openfl::_v2::sensors::Accelerometer_obj::lime_input_get_acceleration();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(73)
		Float _g = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		event->timestamp = _g;
		HX_STACK_LINE(74)
		event->accelerationX = data->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(75)
		event->accelerationY = data->__Field(HX_CSTRING("y"),true);
		HX_STACK_LINE(76)
		event->accelerationZ = data->__Field(HX_CSTRING("z"),true);
		HX_STACK_LINE(78)
		this->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,__update,(void))

bool Accelerometer_obj::isSupported;

int Accelerometer_obj::__defaultInterval;

bool Accelerometer_obj::get_isSupported( ){
	HX_STACK_FRAME("openfl._v2.sensors.Accelerometer","get_isSupported",0x6e713296,"openfl._v2.sensors.Accelerometer.get_isSupported","openfl/_v2/sensors/Accelerometer.hx",90,0x5d14a258)
	HX_STACK_LINE(90)
	Dynamic _g = ::openfl::_v2::sensors::Accelerometer_obj::lime_input_get_acceleration();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(90)
	return (_g != null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Accelerometer_obj,get_isSupported,return )

Dynamic Accelerometer_obj::lime_input_get_acceleration;


Accelerometer_obj::Accelerometer_obj()
{
}

void Accelerometer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accelerometer);
	HX_MARK_MEMBER_NAME(muted,"muted");
	HX_MARK_MEMBER_NAME(__timer,"__timer");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Accelerometer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(muted,"muted");
	HX_VISIT_MEMBER_NAME(__timer,"__timer");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Accelerometer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { return muted; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { return __timer; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { return inCallProp ? get_isSupported() : isSupported; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return get_isSupported_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__defaultInterval") ) { return __defaultInterval; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"setRequestedUpdateInterval") ) { return setRequestedUpdateInterval_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_input_get_acceleration") ) { return lime_input_get_acceleration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Accelerometer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"muted") ) { muted=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__timer") ) { __timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { isSupported=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__defaultInterval") ) { __defaultInterval=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_input_get_acceleration") ) { lime_input_get_acceleration=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Accelerometer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("muted"));
	outFields->push(HX_CSTRING("__timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isSupported"),
	HX_CSTRING("__defaultInterval"),
	HX_CSTRING("get_isSupported"),
	HX_CSTRING("lime_input_get_acceleration"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Accelerometer_obj,muted),HX_CSTRING("muted")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Accelerometer_obj,__timer),HX_CSTRING("__timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("muted"),
	HX_CSTRING("__timer"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("setRequestedUpdateInterval"),
	HX_CSTRING("__update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::isSupported,"isSupported");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::__defaultInterval,"__defaultInterval");
	HX_MARK_MEMBER_NAME(Accelerometer_obj::lime_input_get_acceleration,"lime_input_get_acceleration");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::isSupported,"isSupported");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::__defaultInterval,"__defaultInterval");
	HX_VISIT_MEMBER_NAME(Accelerometer_obj::lime_input_get_acceleration,"lime_input_get_acceleration");
};

#endif

Class Accelerometer_obj::__mClass;

void Accelerometer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.sensors.Accelerometer"), hx::TCanCast< Accelerometer_obj> ,sStaticFields,sMemberFields,
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

void Accelerometer_obj::__boot()
{
	__defaultInterval= (int)34;
	lime_input_get_acceleration= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_input_get_acceleration"),(int)0);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace sensors
