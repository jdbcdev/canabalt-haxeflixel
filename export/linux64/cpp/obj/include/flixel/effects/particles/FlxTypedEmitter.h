#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#define INCLUDED_flixel_effects_particles_FlxTypedEmitter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxTypedGroup.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,effects,particles,Bounds)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS3(openfl,_v2,display,BlendMode)
namespace flixel{
namespace effects{
namespace particles{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedEmitter_obj : public ::flixel::group::FlxTypedGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedGroup_obj super;
		typedef FlxTypedEmitter_obj OBJ_;
		FlxTypedEmitter_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxTypedEmitter_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedEmitter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTypedEmitter"); }

		::flixel::effects::particles::Bounds xPosition;
		::flixel::effects::particles::Bounds yPosition;
		::flixel::effects::particles::Bounds xVelocity;
		::flixel::effects::particles::Bounds yVelocity;
		::flixel::util::FlxPoint particleDrag;
		::flixel::effects::particles::Bounds rotation;
		::flixel::util::FlxPoint acceleration;
		bool on;
		Float frequency;
		::flixel::effects::particles::Bounds life;
		::flixel::effects::particles::Bounds startScale;
		::flixel::effects::particles::Bounds endScale;
		::flixel::effects::particles::Bounds startAlpha;
		::flixel::effects::particles::Bounds endAlpha;
		::flixel::effects::particles::Bounds startRed;
		::flixel::effects::particles::Bounds startGreen;
		::flixel::effects::particles::Bounds startBlue;
		::flixel::effects::particles::Bounds endRed;
		::flixel::effects::particles::Bounds endGreen;
		::flixel::effects::particles::Bounds endBlue;
		::openfl::_v2::display::BlendMode blend;
		Float bounce;
		::Class _particleClass;
		int _quantity;
		bool _explode;
		Float _timer;
		int _counter;
		::flixel::util::FlxPoint _point;
		bool _waitForKill;
		virtual Void destroy( );

		virtual ::flixel::effects::particles::FlxTypedEmitter makeParticles( Dynamic Graphics,hx::Null< int >  Quantity,hx::Null< int >  bakedRotationAngles,hx::Null< bool >  Multiple,hx::Null< Float >  Collide,hx::Null< bool >  AutoBuffer);
		Dynamic makeParticles_dyn();

		virtual Void update( );

		virtual Void kill( );

		virtual Void start( hx::Null< bool >  Explode,hx::Null< Float >  Lifespan,hx::Null< Float >  Frequency,hx::Null< int >  Quantity,hx::Null< Float >  LifespanRange);
		Dynamic start_dyn();

		virtual Void emitParticle( );
		Dynamic emitParticle_dyn();

		virtual Void setSize( int Width,int Height);
		Dynamic setSize_dyn();

		virtual Void setXSpeed( hx::Null< Float >  Min,hx::Null< Float >  Max);
		Dynamic setXSpeed_dyn();

		virtual Void setYSpeed( hx::Null< Float >  Min,hx::Null< Float >  Max);
		Dynamic setYSpeed_dyn();

		virtual Void setRotation( hx::Null< Float >  Min,hx::Null< Float >  Max);
		Dynamic setRotation_dyn();

		virtual Void setScale( hx::Null< Float >  StartMin,hx::Null< Float >  StartMax,hx::Null< Float >  EndMin,hx::Null< Float >  EndMax);
		Dynamic setScale_dyn();

		virtual Void setAlpha( hx::Null< Float >  StartMin,hx::Null< Float >  StartMax,hx::Null< Float >  EndMin,hx::Null< Float >  EndMax);
		Dynamic setAlpha_dyn();

		virtual Void setColor( hx::Null< int >  Start,hx::Null< int >  End);
		Dynamic setColor_dyn();

		virtual Void at( ::flixel::FlxObject Object);
		Dynamic at_dyn();

		virtual ::Class get_particleClass( );
		Dynamic get_particleClass_dyn();

		virtual ::Class set_particleClass( ::Class Value);
		Dynamic set_particleClass_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float set_width( Float Value);
		Dynamic set_width_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_height( Float Value);
		Dynamic set_height_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float Value);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float Value);
		Dynamic set_y_dyn();

		virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y);
		Dynamic setPosition_dyn();

		virtual Float get_gravity( );
		Dynamic get_gravity_dyn();

		virtual Float set_gravity( Float Value);
		Dynamic set_gravity_dyn();

		virtual Float get_minRotation( );
		Dynamic get_minRotation_dyn();

		virtual Float set_minRotation( Float Value);
		Dynamic set_minRotation_dyn();

		virtual Float get_maxRotation( );
		Dynamic get_maxRotation_dyn();

		virtual Float set_maxRotation( Float Value);
		Dynamic set_maxRotation_dyn();

		virtual Float get_lifespan( );
		Dynamic get_lifespan_dyn();

		virtual Float set_lifespan( Float Value);
		Dynamic set_lifespan_dyn();

};

} // end namespace flixel
} // end namespace effects
} // end namespace particles

#endif /* INCLUDED_flixel_effects_particles_FlxTypedEmitter */ 
