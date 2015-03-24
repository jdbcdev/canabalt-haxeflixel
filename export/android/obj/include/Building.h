#ifndef INCLUDED_Building
#define INCLUDED_Building

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxSpriteGroup.h>
HX_DECLARE_CLASS0(Building)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxSpriteGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Building_obj : public ::flixel::group::FlxSpriteGroup_obj{
	public:
		typedef ::flixel::group::FlxSpriteGroup_obj super;
		typedef Building_obj OBJ_;
		Building_obj();
		Void __construct(Dynamic X,Dynamic Y,Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Building_obj > __new(Dynamic X,Dynamic Y,Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Building_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Building"); }

		::flixel::FlxSprite leftCorner;
		::flixel::FlxSprite rightCorner;
		virtual Void initWithMaxWidth( int maxWidth);
		Dynamic initWithMaxWidth_dyn();

		virtual Void createWithX( Float x,Float y,Float width,Float height,int wallType,int windowType);
		Dynamic createWithX_dyn();

		virtual Void create( );
		Dynamic create_dyn();

		virtual Void createRect( );
		Dynamic createRect_dyn();

		static Array< ::String > leftWalls;
		static Array< ::String > rightWalls;
		static Array< ::String > middleWalls;
		static Array< ::String > leftWallsCracked;
		static Array< ::String > middleWallsCracked;
		static Array< ::String > rightWallsCracked;
		static Array< ::String > leftFloors;
		static Array< ::String > middleFloors;
		static Array< ::String > rightFloors;
		static Array< ::String > leftRoofs;
		static Array< ::String > middleRoofs;
		static Array< ::String > rightRoofs;
		static Array< ::String > leftRoofsCracked;
		static Array< ::String > middleRoofsCracked;
		static Array< ::String > rightRoofsCracked;
		static Array< ::String > windowImages;
		static int TILE_SIZE;
		static ::String ASSETS_IMAGES;
		static Void initialize( );
		static Dynamic initialize_dyn();

};


#endif /* INCLUDED_Building */ 
