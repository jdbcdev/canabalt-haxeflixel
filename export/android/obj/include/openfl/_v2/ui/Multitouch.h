#ifndef INCLUDED_openfl__v2_ui_Multitouch
#define INCLUDED_openfl__v2_ui_Multitouch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_v2,ui,Multitouch)
HX_DECLARE_CLASS2(openfl,ui,MultitouchInputMode)
namespace openfl{
namespace _v2{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  Multitouch_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Multitouch_obj OBJ_;
		Multitouch_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Multitouch_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Multitouch_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		static void __init__();

		::String __ToString() const { return HX_CSTRING("Multitouch"); }

		static int maxTouchPoints;
		static Array< ::String > supportedGestures;
		static bool supportsGestureEvents;
		static bool supportsTouchEvents;
		static ::openfl::ui::MultitouchInputMode get_inputMode( );
		static Dynamic get_inputMode_dyn();

		static ::openfl::ui::MultitouchInputMode set_inputMode( ::openfl::ui::MultitouchInputMode value);
		static Dynamic set_inputMode_dyn();

		static bool get_supportsTouchEvents( );
		static Dynamic get_supportsTouchEvents_dyn();

		static Dynamic lime_stage_get_multitouch_supported;
		static Dynamic &lime_stage_get_multitouch_supported_dyn() { return lime_stage_get_multitouch_supported;}
		static Dynamic lime_stage_get_multitouch_active;
		static Dynamic &lime_stage_get_multitouch_active_dyn() { return lime_stage_get_multitouch_active;}
		static Dynamic lime_stage_set_multitouch_active;
		static Dynamic &lime_stage_set_multitouch_active_dyn() { return lime_stage_set_multitouch_active;}
};

} // end namespace openfl
} // end namespace _v2
} // end namespace ui

#endif /* INCLUDED_openfl__v2_ui_Multitouch */ 
