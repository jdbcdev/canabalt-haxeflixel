#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_FontStyle
#include <openfl/_v2/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_FontType
#include <openfl/_v2/text/FontType.h>
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
namespace openfl{
namespace _v2{
namespace text{

Void Font_obj::__construct(::String __o_filename,::openfl::_v2::text::FontStyle style,::openfl::_v2::text::FontType type)
{
HX_STACK_FRAME("openfl._v2.text.Font","new",0x54e46751,"openfl._v2.text.Font.new","openfl/_v2/text/Font.hx",26,0x89be6ee0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_filename,"filename")
HX_STACK_ARG(style,"style")
HX_STACK_ARG(type,"type")
::String filename = __o_filename.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(26)
	if (((filename == HX_CSTRING("")))){
		HX_STACK_LINE(28)
		::Class fontClass = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(30)
		if ((::Reflect_obj::hasField(fontClass,HX_CSTRING("resourceName")))){
			HX_STACK_LINE(32)
			Dynamic _g = ::Reflect_obj::field(fontClass,HX_CSTRING("resourceName"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			::haxe::io::Bytes _g1 = ::haxe::Resource_obj::getBytes(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(32)
			::openfl::_v2::utils::ByteArray _g2 = ::openfl::_v2::utils::ByteArray_obj::fromBytes(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(32)
			this->__fromBytes(_g2);
		}
		else{
		}
	}
	else{
		HX_STACK_LINE(45)
		this->__fontPath = filename;
		HX_STACK_LINE(46)
		this->fontName = filename;
		HX_STACK_LINE(47)
		if (((style == null()))){
			HX_STACK_LINE(47)
			this->fontStyle = ::openfl::_v2::text::FontStyle_obj::REGULAR;
		}
		else{
			HX_STACK_LINE(47)
			this->fontStyle = style;
		}
		HX_STACK_LINE(48)
		if (((type == null()))){
			HX_STACK_LINE(48)
			this->fontType = ::openfl::_v2::text::FontType_obj::EMBEDDED;
		}
		else{
			HX_STACK_LINE(48)
			this->fontType = type;
		}
	}
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String __o_filename,::openfl::_v2::text::FontStyle style,::openfl::_v2::text::FontType type)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(__o_filename,style,type);
	return result;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > result = new Font_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Font_obj::toString( ){
	HX_STACK_FRAME("openfl._v2.text.Font","toString",0x3e00701b,"openfl._v2.text.Font.toString","openfl/_v2/text/Font.hx",131,0x89be6ee0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	::String _g = ::Std_obj::string(this->fontStyle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(133)
	::String _g1 = (((HX_CSTRING("{ name=") + this->fontName) + HX_CSTRING(", style=")) + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(133)
	::String _g2 = (_g1 + HX_CSTRING(", type="));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(133)
	::String _g3 = ::Std_obj::string(this->fontType);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(133)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(133)
	return (_g4 + HX_CSTRING(" }"));
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,toString,return )

Void Font_obj::__fromBytes( ::openfl::_v2::utils::ByteArray bytes){
{
		HX_STACK_FRAME("openfl._v2.text.Font","__fromBytes",0x0da7ab72,"openfl._v2.text.Font.__fromBytes","openfl/_v2/text/Font.hx",138,0x89be6ee0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(140)
		Dynamic details = ::openfl::_v2::text::Font_obj::loadBytes(bytes);		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(141)
		this->fontName = details->__Field(HX_CSTRING("family_name"),true);
		HX_STACK_LINE(143)
		if (((bool(details->__Field(HX_CSTRING("is_bold"),true)) && bool(details->__Field(HX_CSTRING("is_italic"),true))))){
			HX_STACK_LINE(145)
			this->fontStyle = ::openfl::_v2::text::FontStyle_obj::BOLD_ITALIC;
		}
		else{
			HX_STACK_LINE(147)
			if ((details->__Field(HX_CSTRING("is_bold"),true))){
				HX_STACK_LINE(149)
				this->fontStyle = ::openfl::_v2::text::FontStyle_obj::BOLD;
			}
			else{
				HX_STACK_LINE(151)
				if ((details->__Field(HX_CSTRING("is_italic"),true))){
					HX_STACK_LINE(153)
					this->fontStyle = ::openfl::_v2::text::FontStyle_obj::ITALIC;
				}
				else{
					HX_STACK_LINE(157)
					this->fontStyle = ::openfl::_v2::text::FontStyle_obj::REGULAR;
				}
			}
		}
		HX_STACK_LINE(161)
		this->fontType = ::openfl::_v2::text::FontType_obj::EMBEDDED;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromBytes,(void))

Void Font_obj::__fromFile( ::String path){
{
		HX_STACK_FRAME("openfl._v2.text.Font","__fromFile",0x098ba955,"openfl._v2.text.Font.__fromFile","openfl/_v2/text/Font.hx",166,0x89be6ee0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(168)
		this->__fontPath = path;
		HX_STACK_LINE(170)
		if (((this->__fontPath != null()))){
			HX_STACK_LINE(172)
			Dynamic details = ::openfl::_v2::text::Font_obj::load(this->__fontPath);		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(173)
			this->fontName = details->__Field(HX_CSTRING("family_name"),true);
			HX_STACK_LINE(175)
			if (((bool(details->__Field(HX_CSTRING("is_bold"),true)) && bool(details->__Field(HX_CSTRING("is_italic"),true))))){
				HX_STACK_LINE(177)
				this->fontStyle = ::openfl::_v2::text::FontStyle_obj::BOLD_ITALIC;
			}
			else{
				HX_STACK_LINE(179)
				if ((details->__Field(HX_CSTRING("is_bold"),true))){
					HX_STACK_LINE(181)
					this->fontStyle = ::openfl::_v2::text::FontStyle_obj::BOLD;
				}
				else{
					HX_STACK_LINE(183)
					if ((details->__Field(HX_CSTRING("is_italic"),true))){
						HX_STACK_LINE(185)
						this->fontStyle = ::openfl::_v2::text::FontStyle_obj::ITALIC;
					}
					else{
						HX_STACK_LINE(189)
						this->fontStyle = ::openfl::_v2::text::FontStyle_obj::REGULAR;
					}
				}
			}
			HX_STACK_LINE(193)
			this->fontType = ::openfl::_v2::text::FontType_obj::EMBEDDED;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,__fromFile,(void))

Array< ::Dynamic > Font_obj::__registeredFonts;

Array< ::Dynamic > Font_obj::__deviceFonts;

Array< ::Dynamic > Font_obj::enumerateFonts( hx::Null< bool >  __o_enumerateDeviceFonts){
bool enumerateDeviceFonts = __o_enumerateDeviceFonts.Default(false);
	HX_STACK_FRAME("openfl._v2.text.Font","enumerateFonts",0xe1ada6af,"openfl._v2.text.Font.enumerateFonts","openfl/_v2/text/Font.hx",55,0x89be6ee0)
	HX_STACK_ARG(enumerateDeviceFonts,"enumerateDeviceFonts")
{
		HX_STACK_LINE(57)
		Array< ::Dynamic > result = ::openfl::_v2::text::Font_obj::__registeredFonts->copy();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(59)
		if ((enumerateDeviceFonts)){
			HX_STACK_LINE(61)
			if (((::openfl::_v2::text::Font_obj::__deviceFonts == null()))){
				HX_STACK_LINE(63)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(63)
				::openfl::_v2::text::Font_obj::__deviceFonts = _g;
				HX_STACK_LINE(64)
				Array< ::Dynamic > styles = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::Dynamic >::__new().Add(::openfl::_v2::text::FontStyle_obj::BOLD).Add(::openfl::_v2::text::FontStyle_obj::BOLD_ITALIC).Add(::openfl::_v2::text::FontStyle_obj::ITALIC).Add(::openfl::_v2::text::FontStyle_obj::REGULAR));		HX_STACK_VAR(styles,"styles");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,styles)
				Void run(::String name,int style){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","openfl/_v2/text/Font.hx",65,0x89be6ee0)
					HX_STACK_ARG(name,"name")
					HX_STACK_ARG(style,"style")
					{
						HX_STACK_LINE(65)
						::openfl::_v2::text::Font_obj::__deviceFonts->push(::openfl::_v2::text::Font_obj::__new(name,styles->__get((int)0).StaticCast< Array< ::Dynamic > >()->__get(style).StaticCast< ::openfl::_v2::text::FontStyle >(),::openfl::_v2::text::FontType_obj::DEVICE));
					}
					return null();
				}
				HX_END_LOCAL_FUNC2((void))

				HX_STACK_LINE(65)
				::openfl::_v2::text::Font_obj::lime_font_iterate_device_fonts( Dynamic(new _Function_3_1(styles)));
			}
			HX_STACK_LINE(69)
			Array< ::Dynamic > _g1 = result->concat(::openfl::_v2::text::Font_obj::__deviceFonts);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(69)
			result = _g1;
		}
		HX_STACK_LINE(73)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,enumerateFonts,return )

::openfl::_v2::text::Font Font_obj::fromBytes( ::openfl::_v2::utils::ByteArray bytes){
	HX_STACK_FRAME("openfl._v2.text.Font","fromBytes",0x4bfad452,"openfl._v2.text.Font.fromBytes","openfl/_v2/text/Font.hx",78,0x89be6ee0)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(80)
	::openfl::_v2::text::Font font = ::openfl::_v2::text::Font_obj::__new(null(),null(),null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(81)
	font->__fromBytes(bytes);
	HX_STACK_LINE(82)
	return font;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

::openfl::_v2::text::Font Font_obj::fromFile( ::String path){
	HX_STACK_FRAME("openfl._v2.text.Font","fromFile",0xa7193c75,"openfl._v2.text.Font.fromFile","openfl/_v2/text/Font.hx",87,0x89be6ee0)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(89)
	::openfl::_v2::text::Font font = ::openfl::_v2::text::Font_obj::__new(null(),null(),null());		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(90)
	font->__fromFile(path);
	HX_STACK_LINE(91)
	return font;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

Dynamic Font_obj::load( ::String filename){
	HX_STACK_FRAME("openfl._v2.text.Font","load",0xf1ab1615,"openfl._v2.text.Font.load","openfl/_v2/text/Font.hx",96,0x89be6ee0)
	HX_STACK_ARG(filename,"filename")
	HX_STACK_LINE(98)
	Dynamic result = ::openfl::_v2::text::Font_obj::freetype_import_font(filename,null(),(int)20480,null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(99)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,load,return )

Dynamic Font_obj::loadBytes( ::openfl::_v2::utils::ByteArray bytes){
	HX_STACK_FRAME("openfl._v2.text.Font","loadBytes",0xb2a93616,"openfl._v2.text.Font.loadBytes","openfl/_v2/text/Font.hx",104,0x89be6ee0)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(106)
	Dynamic result = ::openfl::_v2::text::Font_obj::freetype_import_font(HX_CSTRING(""),null(),(int)20480,bytes);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(107)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadBytes,return )

Void Font_obj::registerFont( ::Class font){
{
		HX_STACK_FRAME("openfl._v2.text.Font","registerFont",0x017720c1,"openfl._v2.text.Font.registerFont","openfl/_v2/text/Font.hx",112,0x89be6ee0)
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(114)
		::openfl::_v2::text::Font instance = ::Type_obj::createInstance(font,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(116)
		if (((instance != null()))){
			HX_STACK_LINE(118)
			if ((::Reflect_obj::hasField(font,HX_CSTRING("resourceName")))){
				HX_STACK_LINE(120)
				Dynamic _g = ::Reflect_obj::field(font,HX_CSTRING("resourceName"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				::haxe::io::Bytes _g1 = ::haxe::Resource_obj::getBytes(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(120)
				::openfl::_v2::utils::ByteArray _g2 = ::openfl::_v2::utils::ByteArray_obj::fromBytes(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(120)
				::openfl::_v2::text::Font_obj::lime_font_register_font(instance->fontName,_g2);
			}
			HX_STACK_LINE(124)
			::openfl::_v2::text::Font_obj::__registeredFonts->push(instance);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,registerFont,(void))

Dynamic Font_obj::freetype_import_font;

Dynamic Font_obj::lime_font_register_font;

Dynamic Font_obj::lime_font_iterate_device_fonts;


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	HX_MARK_MEMBER_NAME(fontType,"fontType");
	HX_MARK_MEMBER_NAME(__fontPath,"__fontPath");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	HX_VISIT_MEMBER_NAME(fontType,"fontType");
	HX_VISIT_MEMBER_NAME(__fontPath,"__fontPath");
}

Dynamic Font_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { return fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"fontName") ) { return fontName; }
		if (HX_FIELD_EQ(inName,"fontType") ) { return fontType; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return fontStyle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fontPath") ) { return __fontPath; }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"registerFont") ) { return registerFont_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__deviceFonts") ) { return __deviceFonts; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enumerateFonts") ) { return enumerateFonts_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { return __registeredFonts; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { return freetype_import_font; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_register_font") ) { return lime_font_register_font; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_font_iterate_device_fonts") ) { return lime_font_iterate_device_fonts; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontType") ) { fontType=inValue.Cast< ::openfl::_v2::text::FontType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast< ::openfl::_v2::text::FontStyle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fontPath") ) { __fontPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__deviceFonts") ) { __deviceFonts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { __registeredFonts=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { freetype_import_font=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_register_font") ) { lime_font_register_font=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_font_iterate_device_fonts") ) { lime_font_iterate_device_fonts=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fontName"));
	outFields->push(HX_CSTRING("fontStyle"));
	outFields->push(HX_CSTRING("fontType"));
	outFields->push(HX_CSTRING("__fontPath"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__registeredFonts"),
	HX_CSTRING("__deviceFonts"),
	HX_CSTRING("enumerateFonts"),
	HX_CSTRING("fromBytes"),
	HX_CSTRING("fromFile"),
	HX_CSTRING("load"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("registerFont"),
	HX_CSTRING("freetype_import_font"),
	HX_CSTRING("lime_font_register_font"),
	HX_CSTRING("lime_font_iterate_device_fonts"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Font_obj,fontName),HX_CSTRING("fontName")},
	{hx::fsObject /*::openfl::_v2::text::FontStyle*/ ,(int)offsetof(Font_obj,fontStyle),HX_CSTRING("fontStyle")},
	{hx::fsObject /*::openfl::_v2::text::FontType*/ ,(int)offsetof(Font_obj,fontType),HX_CSTRING("fontType")},
	{hx::fsString,(int)offsetof(Font_obj,__fontPath),HX_CSTRING("__fontPath")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("fontName"),
	HX_CSTRING("fontStyle"),
	HX_CSTRING("fontType"),
	HX_CSTRING("__fontPath"),
	HX_CSTRING("toString"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__fromFile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::__registeredFonts,"__registeredFonts");
	HX_MARK_MEMBER_NAME(Font_obj::__deviceFonts,"__deviceFonts");
	HX_MARK_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_register_font,"lime_font_register_font");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_iterate_device_fonts,"lime_font_iterate_device_fonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::__registeredFonts,"__registeredFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::__deviceFonts,"__deviceFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_register_font,"lime_font_register_font");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_iterate_device_fonts,"lime_font_iterate_device_fonts");
};

#endif

Class Font_obj::__mClass;

void Font_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.text.Font"), hx::TCanCast< Font_obj> ,sStaticFields,sMemberFields,
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

void Font_obj::__boot()
{
	__registeredFonts= Array_obj< ::Dynamic >::__new();
	freetype_import_font= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("freetype_import_font"),(int)4);
	lime_font_register_font= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_register_font"),(int)2);
	lime_font_iterate_device_fonts= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_font_iterate_device_fonts"),(int)1);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace text
