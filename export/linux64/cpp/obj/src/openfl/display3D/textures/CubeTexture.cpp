#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GL
#include <openfl/_v2/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLObject
#include <openfl/_v2/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__v2_gl_GLTexture
#include <openfl/_v2/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ArrayBufferView
#include <openfl/_v2/utils/ArrayBufferView.h>
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
#ifndef INCLUDED_openfl__v2_utils_UInt8Array
#include <openfl/_v2/utils/UInt8Array.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
namespace openfl{
namespace display3D{
namespace textures{

Void CubeTexture_obj::__construct(::openfl::_v2::gl::GLTexture glTexture,int size)
{
HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",20,0xffe9b114)
HX_STACK_THIS(this)
HX_STACK_ARG(glTexture,"glTexture")
HX_STACK_ARG(size,"size")
{
	HX_STACK_LINE(22)
	super::__construct(glTexture,size,size);
	HX_STACK_LINE(23)
	this->size = size;
	HX_STACK_LINE(25)
	this->_textures = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		while((true)){
			HX_STACK_LINE(27)
			if ((!(((_g < (int)6))))){
				HX_STACK_LINE(27)
				break;
			}
			HX_STACK_LINE(27)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(29)
			int _g1 = ::openfl::_v2::gl::GL_obj::get_version();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			Dynamic _g11 = ::openfl::_v2::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(29)
			this->_textures[i] = ::openfl::_v2::gl::GLTexture_obj::__new(_g1,_g11);
		}
	}
}
;
	return null();
}

//CubeTexture_obj::~CubeTexture_obj() { }

Dynamic CubeTexture_obj::__CreateEmpty() { return  new CubeTexture_obj; }
hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new(::openfl::_v2::gl::GLTexture glTexture,int size)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(glTexture,size);
	return result;}

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CubeTexture_obj > result = new CubeTexture_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::openfl::_v2::gl::GLTexture CubeTexture_obj::glTextureAt( int index){
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","glTextureAt",0xa081fde4,"openfl.display3D.textures.CubeTexture.glTextureAt","openfl/display3D/textures/CubeTexture.hx",38,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(38)
	return this->_textures->__get(index).StaticCast< ::openfl::_v2::gl::GLTexture >();
}


HX_DEFINE_DYNAMIC_FUNC1(CubeTexture_obj,glTextureAt,return )

Void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::_v2::utils::ByteArray data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",43,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(async,"async")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

Void CubeTexture_obj::uploadFromBitmapData( ::openfl::_v2::display::BitmapData bitmapData,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",50,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
{
		HX_STACK_LINE(55)
		::openfl::_v2::utils::ByteArray _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g = bitmapData->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			int _g1 = bitmapData->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(55)
			::openfl::_v2::geom::Rectangle _g2 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(55)
			::openfl::_v2::utils::ByteArray data = bitmapData->getPixels(_g2);		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(55)
			int _g3 = bitmapData->get_width();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(55)
			int _g4 = bitmapData->get_height();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(55)
			int size = (_g3 * _g4);		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(55)
			int v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(55)
			data->position = (int)0;
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(55)
				while((true)){
					HX_STACK_LINE(55)
					if ((!(((_g5 < size))))){
						HX_STACK_LINE(55)
						break;
					}
					HX_STACK_LINE(55)
					int i = (_g5)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(55)
					int _g51 = data->readInt();		HX_STACK_VAR(_g51,"_g51");
					HX_STACK_LINE(55)
					v = _g51;
					HX_STACK_LINE(55)
					data->position = (int(i) << int((int)2));
					HX_STACK_LINE(55)
					data->writeInt((int((int((int((int(((int(hx::UShr(v,(int)0)) & int((int)255)))) << int((int)8))) | int((int(((int(hx::UShr(v,(int)8)) & int((int)255)))) << int((int)16))))) | int((int(((int(hx::UShr(v,(int)16)) & int((int)255)))) << int((int)24))))) | int((int(hx::UShr(v,(int)24)) & int((int)255)))));
				}
			}
			HX_STACK_LINE(55)
			_g6 = data;
		}
		HX_STACK_LINE(55)
		::openfl::_v2::utils::UInt8Array source = ::openfl::_v2::utils::UInt8Array_obj::__new(_g6,null(),null());		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			::openfl::_v2::gl::GLTexture texture = this->glTexture;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(60)
			::openfl::_v2::gl::GL_obj::lime_gl_bind_texture((int)34067,(  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) ));
		}
		HX_STACK_LINE(62)
		switch( (int)(side)){
			case (int)0: {
				HX_STACK_LINE(66)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(66)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(66)
				::openfl::_v2::utils::ByteArray _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(66)
				if (((source == null()))){
					HX_STACK_LINE(66)
					_g7 = null();
				}
				else{
					HX_STACK_LINE(66)
					_g7 = source->getByteBuffer();
				}
				HX_STACK_LINE(66)
				Dynamic _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(66)
				if (((source == null()))){
					HX_STACK_LINE(66)
					_g8 = null();
				}
				else{
					HX_STACK_LINE(66)
					_g8 = source->getStart();
				}
				HX_STACK_LINE(66)
				::openfl::_v2::gl::GL_obj::lime_gl_tex_image_2d((int)34069,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g7,_g8);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(70)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(70)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(70)
				::openfl::_v2::utils::ByteArray _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(70)
				if (((source == null()))){
					HX_STACK_LINE(70)
					_g9 = null();
				}
				else{
					HX_STACK_LINE(70)
					_g9 = source->getByteBuffer();
				}
				HX_STACK_LINE(70)
				Dynamic _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(70)
				if (((source == null()))){
					HX_STACK_LINE(70)
					_g10 = null();
				}
				else{
					HX_STACK_LINE(70)
					_g10 = source->getStart();
				}
				HX_STACK_LINE(70)
				::openfl::_v2::gl::GL_obj::lime_gl_tex_image_2d((int)34070,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g9,_g10);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(74)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(74)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(74)
				::openfl::_v2::utils::ByteArray _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(74)
				if (((source == null()))){
					HX_STACK_LINE(74)
					_g11 = null();
				}
				else{
					HX_STACK_LINE(74)
					_g11 = source->getByteBuffer();
				}
				HX_STACK_LINE(74)
				Dynamic _g12;		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(74)
				if (((source == null()))){
					HX_STACK_LINE(74)
					_g12 = null();
				}
				else{
					HX_STACK_LINE(74)
					_g12 = source->getStart();
				}
				HX_STACK_LINE(74)
				::openfl::_v2::gl::GL_obj::lime_gl_tex_image_2d((int)34071,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g11,_g12);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(78)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(78)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(78)
				::openfl::_v2::utils::ByteArray _g13;		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(78)
				if (((source == null()))){
					HX_STACK_LINE(78)
					_g13 = null();
				}
				else{
					HX_STACK_LINE(78)
					_g13 = source->getByteBuffer();
				}
				HX_STACK_LINE(78)
				Dynamic _g14;		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(78)
				if (((source == null()))){
					HX_STACK_LINE(78)
					_g14 = null();
				}
				else{
					HX_STACK_LINE(78)
					_g14 = source->getStart();
				}
				HX_STACK_LINE(78)
				::openfl::_v2::gl::GL_obj::lime_gl_tex_image_2d((int)34072,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g13,_g14);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(82)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(82)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(82)
				::openfl::_v2::utils::ByteArray _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(82)
				if (((source == null()))){
					HX_STACK_LINE(82)
					_g15 = null();
				}
				else{
					HX_STACK_LINE(82)
					_g15 = source->getByteBuffer();
				}
				HX_STACK_LINE(82)
				Dynamic _g16;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(82)
				if (((source == null()))){
					HX_STACK_LINE(82)
					_g16 = null();
				}
				else{
					HX_STACK_LINE(82)
					_g16 = source->getStart();
				}
				HX_STACK_LINE(82)
				::openfl::_v2::gl::GL_obj::lime_gl_tex_image_2d((int)34073,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g15,_g16);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(86)
				int width = bitmapData->get_width();		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(86)
				int height = bitmapData->get_height();		HX_STACK_VAR(height,"height");
				HX_STACK_LINE(86)
				::openfl::_v2::utils::ByteArray _g17;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(86)
				if (((source == null()))){
					HX_STACK_LINE(86)
					_g17 = null();
				}
				else{
					HX_STACK_LINE(86)
					_g17 = source->getByteBuffer();
				}
				HX_STACK_LINE(86)
				Dynamic _g18;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(86)
				if (((source == null()))){
					HX_STACK_LINE(86)
					_g18 = null();
				}
				else{
					HX_STACK_LINE(86)
					_g18 = source->getStart();
				}
				HX_STACK_LINE(86)
				::openfl::_v2::gl::GL_obj::lime_gl_tex_image_2d((int)34074,miplevel,(int)6408,width,height,(int)0,(int)6408,(int)5121,_g17,_g18);
			}
			;break;
			default: {
				HX_STACK_LINE(90)
				HX_STACK_DO_THROW(HX_CSTRING("unknown side type"));
			}
		}
		HX_STACK_LINE(94)
		::openfl::_v2::gl::GL_obj::lime_gl_bind_texture((int)34067,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromBitmapData,(void))

Void CubeTexture_obj::uploadFromByteArray( ::openfl::_v2::utils::ByteArray data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
	HX_STACK_FRAME("openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",99,0xffe9b114)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
	HX_STACK_ARG(side,"side")
	HX_STACK_ARG(miplevel,"miplevel")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))


CubeTexture_obj::CubeTexture_obj()
{
}

void CubeTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CubeTexture);
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(_textures,"_textures");
	::openfl::display3D::textures::TextureBase_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CubeTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(_textures,"_textures");
	::openfl::display3D::textures::TextureBase_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CubeTexture_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { return _textures; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"glTextureAt") ) { return glTextureAt_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return uploadFromByteArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return uploadFromBitmapData_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return uploadCompressedTextureFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CubeTexture_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_textures") ) { _textures=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("_textures"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CubeTexture_obj,size),HX_CSTRING("size")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CubeTexture_obj,_textures),HX_CSTRING("_textures")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("size"),
	HX_CSTRING("_textures"),
	HX_CSTRING("glTextureAt"),
	HX_CSTRING("uploadCompressedTextureFromByteArray"),
	HX_CSTRING("uploadFromBitmapData"),
	HX_CSTRING("uploadFromByteArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D.textures.CubeTexture"), hx::TCanCast< CubeTexture_obj> ,sStaticFields,sMemberFields,
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

void CubeTexture_obj::__boot()
{
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
