#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetCache
#include <openfl/_v2/AssetCache.h>
#endif
#ifndef INCLUDED_openfl__v2_IAssetCache
#include <openfl/_v2/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
namespace openfl{
namespace _v2{

Void AssetCache_obj::__construct()
{
HX_STACK_FRAME("openfl._v2.AssetCache","new",0x0b04b855,"openfl._v2.AssetCache.new","openfl/_v2/Assets.hx",1373,0x2846aac8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(1381)
	this->__enabled = true;
	HX_STACK_LINE(1386)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1386)
	this->bitmapData = _g;
	HX_STACK_LINE(1387)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1387)
	this->font = _g1;
	HX_STACK_LINE(1388)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(1388)
	this->sound = _g2;
}
;
	return null();
}

//AssetCache_obj::~AssetCache_obj() { }

Dynamic AssetCache_obj::__CreateEmpty() { return  new AssetCache_obj; }
hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new()
{  hx::ObjectPtr< AssetCache_obj > result = new AssetCache_obj();
	result->__construct();
	return result;}

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetCache_obj > result = new AssetCache_obj();
	result->__construct();
	return result;}

hx::Object *AssetCache_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_v2::IAssetCache_obj)) return operator ::openfl::_v2::IAssetCache_obj *();
	return super::__ToInterface(inType);
}

Void AssetCache_obj::clear( ::String prefix){
{
		HX_STACK_FRAME("openfl._v2.AssetCache","clear",0x0f0e00c2,"openfl._v2.AssetCache.clear","openfl/_v2/Assets.hx",1395,0x2846aac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(1395)
		if (((prefix == null()))){
			HX_STACK_LINE(1397)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1397)
			this->bitmapData = _g;
			HX_STACK_LINE(1398)
			::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1398)
			this->font = _g1;
			HX_STACK_LINE(1399)
			::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1399)
			this->sound = _g2;
		}
		else{
			HX_STACK_LINE(1403)
			Dynamic keys = this->bitmapData->keys();		HX_STACK_VAR(keys,"keys");
			HX_STACK_LINE(1405)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys);  __it->hasNext(); ){
				::String key = __it->next();
				if ((::StringTools_obj::startsWith(key,prefix))){
					HX_STACK_LINE(1409)
					this->bitmapData->remove(key);
				}
;
			}
			HX_STACK_LINE(1415)
			Dynamic keys1 = this->font->keys();		HX_STACK_VAR(keys1,"keys1");
			HX_STACK_LINE(1417)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys1);  __it->hasNext(); ){
				::String key = __it->next();
				if ((::StringTools_obj::startsWith(key,prefix))){
					HX_STACK_LINE(1421)
					this->font->remove(key);
				}
;
			}
			HX_STACK_LINE(1427)
			Dynamic keys2 = this->sound->keys();		HX_STACK_VAR(keys2,"keys2");
			HX_STACK_LINE(1429)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(keys2);  __it->hasNext(); ){
				::String key = __it->next();
				if ((::StringTools_obj::startsWith(key,prefix))){
					HX_STACK_LINE(1433)
					this->sound->remove(key);
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))

::openfl::_v2::display::BitmapData AssetCache_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("openfl._v2.AssetCache","getBitmapData",0xde875e24,"openfl._v2.AssetCache.getBitmapData","openfl/_v2/Assets.hx",1446,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1446)
	return this->bitmapData->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getBitmapData,return )

::openfl::_v2::text::Font AssetCache_obj::getFont( ::String id){
	HX_STACK_FRAME("openfl._v2.AssetCache","getFont",0xda1f93fa,"openfl._v2.AssetCache.getFont","openfl/_v2/Assets.hx",1453,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1453)
	return this->font->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getFont,return )

::openfl::_v2::media::Sound AssetCache_obj::getSound( ::String id){
	HX_STACK_FRAME("openfl._v2.AssetCache","getSound",0x7dbcbc44,"openfl._v2.AssetCache.getSound","openfl/_v2/Assets.hx",1460,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1460)
	return this->sound->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getSound,return )

bool AssetCache_obj::hasBitmapData( ::String id){
	HX_STACK_FRAME("openfl._v2.AssetCache","hasBitmapData",0x9c6bb9e8,"openfl._v2.AssetCache.hasBitmapData","openfl/_v2/Assets.hx",1467,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1467)
	return this->bitmapData->exists(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasBitmapData,return )

bool AssetCache_obj::hasFont( ::String id){
	HX_STACK_FRAME("openfl._v2.AssetCache","hasFont",0xd6e104be,"openfl._v2.AssetCache.hasFont","openfl/_v2/Assets.hx",1474,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1474)
	return this->font->exists(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasFont,return )

bool AssetCache_obj::hasSound( ::String id){
	HX_STACK_FRAME("openfl._v2.AssetCache","hasSound",0xaa3df700,"openfl._v2.AssetCache.hasSound","openfl/_v2/Assets.hx",1481,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1481)
	return this->sound->exists(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasSound,return )

bool AssetCache_obj::removeBitmapData( ::String id){
	HX_STACK_FRAME("openfl._v2.AssetCache","removeBitmapData",0xaad55608,"openfl._v2.AssetCache.removeBitmapData","openfl/_v2/Assets.hx",1488,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1488)
	return this->bitmapData->remove(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeBitmapData,return )

bool AssetCache_obj::removeFont( ::String id){
	HX_STACK_FRAME("openfl._v2.AssetCache","removeFont",0xae70c8de,"openfl._v2.AssetCache.removeFont","openfl/_v2/Assets.hx",1495,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1495)
	return this->font->remove(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeFont,return )

bool AssetCache_obj::removeSound( ::String id){
	HX_STACK_FRAME("openfl._v2.AssetCache","removeSound",0x7079cee0,"openfl._v2.AssetCache.removeSound","openfl/_v2/Assets.hx",1502,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(1502)
	return this->sound->remove(id);
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeSound,return )

Void AssetCache_obj::setBitmapData( ::String id,::openfl::_v2::display::BitmapData bitmapData){
{
		HX_STACK_FRAME("openfl._v2.AssetCache","setBitmapData",0x238d4030,"openfl._v2.AssetCache.setBitmapData","openfl/_v2/Assets.hx",1509,0x2846aac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(bitmapData,"bitmapData")
		HX_STACK_LINE(1509)
		this->bitmapData->set(id,bitmapData);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setBitmapData,(void))

Void AssetCache_obj::setFont( ::String id,::openfl::_v2::text::Font font){
{
		HX_STACK_FRAME("openfl._v2.AssetCache","setFont",0xcd212506,"openfl._v2.AssetCache.setFont","openfl/_v2/Assets.hx",1516,0x2846aac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(1516)
		this->font->set(id,font);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setFont,(void))

Void AssetCache_obj::setSound( ::String id,::openfl::_v2::media::Sound sound){
{
		HX_STACK_FRAME("openfl._v2.AssetCache","setSound",0x2c1a15b8,"openfl._v2.AssetCache.setSound","openfl/_v2/Assets.hx",1523,0x2846aac8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sound,"sound")
		HX_STACK_LINE(1523)
		this->sound->set(id,sound);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setSound,(void))

bool AssetCache_obj::get_enabled( ){
	HX_STACK_FRAME("openfl._v2.AssetCache","get_enabled",0xf5a4c98d,"openfl._v2.AssetCache.get_enabled","openfl/_v2/Assets.hx",1537,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1537)
	return this->__enabled;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetCache_obj,get_enabled,return )

bool AssetCache_obj::set_enabled( bool value){
	HX_STACK_FRAME("openfl._v2.AssetCache","set_enabled",0x0011d099,"openfl._v2.AssetCache.set_enabled","openfl/_v2/Assets.hx",1544,0x2846aac8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1544)
	return this->__enabled = value;
}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,set_enabled,return )


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(__enabled,"__enabled");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(__enabled,"__enabled");
}

Dynamic AssetCache_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return get_enabled(); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"hasFont") ) { return hasFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"hasSound") ) { return hasSound_dyn(); }
		if (HX_FIELD_EQ(inName,"setSound") ) { return setSound_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { return __enabled; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"removeFont") ) { return removeFont_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeSound") ) { return removeSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return get_enabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return set_enabled_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"hasBitmapData") ) { return hasBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setBitmapData") ) { return setBitmapData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { return removeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return set_enabled(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { __enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmapData"));
	outFields->push(HX_CSTRING("enabled"));
	outFields->push(HX_CSTRING("font"));
	outFields->push(HX_CSTRING("sound"));
	outFields->push(HX_CSTRING("__enabled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,bitmapData),HX_CSTRING("bitmapData")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_CSTRING("font")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,sound),HX_CSTRING("sound")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,__enabled),HX_CSTRING("__enabled")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitmapData"),
	HX_CSTRING("font"),
	HX_CSTRING("sound"),
	HX_CSTRING("__enabled"),
	HX_CSTRING("clear"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getSound"),
	HX_CSTRING("hasBitmapData"),
	HX_CSTRING("hasFont"),
	HX_CSTRING("hasSound"),
	HX_CSTRING("removeBitmapData"),
	HX_CSTRING("removeFont"),
	HX_CSTRING("removeSound"),
	HX_CSTRING("setBitmapData"),
	HX_CSTRING("setFont"),
	HX_CSTRING("setSound"),
	HX_CSTRING("get_enabled"),
	HX_CSTRING("set_enabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.AssetCache"), hx::TCanCast< AssetCache_obj> ,sStaticFields,sMemberFields,
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

void AssetCache_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
