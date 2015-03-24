#ifndef INCLUDED_Sequence
#define INCLUDED_Sequence

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxObject.h>
HX_DECLARE_CLASS0(Billboard)
HX_DECLARE_CLASS0(Building)
HX_DECLARE_CLASS0(Hall)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Sequence)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxEmitter)
HX_DECLARE_CLASS3(flixel,effects,particles,FlxTypedEmitter)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tile,FlxTileblock)


class HXCPP_CLASS_ATTRIBUTES  Sequence_obj : public ::flixel::FlxObject_obj{
	public:
		typedef ::flixel::FlxObject_obj super;
		typedef Sequence_obj OBJ_;
		Sequence_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Sequence_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sequence_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Sequence"); }

		::flixel::group::FlxGroup renderLayer;
		::flixel::group::FlxGroup layer;
		::flixel::group::FlxGroup backgroundRenderLayer;
		::flixel::group::FlxGroup layerLeg;
		::Sequence seq;
		::Player player;
		bool roof;
		::flixel::effects::particles::FlxEmitter shardsA;
		::flixel::effects::particles::FlxEmitter shardsB;
		::Building building;
		::flixel::tile::FlxTileblock escape;
		::flixel::tile::FlxTileblock fence;
		int curIndex;
		int nextIndex;
		int nextType;
		virtual Void initWithPlayer( ::Player player);
		Dynamic initWithPlayer_dyn();

		virtual Void resetBuilding( );
		Dynamic resetBuilding_dyn();

		virtual Void createBuilding( );
		Dynamic createBuilding_dyn();

		virtual Void update( );

		static int sequenceIndex;
		static ::Hall hall;
		static ::Billboard billboard;
		static int TILE_SIZE;
		static ::String ASSETS_IMAGES;
		static Float nextX;
		static Void initialize( );
		static Dynamic initialize_dyn();

};


#endif /* INCLUDED_Sequence */ 
