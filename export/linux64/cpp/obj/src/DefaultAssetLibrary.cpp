#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetLibrary
#include <openfl/_v2/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__v2_AssetType
#include <openfl/_v2/AssetType.h>
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
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__v2_net_URLRequest
#include <openfl/_v2/net/URLRequest.h>
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
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_FRAME("DefaultAssetLibrary","new",0xbc37e41e,"DefaultAssetLibrary.new","DefaultAssetLibrary.hx",32,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(37)
	this->type = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(36)
	this->path = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(35)
	this->className = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(43)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(45)
	super::__construct();
	HX_STACK_LINE(1695)
	bool useManifest = false;		HX_STACK_VAR(useManifest,"useManifest");
	HX_STACK_LINE(1696)
	useManifest = true;
	HX_STACK_LINE(1697)
	useManifest = true;
	HX_STACK_LINE(1698)
	useManifest = true;
	HX_STACK_LINE(1699)
	useManifest = true;
	HX_STACK_LINE(1700)
	useManifest = true;
	HX_STACK_LINE(1701)
	useManifest = true;
	HX_STACK_LINE(1702)
	useManifest = true;
	HX_STACK_LINE(1703)
	useManifest = true;
	HX_STACK_LINE(1704)
	useManifest = true;
	HX_STACK_LINE(1705)
	useManifest = true;
	HX_STACK_LINE(1706)
	useManifest = true;
	HX_STACK_LINE(1707)
	useManifest = true;
	HX_STACK_LINE(1708)
	useManifest = true;
	HX_STACK_LINE(1709)
	useManifest = true;
	HX_STACK_LINE(1710)
	useManifest = true;
	HX_STACK_LINE(1711)
	useManifest = true;
	HX_STACK_LINE(1712)
	useManifest = true;
	HX_STACK_LINE(1713)
	useManifest = true;
	HX_STACK_LINE(1714)
	useManifest = true;
	HX_STACK_LINE(1715)
	useManifest = true;
	HX_STACK_LINE(1716)
	useManifest = true;
	HX_STACK_LINE(1717)
	useManifest = true;
	HX_STACK_LINE(1718)
	useManifest = true;
	HX_STACK_LINE(1719)
	useManifest = true;
	HX_STACK_LINE(1720)
	useManifest = true;
	HX_STACK_LINE(1721)
	useManifest = true;
	HX_STACK_LINE(1722)
	useManifest = true;
	HX_STACK_LINE(1723)
	useManifest = true;
	HX_STACK_LINE(1724)
	useManifest = true;
	HX_STACK_LINE(1725)
	useManifest = true;
	HX_STACK_LINE(1726)
	useManifest = true;
	HX_STACK_LINE(1727)
	useManifest = true;
	HX_STACK_LINE(1728)
	useManifest = true;
	HX_STACK_LINE(1729)
	useManifest = true;
	HX_STACK_LINE(1730)
	useManifest = true;
	HX_STACK_LINE(1731)
	useManifest = true;
	HX_STACK_LINE(1732)
	useManifest = true;
	HX_STACK_LINE(1733)
	useManifest = true;
	HX_STACK_LINE(1734)
	useManifest = true;
	HX_STACK_LINE(1735)
	useManifest = true;
	HX_STACK_LINE(1736)
	useManifest = true;
	HX_STACK_LINE(1737)
	useManifest = true;
	HX_STACK_LINE(1738)
	useManifest = true;
	HX_STACK_LINE(1739)
	useManifest = true;
	HX_STACK_LINE(1740)
	useManifest = true;
	HX_STACK_LINE(1741)
	useManifest = true;
	HX_STACK_LINE(1742)
	useManifest = true;
	HX_STACK_LINE(1743)
	useManifest = true;
	HX_STACK_LINE(1744)
	useManifest = true;
	HX_STACK_LINE(1745)
	useManifest = true;
	HX_STACK_LINE(1746)
	useManifest = true;
	HX_STACK_LINE(1747)
	useManifest = true;
	HX_STACK_LINE(1748)
	useManifest = true;
	HX_STACK_LINE(1749)
	useManifest = true;
	HX_STACK_LINE(1750)
	useManifest = true;
	HX_STACK_LINE(1751)
	useManifest = true;
	HX_STACK_LINE(1752)
	useManifest = true;
	HX_STACK_LINE(1753)
	useManifest = true;
	HX_STACK_LINE(1754)
	useManifest = true;
	HX_STACK_LINE(1755)
	useManifest = true;
	HX_STACK_LINE(1756)
	useManifest = true;
	HX_STACK_LINE(1757)
	useManifest = true;
	HX_STACK_LINE(1758)
	useManifest = true;
	HX_STACK_LINE(1759)
	useManifest = true;
	HX_STACK_LINE(1760)
	useManifest = true;
	HX_STACK_LINE(1761)
	useManifest = true;
	HX_STACK_LINE(1762)
	useManifest = true;
	HX_STACK_LINE(1763)
	useManifest = true;
	HX_STACK_LINE(1764)
	useManifest = true;
	HX_STACK_LINE(1765)
	useManifest = true;
	HX_STACK_LINE(1766)
	useManifest = true;
	HX_STACK_LINE(1767)
	useManifest = true;
	HX_STACK_LINE(1768)
	useManifest = true;
	HX_STACK_LINE(1769)
	useManifest = true;
	HX_STACK_LINE(1770)
	useManifest = true;
	HX_STACK_LINE(1771)
	useManifest = true;
	HX_STACK_LINE(1772)
	useManifest = true;
	HX_STACK_LINE(1773)
	useManifest = true;
	HX_STACK_LINE(1774)
	useManifest = true;
	HX_STACK_LINE(1775)
	useManifest = true;
	HX_STACK_LINE(1776)
	useManifest = true;
	HX_STACK_LINE(1777)
	useManifest = true;
	HX_STACK_LINE(1778)
	useManifest = true;
	HX_STACK_LINE(1779)
	useManifest = true;
	HX_STACK_LINE(1780)
	useManifest = true;
	HX_STACK_LINE(1781)
	useManifest = true;
	HX_STACK_LINE(1782)
	useManifest = true;
	HX_STACK_LINE(1783)
	useManifest = true;
	HX_STACK_LINE(1784)
	useManifest = true;
	HX_STACK_LINE(1785)
	useManifest = true;
	HX_STACK_LINE(1786)
	useManifest = true;
	HX_STACK_LINE(1787)
	useManifest = true;
	HX_STACK_LINE(1788)
	useManifest = true;
	HX_STACK_LINE(1789)
	useManifest = true;
	HX_STACK_LINE(1790)
	useManifest = true;
	HX_STACK_LINE(1791)
	useManifest = true;
	HX_STACK_LINE(1792)
	useManifest = true;
	HX_STACK_LINE(1793)
	useManifest = true;
	HX_STACK_LINE(1794)
	useManifest = true;
	HX_STACK_LINE(1795)
	useManifest = true;
	HX_STACK_LINE(1796)
	useManifest = true;
	HX_STACK_LINE(1797)
	useManifest = true;
	HX_STACK_LINE(1798)
	useManifest = true;
	HX_STACK_LINE(1799)
	useManifest = true;
	HX_STACK_LINE(1800)
	useManifest = true;
	HX_STACK_LINE(1801)
	useManifest = true;
	HX_STACK_LINE(1802)
	useManifest = true;
	HX_STACK_LINE(1803)
	useManifest = true;
	HX_STACK_LINE(1804)
	useManifest = true;
	HX_STACK_LINE(1805)
	useManifest = true;
	HX_STACK_LINE(1806)
	useManifest = true;
	HX_STACK_LINE(1807)
	useManifest = true;
	HX_STACK_LINE(1808)
	useManifest = true;
	HX_STACK_LINE(1809)
	useManifest = true;
	HX_STACK_LINE(1810)
	useManifest = true;
	HX_STACK_LINE(1811)
	useManifest = true;
	HX_STACK_LINE(1812)
	useManifest = true;
	HX_STACK_LINE(1813)
	useManifest = true;
	HX_STACK_LINE(1814)
	useManifest = true;
	HX_STACK_LINE(1815)
	useManifest = true;
	HX_STACK_LINE(1816)
	useManifest = true;
	HX_STACK_LINE(1817)
	useManifest = true;
	HX_STACK_LINE(1818)
	useManifest = true;
	HX_STACK_LINE(1819)
	useManifest = true;
	HX_STACK_LINE(1820)
	useManifest = true;
	HX_STACK_LINE(1821)
	useManifest = true;
	HX_STACK_LINE(1822)
	useManifest = true;
	HX_STACK_LINE(1823)
	useManifest = true;
	HX_STACK_LINE(1824)
	useManifest = true;
	HX_STACK_LINE(1825)
	useManifest = true;
	HX_STACK_LINE(1826)
	useManifest = true;
	HX_STACK_LINE(1827)
	useManifest = true;
	HX_STACK_LINE(1828)
	useManifest = true;
	HX_STACK_LINE(1829)
	useManifest = true;
	HX_STACK_LINE(1830)
	useManifest = true;
	HX_STACK_LINE(1831)
	useManifest = true;
	HX_STACK_LINE(1832)
	useManifest = true;
	HX_STACK_LINE(1833)
	useManifest = true;
	HX_STACK_LINE(1834)
	useManifest = true;
	HX_STACK_LINE(1835)
	useManifest = true;
	HX_STACK_LINE(1836)
	useManifest = true;
	HX_STACK_LINE(1837)
	useManifest = true;
	HX_STACK_LINE(1838)
	useManifest = true;
	HX_STACK_LINE(1839)
	useManifest = true;
	HX_STACK_LINE(1840)
	useManifest = true;
	HX_STACK_LINE(1841)
	useManifest = true;
	HX_STACK_LINE(1842)
	useManifest = true;
	HX_STACK_LINE(1843)
	useManifest = true;
	HX_STACK_LINE(1844)
	useManifest = true;
	HX_STACK_LINE(1845)
	useManifest = true;
	HX_STACK_LINE(1846)
	useManifest = true;
	HX_STACK_LINE(1847)
	useManifest = true;
	HX_STACK_LINE(1848)
	useManifest = true;
	HX_STACK_LINE(1849)
	useManifest = true;
	HX_STACK_LINE(1850)
	useManifest = true;
	HX_STACK_LINE(1851)
	useManifest = true;
	HX_STACK_LINE(1852)
	useManifest = true;
	HX_STACK_LINE(1853)
	useManifest = true;
	HX_STACK_LINE(1854)
	useManifest = true;
	HX_STACK_LINE(1855)
	useManifest = true;
	HX_STACK_LINE(1856)
	useManifest = true;
	HX_STACK_LINE(1857)
	useManifest = true;
	HX_STACK_LINE(1858)
	useManifest = true;
	HX_STACK_LINE(1859)
	useManifest = true;
	HX_STACK_LINE(1860)
	useManifest = true;
	HX_STACK_LINE(1861)
	useManifest = true;
	HX_STACK_LINE(1862)
	useManifest = true;
	HX_STACK_LINE(1863)
	useManifest = true;
	HX_STACK_LINE(1864)
	useManifest = true;
	HX_STACK_LINE(1865)
	useManifest = true;
	HX_STACK_LINE(1866)
	useManifest = true;
	HX_STACK_LINE(1867)
	useManifest = true;
	HX_STACK_LINE(1868)
	useManifest = true;
	HX_STACK_LINE(1869)
	useManifest = true;
	HX_STACK_LINE(1870)
	useManifest = true;
	HX_STACK_LINE(1871)
	useManifest = true;
	HX_STACK_LINE(1872)
	useManifest = true;
	HX_STACK_LINE(1873)
	useManifest = true;
	HX_STACK_LINE(1874)
	useManifest = true;
	HX_STACK_LINE(1875)
	useManifest = true;
	HX_STACK_LINE(1876)
	useManifest = true;
	HX_STACK_LINE(1877)
	useManifest = true;
	HX_STACK_LINE(1878)
	useManifest = true;
	HX_STACK_LINE(1879)
	useManifest = true;
	HX_STACK_LINE(1880)
	useManifest = true;
	HX_STACK_LINE(1881)
	useManifest = true;
	HX_STACK_LINE(1882)
	useManifest = true;
	HX_STACK_LINE(1883)
	useManifest = true;
	HX_STACK_LINE(1884)
	useManifest = true;
	HX_STACK_LINE(1885)
	useManifest = true;
	HX_STACK_LINE(1886)
	useManifest = true;
	HX_STACK_LINE(1887)
	useManifest = true;
	HX_STACK_LINE(1888)
	useManifest = true;
	HX_STACK_LINE(1889)
	useManifest = true;
	HX_STACK_LINE(1890)
	useManifest = true;
	HX_STACK_LINE(1891)
	useManifest = true;
	HX_STACK_LINE(1892)
	useManifest = true;
	HX_STACK_LINE(1893)
	useManifest = true;
	HX_STACK_LINE(1894)
	useManifest = true;
	HX_STACK_LINE(1895)
	useManifest = true;
	HX_STACK_LINE(1896)
	useManifest = true;
	HX_STACK_LINE(1897)
	useManifest = true;
	HX_STACK_LINE(1898)
	useManifest = true;
	HX_STACK_LINE(1899)
	useManifest = true;
	HX_STACK_LINE(1900)
	useManifest = true;
	HX_STACK_LINE(1901)
	useManifest = true;
	HX_STACK_LINE(1902)
	useManifest = true;
	HX_STACK_LINE(1903)
	useManifest = true;
	HX_STACK_LINE(1904)
	useManifest = true;
	HX_STACK_LINE(1905)
	useManifest = true;
	HX_STACK_LINE(1906)
	useManifest = true;
	HX_STACK_LINE(1907)
	useManifest = true;
	HX_STACK_LINE(1908)
	useManifest = true;
	HX_STACK_LINE(1909)
	useManifest = true;
	HX_STACK_LINE(1910)
	useManifest = true;
	HX_STACK_LINE(1911)
	useManifest = true;
	HX_STACK_LINE(1912)
	useManifest = true;
	HX_STACK_LINE(1913)
	useManifest = true;
	HX_STACK_LINE(1914)
	useManifest = true;
	HX_STACK_LINE(1915)
	useManifest = true;
	HX_STACK_LINE(1916)
	useManifest = true;
	HX_STACK_LINE(1917)
	useManifest = true;
	HX_STACK_LINE(1918)
	useManifest = true;
	HX_STACK_LINE(1919)
	useManifest = true;
	HX_STACK_LINE(1920)
	useManifest = true;
	HX_STACK_LINE(1921)
	useManifest = true;
	HX_STACK_LINE(1922)
	useManifest = true;
	HX_STACK_LINE(1923)
	useManifest = true;
	HX_STACK_LINE(1924)
	useManifest = true;
	HX_STACK_LINE(1925)
	useManifest = true;
	HX_STACK_LINE(1926)
	useManifest = true;
	HX_STACK_LINE(1927)
	useManifest = true;
	HX_STACK_LINE(1928)
	useManifest = true;
	HX_STACK_LINE(1929)
	useManifest = true;
	HX_STACK_LINE(1930)
	useManifest = true;
	HX_STACK_LINE(1931)
	useManifest = true;
	HX_STACK_LINE(1932)
	useManifest = true;
	HX_STACK_LINE(1933)
	useManifest = true;
	HX_STACK_LINE(1934)
	useManifest = true;
	HX_STACK_LINE(1935)
	useManifest = true;
	HX_STACK_LINE(1936)
	useManifest = true;
	HX_STACK_LINE(1937)
	useManifest = true;
	HX_STACK_LINE(1938)
	useManifest = true;
	HX_STACK_LINE(1939)
	useManifest = true;
	HX_STACK_LINE(1940)
	useManifest = true;
	HX_STACK_LINE(1941)
	useManifest = true;
	HX_STACK_LINE(1942)
	useManifest = true;
	HX_STACK_LINE(1943)
	useManifest = true;
	HX_STACK_LINE(1944)
	useManifest = true;
	HX_STACK_LINE(1945)
	useManifest = true;
	HX_STACK_LINE(1946)
	useManifest = true;
	HX_STACK_LINE(1947)
	useManifest = true;
	HX_STACK_LINE(1948)
	useManifest = true;
	HX_STACK_LINE(1949)
	useManifest = true;
	HX_STACK_LINE(1950)
	useManifest = true;
	HX_STACK_LINE(1951)
	useManifest = true;
	HX_STACK_LINE(1952)
	useManifest = true;
	HX_STACK_LINE(1953)
	useManifest = true;
	HX_STACK_LINE(1954)
	useManifest = true;
	HX_STACK_LINE(1955)
	useManifest = true;
	HX_STACK_LINE(1956)
	useManifest = true;
	HX_STACK_LINE(1957)
	useManifest = true;
	HX_STACK_LINE(1958)
	useManifest = true;
	HX_STACK_LINE(1959)
	useManifest = true;
	HX_STACK_LINE(1960)
	useManifest = true;
	HX_STACK_LINE(1961)
	useManifest = true;
	HX_STACK_LINE(1962)
	useManifest = true;
	HX_STACK_LINE(1963)
	useManifest = true;
	HX_STACK_LINE(1964)
	useManifest = true;
	HX_STACK_LINE(1965)
	useManifest = true;
	HX_STACK_LINE(1966)
	useManifest = true;
	HX_STACK_LINE(1967)
	useManifest = true;
	HX_STACK_LINE(1970)
	if ((useManifest)){
		HX_STACK_LINE(1972)
		this->loadManifest();
		HX_STACK_LINE(1974)
		int _g1 = ::Sys_obj::args()->indexOf(HX_CSTRING("-livereload"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1974)
		if (((_g1 > (int)-1))){
			HX_STACK_LINE(1976)
			Array< ::String > path = Array_obj< ::String >::__new().Add(::sys::FileSystem_obj::fullPath(HX_CSTRING("manifest")));		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(1977)
			Float _g11 = ::sys::FileSystem_obj::stat(path->__get((int)0))->__Field(HX_CSTRING("mtime"),true)->__Field(HX_CSTRING("getTime"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1977)
			this->lastModified = _g11;
			HX_STACK_LINE(1979)
			::haxe::Timer _g2 = ::haxe::Timer_obj::__new((int)2000);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1979)
			this->timer = _g2;

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g,Array< ::String >,path)
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","DefaultAssetLibrary.hx",1980,0x0fc48912)
				{
					HX_STACK_LINE(1982)
					Float modified = ::sys::FileSystem_obj::stat(path->__get((int)0))->__Field(HX_CSTRING("mtime"),true)->__Field(HX_CSTRING("getTime"),true)();		HX_STACK_VAR(modified,"modified");
					HX_STACK_LINE(1984)
					if (((modified > _g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->lastModified))){
						HX_STACK_LINE(1986)
						_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->lastModified = modified;
						HX_STACK_LINE(1987)
						_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->loadManifest();
						HX_STACK_LINE(1989)
						if (((_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->eventCallback != null()))){
							HX_STACK_LINE(1991)
							_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >()->eventCallback(_g->__get((int)0).StaticCast< ::DefaultAssetLibrary >(),HX_CSTRING("change"));
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(1980)
			this->timer->run =  Dynamic(new _Function_3_1(_g,path));
		}
	}
}
;
	return null();
}

//DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > result = new DefaultAssetLibrary_obj();
	result->__construct();
	return result;}

bool DefaultAssetLibrary_obj::exists( ::String id,::openfl::_v2::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","exists",0x972074de,"DefaultAssetLibrary.exists","DefaultAssetLibrary.hx",2013,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(2015)
	::openfl::_v2::AssetType assetType = this->type->get(id);		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(2031)
	if (((assetType != null()))){
		HX_STACK_LINE(2033)
		if (((bool((assetType == type)) || bool((bool(((bool((type == ::openfl::_v2::AssetType_obj::SOUND)) || bool((type == ::openfl::_v2::AssetType_obj::MUSIC))))) && bool(((bool((assetType == ::openfl::_v2::AssetType_obj::MUSIC)) || bool((assetType == ::openfl::_v2::AssetType_obj::SOUND)))))))))){
			HX_STACK_LINE(2035)
			return true;
		}
		HX_STACK_LINE(2053)
		if (((bool((bool((type == ::openfl::_v2::AssetType_obj::BINARY)) || bool((type == null())))) || bool((bool((assetType == ::openfl::_v2::AssetType_obj::BINARY)) && bool((type == ::openfl::_v2::AssetType_obj::TEXT))))))){
			HX_STACK_LINE(2055)
			return true;
		}
	}
	HX_STACK_LINE(2063)
	return false;
}


::openfl::_v2::display::BitmapData DefaultAssetLibrary_obj::getBitmapData( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBitmapData",0xb8207f2d,"DefaultAssetLibrary.getBitmapData","DefaultAssetLibrary.hx",2088,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2088)
	if ((this->className->exists(id))){
		HX_STACK_LINE(2088)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2088)
		return hx::TCast< openfl::_v2::display::BitmapData >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(2089)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2089)
		return ::openfl::_v2::display::BitmapData_obj::load(_g1,null());
	}
	HX_STACK_LINE(2088)
	return null();
}


::openfl::_v2::utils::ByteArray DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBytes",0x86b4b377,"DefaultAssetLibrary.getBytes","DefaultAssetLibrary.hx",2134,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2134)
	if ((this->className->exists(id))){
		HX_STACK_LINE(2134)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2134)
		return hx::TCast< openfl::_v2::utils::ByteArray >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(2135)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2135)
		return ::openfl::_v2::utils::ByteArray_obj::readFile(_g1);
	}
	HX_STACK_LINE(2134)
	return null();
}


::openfl::_v2::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getFont",0x974ed843,"DefaultAssetLibrary.getFont","DefaultAssetLibrary.hx",2154,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2154)
	if ((this->className->exists(id))){
		HX_STACK_LINE(2155)
		Dynamic fontClass = this->className->get(id);		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(2156)
		::openfl::_v2::text::Font_obj::registerFont(fontClass);
		HX_STACK_LINE(2157)
		return hx::TCast< openfl::_v2::text::Font >::cast(::Type_obj::createInstance(fontClass,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(2158)
		::String _g = this->path->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2158)
		return ::openfl::_v2::text::Font_obj::__new(_g,null(),null());
	}
	HX_STACK_LINE(2154)
	return null();
}


::openfl::_v2::media::Sound DefaultAssetLibrary_obj::getMusic( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getMusic",0xd9777bb1,"DefaultAssetLibrary.getMusic","DefaultAssetLibrary.hx",2188,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2188)
	if ((this->className->exists(id))){
		HX_STACK_LINE(2188)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2188)
		return hx::TCast< openfl::_v2::media::Sound >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(2189)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2189)
		::openfl::_v2::net::URLRequest _g2 = ::openfl::_v2::net::URLRequest_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2189)
		return ::openfl::_v2::media::Sound_obj::__new(_g2,null(),true);
	}
	HX_STACK_LINE(2188)
	return null();
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getPath",0x9de06019,"DefaultAssetLibrary.getPath","DefaultAssetLibrary.hx",2204,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2204)
	return this->path->get(id);
}


::openfl::_v2::media::Sound DefaultAssetLibrary_obj::getSound( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getSound",0x49e937db,"DefaultAssetLibrary.getSound","DefaultAssetLibrary.hx",2227,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2227)
	if ((this->className->exists(id))){
		HX_STACK_LINE(2227)
		Dynamic _g = this->className->get(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2227)
		return hx::TCast< openfl::_v2::media::Sound >::cast(::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new())));
	}
	else{
		HX_STACK_LINE(2228)
		::String _g1 = this->path->get(id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2228)
		::openfl::_v2::net::URLRequest _g2 = ::openfl::_v2::net::URLRequest_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2228)
		::openfl::_v2::AssetType _g3 = this->type->get(id);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2228)
		bool _g4 = (_g3 == ::openfl::_v2::AssetType_obj::MUSIC);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(2228)
		return ::openfl::_v2::media::Sound_obj::__new(_g2,null(),_g4);
	}
	HX_STACK_LINE(2227)
	return null();
}


::String DefaultAssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getText",0xa0884721,"DefaultAssetLibrary.getText","DefaultAssetLibrary.hx",2235,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(2268)
	::openfl::_v2::utils::ByteArray bytes = this->getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(2270)
	if (((bytes == null()))){
		HX_STACK_LINE(2272)
		return null();
	}
	else{
		HX_STACK_LINE(2276)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(2270)
	return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::openfl::_v2::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","isLocal",0x968237df,"DefaultAssetLibrary.isLocal","DefaultAssetLibrary.hx",2297,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(2297)
	return true;
}


Array< ::String > DefaultAssetLibrary_obj::list( ::openfl::_v2::AssetType type){
	HX_STACK_FRAME("DefaultAssetLibrary","list",0xf3604ee0,"DefaultAssetLibrary.list","DefaultAssetLibrary.hx",2302,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(2304)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(2306)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->type->keys());  __it->hasNext(); ){
		::String id = __it->next();
		if (((  ((!(((type == null()))))) ? bool(this->exists(id,type)) : bool(true) ))){
			HX_STACK_LINE(2310)
			items->push(id);
		}
;
	}
	HX_STACK_LINE(2316)
	return items;
}


Void DefaultAssetLibrary_obj::loadBitmapData( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBitmapData",0x9243e881,"DefaultAssetLibrary.loadBitmapData","DefaultAssetLibrary.hx",2321,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(2347)
		::openfl::_v2::display::BitmapData _g = this->getBitmapData(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2347)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadBytes( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadBytes",0x8c71caa3,"DefaultAssetLibrary.loadBytes","DefaultAssetLibrary.hx",2354,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(2384)
		::openfl::_v2::utils::ByteArray _g = this->getBytes(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2384)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadFont( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadFont",0x1da5ca97,"DefaultAssetLibrary.loadFont","DefaultAssetLibrary.hx",2391,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(2413)
		::openfl::_v2::text::Font _g = this->getFont(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2413)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadManifest( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadManifest",0x6f596c77,"DefaultAssetLibrary.loadManifest","DefaultAssetLibrary.hx",2423,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2423)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(2432)
			::openfl::_v2::utils::ByteArray bytes = ::openfl::_v2::utils::ByteArray_obj::readFile(HX_CSTRING("manifest"));		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(2435)
			if (((bytes != null()))){
				HX_STACK_LINE(2437)
				bytes->position = (int)0;
				HX_STACK_LINE(2439)
				if (((bytes->length > (int)0))){
					HX_STACK_LINE(2441)
					::String data = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(2443)
					if (((bool((data != null())) && bool((data.length > (int)0))))){
						HX_STACK_LINE(2445)
						Dynamic manifest = ::haxe::Unserializer_obj::run(data);		HX_STACK_VAR(manifest,"manifest");
						HX_STACK_LINE(2447)
						{
							HX_STACK_LINE(2447)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(2447)
							while((true)){
								HX_STACK_LINE(2447)
								if ((!(((_g < manifest->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(2447)
									break;
								}
								HX_STACK_LINE(2447)
								Dynamic asset = manifest->__GetItem(_g);		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(2447)
								++(_g);
								struct _Function_7_1{
									inline static bool Block( hx::ObjectPtr< ::DefaultAssetLibrary_obj > __this,Dynamic &asset){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","DefaultAssetLibrary.hx",2449,0x0fc48912)
										{
											HX_STACK_LINE(2449)
											::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
											HX_STACK_LINE(2449)
											return __this->className->exists(key);
										}
										return null();
									}
								};
								HX_STACK_LINE(2449)
								if ((!(_Function_7_1::Block(this,asset)))){
									HX_STACK_LINE(2451)
									{
										HX_STACK_LINE(2451)
										::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(2451)
										::String value = asset->__Field(HX_CSTRING("path"),true);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(2451)
										this->path->set(key,value);
									}
									HX_STACK_LINE(2452)
									{
										HX_STACK_LINE(2452)
										::String key = asset->__Field(HX_CSTRING("id"),true);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(2452)
										::openfl::_v2::AssetType value = ::Type_obj::createEnum(hx::ClassOf< ::openfl::_v2::AssetType >(),asset->__Field(HX_CSTRING("type"),true),null());		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(2452)
										this->type->set(key,value);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(2464)
				::haxe::Log_obj::trace(HX_CSTRING("Warning: Could not load asset manifest (bytes was null)"),hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),2464,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("loadManifest")));
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(2470)
					::String _g = ::Std_obj::string(e);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2470)
					::String _g1 = (HX_CSTRING("Warning: Could not load asset manifest (") + _g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(2470)
					::String _g2 = (_g1 + HX_CSTRING(")"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(2470)
					::haxe::Log_obj::trace(_g2,hx::SourceInfo(HX_CSTRING("DefaultAssetLibrary.hx"),2470,HX_CSTRING("DefaultAssetLibrary"),HX_CSTRING("loadManifest")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,loadManifest,(void))

Void DefaultAssetLibrary_obj::loadMusic( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadMusic",0xdf3492dd,"DefaultAssetLibrary.loadMusic","DefaultAssetLibrary.hx",2478,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(2500)
		::openfl::_v2::media::Sound _g = this->getMusic(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2500)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadSound( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadSound",0x4fa64f07,"DefaultAssetLibrary.loadSound","DefaultAssetLibrary.hx",2507,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(2529)
		::openfl::_v2::media::Sound _g = this->getSound(id);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2529)
		handler(_g).Cast< Void >();
	}
return null();
}


Void DefaultAssetLibrary_obj::loadText( ::String id,Dynamic handler){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadText",0x26df3975,"DefaultAssetLibrary.loadText","DefaultAssetLibrary.hx",2536,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(handler,"handler")
		HX_STACK_LINE(2536)
		Dynamic handler1 = Dynamic( Array_obj<Dynamic>::__new().Add(handler));		HX_STACK_VAR(handler1,"handler1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,handler1)
		Void run(::openfl::_v2::utils::ByteArray bytes){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",2560,0x0fc48912)
			HX_STACK_ARG(bytes,"bytes")
			{
				HX_STACK_LINE(2560)
				if (((bytes == null()))){
					HX_STACK_LINE(2562)
					handler1->__GetItem((int)0)(null()).Cast< Void >();
				}
				else{
					HX_STACK_LINE(2566)
					::String _g = bytes->readUTFBytes(bytes->length);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2566)
					handler1->__GetItem((int)0)(_g).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(2558)
		Dynamic callback =  Dynamic(new _Function_1_1(handler1));		HX_STACK_VAR(callback,"callback");
		HX_STACK_LINE(2572)
		this->loadBytes(id,callback);
	}
return null();
}



DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(lastModified,"lastModified");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::openfl::_v2::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(lastModified,"lastModified");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::openfl::_v2::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getMusic") ) { return getMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return loadFont_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMusic") ) { return loadMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"loadSound") ) { return loadSound_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { return lastModified; }
		if (HX_FIELD_EQ(inName,"loadManifest") ) { return loadManifest_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadBitmapData") ) { return loadBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { lastModified=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("path"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("lastModified"));
	outFields->push(HX_CSTRING("timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,className),HX_CSTRING("className")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,path),HX_CSTRING("path")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(DefaultAssetLibrary_obj,lastModified),HX_CSTRING("lastModified")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DefaultAssetLibrary_obj,timer),HX_CSTRING("timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("className"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("lastModified"),
	HX_CSTRING("timer"),
	HX_CSTRING("exists"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getMusic"),
	HX_CSTRING("getPath"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	HX_CSTRING("isLocal"),
	HX_CSTRING("list"),
	HX_CSTRING("loadBitmapData"),
	HX_CSTRING("loadBytes"),
	HX_CSTRING("loadFont"),
	HX_CSTRING("loadManifest"),
	HX_CSTRING("loadMusic"),
	HX_CSTRING("loadSound"),
	HX_CSTRING("loadText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#endif

Class DefaultAssetLibrary_obj::__mClass;

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DefaultAssetLibrary"), hx::TCanCast< DefaultAssetLibrary_obj> ,sStaticFields,sMemberFields,
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

void DefaultAssetLibrary_obj::__boot()
{
}

