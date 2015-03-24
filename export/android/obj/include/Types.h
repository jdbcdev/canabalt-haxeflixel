#ifndef INCLUDED_Types
#define INCLUDED_Types

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Types)


class Types_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Types_obj OBJ_;

	public:
		Types_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("Types"); }
		::String __ToString() const { return HX_CSTRING("Types.") + tag; }

		static ::Types BILLBOARD;
		static inline ::Types BILLBOARD_dyn() { return BILLBOARD; }
		static ::Types COLLAPSE;
		static inline ::Types COLLAPSE_dyn() { return COLLAPSE; }
		static ::Types ROOF;
		static inline ::Types ROOF_dyn() { return ROOF; }
};


#endif /* INCLUDED_Types */ 
