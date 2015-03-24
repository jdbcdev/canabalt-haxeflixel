#ifndef INCLUDED_flixel_interfaces_IFlxParticle
#define INCLUDED_flixel_interfaces_IFlxParticle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxSprite.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxParticle)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
namespace flixel{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxParticle_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxParticle_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void onEmit( )=0;
		Dynamic onEmit_dyn();
};

#define DELEGATE_flixel_interfaces_IFlxParticle \
virtual Void onEmit( ) { return mDelegate->onEmit();}  \
virtual Dynamic onEmit_dyn() { return mDelegate->onEmit_dyn();}  \


template<typename IMPL>
class IFlxParticle_delegate_ : public IFlxParticle_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxParticle_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_interfaces_IFlxParticle
};

} // end namespace flixel
} // end namespace interfaces

#endif /* INCLUDED_flixel_interfaces_IFlxParticle */ 
