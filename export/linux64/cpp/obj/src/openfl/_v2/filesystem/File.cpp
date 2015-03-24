#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_filesystem_File
#include <openfl/_v2/filesystem/File.h>
#endif
namespace openfl{
namespace _v2{
namespace filesystem{

Void File_obj::__construct(::String path)
{
HX_STACK_FRAME("openfl._v2.filesystem.File","new",0x72cea240,"openfl._v2.filesystem.File.new","openfl/_v2/filesystem/File.hx",30,0xe040b451)
HX_STACK_THIS(this)
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(32)
	this->set_url(path);
	HX_STACK_LINE(33)
	this->set_nativePath(path);
}
;
	return null();
}

//File_obj::~File_obj() { }

Dynamic File_obj::__CreateEmpty() { return  new File_obj; }
hx::ObjectPtr< File_obj > File_obj::__new(::String path)
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct(path);
	return result;}

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< File_obj > result = new File_obj();
	result->__construct(inArgs[0]);
	return result;}

::String File_obj::set_nativePath( ::String value){
	HX_STACK_FRAME("openfl._v2.filesystem.File","set_nativePath",0x833c1db9,"openfl._v2.filesystem.File.set_nativePath","openfl/_v2/filesystem/File.hx",52,0xe040b451)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(54)
	this->nativePath = value;
	HX_STACK_LINE(55)
	return this->nativePath;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_nativePath,return )

::String File_obj::set_url( ::String value){
	HX_STACK_FRAME("openfl._v2.filesystem.File","set_url",0x0a48c6f2,"openfl._v2.filesystem.File.set_url","openfl/_v2/filesystem/File.hx",60,0xe040b451)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(62)
	if (((value == null()))){
		HX_STACK_LINE(64)
		this->url = null();
	}
	else{
		HX_STACK_LINE(68)
		::String _g = ::StringTools_obj::replace(value,HX_CSTRING(" "),HX_CSTRING("%20"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		this->url = _g;
		HX_STACK_LINE(78)
		this->url = (HX_CSTRING("file:") + this->url);
	}
	HX_STACK_LINE(83)
	return this->url;
}


HX_DEFINE_DYNAMIC_FUNC1(File_obj,set_url,return )

::openfl::_v2::filesystem::File File_obj::applicationDirectory;

::openfl::_v2::filesystem::File File_obj::applicationStorageDirectory;

::openfl::_v2::filesystem::File File_obj::desktopDirectory;

::openfl::_v2::filesystem::File File_obj::documentsDirectory;

::openfl::_v2::filesystem::File File_obj::userDirectory;

int File_obj::APP;

int File_obj::STORAGE;

int File_obj::DESKTOP;

int File_obj::DOCS;

int File_obj::USER;

::openfl::_v2::filesystem::File File_obj::get_applicationDirectory( ){
	HX_STACK_FRAME("openfl._v2.filesystem.File","get_applicationDirectory",0xd68bfca6,"openfl._v2.filesystem.File.get_applicationDirectory","openfl/_v2/filesystem/File.hx",45,0xe040b451)
	HX_STACK_LINE(45)
	::String _g = ::openfl::_v2::filesystem::File_obj::lime_filesystem_get_special_dir((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	return ::openfl::_v2::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationDirectory,return )

::openfl::_v2::filesystem::File File_obj::get_applicationStorageDirectory( ){
	HX_STACK_FRAME("openfl._v2.filesystem.File","get_applicationStorageDirectory",0x1d4e5299,"openfl._v2.filesystem.File.get_applicationStorageDirectory","openfl/_v2/filesystem/File.hx",46,0xe040b451)
	HX_STACK_LINE(46)
	::String _g = ::openfl::_v2::filesystem::File_obj::lime_filesystem_get_special_dir((int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	return ::openfl::_v2::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_applicationStorageDirectory,return )

::openfl::_v2::filesystem::File File_obj::get_desktopDirectory( ){
	HX_STACK_FRAME("openfl._v2.filesystem.File","get_desktopDirectory",0x9f66e81a,"openfl._v2.filesystem.File.get_desktopDirectory","openfl/_v2/filesystem/File.hx",47,0xe040b451)
	HX_STACK_LINE(47)
	::String _g = ::openfl::_v2::filesystem::File_obj::lime_filesystem_get_special_dir((int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	return ::openfl::_v2::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_desktopDirectory,return )

::openfl::_v2::filesystem::File File_obj::get_documentsDirectory( ){
	HX_STACK_FRAME("openfl._v2.filesystem.File","get_documentsDirectory",0x9484fdbe,"openfl._v2.filesystem.File.get_documentsDirectory","openfl/_v2/filesystem/File.hx",48,0xe040b451)
	HX_STACK_LINE(48)
	::String _g = ::openfl::_v2::filesystem::File_obj::lime_filesystem_get_special_dir((int)3);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(48)
	return ::openfl::_v2::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_documentsDirectory,return )

::openfl::_v2::filesystem::File File_obj::get_userDirectory( ){
	HX_STACK_FRAME("openfl._v2.filesystem.File","get_userDirectory",0x78fb83d9,"openfl._v2.filesystem.File.get_userDirectory","openfl/_v2/filesystem/File.hx",49,0xe040b451)
	HX_STACK_LINE(49)
	::String _g = ::openfl::_v2::filesystem::File_obj::lime_filesystem_get_special_dir((int)4);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(49)
	return ::openfl::_v2::filesystem::File_obj::__new(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(File_obj,get_userDirectory,return )

Dynamic File_obj::lime_filesystem_get_special_dir;


File_obj::File_obj()
{
}

void File_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(File);
	HX_MARK_MEMBER_NAME(nativePath,"nativePath");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_END_CLASS();
}

void File_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nativePath,"nativePath");
	HX_VISIT_MEMBER_NAME(url,"url");
}

Dynamic File_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_url") ) { return set_url_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { return nativePath; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { return inCallProp ? get_userDirectory() : userDirectory; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_nativePath") ) { return set_nativePath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { return inCallProp ? get_desktopDirectory() : desktopDirectory; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { return get_userDirectory_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { return inCallProp ? get_documentsDirectory() : documentsDirectory; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { return inCallProp ? get_applicationDirectory() : applicationDirectory; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { return get_desktopDirectory_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { return get_documentsDirectory_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { return get_applicationDirectory_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { return inCallProp ? get_applicationStorageDirectory() : applicationStorageDirectory; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { return get_applicationStorageDirectory_dyn(); }
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { return lime_filesystem_get_special_dir; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic File_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { if (inCallProp) return set_url(inValue);url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nativePath") ) { if (inCallProp) return set_nativePath(inValue);nativePath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"userDirectory") ) { userDirectory=inValue.Cast< ::openfl::_v2::filesystem::File >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { desktopDirectory=inValue.Cast< ::openfl::_v2::filesystem::File >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { documentsDirectory=inValue.Cast< ::openfl::_v2::filesystem::File >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { applicationDirectory=inValue.Cast< ::openfl::_v2::filesystem::File >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { applicationStorageDirectory=inValue.Cast< ::openfl::_v2::filesystem::File >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_filesystem_get_special_dir") ) { lime_filesystem_get_special_dir=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void File_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nativePath"));
	outFields->push(HX_CSTRING("url"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("applicationDirectory"),
	HX_CSTRING("applicationStorageDirectory"),
	HX_CSTRING("desktopDirectory"),
	HX_CSTRING("documentsDirectory"),
	HX_CSTRING("userDirectory"),
	HX_CSTRING("APP"),
	HX_CSTRING("STORAGE"),
	HX_CSTRING("DESKTOP"),
	HX_CSTRING("DOCS"),
	HX_CSTRING("USER"),
	HX_CSTRING("get_applicationDirectory"),
	HX_CSTRING("get_applicationStorageDirectory"),
	HX_CSTRING("get_desktopDirectory"),
	HX_CSTRING("get_documentsDirectory"),
	HX_CSTRING("get_userDirectory"),
	HX_CSTRING("lime_filesystem_get_special_dir"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(File_obj,nativePath),HX_CSTRING("nativePath")},
	{hx::fsString,(int)offsetof(File_obj,url),HX_CSTRING("url")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nativePath"),
	HX_CSTRING("url"),
	HX_CSTRING("set_nativePath"),
	HX_CSTRING("set_url"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_MARK_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_MARK_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_MARK_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_MARK_MEMBER_NAME(File_obj::APP,"APP");
	HX_MARK_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_MARK_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_MARK_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_MARK_MEMBER_NAME(File_obj::USER,"USER");
	HX_MARK_MEMBER_NAME(File_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(File_obj::applicationDirectory,"applicationDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::applicationStorageDirectory,"applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::desktopDirectory,"desktopDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::documentsDirectory,"documentsDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::userDirectory,"userDirectory");
	HX_VISIT_MEMBER_NAME(File_obj::APP,"APP");
	HX_VISIT_MEMBER_NAME(File_obj::STORAGE,"STORAGE");
	HX_VISIT_MEMBER_NAME(File_obj::DESKTOP,"DESKTOP");
	HX_VISIT_MEMBER_NAME(File_obj::DOCS,"DOCS");
	HX_VISIT_MEMBER_NAME(File_obj::USER,"USER");
	HX_VISIT_MEMBER_NAME(File_obj::lime_filesystem_get_special_dir,"lime_filesystem_get_special_dir");
};

#endif

Class File_obj::__mClass;

void File_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.filesystem.File"), hx::TCanCast< File_obj> ,sStaticFields,sMemberFields,
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

void File_obj::__boot()
{
	APP= (int)0;
	STORAGE= (int)1;
	DESKTOP= (int)2;
	DOCS= (int)3;
	USER= (int)4;
	lime_filesystem_get_special_dir= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_filesystem_get_special_dir"),(int)1);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace filesystem
