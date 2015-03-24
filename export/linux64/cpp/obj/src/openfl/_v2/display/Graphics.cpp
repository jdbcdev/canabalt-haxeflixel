#include <hxcpp.h>

#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IGraphicsData
#include <openfl/_v2/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_SpreadMethod
#include <openfl/_v2/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_display_TriangleCulling
#include <openfl/_v2/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPathWinding
#include <openfl/display/GraphicsPathWinding.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
namespace openfl{
namespace _v2{
namespace display{

Void Graphics_obj::__construct(Dynamic handle)
{
HX_STACK_FRAME("openfl._v2.display.Graphics","new",0x320113da,"openfl._v2.display.Graphics.new","openfl/_v2/display/Graphics.hx",31,0xef949733)
HX_STACK_THIS(this)
HX_STACK_ARG(handle,"handle")
{
	HX_STACK_LINE(31)
	this->__handle = handle;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new(Dynamic handle)
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct(handle);
	return result;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > result = new Graphics_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Graphics_obj::arcTo( Float controlX,Float controlY,Float x,Float y){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","arcTo",0x0fa49667,"openfl._v2.display.Graphics.arcTo","openfl/_v2/display/Graphics.hx",38,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(38)
		::openfl::_v2::display::Graphics_obj::lime_gfx_arc_to(this->__handle,controlX,controlY,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,arcTo,(void))

Void Graphics_obj::beginBitmapFill( ::openfl::_v2::display::BitmapData bitmap,::openfl::_v2::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl._v2.display.Graphics","beginBitmapFill",0x89c95c15,"openfl._v2.display.Graphics.beginBitmapFill","openfl/_v2/display/Graphics.hx",45,0xef949733)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(45)
		::openfl::_v2::display::Graphics_obj::lime_gfx_begin_bitmap_fill(this->__handle,bitmap->__handle,matrix,repeat,smooth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::beginFill( int color,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(1.0);
	HX_STACK_FRAME("openfl._v2.display.Graphics","beginFill",0xad51c846,"openfl._v2.display.Graphics.beginFill","openfl/_v2/display/Graphics.hx",52,0xef949733)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(52)
		::openfl::_v2::display::Graphics_obj::lime_gfx_begin_fill(this->__handle,color,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginGradientFill( ::openfl::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::openfl::_v2::geom::Matrix matrix,::openfl::_v2::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(0.0);
	HX_STACK_FRAME("openfl._v2.display.Graphics","beginGradientFill",0xef29e156,"openfl._v2.display.Graphics.beginGradientFill","openfl/_v2/display/Graphics.hx",57,0xef949733)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(59)
		if (((matrix == null()))){
			HX_STACK_LINE(61)
			::openfl::_v2::geom::Matrix _g = ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			matrix = _g;
			HX_STACK_LINE(62)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(66)
		int _g1 = type->__Index();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(66)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(66)
		if (((spreadMethod == null()))){
			HX_STACK_LINE(66)
			_g2 = (int)0;
		}
		else{
			HX_STACK_LINE(66)
			_g2 = spreadMethod->__Index();
		}
		HX_STACK_LINE(66)
		int _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(66)
		if (((interpolationMethod == null()))){
			HX_STACK_LINE(66)
			_g3 = (int)0;
		}
		else{
			HX_STACK_LINE(66)
			_g3 = interpolationMethod->__Index();
		}
		HX_STACK_LINE(66)
		::openfl::_v2::display::Graphics_obj::lime_gfx_begin_gradient_fill(this->__handle,_g1,colors,alphas,ratios,matrix,_g2,_g3,focalPointRatio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","clear",0x327c0787,"openfl._v2.display.Graphics.clear","openfl/_v2/display/Graphics.hx",73,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::openfl::_v2::display::Graphics_obj::lime_gfx_clear(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::copyFrom( ::openfl::_v2::display::Graphics sourceGraphics){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","copyFrom",0x144aee05,"openfl._v2.display.Graphics.copyFrom","openfl/_v2/display/Graphics.hx",80,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceGraphics,"sourceGraphics")
		HX_STACK_LINE(80)
		::openfl::_v2::Lib_obj::notImplemented(HX_CSTRING("Graphics.copyFrom"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,copyFrom,(void))

Void Graphics_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","cubicCurveTo",0x001f8526,"openfl._v2.display.Graphics.cubicCurveTo","openfl/_v2/display/Graphics.hx",87,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(87)
		::openfl::_v2::Lib_obj::notImplemented(HX_CSTRING("Graphics.cubicCurveTo"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,cubicCurveTo,(void))

Void Graphics_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","curveTo",0xf275e884,"openfl._v2.display.Graphics.curveTo","openfl/_v2/display/Graphics.hx",94,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(94)
		::openfl::_v2::display::Graphics_obj::lime_gfx_curve_to(this->__handle,controlX,controlY,anchorX,anchorY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","drawCircle",0x1bac6cfa,"openfl._v2.display.Graphics.drawCircle","openfl/_v2/display/Graphics.hx",101,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(101)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_ellipse(this->__handle,(x - radius),(y - radius),(radius * (int)2),(radius * (int)2));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","drawEllipse",0x3102d2b4,"openfl._v2.display.Graphics.drawEllipse","openfl/_v2/display/Graphics.hx",108,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(108)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_ellipse(this->__handle,x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawGraphicsData( Array< ::Dynamic > graphicsData){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","drawGraphicsData",0x0a0d42ff,"openfl._v2.display.Graphics.drawGraphicsData","openfl/_v2/display/Graphics.hx",113,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(115)
		Dynamic handles = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(handles,"handles");
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			while((true)){
				HX_STACK_LINE(117)
				if ((!(((_g < graphicsData->length))))){
					HX_STACK_LINE(117)
					break;
				}
				HX_STACK_LINE(117)
				::openfl::_v2::display::IGraphicsData datum = graphicsData->__get(_g).StaticCast< ::openfl::_v2::display::IGraphicsData >();		HX_STACK_VAR(datum,"datum");
				HX_STACK_LINE(117)
				++(_g);
				HX_STACK_LINE(119)
				handles->__Field(HX_CSTRING("push"),true)(datum->__handle);
			}
		}
		HX_STACK_LINE(123)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_data(this->__handle,handles);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawGraphicsDatum( ::openfl::_v2::display::IGraphicsData graphicsDatum){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","drawGraphicsDatum",0xc18d6dfa,"openfl._v2.display.Graphics.drawGraphicsDatum","openfl/_v2/display/Graphics.hx",130,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsDatum,"graphicsDatum")
		HX_STACK_LINE(130)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_datum(this->__handle,graphicsDatum->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsDatum,(void))

Void Graphics_obj::drawPoints( Array< Float > xy,Array< int > pointRGBA,hx::Null< int >  __o_defaultRGBA,hx::Null< Float >  __o_size){
int defaultRGBA = __o_defaultRGBA.Default(-1);
Float size = __o_size.Default(-1.0);
	HX_STACK_FRAME("openfl._v2.display.Graphics","drawPoints",0xbccd0d0d,"openfl._v2.display.Graphics.drawPoints","openfl/_v2/display/Graphics.hx",137,0xef949733)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xy,"xy")
	HX_STACK_ARG(pointRGBA,"pointRGBA")
	HX_STACK_ARG(defaultRGBA,"defaultRGBA")
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(137)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_points(this->__handle,xy,pointRGBA,defaultRGBA,false,size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawPoints,(void))

Void Graphics_obj::drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","drawRect",0xabfad98e,"openfl._v2.display.Graphics.drawRect","openfl/_v2/display/Graphics.hx",144,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(144)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_rect(this->__handle,x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawRoundRect( Float x,Float y,Float width,Float height,Float radiusX,Dynamic radiusY){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","drawRoundRect",0x6ea8e3e8,"openfl._v2.display.Graphics.drawRoundRect","openfl/_v2/display/Graphics.hx",151,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(radiusX,"radiusX")
		HX_STACK_ARG(radiusY,"radiusY")
		HX_STACK_LINE(151)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_round_rect(this->__handle,x,y,width,height,radiusX,(  (((radiusY == null()))) ? Dynamic(radiusX) : Dynamic(radiusY) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawRoundRectComplex( Float x,Float y,Float width,Float height,Float topLeftRadius,Float topRightRadius,Float bottomLeftRadius,Float bottomRightRadius){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","drawRoundRectComplex",0x18037728,"openfl._v2.display.Graphics.drawRoundRectComplex","openfl/_v2/display/Graphics.hx",158,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(topLeftRadius,"topLeftRadius")
		HX_STACK_ARG(topRightRadius,"topRightRadius")
		HX_STACK_ARG(bottomLeftRadius,"bottomLeftRadius")
		HX_STACK_ARG(bottomRightRadius,"bottomRightRadius")
		HX_STACK_LINE(158)
		::openfl::_v2::Lib_obj::notImplemented(HX_CSTRING("Graphics.drawRoundRectComplex"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,drawRoundRectComplex,(void))

Void Graphics_obj::drawPath( Array< int > commands,Array< Float > data,::openfl::display::GraphicsPathWinding winding){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","drawPath",0xaaa5720f,"openfl._v2.display.Graphics.drawPath","openfl/_v2/display/Graphics.hx",165,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(commands,"commands")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(winding,"winding")
		HX_STACK_LINE(165)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_path(this->__handle,commands,data,(winding == ::openfl::display::GraphicsPathWinding_obj::EVEN_ODD));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawTiles( ::openfl::_v2::display::Tilesheet sheet,Array< Float > data,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("openfl._v2.display.Graphics","drawTiles",0xf8fc4ddb,"openfl._v2.display.Graphics.drawTiles","openfl/_v2/display/Graphics.hx",170,0xef949733)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(172)
		this->beginBitmapFill(sheet->__bitmap,null(),false,smooth);
		HX_STACK_LINE(174)
		if ((smooth)){
			HX_STACK_LINE(176)
			hx::OrEq(flags,(int)4096);
		}
		HX_STACK_LINE(180)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_tiles(this->__handle,sheet->__handle,data,flags,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawTiles,(void))

Void Graphics_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::openfl::_v2::display::TriangleCulling culling,Array< int > colors,hx::Null< int >  __o_blendMode){
int blendMode = __o_blendMode.Default(0);
	HX_STACK_FRAME("openfl._v2.display.Graphics","drawTriangles",0x6a666401,"openfl._v2.display.Graphics.drawTriangles","openfl/_v2/display/Graphics.hx",184,0xef949733)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(culling,"culling")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(blendMode,"blendMode")
{
		HX_STACK_LINE(186)
		int cull;		HX_STACK_VAR(cull,"cull");
		HX_STACK_LINE(186)
		if (((culling == null()))){
			HX_STACK_LINE(186)
			cull = (int)0;
		}
		else{
			HX_STACK_LINE(186)
			int _g = culling->__Index();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(186)
			cull = (_g - (int)1);
		}
		HX_STACK_LINE(187)
		::openfl::_v2::display::Graphics_obj::lime_gfx_draw_triangles(this->__handle,vertices,indices,uvtData,cull,colors,blendMode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","endFill",0x49ce1078,"openfl._v2.display.Graphics.endFill","openfl/_v2/display/Graphics.hx",194,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		::openfl::_v2::display::Graphics_obj::lime_gfx_end_fill(this->__handle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::lineBitmapStyle( ::openfl::_v2::display::BitmapData bitmap,::openfl::_v2::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("openfl._v2.display.Graphics","lineBitmapStyle",0x64e2d1a8,"openfl._v2.display.Graphics.lineBitmapStyle","openfl/_v2/display/Graphics.hx",201,0xef949733)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(201)
		::openfl::_v2::display::Graphics_obj::lime_gfx_line_bitmap_fill(this->__handle,bitmap->__handle,matrix,repeat,smooth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::lineGradientStyle( ::openfl::display::GradientType type,Dynamic colors,Dynamic alphas,Dynamic ratios,::openfl::_v2::geom::Matrix matrix,::openfl::_v2::display::SpreadMethod spreadMethod,::openfl::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(0.0);
	HX_STACK_FRAME("openfl._v2.display.Graphics","lineGradientStyle",0x8318c987,"openfl._v2.display.Graphics.lineGradientStyle","openfl/_v2/display/Graphics.hx",206,0xef949733)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(208)
		if (((matrix == null()))){
			HX_STACK_LINE(210)
			::openfl::_v2::geom::Matrix _g = ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(210)
			matrix = _g;
			HX_STACK_LINE(211)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(215)
		int _g1 = type->__Index();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(215)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(215)
		if (((spreadMethod == null()))){
			HX_STACK_LINE(215)
			_g2 = (int)0;
		}
		else{
			HX_STACK_LINE(215)
			_g2 = spreadMethod->__Index();
		}
		HX_STACK_LINE(215)
		int _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(215)
		if (((interpolationMethod == null()))){
			HX_STACK_LINE(215)
			_g3 = (int)0;
		}
		else{
			HX_STACK_LINE(215)
			_g3 = interpolationMethod->__Index();
		}
		HX_STACK_LINE(215)
		::openfl::_v2::display::Graphics_obj::lime_gfx_line_gradient_fill(this->__handle,_g1,colors,alphas,ratios,matrix,_g2,_g3,focalPointRatio);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_pixelHinting,::openfl::_v2::display::LineScaleMode scaleMode,::openfl::_v2::display::CapsStyle caps,::openfl::_v2::display::JointStyle joints,hx::Null< Float >  __o_miterLimit){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1.0);
bool pixelHinting = __o_pixelHinting.Default(false);
Float miterLimit = __o_miterLimit.Default(3);
	HX_STACK_FRAME("openfl._v2.display.Graphics","lineStyle",0xebd4c397,"openfl._v2.display.Graphics.lineStyle","openfl/_v2/display/Graphics.hx",220,0xef949733)
	HX_STACK_THIS(this)
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(pixelHinting,"pixelHinting")
	HX_STACK_ARG(scaleMode,"scaleMode")
	HX_STACK_ARG(caps,"caps")
	HX_STACK_ARG(joints,"joints")
	HX_STACK_ARG(miterLimit,"miterLimit")
{
		HX_STACK_LINE(222)
		int _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(222)
		if (((scaleMode == null()))){
			HX_STACK_LINE(222)
			_g = (int)0;
		}
		else{
			HX_STACK_LINE(222)
			_g = scaleMode->__Index();
		}
		HX_STACK_LINE(222)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(222)
		if (((caps == null()))){
			HX_STACK_LINE(222)
			_g1 = (int)0;
		}
		else{
			HX_STACK_LINE(222)
			_g1 = caps->__Index();
		}
		HX_STACK_LINE(222)
		int _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(222)
		if (((joints == null()))){
			HX_STACK_LINE(222)
			_g2 = (int)0;
		}
		else{
			HX_STACK_LINE(222)
			_g2 = joints->__Index();
		}
		HX_STACK_LINE(222)
		::openfl::_v2::display::Graphics_obj::lime_gfx_line_style(this->__handle,thickness,color,alpha,pixelHinting,_g,_g1,_g2,miterLimit);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","lineTo",0xdf02eb55,"openfl._v2.display.Graphics.lineTo","openfl/_v2/display/Graphics.hx",229,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(229)
		::openfl::_v2::display::Graphics_obj::lime_gfx_line_to(this->__handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl._v2.display.Graphics","moveTo",0xbf0f77b2,"openfl._v2.display.Graphics.moveTo","openfl/_v2/display/Graphics.hx",236,0xef949733)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(236)
		::openfl::_v2::display::Graphics_obj::lime_gfx_move_to(this->__handle,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

int Graphics_obj::TILE_SCALE;

int Graphics_obj::TILE_ROTATION;

int Graphics_obj::TILE_RGB;

int Graphics_obj::TILE_ALPHA;

int Graphics_obj::TILE_TRANS_2x2;

int Graphics_obj::TILE_RECT;

int Graphics_obj::TILE_ORIGIN;

int Graphics_obj::TILE_SMOOTH;

int Graphics_obj::TILE_BLEND_NORMAL;

int Graphics_obj::TILE_BLEND_ADD;

int Graphics_obj::RGBA( int rgb,hx::Null< int >  __o_alpha){
int alpha = __o_alpha.Default(255);
	HX_STACK_FRAME("openfl._v2.display.Graphics","RGBA",0x7c575ffa,"openfl._v2.display.Graphics.RGBA","openfl/_v2/display/Graphics.hx",243,0xef949733)
	HX_STACK_ARG(rgb,"rgb")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(243)
		return (int(rgb) | int((int(alpha) << int((int)24))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,RGBA,return )

Dynamic Graphics_obj::lime_gfx_clear;

Dynamic Graphics_obj::lime_gfx_begin_fill;

Dynamic Graphics_obj::lime_gfx_begin_bitmap_fill;

Dynamic Graphics_obj::lime_gfx_line_bitmap_fill;

Dynamic Graphics_obj::lime_gfx_begin_gradient_fill;

Dynamic Graphics_obj::lime_gfx_line_gradient_fill;

Dynamic Graphics_obj::lime_gfx_end_fill;

Dynamic Graphics_obj::lime_gfx_line_style;

Dynamic Graphics_obj::lime_gfx_move_to;

Dynamic Graphics_obj::lime_gfx_line_to;

Dynamic Graphics_obj::lime_gfx_curve_to;

Dynamic Graphics_obj::lime_gfx_arc_to;

Dynamic Graphics_obj::lime_gfx_draw_ellipse;

Dynamic Graphics_obj::lime_gfx_draw_data;

Dynamic Graphics_obj::lime_gfx_draw_datum;

Dynamic Graphics_obj::lime_gfx_draw_rect;

Dynamic Graphics_obj::lime_gfx_draw_path;

Dynamic Graphics_obj::lime_gfx_draw_tiles;

Dynamic Graphics_obj::lime_gfx_draw_points;

Dynamic Graphics_obj::lime_gfx_draw_round_rect;

Dynamic Graphics_obj::lime_gfx_draw_triangles;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(__handle,"__handle");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__handle,"__handle");
}

Dynamic Graphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RGBA") ) { return RGBA_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"arcTo") ) { return arcTo_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return __handle; }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPoints") ) { return drawPoints_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_gfx_clear") ) { return lime_gfx_clear; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_gfx_arc_to") ) { return lime_gfx_arc_to; }
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_gfx_move_to") ) { return lime_gfx_move_to; }
		if (HX_FIELD_EQ(inName,"lime_gfx_line_to") ) { return lime_gfx_line_to; }
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_gfx_end_fill") ) { return lime_gfx_end_fill; }
		if (HX_FIELD_EQ(inName,"lime_gfx_curve_to") ) { return lime_gfx_curve_to; }
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawGraphicsDatum") ) { return drawGraphicsDatum_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_data") ) { return lime_gfx_draw_data; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_rect") ) { return lime_gfx_draw_rect; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_path") ) { return lime_gfx_draw_path; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_fill") ) { return lime_gfx_begin_fill; }
		if (HX_FIELD_EQ(inName,"lime_gfx_line_style") ) { return lime_gfx_line_style; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_datum") ) { return lime_gfx_draw_datum; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_tiles") ) { return lime_gfx_draw_tiles; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_points") ) { return lime_gfx_draw_points; }
		if (HX_FIELD_EQ(inName,"drawRoundRectComplex") ) { return drawRoundRectComplex_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_ellipse") ) { return lime_gfx_draw_ellipse; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_triangles") ) { return lime_gfx_draw_triangles; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_round_rect") ) { return lime_gfx_draw_round_rect; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gfx_line_bitmap_fill") ) { return lime_gfx_line_bitmap_fill; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_bitmap_fill") ) { return lime_gfx_begin_bitmap_fill; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gfx_line_gradient_fill") ) { return lime_gfx_line_gradient_fill; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_gradient_fill") ) { return lime_gfx_begin_gradient_fill; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { __handle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lime_gfx_clear") ) { lime_gfx_clear=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"lime_gfx_arc_to") ) { lime_gfx_arc_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lime_gfx_move_to") ) { lime_gfx_move_to=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gfx_line_to") ) { lime_gfx_line_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_gfx_end_fill") ) { lime_gfx_end_fill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gfx_curve_to") ) { lime_gfx_curve_to=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_data") ) { lime_gfx_draw_data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_rect") ) { lime_gfx_draw_rect=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_path") ) { lime_gfx_draw_path=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_fill") ) { lime_gfx_begin_fill=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gfx_line_style") ) { lime_gfx_line_style=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_datum") ) { lime_gfx_draw_datum=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_tiles") ) { lime_gfx_draw_tiles=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_points") ) { lime_gfx_draw_points=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_ellipse") ) { lime_gfx_draw_ellipse=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_triangles") ) { lime_gfx_draw_triangles=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_gfx_draw_round_rect") ) { lime_gfx_draw_round_rect=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gfx_line_bitmap_fill") ) { lime_gfx_line_bitmap_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_bitmap_fill") ) { lime_gfx_begin_bitmap_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_gfx_line_gradient_fill") ) { lime_gfx_line_gradient_fill=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gfx_begin_gradient_fill") ) { lime_gfx_begin_gradient_fill=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__handle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TILE_SCALE"),
	HX_CSTRING("TILE_ROTATION"),
	HX_CSTRING("TILE_RGB"),
	HX_CSTRING("TILE_ALPHA"),
	HX_CSTRING("TILE_TRANS_2x2"),
	HX_CSTRING("TILE_RECT"),
	HX_CSTRING("TILE_ORIGIN"),
	HX_CSTRING("TILE_SMOOTH"),
	HX_CSTRING("TILE_BLEND_NORMAL"),
	HX_CSTRING("TILE_BLEND_ADD"),
	HX_CSTRING("RGBA"),
	HX_CSTRING("lime_gfx_clear"),
	HX_CSTRING("lime_gfx_begin_fill"),
	HX_CSTRING("lime_gfx_begin_bitmap_fill"),
	HX_CSTRING("lime_gfx_line_bitmap_fill"),
	HX_CSTRING("lime_gfx_begin_gradient_fill"),
	HX_CSTRING("lime_gfx_line_gradient_fill"),
	HX_CSTRING("lime_gfx_end_fill"),
	HX_CSTRING("lime_gfx_line_style"),
	HX_CSTRING("lime_gfx_move_to"),
	HX_CSTRING("lime_gfx_line_to"),
	HX_CSTRING("lime_gfx_curve_to"),
	HX_CSTRING("lime_gfx_arc_to"),
	HX_CSTRING("lime_gfx_draw_ellipse"),
	HX_CSTRING("lime_gfx_draw_data"),
	HX_CSTRING("lime_gfx_draw_datum"),
	HX_CSTRING("lime_gfx_draw_rect"),
	HX_CSTRING("lime_gfx_draw_path"),
	HX_CSTRING("lime_gfx_draw_tiles"),
	HX_CSTRING("lime_gfx_draw_points"),
	HX_CSTRING("lime_gfx_draw_round_rect"),
	HX_CSTRING("lime_gfx_draw_triangles"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Graphics_obj,__handle),HX_CSTRING("__handle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__handle"),
	HX_CSTRING("arcTo"),
	HX_CSTRING("beginBitmapFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("clear"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("cubicCurveTo"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("drawCircle"),
	HX_CSTRING("drawEllipse"),
	HX_CSTRING("drawGraphicsData"),
	HX_CSTRING("drawGraphicsDatum"),
	HX_CSTRING("drawPoints"),
	HX_CSTRING("drawRect"),
	HX_CSTRING("drawRoundRect"),
	HX_CSTRING("drawRoundRectComplex"),
	HX_CSTRING("drawPath"),
	HX_CSTRING("drawTiles"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("endFill"),
	HX_CSTRING("lineBitmapStyle"),
	HX_CSTRING("lineGradientStyle"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("moveTo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SMOOTH,"TILE_SMOOTH");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_clear,"lime_gfx_clear");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_begin_fill,"lime_gfx_begin_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_begin_bitmap_fill,"lime_gfx_begin_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_line_bitmap_fill,"lime_gfx_line_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_begin_gradient_fill,"lime_gfx_begin_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_line_gradient_fill,"lime_gfx_line_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_end_fill,"lime_gfx_end_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_line_style,"lime_gfx_line_style");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_move_to,"lime_gfx_move_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_line_to,"lime_gfx_line_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_curve_to,"lime_gfx_curve_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_arc_to,"lime_gfx_arc_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_ellipse,"lime_gfx_draw_ellipse");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_data,"lime_gfx_draw_data");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_datum,"lime_gfx_draw_datum");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_rect,"lime_gfx_draw_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_path,"lime_gfx_draw_path");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_tiles,"lime_gfx_draw_tiles");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_points,"lime_gfx_draw_points");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_round_rect,"lime_gfx_draw_round_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::lime_gfx_draw_triangles,"lime_gfx_draw_triangles");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SMOOTH,"TILE_SMOOTH");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_clear,"lime_gfx_clear");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_begin_fill,"lime_gfx_begin_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_begin_bitmap_fill,"lime_gfx_begin_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_line_bitmap_fill,"lime_gfx_line_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_begin_gradient_fill,"lime_gfx_begin_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_line_gradient_fill,"lime_gfx_line_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_end_fill,"lime_gfx_end_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_line_style,"lime_gfx_line_style");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_move_to,"lime_gfx_move_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_line_to,"lime_gfx_line_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_curve_to,"lime_gfx_curve_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_arc_to,"lime_gfx_arc_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_ellipse,"lime_gfx_draw_ellipse");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_data,"lime_gfx_draw_data");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_datum,"lime_gfx_draw_datum");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_rect,"lime_gfx_draw_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_path,"lime_gfx_draw_path");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_tiles,"lime_gfx_draw_tiles");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_points,"lime_gfx_draw_points");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_round_rect,"lime_gfx_draw_round_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::lime_gfx_draw_triangles,"lime_gfx_draw_triangles");
};

#endif

Class Graphics_obj::__mClass;

void Graphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.display.Graphics"), hx::TCanCast< Graphics_obj> ,sStaticFields,sMemberFields,
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

void Graphics_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_SMOOTH= (int)4096;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	lime_gfx_clear= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_clear"),(int)1);
	lime_gfx_begin_fill= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_begin_fill"),(int)3);
	lime_gfx_begin_bitmap_fill= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_begin_bitmap_fill"),(int)5);
	lime_gfx_line_bitmap_fill= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_line_bitmap_fill"),(int)5);
	lime_gfx_begin_gradient_fill= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_begin_gradient_fill"),(int)-1);
	lime_gfx_line_gradient_fill= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_line_gradient_fill"),(int)-1);
	lime_gfx_end_fill= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_end_fill"),(int)1);
	lime_gfx_line_style= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_line_style"),(int)-1);
	lime_gfx_move_to= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_move_to"),(int)3);
	lime_gfx_line_to= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_line_to"),(int)3);
	lime_gfx_curve_to= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_curve_to"),(int)5);
	lime_gfx_arc_to= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_arc_to"),(int)5);
	lime_gfx_draw_ellipse= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_draw_ellipse"),(int)5);
	lime_gfx_draw_data= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_draw_data"),(int)2);
	lime_gfx_draw_datum= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_draw_datum"),(int)2);
	lime_gfx_draw_rect= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_draw_rect"),(int)5);
	lime_gfx_draw_path= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_draw_path"),(int)4);
	lime_gfx_draw_tiles= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_draw_tiles"),(int)5);
	lime_gfx_draw_points= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_draw_points"),(int)-1);
	lime_gfx_draw_round_rect= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_draw_round_rect"),(int)-1);
	lime_gfx_draw_triangles= ::openfl::_v2::Lib_obj::load(HX_CSTRING("lime"),HX_CSTRING("lime_gfx_draw_triangles"),(int)-1);
}

} // end namespace openfl
} // end namespace _v2
} // end namespace display
