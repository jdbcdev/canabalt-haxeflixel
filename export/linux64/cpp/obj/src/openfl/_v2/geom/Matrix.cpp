#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace _v2{
namespace geom{

Void Matrix_obj::__construct(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{
HX_STACK_FRAME("openfl._v2.geom.Matrix","new",0xc50a3f14,"openfl._v2.geom.Matrix.new","openfl/_v2/geom/Matrix.hx",18,0x64646abd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_a,"a")
HX_STACK_ARG(__o_b,"b")
HX_STACK_ARG(__o_c,"c")
HX_STACK_ARG(__o_d,"d")
HX_STACK_ARG(__o_tx,"tx")
HX_STACK_ARG(__o_ty,"ty")
Float a = __o_a.Default(1);
Float b = __o_b.Default(0);
Float c = __o_c.Default(0);
Float d = __o_d.Default(1);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
{
	HX_STACK_LINE(20)
	this->a = a;
	HX_STACK_LINE(21)
	this->b = b;
	HX_STACK_LINE(22)
	this->c = c;
	HX_STACK_LINE(23)
	this->d = d;
	HX_STACK_LINE(24)
	this->tx = tx;
	HX_STACK_LINE(25)
	this->ty = ty;
}
;
	return null();
}

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(hx::Null< Float >  __o_a,hx::Null< Float >  __o_b,hx::Null< Float >  __o_c,hx::Null< Float >  __o_d,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(__o_a,__o_b,__o_c,__o_d,__o_tx,__o_ty);
	return result;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > result = new Matrix_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::openfl::_v2::geom::Matrix Matrix_obj::clone( ){
	HX_STACK_FRAME("openfl._v2.geom.Matrix","clone",0x7a999711,"openfl._v2.geom.Matrix.clone","openfl/_v2/geom/Matrix.hx",32,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return ::openfl::_v2::geom::Matrix_obj::__new(this->a,this->b,this->c,this->d,this->tx,this->ty);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

Void Matrix_obj::concat( ::openfl::_v2::geom::Matrix m){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","concat",0x854cc2e0,"openfl._v2.geom.Matrix.concat","openfl/_v2/geom/Matrix.hx",37,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(39)
		Float a1 = ((this->a * m->a) + (this->b * m->c));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(40)
		this->b = ((this->a * m->b) + (this->b * m->d));
		HX_STACK_LINE(41)
		this->a = a1;
		HX_STACK_LINE(43)
		Float c1 = ((this->c * m->a) + (this->d * m->c));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(44)
		this->d = ((this->c * m->b) + (this->d * m->d));
		HX_STACK_LINE(46)
		this->c = c1;
		HX_STACK_LINE(48)
		Float tx1 = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(49)
		this->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
		HX_STACK_LINE(50)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

Void Matrix_obj::copyColumnFrom( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","copyColumnFrom",0x6172fd41,"openfl._v2.geom.Matrix.copyColumnFrom","openfl/_v2/geom/Matrix.hx",57,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(57)
		if (((column > (int)2))){
			HX_STACK_LINE(59)
			HX_STACK_DO_THROW(((HX_CSTRING("Column ") + column) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(61)
			if (((column == (int)0))){
				HX_STACK_LINE(63)
				this->a = vector3D->x;
				HX_STACK_LINE(64)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(66)
				if (((column == (int)1))){
					HX_STACK_LINE(68)
					this->b = vector3D->x;
					HX_STACK_LINE(69)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(73)
					this->tx = vector3D->x;
					HX_STACK_LINE(74)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnFrom,(void))

Void Matrix_obj::copyColumnTo( int column,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","copyColumnTo",0x1f5e4992,"openfl._v2.geom.Matrix.copyColumnTo","openfl/_v2/geom/Matrix.hx",83,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(column,"column")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(83)
		if (((column > (int)2))){
			HX_STACK_LINE(85)
			HX_STACK_DO_THROW(((HX_CSTRING("Column ") + column) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(87)
			if (((column == (int)0))){
				HX_STACK_LINE(89)
				vector3D->x = this->a;
				HX_STACK_LINE(90)
				vector3D->y = this->c;
				HX_STACK_LINE(91)
				vector3D->z = (int)0;
			}
			else{
				HX_STACK_LINE(93)
				if (((column == (int)1))){
					HX_STACK_LINE(95)
					vector3D->x = this->b;
					HX_STACK_LINE(96)
					vector3D->y = this->d;
					HX_STACK_LINE(97)
					vector3D->z = (int)0;
				}
				else{
					HX_STACK_LINE(101)
					vector3D->x = this->tx;
					HX_STACK_LINE(102)
					vector3D->y = this->ty;
					HX_STACK_LINE(103)
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyColumnTo,(void))

Void Matrix_obj::copyFrom( ::openfl::_v2::geom::Matrix other){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","copyFrom",0x69d8d08b,"openfl._v2.geom.Matrix.copyFrom","openfl/_v2/geom/Matrix.hx",110,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(other,"other")
		HX_STACK_LINE(112)
		this->a = other->a;
		HX_STACK_LINE(113)
		this->b = other->b;
		HX_STACK_LINE(114)
		this->c = other->c;
		HX_STACK_LINE(115)
		this->d = other->d;
		HX_STACK_LINE(116)
		this->tx = other->tx;
		HX_STACK_LINE(117)
		this->ty = other->ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,copyFrom,(void))

Void Matrix_obj::copyRowFrom( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","copyRowFrom",0x671d8823,"openfl._v2.geom.Matrix.copyRowFrom","openfl/_v2/geom/Matrix.hx",124,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(124)
		if (((row > (int)2))){
			HX_STACK_LINE(126)
			HX_STACK_DO_THROW(((HX_CSTRING("Row ") + row) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(128)
			if (((row == (int)0))){
				HX_STACK_LINE(130)
				this->a = vector3D->x;
				HX_STACK_LINE(131)
				this->c = vector3D->y;
			}
			else{
				HX_STACK_LINE(133)
				if (((row == (int)1))){
					HX_STACK_LINE(135)
					this->b = vector3D->x;
					HX_STACK_LINE(136)
					this->d = vector3D->y;
				}
				else{
					HX_STACK_LINE(140)
					this->tx = vector3D->x;
					HX_STACK_LINE(141)
					this->ty = vector3D->y;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowFrom,(void))

Void Matrix_obj::copyRowTo( int row,::openfl::geom::Vector3D vector3D){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","copyRowTo",0x1ab6f7f4,"openfl._v2.geom.Matrix.copyRowTo","openfl/_v2/geom/Matrix.hx",150,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(row,"row")
		HX_STACK_ARG(vector3D,"vector3D")
		HX_STACK_LINE(150)
		if (((row > (int)2))){
			HX_STACK_LINE(152)
			HX_STACK_DO_THROW(((HX_CSTRING("Row ") + row) + HX_CSTRING(" out of bounds (2)")));
		}
		else{
			HX_STACK_LINE(154)
			if (((row == (int)0))){
				HX_STACK_LINE(156)
				vector3D->x = this->a;
				HX_STACK_LINE(157)
				vector3D->y = this->b;
				HX_STACK_LINE(158)
				vector3D->z = this->tx;
			}
			else{
				HX_STACK_LINE(160)
				if (((row == (int)1))){
					HX_STACK_LINE(162)
					vector3D->x = this->c;
					HX_STACK_LINE(163)
					vector3D->y = this->d;
					HX_STACK_LINE(164)
					vector3D->z = this->ty;
				}
				else{
					HX_STACK_LINE(168)
					vector3D->x = (int)0;
					HX_STACK_LINE(168)
					vector3D->y = (int)0;
					HX_STACK_LINE(168)
					vector3D->z = (int)1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,copyRowTo,(void))

Void Matrix_obj::createBox( Float scaleX,Float scaleY,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("openfl._v2.geom.Matrix","createBox",0xf12d0223,"openfl._v2.geom.Matrix.createBox","openfl/_v2/geom/Matrix.hx",175,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scaleX,"scaleX")
	HX_STACK_ARG(scaleY,"scaleY")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(182)
		if (((rotation != (int)0))){
			HX_STACK_LINE(184)
			Float cos = ::Math_obj::cos(rotation);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(185)
			Float sin = ::Math_obj::sin(rotation);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(187)
			this->a = (cos * scaleX);
			HX_STACK_LINE(188)
			this->b = (sin * scaleY);
			HX_STACK_LINE(189)
			this->c = (-(sin) * scaleX);
			HX_STACK_LINE(190)
			this->d = (cos * scaleY);
		}
		else{
			HX_STACK_LINE(194)
			this->a = scaleX;
			HX_STACK_LINE(195)
			this->b = (int)0;
			HX_STACK_LINE(196)
			this->c = (int)0;
			HX_STACK_LINE(197)
			this->d = scaleY;
		}
		HX_STACK_LINE(201)
		this->tx = tx;
		HX_STACK_LINE(202)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

Void Matrix_obj::createGradientBox( Float width,Float height,hx::Null< Float >  __o_rotation,hx::Null< Float >  __o_tx,hx::Null< Float >  __o_ty){
Float rotation = __o_rotation.Default(0);
Float tx = __o_tx.Default(0);
Float ty = __o_ty.Default(0);
	HX_STACK_FRAME("openfl._v2.geom.Matrix","createGradientBox",0x5c882e13,"openfl._v2.geom.Matrix.createGradientBox","openfl/_v2/geom/Matrix.hx",207,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(rotation,"rotation")
	HX_STACK_ARG(tx,"tx")
	HX_STACK_ARG(ty,"ty")
{
		HX_STACK_LINE(209)
		this->a = (Float(width) / Float(1638.4));
		HX_STACK_LINE(210)
		this->d = (Float(height) / Float(1638.4));
		HX_STACK_LINE(212)
		if (((rotation != 0.0))){
			HX_STACK_LINE(214)
			Float cos = ::Math_obj::cos(rotation);		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(215)
			Float sin = ::Math_obj::sin(rotation);		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(216)
			this->b = (sin * this->d);
			HX_STACK_LINE(217)
			this->c = (-(sin) * this->a);
			HX_STACK_LINE(218)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(219)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(223)
			Float _g = this->c = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(223)
			this->b = _g;
		}
		HX_STACK_LINE(227)
		this->tx = (tx + (Float(width) / Float((int)2)));
		HX_STACK_LINE(228)
		this->ty = (ty + (Float(height) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

::openfl::_v2::geom::Point Matrix_obj::deltaTransformPoint( ::openfl::_v2::geom::Point point){
	HX_STACK_FRAME("openfl._v2.geom.Matrix","deltaTransformPoint",0xfe596410,"openfl._v2.geom.Matrix.deltaTransformPoint","openfl/_v2/geom/Matrix.hx",235,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(235)
	return ::openfl::_v2::geom::Point_obj::__new(((point->x * this->a) + (point->y * this->c)),((point->x * this->b) + (point->y * this->d)));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

bool Matrix_obj::equals( Dynamic matrix){
	HX_STACK_FRAME("openfl._v2.geom.Matrix","equals",0x7d6fa80b,"openfl._v2.geom.Matrix.equals","openfl/_v2/geom/Matrix.hx",242,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_LINE(242)
	return (bool((bool((bool((bool((bool((bool((matrix != null())) && bool((this->tx == matrix->__Field(HX_CSTRING("tx"),true))))) && bool((this->ty == matrix->__Field(HX_CSTRING("ty"),true))))) && bool((this->a == matrix->__Field(HX_CSTRING("a"),true))))) && bool((this->b == matrix->__Field(HX_CSTRING("b"),true))))) && bool((this->c == matrix->__Field(HX_CSTRING("c"),true))))) && bool((this->d == matrix->__Field(HX_CSTRING("d"),true))));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,equals,return )

Void Matrix_obj::identity( ){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","identity",0x5aa70a0a,"openfl._v2.geom.Matrix.identity","openfl/_v2/geom/Matrix.hx",247,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(249)
		this->a = (int)1;
		HX_STACK_LINE(250)
		this->b = (int)0;
		HX_STACK_LINE(251)
		this->c = (int)0;
		HX_STACK_LINE(252)
		this->d = (int)1;
		HX_STACK_LINE(253)
		this->tx = (int)0;
		HX_STACK_LINE(254)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

::openfl::_v2::geom::Matrix Matrix_obj::invert( ){
	HX_STACK_FRAME("openfl._v2.geom.Matrix","invert",0x5d55a0e2,"openfl._v2.geom.Matrix.invert","openfl/_v2/geom/Matrix.hx",259,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	Float norm = ((this->a * this->d) - (this->b * this->c));		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(263)
	if (((norm == (int)0))){
		HX_STACK_LINE(265)
		Float _g = this->d = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(265)
		Float _g1 = this->c = _g;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(265)
		Float _g2 = this->b = _g1;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(265)
		this->a = _g2;
		HX_STACK_LINE(266)
		this->tx = -(this->tx);
		HX_STACK_LINE(267)
		this->ty = -(this->ty);
	}
	else{
		HX_STACK_LINE(271)
		norm = (Float(1.0) / Float(norm));
		HX_STACK_LINE(272)
		Float a1 = (this->d * norm);		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(273)
		this->d = (this->a * norm);
		HX_STACK_LINE(274)
		this->a = a1;
		HX_STACK_LINE(275)
		hx::MultEq(this->b,-(norm));
		HX_STACK_LINE(276)
		hx::MultEq(this->c,-(norm));
		HX_STACK_LINE(278)
		Float tx1 = ((-(this->a) * this->tx) - (this->c * this->ty));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(279)
		this->ty = ((-(this->b) * this->tx) - (this->d * this->ty));
		HX_STACK_LINE(280)
		this->tx = tx1;
	}
	HX_STACK_LINE(284)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

::openfl::_v2::geom::Matrix Matrix_obj::mult( ::openfl::_v2::geom::Matrix m){
	HX_STACK_FRAME("openfl._v2.geom.Matrix","mult",0xa34fd6bc,"openfl._v2.geom.Matrix.mult","openfl/_v2/geom/Matrix.hx",289,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(291)
	::openfl::_v2::geom::Matrix result = ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(293)
	result->a = ((this->a * m->a) + (this->b * m->c));
	HX_STACK_LINE(294)
	result->b = ((this->a * m->b) + (this->b * m->d));
	HX_STACK_LINE(295)
	result->c = ((this->c * m->a) + (this->d * m->c));
	HX_STACK_LINE(296)
	result->d = ((this->c * m->b) + (this->d * m->d));
	HX_STACK_LINE(298)
	result->tx = (((this->tx * m->a) + (this->ty * m->c)) + m->tx);
	HX_STACK_LINE(299)
	result->ty = (((this->tx * m->b) + (this->ty * m->d)) + m->ty);
	HX_STACK_LINE(301)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,mult,return )

Void Matrix_obj::rotate( Float angle){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","rotate",0x889d0027,"openfl._v2.geom.Matrix.rotate","openfl/_v2/geom/Matrix.hx",306,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(308)
		Float cos = ::Math_obj::cos(angle);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(309)
		Float sin = ::Math_obj::sin(angle);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(311)
		Float a1 = ((this->a * cos) - (this->b * sin));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(312)
		this->b = ((this->a * sin) + (this->b * cos));
		HX_STACK_LINE(313)
		this->a = a1;
		HX_STACK_LINE(315)
		Float c1 = ((this->c * cos) - (this->d * sin));		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(316)
		this->d = ((this->c * sin) + (this->d * cos));
		HX_STACK_LINE(317)
		this->c = c1;
		HX_STACK_LINE(319)
		Float tx1 = ((this->tx * cos) - (this->ty * sin));		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(320)
		this->ty = ((this->tx * sin) + (this->ty * cos));
		HX_STACK_LINE(321)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

Void Matrix_obj::scale( Float x,Float y){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","scale",0xab05523e,"openfl._v2.geom.Matrix.scale","openfl/_v2/geom/Matrix.hx",326,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(328)
		hx::MultEq(this->a,x);
		HX_STACK_LINE(329)
		hx::MultEq(this->b,y);
		HX_STACK_LINE(331)
		hx::MultEq(this->c,x);
		HX_STACK_LINE(332)
		hx::MultEq(this->d,y);
		HX_STACK_LINE(334)
		hx::MultEq(this->tx,x);
		HX_STACK_LINE(335)
		hx::MultEq(this->ty,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

Void Matrix_obj::setRotation( Float angle,hx::Null< Float >  __o_scale){
Float scale = __o_scale.Default(1);
	HX_STACK_FRAME("openfl._v2.geom.Matrix","setRotation",0xb07949b4,"openfl._v2.geom.Matrix.setRotation","openfl/_v2/geom/Matrix.hx",340,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(scale,"scale")
{
		HX_STACK_LINE(342)
		Float _g = ::Math_obj::cos(angle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(342)
		Float _g1 = (_g * scale);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(342)
		this->a = _g1;
		HX_STACK_LINE(343)
		Float _g2 = ::Math_obj::sin(angle);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(343)
		Float _g3 = (_g2 * scale);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(343)
		this->c = _g3;
		HX_STACK_LINE(344)
		this->b = -(this->c);
		HX_STACK_LINE(345)
		this->d = this->a;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

Void Matrix_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","setTo",0xac661571,"openfl._v2.geom.Matrix.setTo","openfl/_v2/geom/Matrix.hx",350,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(352)
		this->a = a;
		HX_STACK_LINE(353)
		this->b = b;
		HX_STACK_LINE(354)
		this->c = c;
		HX_STACK_LINE(355)
		this->d = d;
		HX_STACK_LINE(356)
		this->tx = tx;
		HX_STACK_LINE(357)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

::String Matrix_obj::toString( ){
	HX_STACK_FRAME("openfl._v2.geom.Matrix","toString",0xd9e69578,"openfl._v2.geom.Matrix.toString","openfl/_v2/geom/Matrix.hx",364,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_LINE(364)
	return ((((((((((((HX_CSTRING("(a=") + this->a) + HX_CSTRING(", b=")) + this->b) + HX_CSTRING(", c=")) + this->c) + HX_CSTRING(", d=")) + this->d) + HX_CSTRING(", tx=")) + this->tx) + HX_CSTRING(", ty=")) + this->ty) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,toString,return )

::openfl::_v2::geom::Point Matrix_obj::transformPoint( ::openfl::_v2::geom::Point point){
	HX_STACK_FRAME("openfl._v2.geom.Matrix","transformPoint",0x63cf3510,"openfl._v2.geom.Matrix.transformPoint","openfl/_v2/geom/Matrix.hx",371,0x64646abd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(371)
	return ::openfl::_v2::geom::Point_obj::__new((((point->x * this->a) + (point->y * this->c)) + this->tx),(((point->x * this->b) + (point->y * this->d)) + this->ty));
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

Void Matrix_obj::translate( Float x,Float y){
{
		HX_STACK_FRAME("openfl._v2.geom.Matrix","translate",0xf0d44502,"openfl._v2.geom.Matrix.translate","openfl/_v2/geom/Matrix.hx",376,0x64646abd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(378)
		hx::AddEq(this->tx,x);
		HX_STACK_LINE(379)
		hx::AddEq(this->ty,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))


Matrix_obj::Matrix_obj()
{
}

Dynamic Matrix_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"copyRowTo") ) { return copyRowTo_dyn(); }
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyRowFrom") ) { return copyRowFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"copyColumnTo") ) { return copyColumnTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"copyColumnFrom") ) { return copyColumnFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return deltaTransformPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

static int __id_a = __hxcpp_field_to_id("a");
static int __id_b = __hxcpp_field_to_id("b");
static int __id_c = __hxcpp_field_to_id("c");
static int __id_d = __hxcpp_field_to_id("d");
static int __id_tx = __hxcpp_field_to_id("tx");
static int __id_ty = __hxcpp_field_to_id("ty");
static int __id_clone = __hxcpp_field_to_id("clone");
static int __id_concat = __hxcpp_field_to_id("concat");
static int __id_copyColumnFrom = __hxcpp_field_to_id("copyColumnFrom");
static int __id_copyColumnTo = __hxcpp_field_to_id("copyColumnTo");
static int __id_copyFrom = __hxcpp_field_to_id("copyFrom");
static int __id_copyRowFrom = __hxcpp_field_to_id("copyRowFrom");
static int __id_copyRowTo = __hxcpp_field_to_id("copyRowTo");
static int __id_createBox = __hxcpp_field_to_id("createBox");
static int __id_createGradientBox = __hxcpp_field_to_id("createGradientBox");
static int __id_deltaTransformPoint = __hxcpp_field_to_id("deltaTransformPoint");
static int __id_equals = __hxcpp_field_to_id("equals");
static int __id_identity = __hxcpp_field_to_id("identity");
static int __id_invert = __hxcpp_field_to_id("invert");
static int __id_mult = __hxcpp_field_to_id("mult");
static int __id_rotate = __hxcpp_field_to_id("rotate");
static int __id_scale = __hxcpp_field_to_id("scale");
static int __id_setRotation = __hxcpp_field_to_id("setRotation");
static int __id_setTo = __hxcpp_field_to_id("setTo");
static int __id_toString = __hxcpp_field_to_id("toString");
static int __id_transformPoint = __hxcpp_field_to_id("transformPoint");
static int __id_translate = __hxcpp_field_to_id("translate");


double Matrix_obj::__INumField(int inFieldID)
{
	if (inFieldID==__id_a) return a;
	if (inFieldID==__id_b) return b;
	if (inFieldID==__id_c) return c;
	if (inFieldID==__id_d) return d;
	if (inFieldID==__id_tx) return tx;
	if (inFieldID==__id_ty) return ty;
	return super::__INumField(inFieldID);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("b"));
	outFields->push(HX_CSTRING("c"));
	outFields->push(HX_CSTRING("d"));
	outFields->push(HX_CSTRING("tx"));
	outFields->push(HX_CSTRING("ty"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_CSTRING("a")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_CSTRING("b")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_CSTRING("c")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_CSTRING("d")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,tx),HX_CSTRING("tx")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,ty),HX_CSTRING("ty")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("a"),
	HX_CSTRING("b"),
	HX_CSTRING("c"),
	HX_CSTRING("d"),
	HX_CSTRING("tx"),
	HX_CSTRING("ty"),
	HX_CSTRING("clone"),
	HX_CSTRING("concat"),
	HX_CSTRING("copyColumnFrom"),
	HX_CSTRING("copyColumnTo"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("copyRowFrom"),
	HX_CSTRING("copyRowTo"),
	HX_CSTRING("createBox"),
	HX_CSTRING("createGradientBox"),
	HX_CSTRING("deltaTransformPoint"),
	HX_CSTRING("equals"),
	HX_CSTRING("identity"),
	HX_CSTRING("invert"),
	HX_CSTRING("mult"),
	HX_CSTRING("rotate"),
	HX_CSTRING("scale"),
	HX_CSTRING("setRotation"),
	HX_CSTRING("setTo"),
	HX_CSTRING("toString"),
	HX_CSTRING("transformPoint"),
	HX_CSTRING("translate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#endif

Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._v2.geom.Matrix"), hx::TCanCast< Matrix_obj> ,sStaticFields,sMemberFields,
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

void Matrix_obj::__boot()
{
}

} // end namespace openfl
} // end namespace _v2
} // end namespace geom
