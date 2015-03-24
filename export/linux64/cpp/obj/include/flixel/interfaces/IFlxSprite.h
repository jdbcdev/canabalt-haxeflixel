#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#define INCLUDED_flixel_interfaces_IFlxSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/interfaces/IFlxBasic.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
namespace flixel{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFlxSprite_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFlxSprite_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void reset( Float X,Float Y)=0;
		Dynamic reset_dyn();
virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y)=0;
		Dynamic setPosition_dyn();
};

#define DELEGATE_flixel_interfaces_IFlxSprite \
virtual Void reset( Float X,Float Y) { return mDelegate->reset(X,Y);}  \
virtual Dynamic reset_dyn() { return mDelegate->reset_dyn();}  \
virtual Void setPosition( hx::Null< Float >  X,hx::Null< Float >  Y) { return mDelegate->setPosition(X,Y);}  \
virtual Dynamic setPosition_dyn() { return mDelegate->setPosition_dyn();}  \


template<typename IMPL>
class IFlxSprite_delegate_ : public IFlxSprite_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFlxSprite_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_flixel_interfaces_IFlxSprite
};

} // end namespace flixel
} // end namespace interfaces

#endif /* INCLUDED_flixel_interfaces_IFlxSprite */ 
