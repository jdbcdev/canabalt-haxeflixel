#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Loader
#include <openfl/_v2/display/Loader.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LoaderInfo
#include <openfl/_v2/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_net_URLLoader
#include <openfl/_v2/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__v2_net_URLRequest
#include <openfl/_v2/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
#endif
namespace openfl{
namespace _v2{
namespace display{

Void Loader_obj::__construct()
{
HX_STACK_FRAME("openfl._v2.display.Loader","new",0x210755e2,"openfl._v2.display.Loader.new","openfl/_v2/display/Loader.hx",26,0x56462ceb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	::openfl::_v2::display::LoaderInfo _g = ::openfl::_v2::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	this->contentLoaderInfo = _g;
	HX_STACK_LINE(31)
	this->contentLoaderInfo->__onComplete = this->__onComplete_dyn();
}
;
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > result = new Loader_obj();
	result->__construct();
	return result;}

Void Loader_obj::load( ::openfl::_v2::net::URLRequest request,::openfl::system::LoaderContext context){
{
		HX_STACK_FRAME("openfl._v2.display.Loader","load",0xc418e664,"openfl._v2.display.Loader.load","openfl/_v2/display/Loader.hx",38,0x56462ceb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(38)
		this->contentLoaderInfo->load(request);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

Void Loader_obj::loadBytes( ::openfl::_v2::utils::ByteArray bytes,::openfl::system::LoaderContext context){
{
		HX_STACK_FRAME("openfl._v2.display.Loader","loadBytes",0xc65ae767,"openfl._v2.display.Loader.loadBytes","openfl/_v2/display/Loader.hx",45,0x56462ceb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(45)
		if ((this->__onComplete(bytes))){
			HX_STACK_LINE(47)
			::openfl::_v2::events::Event event = ::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(48)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(49)
			this->contentLoaderInfo->dispatchEvent(event);
		}
		else{
			HX_STACK_LINE(53)
			this->contentLoaderInfo->__dispatchIOErrorEvent();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

Void Loader_obj::unload( ){
{
		HX_STACK_FRAME("openfl._v2.display.Loader","unload",0xb607f8bd,"openfl._v2.display.Loader.unload","openfl/_v2/display/Loader.hx",60,0x56462ceb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(62)
		int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		if (((_g > (int)0))){
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				int _g1 = this->get_numChildren();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(64)
				if ((!(((_g1 > (int)0))))){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(66)
				this->removeChildAt((int)0);
			}
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(72)
				this->contentLoaderInfo->url = null();
				HX_STACK_LINE(73)
				this->contentLoaderInfo->contentType = null();
				HX_STACK_LINE(74)
				this->contentLoaderInfo->content = null();
				HX_STACK_LINE(75)
				int _g2 = this->contentLoaderInfo->bytesTotal = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(75)
				this->contentLoaderInfo->bytesLoaded = _g2;
				HX_STACK_LINE(76)
				this->contentLoaderInfo->width = (int)0;
				HX_STACK_LINE(77)
				this->contentLoaderInfo->height = (int)0;
			}
			HX_STACK_LINE(81)
			::openfl::_v2::events::Event event = ::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::UNLOAD,null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(82)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(83)
			this->dispatchEvent(event);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

bool Loader_obj::__onComplete( ::openfl::_v2::utils::ByteArray bytes){
	HX_STACK_FRAME("openfl._v2.display.Loader","__onComplete",0x9d170a56,"openfl._v2.display.Loader.__onComplete","openfl/_v2/display/Loader.hx",90,0x56462ceb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(92)
	if (((bytes == null()))){
		HX_STACK_LINE(94)
		return false;
	}
	HX_STACK_LINE(98)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(100)
		::openfl::_v2::display::BitmapData _g = ::openfl::_v2::display::BitmapData_obj::loadFromBytes(bytes,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		this->__image = _g;
		HX_STACK_LINE(101)
		::openfl::_v2::display::Bitmap bitmap = ::openfl::_v2::display::Bitmap_obj::__new(this->__image,null(),null());		HX_STACK_VAR(bitmap,"bitmap");
		HX_STACK_LINE(102)
		this->content = bitmap;
		HX_STACK_LINE(103)
		this->contentLoaderInfo->content = bitmap;
		HX_STACK_LINE(105)
		while((true)){
			HX_STACK_LINE(105)
			int _g1 = this->get_numChildren();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			if ((!(((_g1 > (int)0))))){
				HX_STACK_LINE(105)
				break;
			}
			HX_STACK_LINE(107)
			this->removeChildAt((int)0);
		}
		HX_STACK_LINE(111)
		this->addChild(bitmap);
		HX_STACK_LINE(112)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(116)
				return false;
			}
		}
	}
	HX_STACK_LINE(98)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,__onComplete,return )

Void Loader_obj::contentLoaderInfo_onData( ::openfl::_v2::events::Event event){
{
		HX_STACK_FRAME("openfl._v2.display.Loader","contentLoaderInfo_onData",0x45ac964c,"openfl._v2.display.Loader.contentLoaderInfo_onData","openfl/_v2/display/Loader.hx",130,0x56462ceb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(132)
		event->stopImmediatePropagation();
		HX_STACK_LINE(133)
		::openfl::_v2::utils::ByteArray _g = this->contentLoaderInfo->get_bytes();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		this->__onComplete(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,contentLoaderInfo_onData,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(__image,"__image");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(__image,"__image");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		if (HX_FIELD_EQ(inName,"__image") ) { return __image; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return __onComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo_onData") ) { return contentLoaderInfo_onData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::openfl::_v2::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__image") ) { __image=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::openfl::_v2::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("content"));
	outFields->push(HX_CSTRING("contentLoaderInfo"));
	outFields->push(HX_CSTRING("__image"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_CSTRING("content")},
	{hx::fsObject /*::openfl::_v2::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_CSTRING("contentLoaderInfo")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(Loader_obj,__image),HX_CSTRING("__image")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("content"),
	HX_CSTRING("contentLoaderInfo"),
	HX_CSTRING("__image"),
	HX_CSTRING("load"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("unload"),
	HX_CSTRING("__onComplete"),
	HX_CSTRING("contentLoaderInfo_onData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.display.Loader"), hx::TCanCast< Loader_obj> ,sStaticFields,sMemberFields,
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

void Loader_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace display
