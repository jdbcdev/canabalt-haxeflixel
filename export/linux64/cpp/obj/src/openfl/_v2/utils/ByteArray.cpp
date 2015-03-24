#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_CompressionAlgorithm
#include <openfl/_v2/utils/CompressionAlgorithm.h>
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
#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace openfl{
namespace _v2{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_size)
{
HX_STACK_FRAME("openfl._v2.utils.ByteArray","new",0xf4143215,"openfl._v2.utils.ByteArray.new","openfl/_v2/utils/ByteArray.hx",40,0x400ac17e)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_size,"size")
int size = __o_size.Default(0);
{
	HX_STACK_LINE(42)
	this->bigEndian = true;
	HX_STACK_LINE(43)
	this->position = (int)0;
	HX_STACK_LINE(45)
	if (((size >= (int)0))){
		HX_STACK_LINE(59)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(61)
		if (((size > (int)0))){
			HX_STACK_LINE(63)
			data[(size - (int)1)] = (int)0;
		}
		HX_STACK_LINE(67)
		super::__construct(size,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_size)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(__o_size);
	return result;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > result = new ByteArray_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::_v2::utils::IMemoryRange_obj)) return operator ::openfl::_v2::utils::IMemoryRange_obj *();
	if (inType==typeid( ::openfl::_v2::utils::IDataOutput_obj)) return operator ::openfl::_v2::utils::IDataOutput_obj *();
	if (inType==typeid( ::openfl::_v2::utils::IDataInput_obj)) return operator ::openfl::_v2::utils::IDataInput_obj *();
	return super::__ToInterface(inType);
}

void ByteArray_obj::__init__() {
HX_STACK_FRAME("openfl._v2.utils.ByteArray","__init__",0xb0542b7b,"openfl._v2.utils.ByteArray.__init__","openfl/_v2/utils/ByteArray.hx",739,0x400ac17e)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	::openfl::_v2::utils::ByteArray run(int length){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_v2/utils/ByteArray.hx",741,0x400ac17e)
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(741)
			return ::openfl::_v2::utils::ByteArray_obj::__new(length);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(741)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Void run(::openfl::_v2::utils::ByteArray bytes,int length){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","openfl/_v2/utils/ByteArray.hx",742,0x400ac17e)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(length,"length")
		{
			HX_STACK_LINE(744)
			if (((length > (int)0))){
				HX_STACK_LINE(746)
				bytes->__Field(HX_CSTRING("ensureElem"),true)((length - (int)1),true);
			}
			HX_STACK_LINE(750)
			bytes->__FieldRef(HX_CSTRING("length")) = length;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(742)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	Array< unsigned char > run(::openfl::_v2::utils::ByteArray bytes){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","openfl/_v2/utils/ByteArray.hx",754,0x400ac17e)
		HX_STACK_ARG(bytes,"bytes")
		{
			HX_STACK_LINE(754)
			if (((bytes == null()))){
				HX_STACK_LINE(754)
				return null();
			}
			else{
				HX_STACK_LINE(754)
				return bytes->__Field(HX_CSTRING("b"),true);
			}
			HX_STACK_LINE(754)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(754)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int run(::openfl::_v2::utils::ByteArray bytes1){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","openfl/_v2/utils/ByteArray.hx",755,0x400ac17e)
		HX_STACK_ARG(bytes1,"bytes1")
		{
			HX_STACK_LINE(755)
			if (((bytes1 == null()))){
				HX_STACK_LINE(755)
				return (int)0;
			}
			else{
				HX_STACK_LINE(755)
				return bytes1->__Field(HX_CSTRING("length"),true);
			}
			HX_STACK_LINE(755)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(755)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(757)
	Dynamic init = ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_init"),(int)4);		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(758)
	init(factory,slen,resize,bytes);
}
}

::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","asString",0x10de818e,"openfl._v2.utils.ByteArray.asString","openfl/_v2/utils/ByteArray.hx",78,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return this->readUTFBytes(this->length);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int length){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","checkData",0xe2af3687,"openfl._v2.utils.ByteArray.checkData","openfl/_v2/utils/ByteArray.hx",85,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(85)
		if ((((length + this->position) > this->length))){
			HX_STACK_LINE(87)
			this->__throwEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","clear",0xf63f6a82,"openfl._v2.utils.ByteArray.clear","openfl/_v2/utils/ByteArray.hx",94,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->position = (int)0;
		HX_STACK_LINE(97)
		this->length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::openfl::_v2::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","compress",0xf49795cd,"openfl._v2.utils.ByteArray.compress","openfl/_v2/utils/ByteArray.hx",102,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(107)
		::openfl::_v2::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(110)
		if (((algorithm == null()))){
			HX_STACK_LINE(112)
			algorithm = ::openfl::_v2::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(116)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(118)
		if (((algorithm == ::openfl::_v2::utils::CompressionAlgorithm_obj::LZMA))){
			HX_STACK_LINE(120)
			Array< unsigned char > _g = ::openfl::_v2::utils::ByteArray_obj::lime_lzma_encode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			result = _g1;
		}
		else{
			HX_STACK_LINE(124)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(124)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(126)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(127)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(128)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(135)
			::haxe::io::Bytes _g2 = ::haxe::zip::Compress_obj::run(src,(int)8);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(135)
			result = _g2;
		}
		HX_STACK_LINE(140)
		this->b = result->b;
		HX_STACK_LINE(141)
		this->length = result->length;
		HX_STACK_LINE(142)
		this->position = this->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","deflate",0x8c85eba0,"openfl._v2.utils.ByteArray.deflate","openfl/_v2/utils/ByteArray.hx",152,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(152)
		this->compress(::openfl::_v2::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::ensureElem( int size,bool updateLength){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","ensureElem",0xb0532058,"openfl._v2.utils.ByteArray.ensureElem","openfl/_v2/utils/ByteArray.hx",157,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(updateLength,"updateLength")
		HX_STACK_LINE(158)
		int len = (size + (int)1);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(170)
		if (((this->b->length < len))){
			HX_STACK_LINE(172)
			this->b->__SetSize(len);
		}
		HX_STACK_LINE(177)
		if (((bool(updateLength) && bool((this->length < len))))){
			HX_STACK_LINE(179)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

::openfl::_v2::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","getByteBuffer",0x8cb11853,"openfl._v2.utils.ByteArray.getByteBuffer","openfl/_v2/utils/ByteArray.hx",197,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(197)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","getLength",0x67ca3591,"openfl._v2.utils.ByteArray.getLength","openfl/_v2/utils/ByteArray.hx",204,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

Dynamic ByteArray_obj::getNativePointer( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","getNativePointer",0x7fb62a9b,"openfl._v2.utils.ByteArray.getNativePointer","openfl/_v2/utils/ByteArray.hx",211,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(211)
	return ::openfl::_v2::utils::ByteArray_obj::lime_byte_array_get_native_pointer(hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getNativePointer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","getStart",0x54bad217,"openfl._v2.utils.ByteArray.getStart","openfl/_v2/utils/ByteArray.hx",218,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","inflate",0xf5a77cbc,"openfl._v2.utils.ByteArray.inflate","openfl/_v2/utils/ByteArray.hx",225,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(225)
		this->uncompress(::openfl::_v2::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readBoolean",0x22231ca7,"openfl._v2.utils.ByteArray.readBoolean","openfl/_v2/utils/ByteArray.hx",232,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	if (((this->position < this->length))){
		HX_STACK_LINE(232)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(232)
			_g = this->b->__get(pos);
		}
		HX_STACK_LINE(232)
		return (_g != (int)0);
	}
	else{
		HX_STACK_LINE(232)
		int _g1 = this->__throwEOFi();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		return (_g1 != (int)0);
	}
	HX_STACK_LINE(232)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readByte",0xd9f347a9,"openfl._v2.utils.ByteArray.readByte","openfl/_v2/utils/ByteArray.hx",237,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(239)
	if (((this->position < this->length))){
		HX_STACK_LINE(239)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(239)
		value = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(239)
		value = this->__throwEOFi();
	}
	HX_STACK_LINE(240)
	if (((((int(value) & int((int)128))) != (int)0))){
		HX_STACK_LINE(240)
		return (value - (int)256);
	}
	else{
		HX_STACK_LINE(240)
		return value;
	}
	HX_STACK_LINE(240)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::openfl::_v2::utils::ByteArray data,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readBytes",0xdaeb6caa,"openfl._v2.utils.ByteArray.readBytes","openfl/_v2/utils/ByteArray.hx",245,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(247)
		if (((length == (int)0))){
			HX_STACK_LINE(249)
			length = (this->length - this->position);
		}
		HX_STACK_LINE(253)
		if ((((this->position + length) > this->length))){
			HX_STACK_LINE(255)
			this->__throwEOFi();
		}
		HX_STACK_LINE(259)
		if (((data->length < (offset + length)))){
			HX_STACK_LINE(261)
			data->ensureElem(((offset + length) - (int)1),true);
		}
		HX_STACK_LINE(268)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(269)
		Array< unsigned char > b2 = data->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(270)
		int p = this->position;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(271)
		{
			HX_STACK_LINE(271)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(271)
			while((true)){
				HX_STACK_LINE(271)
				if ((!(((_g < length))))){
					HX_STACK_LINE(271)
					break;
				}
				HX_STACK_LINE(271)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(273)
				b2[(offset + i)] = b1->__get((p + i));
			}
		}
		HX_STACK_LINE(278)
		hx::AddEq(this->position,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readDouble",0xbe6f7df2,"openfl._v2.utils.ByteArray.readDouble","openfl/_v2/utils/ByteArray.hx",283,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	if ((((this->position + (int)8) > this->length))){
		HX_STACK_LINE(287)
		this->__throwEOFi();
	}
	HX_STACK_LINE(294)
	Array< unsigned char > _g = this->b->slice(this->position,(this->position + (int)8));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(294)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)8,_g);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(303)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(304)
	return ::openfl::_v2::utils::ByteArray_obj::_double_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readFloat",0x1fea29db,"openfl._v2.utils.ByteArray.readFloat","openfl/_v2/utils/ByteArray.hx",320,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	if ((((this->position + (int)4) > this->length))){
		HX_STACK_LINE(324)
		this->__throwEOFi();
	}
	HX_STACK_LINE(331)
	Array< unsigned char > _g = this->b->slice(this->position,(this->position + (int)4));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(331)
	::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::__new((int)4,_g);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(340)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(341)
	return ::openfl::_v2::utils::ByteArray_obj::_float_of_bytes(bytes->b,this->bigEndian);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readInt",0xec55936e,"openfl._v2.utils.ByteArray.readInt","openfl/_v2/utils/ByteArray.hx",346,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(348)
	if (((this->position < this->length))){
		HX_STACK_LINE(348)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(348)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(348)
		ch1 = this->__throwEOFi();
	}
	HX_STACK_LINE(349)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(349)
	if (((this->position < this->length))){
		HX_STACK_LINE(349)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(349)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(349)
		ch2 = this->__throwEOFi();
	}
	HX_STACK_LINE(350)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(350)
	if (((this->position < this->length))){
		HX_STACK_LINE(350)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(350)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(350)
		ch3 = this->__throwEOFi();
	}
	HX_STACK_LINE(351)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(351)
	if (((this->position < this->length))){
		HX_STACK_LINE(351)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(351)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(351)
		ch4 = this->__throwEOFi();
	}
	HX_STACK_LINE(353)
	if ((this->bigEndian)){
		HX_STACK_LINE(353)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	else{
		HX_STACK_LINE(353)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	HX_STACK_LINE(353)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int length,::String charSet){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readMultiByte",0x9d6ef5e0,"openfl._v2.utils.ByteArray.readMultiByte","openfl/_v2/utils/ByteArray.hx",360,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(360)
	return this->readUTFBytes(length);
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

Void ByteArray_obj::writeMultiByte( ::String value,::String charSet){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeMultiByte",0x154725ad,"openfl._v2.utils.ByteArray.writeMultiByte","openfl/_v2/utils/ByteArray.hx",365,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(charSet,"charSet")
		HX_STACK_LINE(365)
		this->writeUTFBytes(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,writeMultiByte,(void))

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readShort",0x997ae8bb,"openfl._v2.utils.ByteArray.readShort","openfl/_v2/utils/ByteArray.hx",368,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(370)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(370)
	if (((this->position < this->length))){
		HX_STACK_LINE(370)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(370)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(370)
		ch1 = this->__throwEOFi();
	}
	HX_STACK_LINE(371)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(371)
	if (((this->position < this->length))){
		HX_STACK_LINE(371)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(371)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(371)
		ch2 = this->__throwEOFi();
	}
	HX_STACK_LINE(373)
	int value;		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(373)
	if ((this->bigEndian)){
		HX_STACK_LINE(373)
		value = (int((int(ch1) << int((int)8))) | int(ch2));
	}
	else{
		HX_STACK_LINE(373)
		value = (int((int(ch2) << int((int)8))) | int(ch1));
	}
	HX_STACK_LINE(375)
	if (((((int(value) & int((int)32768))) != (int)0))){
		HX_STACK_LINE(375)
		return (value - (int)65536);
	}
	else{
		HX_STACK_LINE(375)
		return value;
	}
	HX_STACK_LINE(375)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readUnsignedByte",0xa130fc3e,"openfl._v2.utils.ByteArray.readUnsignedByte","openfl/_v2/utils/ByteArray.hx",382,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(382)
	if (((this->position < this->length))){
		HX_STACK_LINE(382)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(382)
		return this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(382)
		return this->__throwEOFi();
	}
	HX_STACK_LINE(382)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readUnsignedInt",0xd9b64879,"openfl._v2.utils.ByteArray.readUnsignedInt","openfl/_v2/utils/ByteArray.hx",387,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(389)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(389)
	if (((this->position < this->length))){
		HX_STACK_LINE(389)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(389)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(389)
		ch1 = this->__throwEOFi();
	}
	HX_STACK_LINE(390)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(390)
	if (((this->position < this->length))){
		HX_STACK_LINE(390)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(390)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(390)
		ch2 = this->__throwEOFi();
	}
	HX_STACK_LINE(391)
	int ch3;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(391)
	if (((this->position < this->length))){
		HX_STACK_LINE(391)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(391)
		ch3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(391)
		ch3 = this->__throwEOFi();
	}
	HX_STACK_LINE(392)
	int ch4;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(392)
	if (((this->position < this->length))){
		HX_STACK_LINE(392)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(392)
		ch4 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(392)
		ch4 = this->__throwEOFi();
	}
	HX_STACK_LINE(394)
	if ((this->bigEndian)){
		HX_STACK_LINE(394)
		return (int((int((int((int(ch1) << int((int)24))) | int((int(ch2) << int((int)16))))) | int((int(ch3) << int((int)8))))) | int(ch4));
	}
	else{
		HX_STACK_LINE(394)
		return (int((int((int((int(ch4) << int((int)24))) | int((int(ch3) << int((int)16))))) | int((int(ch2) << int((int)8))))) | int(ch1));
	}
	HX_STACK_LINE(394)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readUnsignedShort",0x283b3686,"openfl._v2.utils.ByteArray.readUnsignedShort","openfl/_v2/utils/ByteArray.hx",399,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(401)
	int ch1;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(401)
	if (((this->position < this->length))){
		HX_STACK_LINE(401)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(401)
		ch1 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(401)
		ch1 = this->__throwEOFi();
	}
	HX_STACK_LINE(402)
	int ch2;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(402)
	if (((this->position < this->length))){
		HX_STACK_LINE(402)
		int pos = (this->position)++;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(402)
		ch2 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(402)
		ch2 = this->__throwEOFi();
	}
	HX_STACK_LINE(404)
	if ((this->bigEndian)){
		HX_STACK_LINE(404)
		return (int((int(ch1) << int((int)8))) | int(ch2));
	}
	else{
		HX_STACK_LINE(404)
		return (((int(ch2) << int((int)8))) + ch1);
	}
	HX_STACK_LINE(404)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readUTF",0xec5e97a6,"openfl._v2.utils.ByteArray.readUTF","openfl/_v2/utils/ByteArray.hx",409,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(411)
	int len = this->readUnsignedShort();		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(412)
	return this->readUTFBytes(len);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int length){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readUTFBytes",0x126166e5,"openfl._v2.utils.ByteArray.readUTFBytes","openfl/_v2/utils/ByteArray.hx",417,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(419)
	if ((((this->position + length) > this->length))){
		HX_STACK_LINE(421)
		this->__throwEOFi();
	}
	HX_STACK_LINE(425)
	int p = this->position;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(426)
	hx::AddEq(this->position,length);
	HX_STACK_LINE(435)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(436)
	::__hxcpp_string_of_bytes(this->b,result,p,length);
	HX_STACK_LINE(437)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::setLength( int length){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","setLength",0x4b1b219d,"openfl._v2.utils.ByteArray.setLength","openfl/_v2/utils/ByteArray.hx",447,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(length,"length")
		HX_STACK_LINE(449)
		if (((length > (int)0))){
			HX_STACK_LINE(451)
			this->ensureElem((length - (int)1),false);
		}
		HX_STACK_LINE(455)
		this->length = length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::openfl::_v2::utils::ByteArray ByteArray_obj::slice( int begin,Dynamic end){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","slice",0x2cabbd47,"openfl._v2.utils.ByteArray.slice","openfl/_v2/utils/ByteArray.hx",460,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(begin,"begin")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(462)
	if (((begin < (int)0))){
		HX_STACK_LINE(464)
		hx::AddEq(begin,this->length);
		HX_STACK_LINE(466)
		if (((begin < (int)0))){
			HX_STACK_LINE(468)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(474)
	if (((end == null()))){
		HX_STACK_LINE(476)
		end = this->length;
	}
	HX_STACK_LINE(480)
	if (((end < (int)0))){
		HX_STACK_LINE(482)
		hx::AddEq(end,this->length);
		HX_STACK_LINE(484)
		if (((end < (int)0))){
			HX_STACK_LINE(486)
			end = (int)0;
		}
	}
	HX_STACK_LINE(492)
	if (((begin >= end))){
		HX_STACK_LINE(494)
		return ::openfl::_v2::utils::ByteArray_obj::__new(null());
	}
	HX_STACK_LINE(498)
	::openfl::_v2::utils::ByteArray result = ::openfl::_v2::utils::ByteArray_obj::__new((end - begin));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(500)
	int opos = this->position;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(501)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),begin,(end - begin));
	HX_STACK_LINE(503)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

Void ByteArray_obj::uncompress( ::openfl::_v2::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","uncompress",0x9bab9de6,"openfl._v2.utils.ByteArray.uncompress","openfl/_v2/utils/ByteArray.hx",508,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(510)
		if (((algorithm == null()))){
			HX_STACK_LINE(510)
			algorithm = ::openfl::_v2::utils::CompressionAlgorithm_obj::ZLIB;
		}
		HX_STACK_LINE(515)
		::openfl::_v2::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(518)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(520)
		if (((algorithm == ::openfl::_v2::utils::CompressionAlgorithm_obj::LZMA))){
			HX_STACK_LINE(522)
			Array< unsigned char > _g = ::openfl::_v2::utils::ByteArray_obj::lime_lzma_decode(src->b);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(522)
			::haxe::io::Bytes _g1 = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(522)
			result = _g1;
		}
		else{
			HX_STACK_LINE(526)
			int windowBits;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(526)
			switch( (int)(algorithm->__Index())){
				case (int)0: {
					HX_STACK_LINE(528)
					windowBits = (int)-15;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(529)
					windowBits = (int)31;
				}
				;break;
				default: {
					HX_STACK_LINE(530)
					windowBits = (int)15;
				}
			}
			HX_STACK_LINE(537)
			::haxe::io::Bytes _g2 = ::haxe::zip::Uncompress_obj::run(src,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(537)
			result = _g2;
		}
		HX_STACK_LINE(542)
		this->b = result->b;
		HX_STACK_LINE(543)
		this->length = result->length;
		HX_STACK_LINE(544)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::write_uncheck( int byte){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","write_uncheck",0xed954324,"openfl._v2.utils.ByteArray.write_uncheck","openfl/_v2/utils/ByteArray.hx",552,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(byte,"byte")
		HX_STACK_LINE(555)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(555)
		this->b->__unsafe_set(_g,byte);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeBoolean",0x037fcf34,"openfl._v2.utils.ByteArray.writeBoolean","openfl/_v2/utils/ByteArray.hx",567,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(567)
		this->ensureElem(this->position,true);
		HX_STACK_LINE(567)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(567)
		if ((value)){
			HX_STACK_LINE(567)
			this->b[_g] = (int)1;
		}
		else{
			HX_STACK_LINE(567)
			this->b[_g] = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeObject( Dynamic object){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeObject",0xfb716fb3,"openfl._v2.utils.ByteArray.writeObject","openfl/_v2/utils/ByteArray.hx",570,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeObject,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeByte",0x96432afc,"openfl._v2.utils.ByteArray.writeByte","openfl/_v2/utils/ByteArray.hx",575,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(577)
		this->ensureElem(this->position,true);
		HX_STACK_LINE(582)
		int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(582)
		this->b[_g] = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset,hx::Null< int >  __o_length){
int offset = __o_offset.Default(0);
int length = __o_length.Default(0);
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeBytes",0xe48271f7,"openfl._v2.utils.ByteArray.writeBytes","openfl/_v2/utils/ByteArray.hx",590,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(offset,"offset")
	HX_STACK_ARG(length,"length")
{
		HX_STACK_LINE(592)
		if (((length == (int)0))){
			HX_STACK_LINE(592)
			length = (bytes->length - offset);
		}
		HX_STACK_LINE(593)
		this->ensureElem(((this->position + length) - (int)1),true);
		HX_STACK_LINE(594)
		int opos = this->position;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(595)
		hx::AddEq(this->position,length);
		HX_STACK_LINE(596)
		this->blit(opos,bytes,offset,length);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeDouble",0x18fd1c05,"openfl._v2.utils.ByteArray.writeDouble","openfl/_v2/utils/ByteArray.hx",601,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(606)
		Array< unsigned char > _g = ::openfl::_v2::utils::ByteArray_obj::_double_bytes(x,this->bigEndian);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(606)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(609)
		this->writeBytes(bytes,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFile( ::String path){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeFile",0x98dbda70,"openfl._v2.utils.ByteArray.writeFile","openfl/_v2/utils/ByteArray.hx",618,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(618)
		::openfl::_v2::utils::ByteArray_obj::lime_byte_array_overwrite_file(path,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeFloat",0x29812f28,"openfl._v2.utils.ByteArray.writeFloat","openfl/_v2/utils/ByteArray.hx",625,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(628)
		Array< unsigned char > _g = ::openfl::_v2::utils::ByteArray_obj::_float_bytes(x,this->bigEndian);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(628)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofData(_g);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(633)
		this->writeBytes(bytes,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeInt",0x94c8bb7b,"openfl._v2.utils.ByteArray.writeInt","openfl/_v2/utils/ByteArray.hx",638,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(640)
		this->ensureElem((this->position + (int)3),true);
		HX_STACK_LINE(642)
		if ((this->bigEndian)){
			HX_STACK_LINE(644)
			{
				HX_STACK_LINE(644)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(644)
				this->b->__unsafe_set(_g,(int(value) >> int((int)24)));
			}
			HX_STACK_LINE(645)
			{
				HX_STACK_LINE(645)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(645)
				this->b->__unsafe_set(_g1,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(646)
			{
				HX_STACK_LINE(646)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(646)
				this->b->__unsafe_set(_g2,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(647)
			{
				HX_STACK_LINE(647)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(647)
				this->b->__unsafe_set(_g3,value);
			}
		}
		else{
			HX_STACK_LINE(651)
			{
				HX_STACK_LINE(651)
				int _g4 = (this->position)++;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(651)
				this->b->__unsafe_set(_g4,value);
			}
			HX_STACK_LINE(652)
			{
				HX_STACK_LINE(652)
				int _g5 = (this->position)++;		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(652)
				this->b->__unsafe_set(_g5,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(653)
			{
				HX_STACK_LINE(653)
				int _g6 = (this->position)++;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(653)
				this->b->__unsafe_set(_g6,(int(value) >> int((int)16)));
			}
			HX_STACK_LINE(654)
			{
				HX_STACK_LINE(654)
				int _g7 = (this->position)++;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(654)
				this->b->__unsafe_set(_g7,(int(value) >> int((int)24)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeShort",0xa311ee08,"openfl._v2.utils.ByteArray.writeShort","openfl/_v2/utils/ByteArray.hx",661,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(663)
		this->ensureElem((this->position + (int)1),true);
		HX_STACK_LINE(665)
		if ((this->bigEndian)){
			HX_STACK_LINE(667)
			{
				HX_STACK_LINE(667)
				int _g = (this->position)++;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(667)
				this->b->__unsafe_set(_g,(int(value) >> int((int)8)));
			}
			HX_STACK_LINE(668)
			{
				HX_STACK_LINE(668)
				int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(668)
				this->b->__unsafe_set(_g1,value);
			}
		}
		else{
			HX_STACK_LINE(672)
			{
				HX_STACK_LINE(672)
				int _g2 = (this->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(672)
				this->b->__unsafe_set(_g2,value);
			}
			HX_STACK_LINE(673)
			{
				HX_STACK_LINE(673)
				int _g3 = (this->position)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(673)
				this->b->__unsafe_set(_g3,(int(value) >> int((int)8)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeUnsignedInt",0x1bd3c586,"openfl._v2.utils.ByteArray.writeUnsignedInt","openfl/_v2/utils/ByteArray.hx",682,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(682)
		this->writeInt(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUTF( ::String s){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeUTF",0x94d1bfb3,"openfl._v2.utils.ByteArray.writeUTF","openfl/_v2/utils/ByteArray.hx",687,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(692)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(695)
		this->writeShort(bytes->length);
		HX_STACK_LINE(696)
		this->writeBytes(bytes,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String s){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","writeUTFBytes",0x6220efb8,"openfl._v2.utils.ByteArray.writeUTFBytes","openfl/_v2/utils/ByteArray.hx",701,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(706)
		::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(709)
		this->writeBytes(bytes,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

Void ByteArray_obj::__fromBytes( ::haxe::io::Bytes bytes){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","__fromBytes",0xf185da36,"openfl._v2.utils.ByteArray.__fromBytes","openfl/_v2/utils/ByteArray.hx",714,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(716)
		this->b = bytes->b;
		HX_STACK_LINE(717)
		this->length = bytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__fromBytes,(void))

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","__get",0xa00eda6b,"openfl._v2.utils.ByteArray.__get","openfl/_v2/utils/ByteArray.hx",729,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(729)
	return this->b->__get(pos);
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("openfl._v2.utils.ByteArray","__set",0xa017f577,"openfl._v2.utils.ByteArray.__set","openfl/_v2/utils/ByteArray.hx",768,0x400ac17e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(768)
		this->b[pos] = v;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

int ByteArray_obj::__throwEOFi( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","__throwEOFi",0xe9f9b808,"openfl._v2.utils.ByteArray.__throwEOFi","openfl/_v2/utils/ByteArray.hx",776,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(778)
	HX_STACK_DO_THROW(::openfl::errors::EOFError_obj::__new());
	HX_STACK_LINE(779)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,__throwEOFi,return )

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","get_bytesAvailable",0x9018fe92,"openfl._v2.utils.ByteArray.get_bytesAvailable","openfl/_v2/utils/ByteArray.hx",791,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(791)
	return (this->length - this->position);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","get_byteLength",0x162366c2,"openfl._v2.utils.ByteArray.get_byteLength","openfl/_v2/utils/ByteArray.hx",792,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(792)
	return this->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","get_endian",0x7d38774f,"openfl._v2.utils.ByteArray.get_endian","openfl/_v2/utils/ByteArray.hx",793,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(793)
	if ((this->bigEndian)){
		HX_STACK_LINE(793)
		return HX_CSTRING("bigEndian");
	}
	else{
		HX_STACK_LINE(793)
		return HX_CSTRING("littleEndian");
	}
	HX_STACK_LINE(793)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String value){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","set_endian",0x80b615c3,"openfl._v2.utils.ByteArray.set_endian","openfl/_v2/utils/ByteArray.hx",794,0x400ac17e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(794)
	this->bigEndian = (value == HX_CSTRING("bigEndian"));
	HX_STACK_LINE(794)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

::openfl::_v2::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","fromBytes",0xbe8d0a16,"openfl._v2.utils.ByteArray.fromBytes","openfl/_v2/utils/ByteArray.hx",186,0x400ac17e)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(188)
	::openfl::_v2::utils::ByteArray result = ::openfl::_v2::utils::ByteArray_obj::__new((int)-1);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(189)
	{
		HX_STACK_LINE(189)
		result->b = bytes->b;
		HX_STACK_LINE(189)
		result->length = bytes->length;
	}
	HX_STACK_LINE(190)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::openfl::_v2::utils::ByteArray ByteArray_obj::readFile( ::String path){
	HX_STACK_FRAME("openfl._v2.utils.ByteArray","readFile",0xdc8bf71d,"openfl._v2.utils.ByteArray.readFile","openfl/_v2/utils/ByteArray.hx",313,0x400ac17e)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(313)
	return ::openfl::_v2::utils::ByteArray_obj::lime_byte_array_read_file(path);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::_double_bytes;

Dynamic ByteArray_obj::_double_of_bytes;

Dynamic ByteArray_obj::_float_bytes;

Dynamic ByteArray_obj::_float_of_bytes;

Dynamic ByteArray_obj::lime_byte_array_overwrite_file;

Dynamic ByteArray_obj::lime_byte_array_read_file;

Dynamic ByteArray_obj::lime_byte_array_get_native_pointer;

Dynamic ByteArray_obj::lime_lzma_encode;

Dynamic ByteArray_obj::lime_lzma_decode;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { return readFile_dyn(); }
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeObject") ) { return writeObject_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__throwEOFi") ) { return __throwEOFi_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { return _float_bytes; }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { return _double_bytes; }
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"writeMultiByte") ) { return writeMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { return _float_of_bytes; }
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { return _double_of_bytes; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { return lime_lzma_encode; }
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { return lime_lzma_decode; }
		if (HX_FIELD_EQ(inName,"getNativePointer") ) { return getNativePointer_dyn(); }
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { return lime_byte_array_read_file; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { return lime_byte_array_overwrite_file; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { return lime_byte_array_get_native_pointer; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { _float_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { _double_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { _float_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { _double_of_bytes=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_lzma_encode") ) { lime_lzma_encode=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_lzma_decode") ) { lime_lzma_decode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_byte_array_read_file") ) { lime_byte_array_read_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_byte_array_overwrite_file") ) { lime_byte_array_overwrite_file=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_byte_array_get_native_pointer") ) { lime_byte_array_get_native_pointer=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bigEndian"));
	outFields->push(HX_CSTRING("bytesAvailable"));
	outFields->push(HX_CSTRING("endian"));
	outFields->push(HX_CSTRING("position"));
	outFields->push(HX_CSTRING("byteLength"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromBytes"),
	HX_CSTRING("readFile"),
	HX_CSTRING("_double_bytes"),
	HX_CSTRING("_double_of_bytes"),
	HX_CSTRING("_float_bytes"),
	HX_CSTRING("_float_of_bytes"),
	HX_CSTRING("lime_byte_array_overwrite_file"),
	HX_CSTRING("lime_byte_array_read_file"),
	HX_CSTRING("lime_byte_array_get_native_pointer"),
	HX_CSTRING("lime_lzma_encode"),
	HX_CSTRING("lime_lzma_decode"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ByteArray_obj,bigEndian),HX_CSTRING("bigEndian")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_CSTRING("bytesAvailable")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_CSTRING("position")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_CSTRING("byteLength")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bigEndian"),
	HX_CSTRING("bytesAvailable"),
	HX_CSTRING("position"),
	HX_CSTRING("byteLength"),
	HX_CSTRING("asString"),
	HX_CSTRING("checkData"),
	HX_CSTRING("clear"),
	HX_CSTRING("compress"),
	HX_CSTRING("deflate"),
	HX_CSTRING("ensureElem"),
	HX_CSTRING("getByteBuffer"),
	HX_CSTRING("getLength"),
	HX_CSTRING("getNativePointer"),
	HX_CSTRING("getStart"),
	HX_CSTRING("inflate"),
	HX_CSTRING("readBoolean"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("readDouble"),
	HX_CSTRING("readFloat"),
	HX_CSTRING("readInt"),
	HX_CSTRING("readMultiByte"),
	HX_CSTRING("writeMultiByte"),
	HX_CSTRING("readShort"),
	HX_CSTRING("readUnsignedByte"),
	HX_CSTRING("readUnsignedInt"),
	HX_CSTRING("readUnsignedShort"),
	HX_CSTRING("readUTF"),
	HX_CSTRING("readUTFBytes"),
	HX_CSTRING("setLength"),
	HX_CSTRING("slice"),
	HX_CSTRING("uncompress"),
	HX_CSTRING("write_uncheck"),
	HX_CSTRING("writeBoolean"),
	HX_CSTRING("writeObject"),
	HX_CSTRING("writeByte"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("writeDouble"),
	HX_CSTRING("writeFile"),
	HX_CSTRING("writeFloat"),
	HX_CSTRING("writeInt"),
	HX_CSTRING("writeShort"),
	HX_CSTRING("writeUnsignedInt"),
	HX_CSTRING("writeUTF"),
	HX_CSTRING("writeUTFBytes"),
	HX_CSTRING("__fromBytes"),
	HX_CSTRING("__get"),
	HX_CSTRING("__set"),
	HX_CSTRING("__throwEOFi"),
	HX_CSTRING("get_bytesAvailable"),
	HX_CSTRING("get_byteLength"),
	HX_CSTRING("get_endian"),
	HX_CSTRING("set_endian"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_overwrite_file,"lime_byte_array_overwrite_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_read_file,"lime_byte_array_read_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_byte_array_get_native_pointer,"lime_byte_array_get_native_pointer");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_encode,"lime_lzma_encode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::lime_lzma_decode,"lime_lzma_decode");
};

#endif

Class ByteArray_obj::__mClass;

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.utils.ByteArray"), hx::TCanCast< ByteArray_obj> ,sStaticFields,sMemberFields,
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

void ByteArray_obj::__boot()
{
	_double_bytes= ::openfl::_v2::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("double_bytes"),(int)2);
	_double_of_bytes= ::openfl::_v2::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("double_of_bytes"),(int)2);
	_float_bytes= ::openfl::_v2::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("float_bytes"),(int)2);
	_float_of_bytes= ::openfl::_v2::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("float_of_bytes"),(int)2);
	lime_byte_array_overwrite_file= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_overwrite_file"),(int)2);
	lime_byte_array_read_file= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_read_file"),(int)1);
	lime_byte_array_get_native_pointer= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_byte_array_get_native_pointer"),(int)1);
	lime_lzma_encode= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_lzma_encode"),(int)1);
	lime_lzma_decode= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_lzma_decode"),(int)1);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace utils
