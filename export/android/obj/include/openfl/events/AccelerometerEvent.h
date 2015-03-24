#ifndef INCLUDED_openfl_events_AccelerometerEvent
#define INCLUDED_openfl_events_AccelerometerEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/events/Event.h>
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS2(openfl,events,AccelerometerEvent)
namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  AccelerometerEvent_obj : public ::openfl::_v2::events::Event_obj{
	public:
		typedef ::openfl::_v2::events::Event_obj super;
		typedef AccelerometerEvent_obj OBJ_;
		AccelerometerEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AccelerometerEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_timestamp,hx::Null< Float >  __o_accelerationX,hx::Null< Float >  __o_accelerationY,hx::Null< Float >  __o_accelerationZ);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AccelerometerEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AccelerometerEvent"); }

		Float accelerationX;
		Float accelerationY;
		Float accelerationZ;
		Float timestamp;
		virtual ::openfl::_v2::events::Event clone( );

		virtual ::String toString( );

		static ::String UPDATE;
};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_AccelerometerEvent */ 
