#ifndef INCLUDED_Hall
#define INCLUDED_Hall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxSpriteGroup.h>
HX_DECLARE_CLASS0(CBlock)
HX_DECLARE_CLASS0(Hall)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tile,FlxTileblock)


class HXCPP_CLASS_ATTRIBUTES  Hall_obj : public ::flixel::group::FlxSpriteGroup_obj{
	public:
		typedef ::flixel::group::FlxSpriteGroup_obj super;
		typedef Hall_obj OBJ_;
		Hall_obj();
		Void __construct(Dynamic X,Dynamic Y,Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Hall_obj > __new(Dynamic X,Dynamic Y,Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Hall_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Hall"); }

		::flixel::tile::FlxTileblock leftEdge;
		::flixel::tile::FlxTileblock rightEdge;
		::CBlock hall1;
		::CBlock hall2;
		::flixel::FlxSprite hall3;
		Array< ::Dynamic > doors;
		Array< ::Dynamic > extraWindows;
		Array< ::Dynamic > extraWalls;
		Array< ::Dynamic > extraDoors;
		virtual Void initWithMaxWidth( int maxWidth);
		Dynamic initWithMaxWidth_dyn();

		virtual Void createWithX( Float x,Float y,Float width,Float height,int tileSize,int hallHeight,int wallType,int windowType);
		Dynamic createWithX_dyn();

		static int TILE_SIZE;
		static Array< ::String > leftWalls;
		static Array< ::String > rightWalls;
		static Array< ::String > middleWalls;
		static Array< ::String > windowImages;
		static Void initialize( );
		static Dynamic initialize_dyn();

};


#endif /* INCLUDED_Hall */ 
