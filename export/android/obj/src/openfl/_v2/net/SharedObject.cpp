#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_filesystem_File
#include <openfl/_v2/filesystem/File.h>
#endif
#ifndef INCLUDED_openfl__v2_net_SharedObject
#include <openfl/_v2/net/SharedObject.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObjectFlushStatus
#include <openfl/net/SharedObjectFlushStatus.h>
#endif
namespace openfl{
namespace _v2{
namespace net{

Void SharedObject_obj::__construct(::String name,::String localPath,Dynamic data)
{
HX_STACK_FRAME("openfl._v2.net.SharedObject","new",0x4c9c4858,"openfl._v2.net.SharedObject.new","openfl/_v2/net/SharedObject.hx",27,0x9422b7f5)
HX_STACK_THIS(this)
HX_STACK_ARG(name,"name")
HX_STACK_ARG(localPath,"localPath")
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(29)
	super::__construct(null());
	HX_STACK_LINE(31)
	this->name = name;
	HX_STACK_LINE(32)
	this->localPath = localPath;
	HX_STACK_LINE(33)
	this->data = data;
}
;
	return null();
}

//SharedObject_obj::~SharedObject_obj() { }

Dynamic SharedObject_obj::__CreateEmpty() { return  new SharedObject_obj; }
hx::ObjectPtr< SharedObject_obj > SharedObject_obj::__new(::String name,::String localPath,Dynamic data)
{  hx::ObjectPtr< SharedObject_obj > result = new SharedObject_obj();
	result->__construct(name,localPath,data);
	return result;}

Dynamic SharedObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SharedObject_obj > result = new SharedObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void SharedObject_obj::clear( ){
{
		HX_STACK_FRAME("openfl._v2.net.SharedObject","clear",0x91abd785,"openfl._v2.net.SharedObject.clear","openfl/_v2/net/SharedObject.hx",42,0x9422b7f5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::openfl::_v2::net::SharedObject_obj::lime_clear_user_preference(this->name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,clear,(void))

Void SharedObject_obj::close( ){
{
		HX_STACK_FRAME("openfl._v2.net.SharedObject","close",0x91b37db0,"openfl._v2.net.SharedObject.close","openfl/_v2/net/SharedObject.hx",59,0x9422b7f5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,close,(void))

::openfl::net::SharedObjectFlushStatus SharedObject_obj::flush( hx::Null< int >  __o_minDiskSpace){
int minDiskSpace = __o_minDiskSpace.Default(0);
	HX_STACK_FRAME("openfl._v2.net.SharedObject","flush",0x4bebc8bc,"openfl._v2.net.SharedObject.flush","openfl/_v2/net/SharedObject.hx",123,0x9422b7f5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(minDiskSpace,"minDiskSpace")
{
		HX_STACK_LINE(125)
		::String encodedData = ::haxe::Serializer_obj::run(this->data);		HX_STACK_VAR(encodedData,"encodedData");
		HX_STACK_LINE(129)
		::openfl::_v2::net::SharedObject_obj::lime_set_user_preference(this->name,encodedData);
		HX_STACK_LINE(148)
		return ::openfl::net::SharedObjectFlushStatus_obj::FLUSHED;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,flush,return )

Void SharedObject_obj::setProperty( ::String propertyName,Dynamic value){
{
		HX_STACK_FRAME("openfl._v2.net.SharedObject","setProperty",0x428e420f,"openfl._v2.net.SharedObject.setProperty","openfl/_v2/net/SharedObject.hx",245,0x9422b7f5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(propertyName,"propertyName")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(245)
		if (((this->data != null()))){
			HX_STACK_LINE(247)
			Dynamic o = this->data;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(247)
			if (((o != null()))){
				HX_STACK_LINE(247)
				o->__SetField(propertyName,value,false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,setProperty,(void))

int SharedObject_obj::get_size( ){
	HX_STACK_FRAME("openfl._v2.net.SharedObject","get_size",0x9b380152,"openfl._v2.net.SharedObject.get_size","openfl/_v2/net/SharedObject.hx",263,0x9422b7f5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(SharedObject_obj,get_size,return )

::String SharedObject_obj::getFilePath( ::String name,::String localPath){
	HX_STACK_FRAME("openfl._v2.net.SharedObject","getFilePath",0xef7ec0ef,"openfl._v2.net.SharedObject.getFilePath","openfl/_v2/net/SharedObject.hx",153,0x9422b7f5)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(localPath,"localPath")
	HX_STACK_LINE(155)
	::String path = ::openfl::_v2::filesystem::File_obj::get_applicationStorageDirectory()->nativePath;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(156)
	hx::AddEq(path,((((HX_CSTRING("/") + localPath) + HX_CSTRING("/")) + name) + HX_CSTRING(".sol")));
	HX_STACK_LINE(157)
	return path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SharedObject_obj,getFilePath,return )

::openfl::_v2::net::SharedObject SharedObject_obj::getLocal( ::String name,::String localPath,hx::Null< bool >  __o_secure){
bool secure = __o_secure.Default(false);
	HX_STACK_FRAME("openfl._v2.net.SharedObject","getLocal",0xa7f17dfd,"openfl._v2.net.SharedObject.getLocal","openfl/_v2/net/SharedObject.hx",162,0x9422b7f5)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(localPath,"localPath")
	HX_STACK_ARG(secure,"secure")
{
		HX_STACK_LINE(164)
		if (((localPath == null()))){
			HX_STACK_LINE(166)
			localPath = HX_CSTRING("");
		}
		HX_STACK_LINE(172)
		::String rawData = ::openfl::_v2::net::SharedObject_obj::lime_get_user_preference(name);		HX_STACK_VAR(rawData,"rawData");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_v2/net/SharedObject.hx",187,0x9422b7f5)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(187)
		Dynamic loadedData = _Function_1_1::Block();		HX_STACK_VAR(loadedData,"loadedData");
		HX_STACK_LINE(189)
		if (((bool((rawData != HX_CSTRING(""))) && bool((rawData != null()))))){
			HX_STACK_LINE(191)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(193)
				::haxe::Unserializer unserializer = ::haxe::Unserializer_obj::__new(rawData);		HX_STACK_VAR(unserializer,"unserializer");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_v2/net/SharedObject.hx",194,0x9422b7f5)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("resolveEnum") , ::Type_obj::resolveEnum_dyn(),false);
							__result->Add(HX_CSTRING("resolveClass") , ::openfl::_v2::net::SharedObject_obj::resolveClass_dyn(),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(194)
				unserializer->setResolver(_Function_3_1::Block());
				HX_STACK_LINE(195)
				Dynamic _g = unserializer->unserialize();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(195)
				loadedData = _g;
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(199)
						::haxe::Log_obj::trace((HX_CSTRING("Could not unserialize SharedObject: ") + name),hx::SourceInfo(HX_CSTRING("SharedObject.hx"),199,HX_CSTRING("openfl._v2.net.SharedObject"),HX_CSTRING("getLocal")));
						struct _Function_3_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_v2/net/SharedObject.hx",200,0x9422b7f5)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(200)
						loadedData = _Function_3_1::Block();
					}
				}
			}
		}
		HX_STACK_LINE(206)
		::openfl::_v2::net::SharedObject so = ::openfl::_v2::net::SharedObject_obj::__new(name,localPath,loadedData);		HX_STACK_VAR(so,"so");
		HX_STACK_LINE(207)
		return so;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SharedObject_obj,getLocal,return )

::Class SharedObject_obj::resolveClass( ::String name){
	HX_STACK_FRAME("openfl._v2.net.SharedObject","resolveClass",0x517286b4,"openfl._v2.net.SharedObject.resolveClass","openfl/_v2/net/SharedObject.hx",212,0x9422b7f5)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(214)
	if (((name != null()))){
		HX_STACK_LINE(216)
		if ((::StringTools_obj::startsWith(name,HX_CSTRING("neash.")))){
			HX_STACK_LINE(218)
			::String _g = ::StringTools_obj::replace(name,HX_CSTRING("neash."),HX_CSTRING("openfl."));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(218)
			name = _g;
		}
		HX_STACK_LINE(222)
		if ((::StringTools_obj::startsWith(name,HX_CSTRING("native.")))){
			HX_STACK_LINE(224)
			::String _g1 = ::StringTools_obj::replace(name,HX_CSTRING("native."),HX_CSTRING("openfl."));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(224)
			name = _g1;
		}
		HX_STACK_LINE(228)
		if ((::StringTools_obj::startsWith(name,HX_CSTRING("flash.")))){
			HX_STACK_LINE(230)
			::String _g2 = ::StringTools_obj::replace(name,HX_CSTRING("flash."),HX_CSTRING("openfl."));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(230)
			name = _g2;
		}
		HX_STACK_LINE(234)
		return ::Type_obj::resolveClass(name);
	}
	HX_STACK_LINE(238)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SharedObject_obj,resolveClass,return )

Dynamic SharedObject_obj::lime_get_user_preference;

Dynamic SharedObject_obj::lime_set_user_preference;

Dynamic SharedObject_obj::lime_clear_user_preference;


SharedObject_obj::SharedObject_obj()
{
}

void SharedObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SharedObject);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(localPath,"localPath");
	HX_MARK_MEMBER_NAME(name,"name");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SharedObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(localPath,"localPath");
	HX_VISIT_MEMBER_NAME(name,"name");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SharedObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"size") ) { return inCallProp ? get_size() : size; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLocal") ) { return getLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { return localPath; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getFilePath") ) { return getFilePath_dyn(); }
		if (HX_FIELD_EQ(inName,"setProperty") ) { return setProperty_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { return resolveClass_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_get_user_preference") ) { return lime_get_user_preference; }
		if (HX_FIELD_EQ(inName,"lime_set_user_preference") ) { return lime_set_user_preference; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_clear_user_preference") ) { return lime_clear_user_preference; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SharedObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"localPath") ) { localPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_get_user_preference") ) { lime_get_user_preference=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_set_user_preference") ) { lime_set_user_preference=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_clear_user_preference") ) { lime_clear_user_preference=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SharedObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("localPath"));
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getFilePath"),
	HX_CSTRING("getLocal"),
	HX_CSTRING("resolveClass"),
	HX_CSTRING("lime_get_user_preference"),
	HX_CSTRING("lime_set_user_preference"),
	HX_CSTRING("lime_clear_user_preference"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SharedObject_obj,data),HX_CSTRING("data")},
	{hx::fsInt,(int)offsetof(SharedObject_obj,size),HX_CSTRING("size")},
	{hx::fsString,(int)offsetof(SharedObject_obj,localPath),HX_CSTRING("localPath")},
	{hx::fsString,(int)offsetof(SharedObject_obj,name),HX_CSTRING("name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("size"),
	HX_CSTRING("localPath"),
	HX_CSTRING("name"),
	HX_CSTRING("clear"),
	HX_CSTRING("close"),
	HX_CSTRING("flush"),
	HX_CSTRING("setProperty"),
	HX_CSTRING("get_size"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SharedObject_obj::lime_get_user_preference,"lime_get_user_preference");
	HX_MARK_MEMBER_NAME(SharedObject_obj::lime_set_user_preference,"lime_set_user_preference");
	HX_MARK_MEMBER_NAME(SharedObject_obj::lime_clear_user_preference,"lime_clear_user_preference");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SharedObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::lime_get_user_preference,"lime_get_user_preference");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::lime_set_user_preference,"lime_set_user_preference");
	HX_VISIT_MEMBER_NAME(SharedObject_obj::lime_clear_user_preference,"lime_clear_user_preference");
};

#endif

Class SharedObject_obj::__mClass;

void SharedObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.net.SharedObject"), hx::TCanCast< SharedObject_obj> ,sStaticFields,sMemberFields,
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

void SharedObject_obj::__boot()
{
	lime_get_user_preference= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_get_user_preference"),(int)1);
	lime_set_user_preference= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_set_user_preference"),(int)2);
	lime_clear_user_preference= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_clear_user_preference"),(int)1);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace net
