#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#define INCLUDED_flixel_effects_particles_FlxParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
#include <flixel/interfaces/IFlxParticle.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxParticle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxParticle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
namespace flixel{
namespace effects{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES  FlxParticle_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxParticle_obj OBJ_;
		FlxParticle_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxParticle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxParticle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::flixel::interfaces::IFlxSprite_obj *()
			{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxParticle_obj >(this); }
		inline operator ::flixel::interfaces::IFlxBasic_obj *()
			{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxParticle_obj >(this); }
		inline operator ::flixel::interfaces::IFlxParticle_obj *()
			{ return new ::flixel::interfaces::IFlxParticle_delegate_< FlxParticle_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxParticle"); }

		Float lifespan;
		Float friction;
		bool useFading;
		bool useScaling;
		bool useColoring;
		Float maxLifespan;
		Float startAlpha;
		Float rangeAlpha;
		Float startScale;
		Float rangeScale;
		Float startRed;
		Float startGreen;
		Float startBlue;
		Float rangeRed;
		Float rangeGreen;
		Float rangeBlue;
		virtual Void update( );

		virtual Void reset( Float X,Float Y);

		virtual Void onEmit( );
		Dynamic onEmit_dyn();

};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_FlxParticle */ 
