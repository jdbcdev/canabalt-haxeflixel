#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_HTTPStatusEvent
#include <openfl/_v2/events/HTTPStatusEvent.h>
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
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoaderDataFormat
#include <openfl/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif
namespace openfl{
namespace _v2{
namespace net{

Void URLLoader_obj::__construct(::openfl::_v2::net::URLRequest request)
{
HX_STACK_FRAME("openfl._v2.net.URLLoader","new",0x50481f72,"openfl._v2.net.URLLoader.new","openfl/_v2/net/URLLoader.hx",38,0x366dca41)
HX_STACK_THIS(this)
HX_STACK_ARG(request,"request")
{
	HX_STACK_LINE(40)
	super::__construct(null());
	HX_STACK_LINE(42)
	this->__handle = (int)0;
	HX_STACK_LINE(43)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(44)
	this->bytesTotal = (int)-1;
	HX_STACK_LINE(45)
	this->state = (int)0;
	HX_STACK_LINE(46)
	this->dataFormat = ::openfl::net::URLLoaderDataFormat_obj::TEXT;
	HX_STACK_LINE(48)
	if (((request != null()))){
		HX_STACK_LINE(50)
		this->load(request);
	}
}
;
	return null();
}

//URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::openfl::_v2::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > result = new URLLoader_obj();
	result->__construct(request);
	return result;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > result = new URLLoader_obj();
	result->__construct(inArgs[0]);
	return result;}

Void URLLoader_obj::close( ){
{
		HX_STACK_FRAME("openfl._v2.net.URLLoader","close",0xb956cf4a,"openfl._v2.net.URLLoader.close","openfl/_v2/net/URLLoader.hx",57,0x366dca41)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

Void URLLoader_obj::dispatchHTTPStatus( int code){
{
		HX_STACK_FRAME("openfl._v2.net.URLLoader","dispatchHTTPStatus",0x9ea5c542,"openfl._v2.net.URLLoader.dispatchHTTPStatus","openfl/_v2/net/URLLoader.hx",64,0x366dca41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(66)
		::openfl::_v2::events::HTTPStatusEvent event = ::openfl::_v2::events::HTTPStatusEvent_obj::__new(::openfl::_v2::events::HTTPStatusEvent_obj::HTTP_STATUS,false,false,code);		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(67)
		Array< ::String > headers = ::openfl::_v2::net::URLLoader_obj::lime_curl_get_headers(this->__handle);		HX_STACK_VAR(headers,"headers");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(69)
			while((true)){
				HX_STACK_LINE(69)
				if ((!(((_g < headers->length))))){
					HX_STACK_LINE(69)
					break;
				}
				HX_STACK_LINE(69)
				::String header = headers->__get(_g);		HX_STACK_VAR(header,"header");
				HX_STACK_LINE(69)
				++(_g);
				HX_STACK_LINE(71)
				int index = header.indexOf(HX_CSTRING(": "),null());		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(72)
				if (((index > (int)0))){
					HX_STACK_LINE(74)
					::String _g1 = header.substr((int)0,index);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(74)
					::String _g11 = header.substr((index + (int)2),((header.length - index) - (int)4));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(74)
					::openfl::net::URLRequestHeader _g2 = ::openfl::net::URLRequestHeader_obj::__new(_g1,_g11);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(74)
					event->responseHeaders->push(_g2);
				}
			}
		}
		HX_STACK_LINE(80)
		this->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,dispatchHTTPStatus,(void))

Array< ::String > URLLoader_obj::getCookies( ){
	HX_STACK_FRAME("openfl._v2.net.URLLoader","getCookies",0xe39f5487,"openfl._v2.net.URLLoader.getCookies","openfl/_v2/net/URLLoader.hx",87,0x366dca41)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	return ::openfl::_v2::net::URLLoader_obj::lime_curl_get_cookies(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,getCookies,return )

Void URLLoader_obj::load( ::openfl::_v2::net::URLRequest request){
{
		HX_STACK_FRAME("openfl._v2.net.URLLoader","load",0xed887ad4,"openfl._v2.net.URLLoader.load","openfl/_v2/net/URLLoader.hx",106,0x366dca41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(108)
		this->state = (int)1;
		HX_STACK_LINE(110)
		::String pref = request->url.substr((int)0,(int)7);		HX_STACK_VAR(pref,"pref");
		HX_STACK_LINE(111)
		if (((bool((pref != HX_CSTRING("http://"))) && bool((pref != HX_CSTRING("https:/")))))){
			HX_STACK_LINE(113)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(115)
				::openfl::_v2::utils::ByteArray bytes = ::openfl::_v2::utils::ByteArray_obj::readFile(request->url);		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(117)
				if (((bytes == null()))){
					HX_STACK_LINE(119)
					HX_STACK_DO_THROW(((HX_CSTRING("Could not open file \"") + request->url) + HX_CSTRING("\"")));
				}
				HX_STACK_LINE(123)
				{
					HX_STACK_LINE(123)
					::openfl::net::URLLoaderDataFormat _g = this->dataFormat;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(123)
					switch( (int)(_g->__Index())){
						case (int)1: {
							HX_STACK_LINE(125)
							::String _g1 = bytes->asString();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(125)
							this->data = _g1;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(126)
							::String _g1 = bytes->asString();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(126)
							::openfl::net::URLVariables _g2 = ::openfl::net::URLVariables_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(126)
							this->data = _g2;
						}
						;break;
						default: {
							HX_STACK_LINE(127)
							this->data = bytes;
						}
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(133)
						this->onError(e);
						HX_STACK_LINE(134)
						return null();
					}
				}
			}
			HX_STACK_LINE(138)
			this->__dataComplete();
		}
		else{
			HX_STACK_LINE(142)
			request->__prepare();
			HX_STACK_LINE(143)
			Dynamic _g3 = ::openfl::_v2::net::URLLoader_obj::lime_curl_create(request);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(143)
			this->__handle = _g3;
			HX_STACK_LINE(145)
			if (((this->__handle == null()))){
				HX_STACK_LINE(147)
				this->onError(HX_CSTRING("Could not open URL"));
			}
			else{
				HX_STACK_LINE(151)
				::openfl::_v2::net::URLLoader_obj::activeLoaders->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

Void URLLoader_obj::onError( ::String msg){
{
		HX_STACK_FRAME("openfl._v2.net.URLLoader","onError",0x6865aa3b,"openfl._v2.net.URLLoader.onError","openfl/_v2/net/URLLoader.hx",160,0x366dca41)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(162)
		::openfl::_v2::net::URLLoader_obj::activeLoaders->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(163)
		::openfl::events::IOErrorEvent _g = ::openfl::events::IOErrorEvent_obj::__new(::openfl::events::IOErrorEvent_obj::IO_ERROR,true,false,msg,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

Void URLLoader_obj::update( ){
{
		HX_STACK_FRAME("openfl._v2.net.URLLoader","update",0xeb526e37,"openfl._v2.net.URLLoader.update","openfl/_v2/net/URLLoader.hx",170,0x366dca41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		if (((this->__handle != null()))){
			HX_STACK_LINE(172)
			int old_loaded = this->bytesLoaded;		HX_STACK_VAR(old_loaded,"old_loaded");
			HX_STACK_LINE(173)
			int old_total = this->bytesTotal;		HX_STACK_VAR(old_total,"old_total");
			HX_STACK_LINE(174)
			::openfl::_v2::net::URLLoader_obj::lime_curl_update_loader(this->__handle,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(176)
			if (((bool((old_total < (int)0)) && bool((this->bytesTotal > (int)0))))){
				HX_STACK_LINE(178)
				::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::OPEN,null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(178)
				this->dispatchEvent(_g);
			}
			HX_STACK_LINE(182)
			if (((bool((this->bytesTotal > (int)0)) && bool((this->bytesLoaded != old_loaded))))){
				HX_STACK_LINE(184)
				::openfl::events::ProgressEvent _g1 = ::openfl::events::ProgressEvent_obj::__new(::openfl::events::ProgressEvent_obj::PROGRESS,false,false,this->bytesLoaded,this->bytesTotal);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(184)
				this->dispatchEvent(_g1);
			}
			HX_STACK_LINE(188)
			int code = ::openfl::_v2::net::URLLoader_obj::lime_curl_get_code(this->__handle);		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(190)
			if (((this->state == (int)3))){
				HX_STACK_LINE(192)
				this->dispatchHTTPStatus(code);
				HX_STACK_LINE(194)
				::openfl::_v2::utils::ByteArray bytes = ::openfl::_v2::net::URLLoader_obj::lime_curl_get_data(this->__handle);		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(196)
				{
					HX_STACK_LINE(196)
					::openfl::net::URLLoaderDataFormat _g = this->dataFormat;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(196)
					switch( (int)(_g->__Index())){
						case (int)1: case (int)2: {
							HX_STACK_LINE(199)
							Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(199)
							if (((bytes == null()))){
								HX_STACK_LINE(199)
								_g2 = HX_CSTRING("");
							}
							else{
								HX_STACK_LINE(199)
								_g2 = bytes->asString();
							}
							HX_STACK_LINE(199)
							this->data = _g2;
						}
						;break;
						default: {
							HX_STACK_LINE(201)
							this->data = bytes;
						}
					}
				}
				HX_STACK_LINE(205)
				if (((code < (int)400))){
					HX_STACK_LINE(207)
					this->__dataComplete();
				}
				else{
					HX_STACK_LINE(211)
					::openfl::events::IOErrorEvent event = ::openfl::events::IOErrorEvent_obj::__new(::openfl::events::IOErrorEvent_obj::IO_ERROR,true,false,this->data,code);		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(212)
					this->__handle = null();
					HX_STACK_LINE(213)
					this->dispatchEvent(event);
				}
			}
			else{
				HX_STACK_LINE(217)
				if (((this->state == (int)4))){
					HX_STACK_LINE(219)
					this->dispatchHTTPStatus(code);
					HX_STACK_LINE(221)
					::String _g3 = ::openfl::_v2::net::URLLoader_obj::lime_curl_get_error_message(this->__handle);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(221)
					::openfl::events::IOErrorEvent event = ::openfl::events::IOErrorEvent_obj::__new(::openfl::events::IOErrorEvent_obj::IO_ERROR,true,false,_g3,code);		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(222)
					this->__handle = null();
					HX_STACK_LINE(223)
					this->dispatchEvent(event);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,update,(void))

Void URLLoader_obj::__dataComplete( ){
{
		HX_STACK_FRAME("openfl._v2.net.URLLoader","__dataComplete",0x4b549651,"openfl._v2.net.URLLoader.__dataComplete","openfl/_v2/net/URLLoader.hx",232,0x366dca41)
		HX_STACK_THIS(this)
		HX_STACK_LINE(234)
		::openfl::_v2::net::URLLoader_obj::activeLoaders->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(236)
		if (((this->__onComplete_dyn() != null()))){
			HX_STACK_LINE(238)
			if ((this->__onComplete(this->data))){
				HX_STACK_LINE(240)
				::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(240)
				this->dispatchEvent(_g);
			}
			else{
				HX_STACK_LINE(244)
				this->__dispatchIOErrorEvent();
			}
		}
		else{
			HX_STACK_LINE(250)
			::openfl::_v2::events::Event _g1 = ::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(250)
			this->dispatchEvent(_g1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,__dataComplete,(void))

::List URLLoader_obj::activeLoaders;

int URLLoader_obj::urlInvalid;

int URLLoader_obj::urlInit;

int URLLoader_obj::urlLoading;

int URLLoader_obj::urlComplete;

int URLLoader_obj::urlError;

bool URLLoader_obj::hasActive( ){
	HX_STACK_FRAME("openfl._v2.net.URLLoader","hasActive",0x224add52,"openfl._v2.net.URLLoader.hasActive","openfl/_v2/net/URLLoader.hx",94,0x366dca41)
	HX_STACK_LINE(94)
	return !(::openfl::_v2::net::URLLoader_obj::activeLoaders->isEmpty());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,hasActive,return )

Void URLLoader_obj::initialize( ::String caCertFilePath){
{
		HX_STACK_FRAME("openfl._v2.net.URLLoader","initialize",0xda0ac87e,"openfl._v2.net.URLLoader.initialize","openfl/_v2/net/URLLoader.hx",101,0x366dca41)
		HX_STACK_ARG(caCertFilePath,"caCertFilePath")
		HX_STACK_LINE(101)
		::openfl::_v2::net::URLLoader_obj::lime_curl_initialize(caCertFilePath);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,initialize,(void))

bool URLLoader_obj::__loadPending( ){
	HX_STACK_FRAME("openfl._v2.net.URLLoader","__loadPending",0x40b33143,"openfl._v2.net.URLLoader.__loadPending","openfl/_v2/net/URLLoader.hx",259,0x366dca41)
	HX_STACK_LINE(259)
	return !(::openfl::_v2::net::URLLoader_obj::activeLoaders->isEmpty());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,__loadPending,return )

Void URLLoader_obj::__pollData( ){
{
		HX_STACK_FRAME("openfl._v2.net.URLLoader","__pollData",0x29769657,"openfl._v2.net.URLLoader.__pollData","openfl/_v2/net/URLLoader.hx",266,0x366dca41)
		HX_STACK_LINE(266)
		if ((!(::openfl::_v2::net::URLLoader_obj::activeLoaders->isEmpty()))){
			HX_STACK_LINE(268)
			::openfl::_v2::net::URLLoader_obj::lime_curl_process_loaders();
			HX_STACK_LINE(269)
			::List oldLoaders = ::openfl::_v2::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(oldLoaders,"oldLoaders");
			HX_STACK_LINE(270)
			::List _g = ::List_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(270)
			::openfl::_v2::net::URLLoader_obj::activeLoaders = _g;
			HX_STACK_LINE(272)
			for(::cpp::FastIterator_obj< ::openfl::_v2::net::URLLoader > *__it = ::cpp::CreateFastIterator< ::openfl::_v2::net::URLLoader >(oldLoaders->iterator());  __it->hasNext(); ){
				::openfl::_v2::net::URLLoader loader = __it->next();
				{
					HX_STACK_LINE(274)
					loader->update();
					HX_STACK_LINE(275)
					if (((loader->state == (int)2))){
						HX_STACK_LINE(277)
						::openfl::_v2::net::URLLoader_obj::activeLoaders->push(loader);
					}
				}
;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,__pollData,(void))

Dynamic URLLoader_obj::lime_curl_create;

Dynamic URLLoader_obj::lime_curl_process_loaders;

Dynamic URLLoader_obj::lime_curl_update_loader;

Dynamic URLLoader_obj::lime_curl_get_code;

Dynamic URLLoader_obj::lime_curl_get_error_message;

Dynamic URLLoader_obj::lime_curl_get_data;

Dynamic URLLoader_obj::lime_curl_get_cookies;

Dynamic URLLoader_obj::lime_curl_get_headers;

Dynamic URLLoader_obj::lime_curl_initialize;


URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_MEMBER_NAME(__onComplete,"__onComplete");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
	HX_VISIT_MEMBER_NAME(__onComplete,"__onComplete");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic URLLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasActive") ) { return hasActive_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"__pollData") ) { return __pollData_dyn(); }
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return getCookies_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return __onComplete; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { return activeLoaders; }
		if (HX_FIELD_EQ(inName,"__loadPending") ) { return __loadPending_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dataComplete") ) { return __dataComplete_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_curl_create") ) { return lime_curl_create; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_curl_get_code") ) { return lime_curl_get_code; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_data") ) { return lime_curl_get_data; }
		if (HX_FIELD_EQ(inName,"dispatchHTTPStatus") ) { return dispatchHTTPStatus_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_initialize") ) { return lime_curl_initialize; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_get_cookies") ) { return lime_curl_get_cookies; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_headers") ) { return lime_curl_get_headers; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_update_loader") ) { return lime_curl_update_loader; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_curl_process_loaders") ) { return lime_curl_process_loaders; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_curl_get_error_message") ) { return lime_curl_get_error_message; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic URLLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast< ::openfl::net::URLLoaderDataFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { __onComplete=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { activeLoaders=inValue.Cast< ::List >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_curl_create") ) { lime_curl_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_curl_get_code") ) { lime_curl_get_code=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_data") ) { lime_curl_get_data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_curl_initialize") ) { lime_curl_initialize=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_curl_get_cookies") ) { lime_curl_get_cookies=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_curl_get_headers") ) { lime_curl_get_headers=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_curl_update_loader") ) { lime_curl_update_loader=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_curl_process_loaders") ) { lime_curl_process_loaders=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_curl_get_error_message") ) { lime_curl_get_error_message=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytesLoaded"));
	outFields->push(HX_CSTRING("bytesTotal"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("dataFormat"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("activeLoaders"),
	HX_CSTRING("urlInvalid"),
	HX_CSTRING("urlInit"),
	HX_CSTRING("urlLoading"),
	HX_CSTRING("urlComplete"),
	HX_CSTRING("urlError"),
	HX_CSTRING("hasActive"),
	HX_CSTRING("initialize"),
	HX_CSTRING("__loadPending"),
	HX_CSTRING("__pollData"),
	HX_CSTRING("lime_curl_create"),
	HX_CSTRING("lime_curl_process_loaders"),
	HX_CSTRING("lime_curl_update_loader"),
	HX_CSTRING("lime_curl_get_code"),
	HX_CSTRING("lime_curl_get_error_message"),
	HX_CSTRING("lime_curl_get_data"),
	HX_CSTRING("lime_curl_get_cookies"),
	HX_CSTRING("lime_curl_get_headers"),
	HX_CSTRING("lime_curl_initialize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_CSTRING("bytesLoaded")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_CSTRING("bytesTotal")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*::openfl::net::URLLoaderDataFormat*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_CSTRING("dataFormat")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,state),HX_CSTRING("state")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,__handle),HX_CSTRING("__handle")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,__onComplete),HX_CSTRING("__onComplete")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bytesLoaded"),
	HX_CSTRING("bytesTotal"),
	HX_CSTRING("data"),
	HX_CSTRING("dataFormat"),
	HX_CSTRING("state"),
	HX_CSTRING("__handle"),
	HX_CSTRING("__onComplete"),
	HX_CSTRING("close"),
	HX_CSTRING("dispatchHTTPStatus"),
	HX_CSTRING("getCookies"),
	HX_CSTRING("load"),
	HX_CSTRING("onError"),
	HX_CSTRING("update"),
	HX_CSTRING("__dataComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoader_obj::activeLoaders,"activeLoaders");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_MARK_MEMBER_NAME(URLLoader_obj::lime_curl_create,"lime_curl_create");
	HX_MARK_MEMBER_NAME(URLLoader_obj::lime_curl_process_loaders,"lime_curl_process_loaders");
	HX_MARK_MEMBER_NAME(URLLoader_obj::lime_curl_update_loader,"lime_curl_update_loader");
	HX_MARK_MEMBER_NAME(URLLoader_obj::lime_curl_get_code,"lime_curl_get_code");
	HX_MARK_MEMBER_NAME(URLLoader_obj::lime_curl_get_error_message,"lime_curl_get_error_message");
	HX_MARK_MEMBER_NAME(URLLoader_obj::lime_curl_get_data,"lime_curl_get_data");
	HX_MARK_MEMBER_NAME(URLLoader_obj::lime_curl_get_cookies,"lime_curl_get_cookies");
	HX_MARK_MEMBER_NAME(URLLoader_obj::lime_curl_get_headers,"lime_curl_get_headers");
	HX_MARK_MEMBER_NAME(URLLoader_obj::lime_curl_initialize,"lime_curl_initialize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::activeLoaders,"activeLoaders");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::lime_curl_create,"lime_curl_create");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::lime_curl_process_loaders,"lime_curl_process_loaders");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::lime_curl_update_loader,"lime_curl_update_loader");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::lime_curl_get_code,"lime_curl_get_code");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::lime_curl_get_error_message,"lime_curl_get_error_message");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::lime_curl_get_data,"lime_curl_get_data");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::lime_curl_get_cookies,"lime_curl_get_cookies");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::lime_curl_get_headers,"lime_curl_get_headers");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::lime_curl_initialize,"lime_curl_initialize");
};

#endif

Class URLLoader_obj::__mClass;

void URLLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.net.URLLoader"), hx::TCanCast< URLLoader_obj> ,sStaticFields,sMemberFields,
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

void URLLoader_obj::__boot()
{
	activeLoaders= ::List_obj::__new();
	urlInvalid= (int)0;
	urlInit= (int)1;
	urlLoading= (int)2;
	urlComplete= (int)3;
	urlError= (int)4;
	lime_curl_create= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_curl_create"),(int)1);
	lime_curl_process_loaders= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_curl_process_loaders"),(int)0);
	lime_curl_update_loader= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_curl_update_loader"),(int)2);
	lime_curl_get_code= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_curl_get_code"),(int)1);
	lime_curl_get_error_message= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_curl_get_error_message"),(int)1);
	lime_curl_get_data= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_curl_get_data"),(int)1);
	lime_curl_get_cookies= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_curl_get_cookies"),(int)1);
	lime_curl_get_headers= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_curl_get_headers"),(int)1);
	lime_curl_initialize= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_curl_initialize"),(int)1);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace net
