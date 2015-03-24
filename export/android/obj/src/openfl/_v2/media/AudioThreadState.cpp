#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_media_AudioThreadState
#include <openfl/_v2/media/AudioThreadState.h>
#endif
#ifndef INCLUDED_openfl__v2_media_SoundChannel
#include <openfl/_v2/media/SoundChannel.h>
#endif
namespace openfl{
namespace _v2{
namespace media{

Void AudioThreadState_obj::__construct()
{
HX_STACK_FRAME("openfl._v2.media.AudioThreadState","new",0x9b026c9e,"openfl._v2.media.AudioThreadState.new","openfl/_v2/media/SoundChannel.hx",342,0xb300254c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(344)
	::cpp::vm::Mutex _g = ::cpp::vm::Mutex_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(344)
	this->mutex = _g;
	HX_STACK_LINE(345)
	this->channelList = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//AudioThreadState_obj::~AudioThreadState_obj() { }

Dynamic AudioThreadState_obj::__CreateEmpty() { return  new AudioThreadState_obj; }
hx::ObjectPtr< AudioThreadState_obj > AudioThreadState_obj::__new()
{  hx::ObjectPtr< AudioThreadState_obj > result = new AudioThreadState_obj();
	result->__construct();
	return result;}

Dynamic AudioThreadState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AudioThreadState_obj > result = new AudioThreadState_obj();
	result->__construct();
	return result;}

Void AudioThreadState_obj::add( ::openfl::_v2::media::SoundChannel channel){
{
		HX_STACK_FRAME("openfl._v2.media.AudioThreadState","add",0x9af88e5f,"openfl._v2.media.AudioThreadState.add","openfl/_v2/media/SoundChannel.hx",352,0xb300254c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_LINE(352)
		if ((!(::Lambda_obj::has(this->channelList,channel)))){
			HX_STACK_LINE(354)
			this->channelList->push(channel);
			HX_STACK_LINE(355)
			::openfl::_v2::media::SoundChannel_obj::__audioThreadIsIdle = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioThreadState_obj,add,(void))

Void AudioThreadState_obj::remove( ::openfl::_v2::media::SoundChannel channel){
{
		HX_STACK_FRAME("openfl._v2.media.AudioThreadState","remove",0x10debac6,"openfl._v2.media.AudioThreadState.remove","openfl/_v2/media/SoundChannel.hx",362,0xb300254c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(channel,"channel")
		HX_STACK_LINE(364)
		this->mutex->acquire();
		HX_STACK_LINE(366)
		if ((::Lambda_obj::has(this->channelList,channel))){
			HX_STACK_LINE(369)
			channel->__addedToThread = false;
			HX_STACK_LINE(372)
			channel->__thread_completed = true;
			HX_STACK_LINE(375)
			this->channelList->remove(channel);
			HX_STACK_LINE(378)
			if (((this->channelList->length == (int)0))){
				HX_STACK_LINE(380)
				::openfl::_v2::media::SoundChannel_obj::__audioThreadIsIdle = true;
			}
		}
		HX_STACK_LINE(386)
		this->mutex->release();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AudioThreadState_obj,remove,(void))

Void AudioThreadState_obj::updateComplete( ){
{
		HX_STACK_FRAME("openfl._v2.media.AudioThreadState","updateComplete",0x702d6464,"openfl._v2.media.AudioThreadState.updateComplete","openfl/_v2/media/SoundChannel.hx",391,0xb300254c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(393)
		this->mutex->acquire();
		HX_STACK_LINE(395)
		{
			HX_STACK_LINE(395)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(395)
			Array< ::Dynamic > _g1 = this->channelList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(395)
			while((true)){
				HX_STACK_LINE(395)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(395)
					break;
				}
				HX_STACK_LINE(395)
				::openfl::_v2::media::SoundChannel channel = _g1->__get(_g).StaticCast< ::openfl::_v2::media::SoundChannel >();		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(395)
				++(_g);
				HX_STACK_LINE(397)
				if (((channel != null()))){
					HX_STACK_LINE(399)
					if ((channel->__runCheckComplete())){
						HX_STACK_LINE(400)
						this->remove(channel);
					}
				}
				else{
					HX_STACK_LINE(405)
					this->channelList->remove(channel);
				}
			}
		}
		HX_STACK_LINE(411)
		this->mutex->release();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AudioThreadState_obj,updateComplete,(void))


AudioThreadState_obj::AudioThreadState_obj()
{
}

void AudioThreadState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AudioThreadState);
	HX_MARK_MEMBER_NAME(audioThread,"audioThread");
	HX_MARK_MEMBER_NAME(channelList,"channelList");
	HX_MARK_MEMBER_NAME(mainThread,"mainThread");
	HX_MARK_MEMBER_NAME(mutex,"mutex");
	HX_MARK_END_CLASS();
}

void AudioThreadState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(audioThread,"audioThread");
	HX_VISIT_MEMBER_NAME(channelList,"channelList");
	HX_VISIT_MEMBER_NAME(mainThread,"mainThread");
	HX_VISIT_MEMBER_NAME(mutex,"mutex");
}

Dynamic AudioThreadState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { return mutex; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { return mainThread; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"audioThread") ) { return audioThread; }
		if (HX_FIELD_EQ(inName,"channelList") ) { return channelList; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateComplete") ) { return updateComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AudioThreadState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=inValue.Cast< ::cpp::vm::Mutex >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { mainThread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"audioThread") ) { audioThread=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		if (HX_FIELD_EQ(inName,"channelList") ) { channelList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AudioThreadState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("audioThread"));
	outFields->push(HX_CSTRING("channelList"));
	outFields->push(HX_CSTRING("mainThread"));
	outFields->push(HX_CSTRING("mutex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(AudioThreadState_obj,audioThread),HX_CSTRING("audioThread")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AudioThreadState_obj,channelList),HX_CSTRING("channelList")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(AudioThreadState_obj,mainThread),HX_CSTRING("mainThread")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(int)offsetof(AudioThreadState_obj,mutex),HX_CSTRING("mutex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("audioThread"),
	HX_CSTRING("channelList"),
	HX_CSTRING("mainThread"),
	HX_CSTRING("mutex"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("updateComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioThreadState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioThreadState_obj::__mClass,"__mClass");
};

#endif

Class AudioThreadState_obj::__mClass;

void AudioThreadState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.media.AudioThreadState"), hx::TCanCast< AudioThreadState_obj> ,sStaticFields,sMemberFields,
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

void AudioThreadState_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace media
