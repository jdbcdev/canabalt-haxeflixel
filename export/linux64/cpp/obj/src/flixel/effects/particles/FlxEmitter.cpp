#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitter
#include <flixel/effects/particles/FlxEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxEmitter_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxEmitter","new",0xd4fb758d,"flixel.effects.particles.FlxEmitter.new","flixel/effects/particles/FlxEmitter.hx",25,0x6dff0520)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(25)
	super::__construct(X,Y,Size);
}
;
	return null();
}

//FlxEmitter_obj::~FlxEmitter_obj() { }

Dynamic FlxEmitter_obj::__CreateEmpty() { return  new FlxEmitter_obj; }
hx::ObjectPtr< FlxEmitter_obj > FlxEmitter_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxEmitter_obj > result = new FlxEmitter_obj();
	result->__construct(__o_X,__o_Y,__o_Size);
	return result;}

Dynamic FlxEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxEmitter_obj > result = new FlxEmitter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FlxEmitter_obj::FlxEmitter_obj()
{
}

Dynamic FlxEmitter_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxEmitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxEmitter_obj::__mClass,"__mClass");
};

#endif

Class FlxEmitter_obj::__mClass;

void FlxEmitter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxEmitter"), hx::TCanCast< FlxEmitter_obj> ,sStaticFields,sMemberFields,
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

void FlxEmitter_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
