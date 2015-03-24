#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextLineMetrics
#include <openfl/_v2/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_text_AntiAliasType
#include <openfl/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_openfl_text_GridFitType
#include <openfl/text/GridFitType.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
namespace openfl{
namespace _v2{
namespace text{

Void TextField_obj::__construct()
{
HX_STACK_FRAME("openfl._v2.text.TextField","new",0xd2f1812f,"openfl._v2.text.TextField.new","openfl/_v2/text/TextField.hx",48,0xa8dfafe0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(50)
	Dynamic _g = ::openfl::_v2::text::TextField_obj::lime_text_field_create();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	super::__construct(_g,HX_CSTRING("TextField"));
	HX_STACK_LINE(52)
	this->gridFitType = ::openfl::text::GridFitType_obj::PIXEL;
	HX_STACK_LINE(53)
	this->sharpness = (int)0;
	HX_STACK_LINE(54)
	this->set_embedFonts(false);
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > result = new TextField_obj();
	result->__construct();
	return result;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > result = new TextField_obj();
	result->__construct();
	return result;}

Void TextField_obj::appendText( ::String text){
{
		HX_STACK_FRAME("openfl._v2.text.TextField","appendText",0xb44866b8,"openfl._v2.text.TextField.appendText","openfl/_v2/text/TextField.hx",59,0xa8dfafe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(61)
		::String _g = ::openfl::_v2::text::TextField_obj::lime_text_field_get_text(this->__handle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		::String _g1 = (_g + text);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		::openfl::_v2::text::TextField_obj::lime_text_field_set_text(this->__handle,_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

int TextField_obj::getLineOffset( int lineIndex){
	HX_STACK_FRAME("openfl._v2.text.TextField","getLineOffset",0xc7cc586c,"openfl._v2.text.TextField.getLineOffset","openfl/_v2/text/TextField.hx",68,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(68)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_line_offset(this->__handle,lineIndex);
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	HX_STACK_FRAME("openfl._v2.text.TextField","getLineText",0x71187546,"openfl._v2.text.TextField.getLineText","openfl/_v2/text/TextField.hx",75,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(75)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_line_text(this->__handle,lineIndex);
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

::openfl::_v2::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	HX_STACK_FRAME("openfl._v2.text.TextField","getLineMetrics",0x60709f4a,"openfl._v2.text.TextField.getLineMetrics","openfl/_v2/text/TextField.hx",80,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(82)
	::openfl::_v2::text::TextLineMetrics result = ::openfl::_v2::text::TextLineMetrics_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(83)
	::openfl::_v2::text::TextField_obj::lime_text_field_get_line_metrics(this->__handle,lineIndex,result);
	HX_STACK_LINE(84)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

::openfl::_v2::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(-1);
int endIndex = __o_endIndex.Default(-1);
	HX_STACK_FRAME("openfl._v2.text.TextField","getTextFormat",0xc763d589,"openfl._v2.text.TextField.getTextFormat","openfl/_v2/text/TextField.hx",89,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(91)
		::openfl::_v2::text::TextFormat result = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(92)
		::openfl::_v2::text::TextField_obj::lime_text_field_get_text_format(this->__handle,result,beginIndex,endIndex);
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			Array< ::Dynamic > _g1 = ::openfl::_v2::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(94)
			while((true)){
				HX_STACK_LINE(94)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(94)
					break;
				}
				HX_STACK_LINE(94)
				::openfl::_v2::text::Font font = _g1->__get(_g).StaticCast< ::openfl::_v2::text::Font >();		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(94)
				++(_g);
				HX_STACK_LINE(96)
				if (((result->font == font->__fontPath))){
					HX_STACK_LINE(98)
					result->font = font->fontName;
				}
			}
		}
		HX_STACK_LINE(104)
		return result;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::replaceText( int beginIndex,int endIndex,::String newText){
{
		HX_STACK_FRAME("openfl._v2.text.TextField","replaceText",0x229702d0,"openfl._v2.text.TextField.replaceText","openfl/_v2/text/TextField.hx",111,0xa8dfafe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_ARG(newText,"newText")
		HX_STACK_LINE(111)
		::openfl::_v2::Lib_obj::notImplemented(HX_CSTRING("TextField.replaceText"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,replaceText,(void))

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		HX_STACK_FRAME("openfl._v2.text.TextField","setSelection",0xd2cdf59b,"openfl._v2.text.TextField.setSelection","openfl/_v2/text/TextField.hx",118,0xa8dfafe0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
		HX_STACK_LINE(118)
		::openfl::_v2::Lib_obj::notImplemented(HX_CSTRING("TextField.setSelection"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::openfl::_v2::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(-1);
int endIndex = __o_endIndex.Default(-1);
	HX_STACK_FRAME("openfl._v2.text.TextField","setTextFormat",0x0c69b795,"openfl._v2.text.TextField.setTextFormat","openfl/_v2/text/TextField.hx",123,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(125)
		if (((format != null()))){
			HX_STACK_LINE(127)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(127)
			Array< ::Dynamic > _g1 = ::openfl::_v2::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(127)
			while((true)){
				HX_STACK_LINE(127)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(127)
					break;
				}
				HX_STACK_LINE(127)
				::openfl::_v2::text::Font font = _g1->__get(_g).StaticCast< ::openfl::_v2::text::Font >();		HX_STACK_VAR(font,"font");
				HX_STACK_LINE(127)
				++(_g);
				HX_STACK_LINE(129)
				if (((bool((font->__fontPath != null())) && bool((format->font == font->fontName))))){
					HX_STACK_LINE(131)
					format->font = font->__fontPath;
				}
			}
		}
		HX_STACK_LINE(139)
		::openfl::_v2::text::TextField_obj::lime_text_field_set_text_format(this->__handle,format,beginIndex,endIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

::openfl::text::TextFieldAutoSize TextField_obj::get_autoSize( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_autoSize",0x04f6812a,"openfl._v2.text.TextField.get_autoSize","openfl/_v2/text/TextField.hx",151,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	int _g = ::openfl::_v2::text::TextField_obj::lime_text_field_get_auto_size(this->__handle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(151)
	return ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::text::TextFieldAutoSize >(),_g,null());
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_autoSize,return )

::openfl::text::TextFieldAutoSize TextField_obj::set_autoSize( ::openfl::text::TextFieldAutoSize value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_autoSize",0x19efa49e,"openfl._v2.text.TextField.set_autoSize","openfl/_v2/text/TextField.hx",152,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(152)
	int _g = value->__Index();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(152)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_auto_size(this->__handle,_g);
	HX_STACK_LINE(152)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::get_background( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_background",0x09bd0fc8,"openfl._v2.text.TextField.get_background","openfl/_v2/text/TextField.hx",153,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_background(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_background,return )

bool TextField_obj::set_background( bool value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_background",0x29dcf83c,"openfl._v2.text.TextField.set_background","openfl/_v2/text/TextField.hx",154,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(154)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_background(this->__handle,value);
	HX_STACK_LINE(154)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::get_backgroundColor( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_backgroundColor",0xb8769c7b,"openfl._v2.text.TextField.get_backgroundColor","openfl/_v2/text/TextField.hx",155,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(155)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_background_color(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_backgroundColor,return )

int TextField_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_backgroundColor",0xf5138f87,"openfl._v2.text.TextField.set_backgroundColor","openfl/_v2/text/TextField.hx",156,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(156)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_background_color(this->__handle,value);
	HX_STACK_LINE(156)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::get_border( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_border",0xade453c6,"openfl._v2.text.TextField.get_border","openfl/_v2/text/TextField.hx",157,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_border(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_border,return )

bool TextField_obj::set_border( bool value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_border",0xb161f23a,"openfl._v2.text.TextField.set_border","openfl/_v2/text/TextField.hx",158,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(158)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_border(this->__handle,value);
	HX_STACK_LINE(158)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::get_borderColor( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_borderColor",0x1ec21fbd,"openfl._v2.text.TextField.get_borderColor","openfl/_v2/text/TextField.hx",159,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(159)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_border_color(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_borderColor,return )

int TextField_obj::set_borderColor( int value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_borderColor",0x1a8d9cc9,"openfl._v2.text.TextField.set_borderColor","openfl/_v2/text/TextField.hx",160,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(160)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_border_color(this->__handle,value);
	HX_STACK_LINE(160)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_bottomScrollV",0x529fe064,"openfl._v2.text.TextField.get_bottomScrollV","openfl/_v2/text/TextField.hx",161,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_bottom_scroll_v(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

::openfl::_v2::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_defaultTextFormat",0x5aebdb4b,"openfl._v2.text.TextField.get_defaultTextFormat","openfl/_v2/text/TextField.hx",164,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(166)
	::openfl::_v2::text::TextFormat result = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(167)
	::openfl::_v2::text::TextField_obj::lime_text_field_get_def_text_format(this->__handle,result);
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		Array< ::Dynamic > _g1 = ::openfl::_v2::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			::openfl::_v2::text::Font font = _g1->__get(_g).StaticCast< ::openfl::_v2::text::Font >();		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(169)
			++(_g);
			HX_STACK_LINE(171)
			if (((result->font == font->__fontPath))){
				HX_STACK_LINE(173)
				result->font = font->fontName;
			}
		}
	}
	HX_STACK_LINE(179)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::openfl::_v2::text::TextFormat TextField_obj::set_defaultTextFormat( ::openfl::_v2::text::TextFormat value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_defaultTextFormat",0xaef4a957,"openfl._v2.text.TextField.set_defaultTextFormat","openfl/_v2/text/TextField.hx",184,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(186)
	if (((value != null()))){
		HX_STACK_LINE(188)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		Array< ::Dynamic > _g1 = ::openfl::_v2::text::Font_obj::__registeredFonts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(188)
		while((true)){
			HX_STACK_LINE(188)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(188)
				break;
			}
			HX_STACK_LINE(188)
			::openfl::_v2::text::Font font = _g1->__get(_g).StaticCast< ::openfl::_v2::text::Font >();		HX_STACK_VAR(font,"font");
			HX_STACK_LINE(188)
			++(_g);
			HX_STACK_LINE(190)
			if (((bool((font->__fontPath != null())) && bool((value->font == font->fontName))))){
				HX_STACK_LINE(192)
				value->font = font->__fontPath;
			}
		}
	}
	HX_STACK_LINE(200)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_def_text_format(this->__handle,value);
	HX_STACK_LINE(201)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

bool TextField_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_displayAsPassword",0x3aa1de75,"openfl._v2.text.TextField.get_displayAsPassword","openfl/_v2/text/TextField.hx",206,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_display_as_password(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_displayAsPassword,return )

bool TextField_obj::set_displayAsPassword( bool value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_displayAsPassword",0x8eaaac81,"openfl._v2.text.TextField.set_displayAsPassword","openfl/_v2/text/TextField.hx",207,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(207)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_display_as_password(this->__handle,value);
	HX_STACK_LINE(207)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_displayAsPassword,return )

bool TextField_obj::get_embedFonts( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_embedFonts",0x72814305,"openfl._v2.text.TextField.get_embedFonts","openfl/_v2/text/TextField.hx",208,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_embed_fonts(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_embedFonts,return )

bool TextField_obj::set_embedFonts( bool value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_embedFonts",0x92a12b79,"openfl._v2.text.TextField.set_embedFonts","openfl/_v2/text/TextField.hx",209,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(209)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_embed_fonts(this->__handle,value);
	HX_STACK_LINE(209)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_embedFonts,return )

::String TextField_obj::get_htmlText( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_htmlText",0xe5b51112,"openfl._v2.text.TextField.get_htmlText","openfl/_v2/text/TextField.hx",210,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	::String _g = ::openfl::_v2::text::TextField_obj::lime_text_field_get_html_text(this->__handle);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(210)
	return ::StringTools_obj::replace(_g,HX_CSTRING("\n"),HX_CSTRING("<br/>"));
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_htmlText",0xfaae3486,"openfl._v2.text.TextField.set_htmlText","openfl/_v2/text/TextField.hx",211,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(211)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_html_text(this->__handle,value);
	HX_STACK_LINE(211)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_maxChars( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_maxChars",0xc54de0f3,"openfl._v2.text.TextField.get_maxChars","openfl/_v2/text/TextField.hx",212,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(212)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_max_chars(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars( int value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_maxChars",0xda470467,"openfl._v2.text.TextField.set_maxChars","openfl/_v2/text/TextField.hx",213,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(213)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_max_chars(this->__handle,value);
	HX_STACK_LINE(213)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

int TextField_obj::get_maxScrollH( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_maxScrollH",0x7e9c2931,"openfl._v2.text.TextField.get_maxScrollH","openfl/_v2/text/TextField.hx",214,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_max_scroll_h(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_maxScrollV",0x7e9c293f,"openfl._v2.text.TextField.get_maxScrollV","openfl/_v2/text/TextField.hx",215,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_max_scroll_v(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

bool TextField_obj::get_multiline( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_multiline",0x95e81053,"openfl._v2.text.TextField.get_multiline","openfl/_v2/text/TextField.hx",216,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(216)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_multiline(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_multiline,return )

bool TextField_obj::set_multiline( bool value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_multiline",0xdaedf25f,"openfl._v2.text.TextField.set_multiline","openfl/_v2/text/TextField.hx",217,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(217)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_multiline(this->__handle,value);
	HX_STACK_LINE(217)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_multiline,return )

int TextField_obj::get_numLines( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_numLines",0x078ee333,"openfl._v2.text.TextField.get_numLines","openfl/_v2/text/TextField.hx",218,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_num_lines(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

int TextField_obj::get_scrollH( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_scrollH",0x77d42b81,"openfl._v2.text.TextField.get_scrollH","openfl/_v2/text/TextField.hx",219,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_scroll_h(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollH,return )

int TextField_obj::set_scrollH( int value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_scrollH",0x8241328d,"openfl._v2.text.TextField.set_scrollH","openfl/_v2/text/TextField.hx",220,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(220)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_scroll_h(this->__handle,value);
	HX_STACK_LINE(220)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollH,return )

int TextField_obj::get_scrollV( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_scrollV",0x77d42b8f,"openfl._v2.text.TextField.get_scrollV","openfl/_v2/text/TextField.hx",221,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_scroll_v(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollV,return )

int TextField_obj::set_scrollV( int value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_scrollV",0x8241329b,"openfl._v2.text.TextField.set_scrollV","openfl/_v2/text/TextField.hx",222,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(222)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_scroll_v(this->__handle,value);
	HX_STACK_LINE(222)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollV,return )

bool TextField_obj::get_selectable( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_selectable",0xa7ca3270,"openfl._v2.text.TextField.get_selectable","openfl/_v2/text/TextField.hx",223,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_selectable(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectable,return )

bool TextField_obj::set_selectable( bool value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_selectable",0xc7ea1ae4,"openfl._v2.text.TextField.set_selectable","openfl/_v2/text/TextField.hx",224,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(224)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_selectable(this->__handle,value);
	HX_STACK_LINE(224)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

::String TextField_obj::get_text( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_text",0xf4588907,"openfl._v2.text.TextField.get_text","openfl/_v2/text/TextField.hx",225,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_text(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_text",0xa2b5e27b,"openfl._v2.text.TextField.set_text","openfl/_v2/text/TextField.hx",226,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(226)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_text(this->__handle,value);
	HX_STACK_LINE(226)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_textColor",0xdb203edc,"openfl._v2.text.TextField.get_textColor","openfl/_v2/text/TextField.hx",227,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_text_color(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_textColor",0x202620e8,"openfl._v2.text.TextField.set_textColor","openfl/_v2/text/TextField.hx",228,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(228)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_text_color(this->__handle,value);
	HX_STACK_LINE(228)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_textWidth",0x5b26837f,"openfl._v2.text.TextField.get_textWidth","openfl/_v2/text/TextField.hx",229,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_text_width(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_textHeight",0x1cdc044e,"openfl._v2.text.TextField.get_textHeight","openfl/_v2/text/TextField.hx",230,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_text_height(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

::openfl::text::TextFieldType TextField_obj::get_type( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_type",0xf467af14,"openfl._v2.text.TextField.get_type","openfl/_v2/text/TextField.hx",231,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(231)
	if ((::openfl::_v2::text::TextField_obj::lime_text_field_get_type(this->__handle))){
		HX_STACK_LINE(231)
		return ::openfl::text::TextFieldType_obj::INPUT;
	}
	else{
		HX_STACK_LINE(231)
		return ::openfl::text::TextFieldType_obj::DYNAMIC;
	}
	HX_STACK_LINE(231)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_type,return )

::openfl::text::TextFieldType TextField_obj::set_type( ::openfl::text::TextFieldType value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_type",0xa2c50888,"openfl._v2.text.TextField.set_type","openfl/_v2/text/TextField.hx",232,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(232)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_type(this->__handle,(value == ::openfl::text::TextFieldType_obj::INPUT));
	HX_STACK_LINE(232)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

bool TextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("openfl._v2.text.TextField","get_wordWrap",0xd658060e,"openfl._v2.text.TextField.get_wordWrap","openfl/_v2/text/TextField.hx",233,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	return ::openfl::_v2::text::TextField_obj::lime_text_field_get_word_wrap(this->__handle);
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool value){
	HX_STACK_FRAME("openfl._v2.text.TextField","set_wordWrap",0xeb512982,"openfl._v2.text.TextField.set_wordWrap","openfl/_v2/text/TextField.hx",234,0xa8dfafe0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(234)
	::openfl::_v2::text::TextField_obj::lime_text_field_set_word_wrap(this->__handle,value);
	HX_STACK_LINE(234)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

Dynamic TextField_obj::lime_text_field_create;

Dynamic TextField_obj::lime_text_field_get_text;

Dynamic TextField_obj::lime_text_field_set_text;

Dynamic TextField_obj::lime_text_field_get_html_text;

Dynamic TextField_obj::lime_text_field_set_html_text;

Dynamic TextField_obj::lime_text_field_get_text_color;

Dynamic TextField_obj::lime_text_field_set_text_color;

Dynamic TextField_obj::lime_text_field_get_selectable;

Dynamic TextField_obj::lime_text_field_set_selectable;

Dynamic TextField_obj::lime_text_field_get_display_as_password;

Dynamic TextField_obj::lime_text_field_set_display_as_password;

Dynamic TextField_obj::lime_text_field_get_embed_fonts;

Dynamic TextField_obj::lime_text_field_set_embed_fonts;

Dynamic TextField_obj::lime_text_field_get_def_text_format;

Dynamic TextField_obj::lime_text_field_set_def_text_format;

Dynamic TextField_obj::lime_text_field_get_auto_size;

Dynamic TextField_obj::lime_text_field_set_auto_size;

Dynamic TextField_obj::lime_text_field_get_type;

Dynamic TextField_obj::lime_text_field_set_type;

Dynamic TextField_obj::lime_text_field_get_multiline;

Dynamic TextField_obj::lime_text_field_set_multiline;

Dynamic TextField_obj::lime_text_field_get_word_wrap;

Dynamic TextField_obj::lime_text_field_set_word_wrap;

Dynamic TextField_obj::lime_text_field_get_border;

Dynamic TextField_obj::lime_text_field_set_border;

Dynamic TextField_obj::lime_text_field_get_border_color;

Dynamic TextField_obj::lime_text_field_set_border_color;

Dynamic TextField_obj::lime_text_field_get_background;

Dynamic TextField_obj::lime_text_field_set_background;

Dynamic TextField_obj::lime_text_field_get_background_color;

Dynamic TextField_obj::lime_text_field_set_background_color;

Dynamic TextField_obj::lime_text_field_get_text_width;

Dynamic TextField_obj::lime_text_field_get_text_height;

Dynamic TextField_obj::lime_text_field_get_text_format;

Dynamic TextField_obj::lime_text_field_set_text_format;

Dynamic TextField_obj::lime_text_field_get_max_scroll_v;

Dynamic TextField_obj::lime_text_field_get_max_scroll_h;

Dynamic TextField_obj::lime_text_field_get_bottom_scroll_v;

Dynamic TextField_obj::lime_text_field_get_scroll_h;

Dynamic TextField_obj::lime_text_field_set_scroll_h;

Dynamic TextField_obj::lime_text_field_get_scroll_v;

Dynamic TextField_obj::lime_text_field_set_scroll_v;

Dynamic TextField_obj::lime_text_field_get_num_lines;

Dynamic TextField_obj::lime_text_field_get_max_chars;

Dynamic TextField_obj::lime_text_field_set_max_chars;

Dynamic TextField_obj::lime_text_field_get_line_text;

Dynamic TextField_obj::lime_text_field_get_line_metrics;

Dynamic TextField_obj::lime_text_field_get_line_offset;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	HX_MARK_MEMBER_NAME(__embedFonts,"__embedFonts");
	::openfl::_v2::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	HX_VISIT_MEMBER_NAME(__embedFonts,"__embedFonts");
	::openfl::_v2::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { return get_type(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return get_border(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return get_scrollH(); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return get_scrollV(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return get_maxChars(); }
		if (HX_FIELD_EQ(inName,"numLines") ) { return inCallProp ? get_numLines() : numLines; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return get_multiline(); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textColor") ) { return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return inCallProp ? get_textWidth() : textWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return get_background(); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return get_embedFonts(); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return inCallProp ? get_maxScrollH() : maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return inCallProp ? get_maxScrollV() : maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return get_selectable(); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return inCallProp ? get_textHeight() : textHeight; }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_border") ) { return get_border_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return get_borderColor(); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceText") ) { return replaceText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollH") ) { return get_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollH") ) { return set_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return get_scrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return set_scrollV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__embedFonts") ) { return __embedFonts; }
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return inCallProp ? get_bottomScrollV() : bottomScrollV; }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return get_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return set_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return get_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_text_field_create") ) { return lime_text_field_create; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text") ) { return lime_text_field_get_text; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text") ) { return lime_text_field_set_text; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_type") ) { return lime_text_field_get_type; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_type") ) { return lime_text_field_set_type; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_border") ) { return lime_text_field_get_border; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_border") ) { return lime_text_field_set_border; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_scroll_h") ) { return lime_text_field_get_scroll_h; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_scroll_h") ) { return lime_text_field_set_scroll_h; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_scroll_v") ) { return lime_text_field_get_scroll_v; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_scroll_v") ) { return lime_text_field_set_scroll_v; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_html_text") ) { return lime_text_field_get_html_text; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_html_text") ) { return lime_text_field_set_html_text; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_auto_size") ) { return lime_text_field_get_auto_size; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_auto_size") ) { return lime_text_field_set_auto_size; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_multiline") ) { return lime_text_field_get_multiline; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_multiline") ) { return lime_text_field_set_multiline; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_word_wrap") ) { return lime_text_field_get_word_wrap; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_word_wrap") ) { return lime_text_field_set_word_wrap; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_num_lines") ) { return lime_text_field_get_num_lines; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_chars") ) { return lime_text_field_get_max_chars; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_max_chars") ) { return lime_text_field_set_max_chars; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_text") ) { return lime_text_field_get_line_text; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_color") ) { return lime_text_field_get_text_color; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text_color") ) { return lime_text_field_set_text_color; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_selectable") ) { return lime_text_field_get_selectable; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_selectable") ) { return lime_text_field_set_selectable; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_background") ) { return lime_text_field_get_background; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_background") ) { return lime_text_field_set_background; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_width") ) { return lime_text_field_get_text_width; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_embed_fonts") ) { return lime_text_field_get_embed_fonts; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_embed_fonts") ) { return lime_text_field_set_embed_fonts; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_height") ) { return lime_text_field_get_text_height; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_format") ) { return lime_text_field_get_text_format; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text_format") ) { return lime_text_field_set_text_format; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_offset") ) { return lime_text_field_get_line_offset; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_border_color") ) { return lime_text_field_get_border_color; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_border_color") ) { return lime_text_field_set_border_color; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_scroll_v") ) { return lime_text_field_get_max_scroll_v; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_scroll_h") ) { return lime_text_field_get_max_scroll_h; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_metrics") ) { return lime_text_field_get_line_metrics; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_def_text_format") ) { return lime_text_field_get_def_text_format; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_def_text_format") ) { return lime_text_field_set_def_text_format; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_bottom_scroll_v") ) { return lime_text_field_get_bottom_scroll_v; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_background_color") ) { return lime_text_field_get_background_color; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_background_color") ) { return lime_text_field_set_background_color; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_display_as_password") ) { return lime_text_field_get_display_as_password; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_display_as_password") ) { return lime_text_field_set_display_as_password; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { return set_type(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return set_border(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { return set_scrollH(inValue); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { return set_scrollV(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return set_maxChars(inValue); }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { return set_wordWrap(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { return set_textColor(inValue); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { return set_embedFonts(inValue); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { return set_selectable(inValue); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return set_borderColor(inValue); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< ::openfl::text::GridFitType >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__embedFonts") ) { __embedFonts=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< ::openfl::text::AntiAliasType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return set_backgroundColor(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return set_displayAsPassword(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_text_field_create") ) { lime_text_field_create=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text") ) { lime_text_field_get_text=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text") ) { lime_text_field_set_text=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_type") ) { lime_text_field_get_type=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_type") ) { lime_text_field_set_type=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_border") ) { lime_text_field_get_border=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_border") ) { lime_text_field_set_border=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_scroll_h") ) { lime_text_field_get_scroll_h=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_scroll_h") ) { lime_text_field_set_scroll_h=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_scroll_v") ) { lime_text_field_get_scroll_v=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_scroll_v") ) { lime_text_field_set_scroll_v=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_html_text") ) { lime_text_field_get_html_text=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_html_text") ) { lime_text_field_set_html_text=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_auto_size") ) { lime_text_field_get_auto_size=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_auto_size") ) { lime_text_field_set_auto_size=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_multiline") ) { lime_text_field_get_multiline=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_multiline") ) { lime_text_field_set_multiline=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_word_wrap") ) { lime_text_field_get_word_wrap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_word_wrap") ) { lime_text_field_set_word_wrap=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_num_lines") ) { lime_text_field_get_num_lines=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_chars") ) { lime_text_field_get_max_chars=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_max_chars") ) { lime_text_field_set_max_chars=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_text") ) { lime_text_field_get_line_text=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_color") ) { lime_text_field_get_text_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text_color") ) { lime_text_field_set_text_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_selectable") ) { lime_text_field_get_selectable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_selectable") ) { lime_text_field_set_selectable=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_background") ) { lime_text_field_get_background=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_background") ) { lime_text_field_set_background=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_width") ) { lime_text_field_get_text_width=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_embed_fonts") ) { lime_text_field_get_embed_fonts=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_embed_fonts") ) { lime_text_field_set_embed_fonts=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_height") ) { lime_text_field_get_text_height=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_text_format") ) { lime_text_field_get_text_format=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_text_format") ) { lime_text_field_set_text_format=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_offset") ) { lime_text_field_get_line_offset=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_border_color") ) { lime_text_field_get_border_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_border_color") ) { lime_text_field_set_border_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_scroll_v") ) { lime_text_field_get_max_scroll_v=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_max_scroll_h") ) { lime_text_field_get_max_scroll_h=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_line_metrics") ) { lime_text_field_get_line_metrics=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_def_text_format") ) { lime_text_field_get_def_text_format=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_def_text_format") ) { lime_text_field_set_def_text_format=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_get_bottom_scroll_v") ) { lime_text_field_get_bottom_scroll_v=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_background_color") ) { lime_text_field_get_background_color=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_background_color") ) { lime_text_field_set_background_color=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"lime_text_field_get_display_as_password") ) { lime_text_field_get_display_as_password=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_text_field_set_display_as_password") ) { lime_text_field_set_display_as_password=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("antiAliasType"));
	outFields->push(HX_CSTRING("autoSize"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("border"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("bottomScrollV"));
	outFields->push(HX_CSTRING("defaultTextFormat"));
	outFields->push(HX_CSTRING("displayAsPassword"));
	outFields->push(HX_CSTRING("embedFonts"));
	outFields->push(HX_CSTRING("gridFitType"));
	outFields->push(HX_CSTRING("htmlText"));
	outFields->push(HX_CSTRING("maxChars"));
	outFields->push(HX_CSTRING("maxScrollH"));
	outFields->push(HX_CSTRING("maxScrollV"));
	outFields->push(HX_CSTRING("multiline"));
	outFields->push(HX_CSTRING("numLines"));
	outFields->push(HX_CSTRING("scrollH"));
	outFields->push(HX_CSTRING("scrollV"));
	outFields->push(HX_CSTRING("selectable"));
	outFields->push(HX_CSTRING("sharpness"));
	outFields->push(HX_CSTRING("text"));
	outFields->push(HX_CSTRING("textColor"));
	outFields->push(HX_CSTRING("textHeight"));
	outFields->push(HX_CSTRING("textWidth"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("wordWrap"));
	outFields->push(HX_CSTRING("__embedFonts"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_text_field_create"),
	HX_CSTRING("lime_text_field_get_text"),
	HX_CSTRING("lime_text_field_set_text"),
	HX_CSTRING("lime_text_field_get_html_text"),
	HX_CSTRING("lime_text_field_set_html_text"),
	HX_CSTRING("lime_text_field_get_text_color"),
	HX_CSTRING("lime_text_field_set_text_color"),
	HX_CSTRING("lime_text_field_get_selectable"),
	HX_CSTRING("lime_text_field_set_selectable"),
	HX_CSTRING("lime_text_field_get_display_as_password"),
	HX_CSTRING("lime_text_field_set_display_as_password"),
	HX_CSTRING("lime_text_field_get_embed_fonts"),
	HX_CSTRING("lime_text_field_set_embed_fonts"),
	HX_CSTRING("lime_text_field_get_def_text_format"),
	HX_CSTRING("lime_text_field_set_def_text_format"),
	HX_CSTRING("lime_text_field_get_auto_size"),
	HX_CSTRING("lime_text_field_set_auto_size"),
	HX_CSTRING("lime_text_field_get_type"),
	HX_CSTRING("lime_text_field_set_type"),
	HX_CSTRING("lime_text_field_get_multiline"),
	HX_CSTRING("lime_text_field_set_multiline"),
	HX_CSTRING("lime_text_field_get_word_wrap"),
	HX_CSTRING("lime_text_field_set_word_wrap"),
	HX_CSTRING("lime_text_field_get_border"),
	HX_CSTRING("lime_text_field_set_border"),
	HX_CSTRING("lime_text_field_get_border_color"),
	HX_CSTRING("lime_text_field_set_border_color"),
	HX_CSTRING("lime_text_field_get_background"),
	HX_CSTRING("lime_text_field_set_background"),
	HX_CSTRING("lime_text_field_get_background_color"),
	HX_CSTRING("lime_text_field_set_background_color"),
	HX_CSTRING("lime_text_field_get_text_width"),
	HX_CSTRING("lime_text_field_get_text_height"),
	HX_CSTRING("lime_text_field_get_text_format"),
	HX_CSTRING("lime_text_field_set_text_format"),
	HX_CSTRING("lime_text_field_get_max_scroll_v"),
	HX_CSTRING("lime_text_field_get_max_scroll_h"),
	HX_CSTRING("lime_text_field_get_bottom_scroll_v"),
	HX_CSTRING("lime_text_field_get_scroll_h"),
	HX_CSTRING("lime_text_field_set_scroll_h"),
	HX_CSTRING("lime_text_field_get_scroll_v"),
	HX_CSTRING("lime_text_field_set_scroll_v"),
	HX_CSTRING("lime_text_field_get_num_lines"),
	HX_CSTRING("lime_text_field_get_max_chars"),
	HX_CSTRING("lime_text_field_set_max_chars"),
	HX_CSTRING("lime_text_field_get_line_text"),
	HX_CSTRING("lime_text_field_get_line_metrics"),
	HX_CSTRING("lime_text_field_get_line_offset"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::text::AntiAliasType*/ ,(int)offsetof(TextField_obj,antiAliasType),HX_CSTRING("antiAliasType")},
	{hx::fsInt,(int)offsetof(TextField_obj,bottomScrollV),HX_CSTRING("bottomScrollV")},
	{hx::fsObject /*::openfl::text::GridFitType*/ ,(int)offsetof(TextField_obj,gridFitType),HX_CSTRING("gridFitType")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollH),HX_CSTRING("maxScrollH")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollV),HX_CSTRING("maxScrollV")},
	{hx::fsInt,(int)offsetof(TextField_obj,numLines),HX_CSTRING("numLines")},
	{hx::fsFloat,(int)offsetof(TextField_obj,sharpness),HX_CSTRING("sharpness")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textHeight),HX_CSTRING("textHeight")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textWidth),HX_CSTRING("textWidth")},
	{hx::fsBool,(int)offsetof(TextField_obj,__embedFonts),HX_CSTRING("__embedFonts")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("antiAliasType"),
	HX_CSTRING("bottomScrollV"),
	HX_CSTRING("gridFitType"),
	HX_CSTRING("maxScrollH"),
	HX_CSTRING("maxScrollV"),
	HX_CSTRING("numLines"),
	HX_CSTRING("sharpness"),
	HX_CSTRING("textHeight"),
	HX_CSTRING("textWidth"),
	HX_CSTRING("__embedFonts"),
	HX_CSTRING("appendText"),
	HX_CSTRING("getLineOffset"),
	HX_CSTRING("getLineText"),
	HX_CSTRING("getLineMetrics"),
	HX_CSTRING("getTextFormat"),
	HX_CSTRING("replaceText"),
	HX_CSTRING("setSelection"),
	HX_CSTRING("setTextFormat"),
	HX_CSTRING("get_autoSize"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("get_background"),
	HX_CSTRING("set_background"),
	HX_CSTRING("get_backgroundColor"),
	HX_CSTRING("set_backgroundColor"),
	HX_CSTRING("get_border"),
	HX_CSTRING("set_border"),
	HX_CSTRING("get_borderColor"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("get_bottomScrollV"),
	HX_CSTRING("get_defaultTextFormat"),
	HX_CSTRING("set_defaultTextFormat"),
	HX_CSTRING("get_displayAsPassword"),
	HX_CSTRING("set_displayAsPassword"),
	HX_CSTRING("get_embedFonts"),
	HX_CSTRING("set_embedFonts"),
	HX_CSTRING("get_htmlText"),
	HX_CSTRING("set_htmlText"),
	HX_CSTRING("get_maxChars"),
	HX_CSTRING("set_maxChars"),
	HX_CSTRING("get_maxScrollH"),
	HX_CSTRING("get_maxScrollV"),
	HX_CSTRING("get_multiline"),
	HX_CSTRING("set_multiline"),
	HX_CSTRING("get_numLines"),
	HX_CSTRING("get_scrollH"),
	HX_CSTRING("set_scrollH"),
	HX_CSTRING("get_scrollV"),
	HX_CSTRING("set_scrollV"),
	HX_CSTRING("get_selectable"),
	HX_CSTRING("set_selectable"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_textColor"),
	HX_CSTRING("set_textColor"),
	HX_CSTRING("get_textWidth"),
	HX_CSTRING("get_textHeight"),
	HX_CSTRING("get_type"),
	HX_CSTRING("set_type"),
	HX_CSTRING("get_wordWrap"),
	HX_CSTRING("set_wordWrap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_create,"lime_text_field_create");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text,"lime_text_field_get_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_text,"lime_text_field_set_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_html_text,"lime_text_field_get_html_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_html_text,"lime_text_field_set_html_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text_color,"lime_text_field_get_text_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_text_color,"lime_text_field_set_text_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_selectable,"lime_text_field_get_selectable");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_selectable,"lime_text_field_set_selectable");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_display_as_password,"lime_text_field_get_display_as_password");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_display_as_password,"lime_text_field_set_display_as_password");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_embed_fonts,"lime_text_field_get_embed_fonts");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_embed_fonts,"lime_text_field_set_embed_fonts");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_def_text_format,"lime_text_field_get_def_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_def_text_format,"lime_text_field_set_def_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_auto_size,"lime_text_field_get_auto_size");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_auto_size,"lime_text_field_set_auto_size");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_type,"lime_text_field_get_type");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_type,"lime_text_field_set_type");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_multiline,"lime_text_field_get_multiline");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_multiline,"lime_text_field_set_multiline");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_word_wrap,"lime_text_field_get_word_wrap");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_word_wrap,"lime_text_field_set_word_wrap");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_border,"lime_text_field_get_border");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_border,"lime_text_field_set_border");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_border_color,"lime_text_field_get_border_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_border_color,"lime_text_field_set_border_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_background,"lime_text_field_get_background");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_background,"lime_text_field_set_background");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_background_color,"lime_text_field_get_background_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_background_color,"lime_text_field_set_background_color");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text_width,"lime_text_field_get_text_width");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text_height,"lime_text_field_get_text_height");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_text_format,"lime_text_field_get_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_text_format,"lime_text_field_set_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_max_scroll_v,"lime_text_field_get_max_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_max_scroll_h,"lime_text_field_get_max_scroll_h");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_bottom_scroll_v,"lime_text_field_get_bottom_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_scroll_h,"lime_text_field_get_scroll_h");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_scroll_h,"lime_text_field_set_scroll_h");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_scroll_v,"lime_text_field_get_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_scroll_v,"lime_text_field_set_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_num_lines,"lime_text_field_get_num_lines");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_max_chars,"lime_text_field_get_max_chars");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_set_max_chars,"lime_text_field_set_max_chars");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_line_text,"lime_text_field_get_line_text");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_line_metrics,"lime_text_field_get_line_metrics");
	HX_MARK_MEMBER_NAME(TextField_obj::lime_text_field_get_line_offset,"lime_text_field_get_line_offset");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_create,"lime_text_field_create");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text,"lime_text_field_get_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_text,"lime_text_field_set_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_html_text,"lime_text_field_get_html_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_html_text,"lime_text_field_set_html_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text_color,"lime_text_field_get_text_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_text_color,"lime_text_field_set_text_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_selectable,"lime_text_field_get_selectable");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_selectable,"lime_text_field_set_selectable");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_display_as_password,"lime_text_field_get_display_as_password");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_display_as_password,"lime_text_field_set_display_as_password");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_embed_fonts,"lime_text_field_get_embed_fonts");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_embed_fonts,"lime_text_field_set_embed_fonts");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_def_text_format,"lime_text_field_get_def_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_def_text_format,"lime_text_field_set_def_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_auto_size,"lime_text_field_get_auto_size");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_auto_size,"lime_text_field_set_auto_size");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_type,"lime_text_field_get_type");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_type,"lime_text_field_set_type");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_multiline,"lime_text_field_get_multiline");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_multiline,"lime_text_field_set_multiline");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_word_wrap,"lime_text_field_get_word_wrap");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_word_wrap,"lime_text_field_set_word_wrap");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_border,"lime_text_field_get_border");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_border,"lime_text_field_set_border");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_border_color,"lime_text_field_get_border_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_border_color,"lime_text_field_set_border_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_background,"lime_text_field_get_background");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_background,"lime_text_field_set_background");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_background_color,"lime_text_field_get_background_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_background_color,"lime_text_field_set_background_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text_width,"lime_text_field_get_text_width");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text_height,"lime_text_field_get_text_height");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_text_format,"lime_text_field_get_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_text_format,"lime_text_field_set_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_max_scroll_v,"lime_text_field_get_max_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_max_scroll_h,"lime_text_field_get_max_scroll_h");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_bottom_scroll_v,"lime_text_field_get_bottom_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_scroll_h,"lime_text_field_get_scroll_h");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_scroll_h,"lime_text_field_set_scroll_h");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_scroll_v,"lime_text_field_get_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_scroll_v,"lime_text_field_set_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_num_lines,"lime_text_field_get_num_lines");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_max_chars,"lime_text_field_get_max_chars");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_set_max_chars,"lime_text_field_set_max_chars");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_line_text,"lime_text_field_get_line_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_line_metrics,"lime_text_field_get_line_metrics");
	HX_VISIT_MEMBER_NAME(TextField_obj::lime_text_field_get_line_offset,"lime_text_field_get_line_offset");
};

#endif

Class TextField_obj::__mClass;

void TextField_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.text.TextField"), hx::TCanCast< TextField_obj> ,sStaticFields,sMemberFields,
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

void TextField_obj::__boot()
{
	lime_text_field_create= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_create"),(int)0);
	lime_text_field_get_text= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_text"),(int)1);
	lime_text_field_set_text= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_text"),(int)2);
	lime_text_field_get_html_text= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_html_text"),(int)1);
	lime_text_field_set_html_text= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_html_text"),(int)2);
	lime_text_field_get_text_color= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_text_color"),(int)1);
	lime_text_field_set_text_color= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_text_color"),(int)2);
	lime_text_field_get_selectable= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_selectable"),(int)1);
	lime_text_field_set_selectable= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_selectable"),(int)2);
	lime_text_field_get_display_as_password= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_display_as_password"),(int)1);
	lime_text_field_set_display_as_password= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_display_as_password"),(int)2);
	lime_text_field_get_embed_fonts= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_embed_fonts"),(int)1);
	lime_text_field_set_embed_fonts= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_embed_fonts"),(int)2);
	lime_text_field_get_def_text_format= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_def_text_format"),(int)2);
	lime_text_field_set_def_text_format= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_def_text_format"),(int)2);
	lime_text_field_get_auto_size= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_auto_size"),(int)1);
	lime_text_field_set_auto_size= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_auto_size"),(int)2);
	lime_text_field_get_type= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_type"),(int)1);
	lime_text_field_set_type= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_type"),(int)2);
	lime_text_field_get_multiline= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_multiline"),(int)1);
	lime_text_field_set_multiline= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_multiline"),(int)2);
	lime_text_field_get_word_wrap= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_word_wrap"),(int)1);
	lime_text_field_set_word_wrap= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_word_wrap"),(int)2);
	lime_text_field_get_border= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_border"),(int)1);
	lime_text_field_set_border= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_border"),(int)2);
	lime_text_field_get_border_color= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_border_color"),(int)1);
	lime_text_field_set_border_color= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_border_color"),(int)2);
	lime_text_field_get_background= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_background"),(int)1);
	lime_text_field_set_background= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_background"),(int)2);
	lime_text_field_get_background_color= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_background_color"),(int)1);
	lime_text_field_set_background_color= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_background_color"),(int)2);
	lime_text_field_get_text_width= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_text_width"),(int)1);
	lime_text_field_get_text_height= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_text_height"),(int)1);
	lime_text_field_get_text_format= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_text_format"),(int)4);
	lime_text_field_set_text_format= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_text_format"),(int)4);
	lime_text_field_get_max_scroll_v= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_max_scroll_v"),(int)1);
	lime_text_field_get_max_scroll_h= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_max_scroll_h"),(int)1);
	lime_text_field_get_bottom_scroll_v= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_bottom_scroll_v"),(int)1);
	lime_text_field_get_scroll_h= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_scroll_h"),(int)1);
	lime_text_field_set_scroll_h= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_scroll_h"),(int)2);
	lime_text_field_get_scroll_v= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_scroll_v"),(int)1);
	lime_text_field_set_scroll_v= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_scroll_v"),(int)2);
	lime_text_field_get_num_lines= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_num_lines"),(int)1);
	lime_text_field_get_max_chars= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_max_chars"),(int)1);
	lime_text_field_set_max_chars= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_set_max_chars"),(int)2);
	lime_text_field_get_line_text= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_line_text"),(int)2);
	lime_text_field_get_line_metrics= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_line_metrics"),(int)3);
	lime_text_field_get_line_offset= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_text_field_get_line_offset"),(int)2);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace text
