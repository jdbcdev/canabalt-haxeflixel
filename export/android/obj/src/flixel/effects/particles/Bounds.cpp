#include <hxcpp.h>

#ifndef INCLUDED_flixel_effects_particles_Bounds
#include <flixel/effects/particles/Bounds.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void Bounds_obj::__construct(Dynamic min,Dynamic max)
{
HX_STACK_FRAME("flixel.effects.particles.Bounds","new",0xc6c1c5e6,"flixel.effects.particles.Bounds.new","flixel/effects/particles/FlxTypedEmitter.hx",900,0xb8028a0a)
HX_STACK_THIS(this)
HX_STACK_ARG(min,"min")
HX_STACK_ARG(max,"max")
{
	HX_STACK_LINE(900)
	this->set(min,max);
}
;
	return null();
}

//Bounds_obj::~Bounds_obj() { }

Dynamic Bounds_obj::__CreateEmpty() { return  new Bounds_obj; }
hx::ObjectPtr< Bounds_obj > Bounds_obj::__new(Dynamic min,Dynamic max)
{  hx::ObjectPtr< Bounds_obj > result = new Bounds_obj();
	result->__construct(min,max);
	return result;}

Dynamic Bounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bounds_obj > result = new Bounds_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flixel::effects::particles::Bounds Bounds_obj::set( Dynamic min,Dynamic max){
	HX_STACK_FRAME("flixel.effects.particles.Bounds","set",0xc6c59128,"flixel.effects.particles.Bounds.set","flixel/effects/particles/FlxTypedEmitter.hx",904,0xb8028a0a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(905)
	this->min = min;
	HX_STACK_LINE(906)
	if (((max == null()))){
		HX_STACK_LINE(906)
		this->max = min;
	}
	else{
		HX_STACK_LINE(906)
		this->max = max;
	}
	HX_STACK_LINE(907)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(Bounds_obj,set,return )


Bounds_obj::Bounds_obj()
{
}

void Bounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bounds);
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_END_CLASS();
}

void Bounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
}

Dynamic Bounds_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bounds_obj,min),HX_CSTRING("min")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bounds_obj,max),HX_CSTRING("max")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("set"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bounds_obj::__mClass,"__mClass");
};

#endif

Class Bounds_obj::__mClass;

void Bounds_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.Bounds"), hx::TCanCast< Bounds_obj> ,sStaticFields,sMemberFields,
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

void Bounds_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
