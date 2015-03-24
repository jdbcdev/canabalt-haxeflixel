#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl__v2_events__EventDispatcher_Listener
#include <openfl/_v2/events/_EventDispatcher/Listener.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_EventPhase
#include <openfl/events/EventPhase.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
namespace openfl{
namespace _v2{
namespace events{

Void EventDispatcher_obj::__construct(::openfl::_v2::events::IEventDispatcher target)
{
HX_STACK_FRAME("openfl._v2.events.EventDispatcher","new",0x8d197b6f,"openfl._v2.events.EventDispatcher.new","openfl/_v2/events/EventDispatcher.hx",22,0x3e68c260)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
{
	HX_STACK_LINE(22)
	if (((target != null()))){
		HX_STACK_LINE(24)
		this->__targetDispatcher = target;
	}
}
;
	return null();
}

//EventDispatcher_obj::~EventDispatcher_obj() { }

Dynamic EventDispatcher_obj::__CreateEmpty() { return  new EventDispatcher_obj; }
hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::openfl::_v2::events::IEventDispatcher target)
{  hx::ObjectPtr< EventDispatcher_obj > result = new EventDispatcher_obj();
	result->__construct(target);
	return result;}

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventDispatcher_obj > result = new EventDispatcher_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *EventDispatcher_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_v2::events::IEventDispatcher_obj)) return operator ::openfl::_v2::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

Void EventDispatcher_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("openfl._v2.events.EventDispatcher","addEventListener",0x3c57635e,"openfl._v2.events.EventDispatcher.addEventListener","openfl/_v2/events/EventDispatcher.hx",31,0x3e68c260)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(33)
		if (((this->__eventMap == null()))){
			HX_STACK_LINE(35)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			this->__eventMap = _g;
		}
		HX_STACK_LINE(39)
		if ((!(this->__eventMap->exists(type)))){
			HX_STACK_LINE(41)
			Array< ::Dynamic > list = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(42)
			::openfl::_v2::events::_EventDispatcher::Listener _g1 = ::openfl::_v2::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			list->push(_g1);
			HX_STACK_LINE(43)
			this->__eventMap->set(type,list);
		}
		else{
			HX_STACK_LINE(47)
			Array< ::Dynamic > list = this->__eventMap->get(type);		HX_STACK_VAR(list,"list");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(49)
				int _g = list->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(49)
				while((true)){
					HX_STACK_LINE(49)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(49)
						break;
					}
					HX_STACK_LINE(49)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(51)
					if ((::Reflect_obj::compareMethods(list->__get(i).StaticCast< ::openfl::_v2::events::_EventDispatcher::Listener >()->callback,listener))){
						HX_STACK_LINE(51)
						return null();
					}
				}
			}
			HX_STACK_LINE(55)
			::openfl::_v2::events::_EventDispatcher::Listener _g2 = ::openfl::_v2::events::_EventDispatcher::Listener_obj::__new(listener,useCapture,priority);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(55)
			list->push(_g2);
			HX_STACK_LINE(56)
			list->sort(::openfl::_v2::events::EventDispatcher_obj::__sortByPriority_dyn());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

bool EventDispatcher_obj::dispatchEvent( ::openfl::_v2::events::Event event){
	HX_STACK_FRAME("openfl._v2.events.EventDispatcher","dispatchEvent",0xfa167acf,"openfl._v2.events.EventDispatcher.dispatchEvent","openfl/_v2/events/EventDispatcher.hx",63,0x3e68c260)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(65)
	if (((bool((this->__eventMap == null())) || bool((event == null()))))){
		HX_STACK_LINE(65)
		return false;
	}
	HX_STACK_LINE(67)
	Array< ::Dynamic > list;		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::String key = event->get_type();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(67)
		list = this->__eventMap->get(key);
	}
	HX_STACK_LINE(69)
	if (((list == null()))){
		HX_STACK_LINE(69)
		return false;
	}
	HX_STACK_LINE(71)
	Dynamic _g = event->get_target();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(71)
	if (((_g == null()))){
		HX_STACK_LINE(73)
		if (((this->__targetDispatcher != null()))){
			HX_STACK_LINE(75)
			event->set_target(this->__targetDispatcher);
		}
		else{
			HX_STACK_LINE(79)
			event->set_target(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(85)
	event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(87)
	::openfl::events::EventPhase _g1 = event->get_eventPhase();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(87)
	bool capture = (_g1 == ::openfl::events::EventPhase_obj::CAPTURING_PHASE);		HX_STACK_VAR(capture,"capture");
	HX_STACK_LINE(88)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(89)
	::openfl::_v2::events::_EventDispatcher::Listener listener;		HX_STACK_VAR(listener,"listener");
	HX_STACK_LINE(91)
	while((true)){
		HX_STACK_LINE(91)
		if ((!(((index < list->length))))){
			HX_STACK_LINE(91)
			break;
		}
		HX_STACK_LINE(93)
		listener = list->__get(index).StaticCast< ::openfl::_v2::events::_EventDispatcher::Listener >();
		HX_STACK_LINE(95)
		if (((listener->useCapture == capture))){
			HX_STACK_LINE(98)
			listener->callback(event);
			HX_STACK_LINE(100)
			if ((event->__isCancelledNow)){
				HX_STACK_LINE(102)
				return true;
			}
		}
		HX_STACK_LINE(108)
		if (((listener == list->__get(index).StaticCast< ::openfl::_v2::events::_EventDispatcher::Listener >()))){
			HX_STACK_LINE(110)
			(index)++;
		}
	}
	HX_STACK_LINE(116)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

bool EventDispatcher_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("openfl._v2.events.EventDispatcher","hasEventListener",0x57dd8685,"openfl._v2.events.EventDispatcher.hasEventListener","openfl/_v2/events/EventDispatcher.hx",121,0x3e68c260)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(123)
	if (((this->__eventMap == null()))){
		HX_STACK_LINE(123)
		return false;
	}
	HX_STACK_LINE(124)
	return this->__eventMap->exists(type);
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

Void EventDispatcher_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("openfl._v2.events.EventDispatcher","removeEventListener",0x05ca80d9,"openfl._v2.events.EventDispatcher.removeEventListener","openfl/_v2/events/EventDispatcher.hx",129,0x3e68c260)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(131)
		if (((this->__eventMap == null()))){
			HX_STACK_LINE(131)
			return null();
		}
		HX_STACK_LINE(133)
		Array< ::Dynamic > list = this->__eventMap->get(type);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(135)
		if (((list == null()))){
			HX_STACK_LINE(135)
			return null();
		}
		HX_STACK_LINE(137)
		{
			HX_STACK_LINE(137)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(137)
			int _g = list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(137)
			while((true)){
				HX_STACK_LINE(137)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(137)
					break;
				}
				HX_STACK_LINE(137)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(139)
				if ((list->__get(i).StaticCast< ::openfl::_v2::events::_EventDispatcher::Listener >()->match(listener,capture))){
					HX_STACK_LINE(141)
					list->splice(i,(int)1);
					HX_STACK_LINE(142)
					break;
				}
			}
		}
		HX_STACK_LINE(148)
		if (((list->length == (int)0))){
			HX_STACK_LINE(150)
			this->__eventMap->remove(type);
		}
		HX_STACK_LINE(154)
		if ((!(this->__eventMap->iterator()->__Field(HX_CSTRING("hasNext"),true)()))){
			HX_STACK_LINE(156)
			this->__eventMap = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString( ){
	HX_STACK_FRAME("openfl._v2.events.EventDispatcher","toString",0x4797af3d,"openfl._v2.events.EventDispatcher.toString","openfl/_v2/events/EventDispatcher.hx",163,0x3e68c260)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	::Class _g = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(165)
	::String full = ::Type_obj::getClassName(_g);		HX_STACK_VAR(full,"full");
	HX_STACK_LINE(166)
	::String _short = full.split(HX_CSTRING("."))->pop();		HX_STACK_VAR(_short,"short");
	HX_STACK_LINE(168)
	return ((HX_CSTRING("[object ") + _short) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger( ::String type){
	HX_STACK_FRAME("openfl._v2.events.EventDispatcher","willTrigger",0xcf4dc655,"openfl._v2.events.EventDispatcher.willTrigger","openfl/_v2/events/EventDispatcher.hx",175,0x3e68c260)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(175)
	return this->hasEventListener(type);
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

Void EventDispatcher_obj::__dispatchCompleteEvent( ){
{
		HX_STACK_FRAME("openfl._v2.events.EventDispatcher","__dispatchCompleteEvent",0x9e9092f6,"openfl._v2.events.EventDispatcher.__dispatchCompleteEvent","openfl/_v2/events/EventDispatcher.hx",180,0x3e68c260)
		HX_STACK_THIS(this)
		HX_STACK_LINE(182)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(::openfl::_v2::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(182)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,__dispatchCompleteEvent,(void))

Void EventDispatcher_obj::__dispatchIOErrorEvent( ){
{
		HX_STACK_FRAME("openfl._v2.events.EventDispatcher","__dispatchIOErrorEvent",0x434e91e3,"openfl._v2.events.EventDispatcher.__dispatchIOErrorEvent","openfl/_v2/events/EventDispatcher.hx",187,0x3e68c260)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		::openfl::events::IOErrorEvent _g = ::openfl::events::IOErrorEvent_obj::__new(::openfl::events::IOErrorEvent_obj::IO_ERROR,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(189)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,__dispatchIOErrorEvent,(void))

int EventDispatcher_obj::__sortByPriority( ::openfl::_v2::events::_EventDispatcher::Listener l1,::openfl::_v2::events::_EventDispatcher::Listener l2){
	HX_STACK_FRAME("openfl._v2.events.EventDispatcher","__sortByPriority",0xb9caec0a,"openfl._v2.events.EventDispatcher.__sortByPriority","openfl/_v2/events/EventDispatcher.hx",196,0x3e68c260)
	HX_STACK_ARG(l1,"l1")
	HX_STACK_ARG(l2,"l2")
	HX_STACK_LINE(196)
	if (((l1->priority == l2->priority))){
		HX_STACK_LINE(196)
		return (int)0;
	}
	else{
		HX_STACK_LINE(196)
		if (((l1->priority > l2->priority))){
			HX_STACK_LINE(196)
			return (int)-1;
		}
		else{
			HX_STACK_LINE(196)
			return (int)1;
		}
	}
	HX_STACK_LINE(196)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,__sortByPriority,return )


EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
	HX_MARK_MEMBER_NAME(__eventMap,"__eventMap");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__targetDispatcher,"__targetDispatcher");
	HX_VISIT_MEMBER_NAME(__eventMap,"__eventMap");
}

Dynamic EventDispatcher_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { return __eventMap; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__sortByPriority") ) { return __sortByPriority_dyn(); }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { return __targetDispatcher; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__dispatchIOErrorEvent") ) { return __dispatchIOErrorEvent_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__dispatchCompleteEvent") ) { return __dispatchCompleteEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventDispatcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__eventMap") ) { __eventMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__targetDispatcher") ) { __targetDispatcher=inValue.Cast< ::openfl::_v2::events::IEventDispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__targetDispatcher"));
	outFields->push(HX_CSTRING("__eventMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__sortByPriority"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::events::IEventDispatcher*/ ,(int)offsetof(EventDispatcher_obj,__targetDispatcher),HX_CSTRING("__targetDispatcher")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,__eventMap),HX_CSTRING("__eventMap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__targetDispatcher"),
	HX_CSTRING("__eventMap"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("dispatchEvent"),
	HX_CSTRING("hasEventListener"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("toString"),
	HX_CSTRING("willTrigger"),
	HX_CSTRING("__dispatchCompleteEvent"),
	HX_CSTRING("__dispatchIOErrorEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#endif

Class EventDispatcher_obj::__mClass;

void EventDispatcher_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.events.EventDispatcher"), hx::TCanCast< EventDispatcher_obj> ,sStaticFields,sMemberFields,
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

void EventDispatcher_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace events
