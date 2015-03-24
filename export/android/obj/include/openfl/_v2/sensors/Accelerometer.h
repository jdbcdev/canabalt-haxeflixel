#ifndef INCLUDED_openfl__v2_sensors_Accelerometer
#define INCLUDED_openfl__v2_sensors_Accelerometer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/events/EventDispatcher.h>
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,sensors,Accelerometer)
namespace openfl{
namespace _v2{
namespace sensors{


class HXCPP_CLASS_ATTRIBUTES  Accelerometer_obj : public ::openfl::_v2::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_v2::events::EventDispatcher_obj super;
		typedef Accelerometer_obj OBJ_;
		Accelerometer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Accelerometer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Accelerometer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Accelerometer"); }

		bool muted;
		::haxe::Timer __timer;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual Void setRequestedUpdateInterval( Float interval);
		Dynamic setRequestedUpdateInterval_dyn();

		virtual Void __update( );
		Dynamic __update_dyn();

		static bool isSupported;
		static int __defaultInterval;
		static bool get_isSupported( );
		static Dynamic get_isSupported_dyn();

		static Dynamic lime_input_get_acceleration;
		static Dynamic &lime_input_get_acceleration_dyn() { return lime_input_get_acceleration;}
};

} // end namespace openfl
} // end namespace _v2
} // end namespace sensors

#endif /* INCLUDED_openfl__v2_sensors_Accelerometer */ 
