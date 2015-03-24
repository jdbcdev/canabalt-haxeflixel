#ifndef INCLUDED_CBlock
#define INCLUDED_CBlock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tile/FlxTileblock.h>
HX_DECLARE_CLASS0(CBlock)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tile,FlxTileblock)


class HXCPP_CLASS_ATTRIBUTES  CBlock_obj : public ::flixel::tile::FlxTileblock_obj{
	public:
		typedef ::flixel::tile::FlxTileblock_obj super;
		typedef CBlock_obj OBJ_;
		CBlock_obj();
		Void __construct(int X,int Y,int Width,int Height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CBlock_obj > __new(int X,int Y,int Width,int Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CBlock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CBlock"); }

};


#endif /* INCLUDED_CBlock */ 
