// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_swf_ShapeCommand
#include <openfl/_internal/swf/ShapeCommand.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace openfl{
namespace _internal{
namespace swf{

::openfl::_internal::swf::ShapeCommand ShapeCommand_obj::BeginBitmapFill(int bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth)
{
	return hx::CreateEnum< ShapeCommand_obj >(HX_("BeginBitmapFill",7b,d1,93,ca),0,4)->_hx_init(0,bitmap)->_hx_init(1,matrix)->_hx_init(2,repeat)->_hx_init(3,smooth);
}

::openfl::_internal::swf::ShapeCommand ShapeCommand_obj::BeginFill(int color,Float alpha)
{
	return hx::CreateEnum< ShapeCommand_obj >(HX_("BeginFill",2c,8d,68,2e),1,2)->_hx_init(0,color)->_hx_init(1,alpha);
}

::openfl::_internal::swf::ShapeCommand ShapeCommand_obj::BeginGradientFill( ::Dynamic fillType,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio)
{
	return hx::CreateEnum< ShapeCommand_obj >(HX_("BeginGradientFill",3c,fc,88,cf),2,8)->_hx_init(0,fillType)->_hx_init(1,colors)->_hx_init(2,alphas)->_hx_init(3,ratios)->_hx_init(4,matrix)->_hx_init(5,spreadMethod)->_hx_init(6,interpolationMethod)->_hx_init(7,focalPointRatio);
}

::openfl::_internal::swf::ShapeCommand ShapeCommand_obj::CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY)
{
	return hx::CreateEnum< ShapeCommand_obj >(HX_("CurveTo",ea,87,d9,9b),3,4)->_hx_init(0,controlX)->_hx_init(1,controlY)->_hx_init(2,anchorX)->_hx_init(3,anchorY);
}

::openfl::_internal::swf::ShapeCommand ShapeCommand_obj::EndFill;

::openfl::_internal::swf::ShapeCommand ShapeCommand_obj::LineStyle( ::Dynamic thickness, ::Dynamic color, ::Dynamic alpha, ::Dynamic pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints, ::Dynamic miterLimit)
{
	return hx::CreateEnum< ShapeCommand_obj >(HX_("LineStyle",7d,88,eb,6c),5,8)->_hx_init(0,thickness)->_hx_init(1,color)->_hx_init(2,alpha)->_hx_init(3,pixelHinting)->_hx_init(4,scaleMode)->_hx_init(5,caps)->_hx_init(6,joints)->_hx_init(7,miterLimit);
}

::openfl::_internal::swf::ShapeCommand ShapeCommand_obj::LineTo(Float x,Float y)
{
	return hx::CreateEnum< ShapeCommand_obj >(HX_("LineTo",af,ba,34,21),6,2)->_hx_init(0,x)->_hx_init(1,y);
}

::openfl::_internal::swf::ShapeCommand ShapeCommand_obj::MoveTo(Float x,Float y)
{
	return hx::CreateEnum< ShapeCommand_obj >(HX_("MoveTo",0c,47,41,01),7,2)->_hx_init(0,x)->_hx_init(1,y);
}

bool ShapeCommand_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BeginBitmapFill",7b,d1,93,ca)) { outValue = ShapeCommand_obj::BeginBitmapFill_dyn(); return true; }
	if (inName==HX_("BeginFill",2c,8d,68,2e)) { outValue = ShapeCommand_obj::BeginFill_dyn(); return true; }
	if (inName==HX_("BeginGradientFill",3c,fc,88,cf)) { outValue = ShapeCommand_obj::BeginGradientFill_dyn(); return true; }
	if (inName==HX_("CurveTo",ea,87,d9,9b)) { outValue = ShapeCommand_obj::CurveTo_dyn(); return true; }
	if (inName==HX_("EndFill",de,af,31,f3)) { outValue = ShapeCommand_obj::EndFill; return true; }
	if (inName==HX_("LineStyle",7d,88,eb,6c)) { outValue = ShapeCommand_obj::LineStyle_dyn(); return true; }
	if (inName==HX_("LineTo",af,ba,34,21)) { outValue = ShapeCommand_obj::LineTo_dyn(); return true; }
	if (inName==HX_("MoveTo",0c,47,41,01)) { outValue = ShapeCommand_obj::MoveTo_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ShapeCommand_obj)

int ShapeCommand_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BeginBitmapFill",7b,d1,93,ca)) return 0;
	if (inName==HX_("BeginFill",2c,8d,68,2e)) return 1;
	if (inName==HX_("BeginGradientFill",3c,fc,88,cf)) return 2;
	if (inName==HX_("CurveTo",ea,87,d9,9b)) return 3;
	if (inName==HX_("EndFill",de,af,31,f3)) return 4;
	if (inName==HX_("LineStyle",7d,88,eb,6c)) return 5;
	if (inName==HX_("LineTo",af,ba,34,21)) return 6;
	if (inName==HX_("MoveTo",0c,47,41,01)) return 7;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ShapeCommand_obj,BeginBitmapFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeCommand_obj,BeginFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(ShapeCommand_obj,BeginGradientFill,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(ShapeCommand_obj,CurveTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC8(ShapeCommand_obj,LineStyle,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeCommand_obj,LineTo,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ShapeCommand_obj,MoveTo,return)

int ShapeCommand_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BeginBitmapFill",7b,d1,93,ca)) return 4;
	if (inName==HX_("BeginFill",2c,8d,68,2e)) return 2;
	if (inName==HX_("BeginGradientFill",3c,fc,88,cf)) return 8;
	if (inName==HX_("CurveTo",ea,87,d9,9b)) return 4;
	if (inName==HX_("EndFill",de,af,31,f3)) return 0;
	if (inName==HX_("LineStyle",7d,88,eb,6c)) return 8;
	if (inName==HX_("LineTo",af,ba,34,21)) return 2;
	if (inName==HX_("MoveTo",0c,47,41,01)) return 2;
	return super::__FindArgCount(inName);
}

hx::Val ShapeCommand_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BeginBitmapFill",7b,d1,93,ca)) return BeginBitmapFill_dyn();
	if (inName==HX_("BeginFill",2c,8d,68,2e)) return BeginFill_dyn();
	if (inName==HX_("BeginGradientFill",3c,fc,88,cf)) return BeginGradientFill_dyn();
	if (inName==HX_("CurveTo",ea,87,d9,9b)) return CurveTo_dyn();
	if (inName==HX_("EndFill",de,af,31,f3)) return EndFill;
	if (inName==HX_("LineStyle",7d,88,eb,6c)) return LineStyle_dyn();
	if (inName==HX_("LineTo",af,ba,34,21)) return LineTo_dyn();
	if (inName==HX_("MoveTo",0c,47,41,01)) return MoveTo_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ShapeCommand_obj_sStaticFields[] = {
	HX_("BeginBitmapFill",7b,d1,93,ca),
	HX_("BeginFill",2c,8d,68,2e),
	HX_("BeginGradientFill",3c,fc,88,cf),
	HX_("CurveTo",ea,87,d9,9b),
	HX_("EndFill",de,af,31,f3),
	HX_("LineStyle",7d,88,eb,6c),
	HX_("LineTo",af,ba,34,21),
	HX_("MoveTo",0c,47,41,01),
	::String(null())
};

static void ShapeCommand_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShapeCommand_obj::EndFill,"EndFill");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShapeCommand_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShapeCommand_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShapeCommand_obj::EndFill,"EndFill");
};
#endif

hx::Class ShapeCommand_obj::__mClass;

Dynamic __Create_ShapeCommand_obj() { return new ShapeCommand_obj; }

void ShapeCommand_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._internal.swf.ShapeCommand","\x26","\xcf","\x25","\xf0"), hx::TCanCast< ShapeCommand_obj >,ShapeCommand_obj_sStaticFields,0,
	&__Create_ShapeCommand_obj, &__Create,
	&super::__SGetClass(), &CreateShapeCommand_obj, ShapeCommand_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , ShapeCommand_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ShapeCommand_obj::__GetStatic;
}

void ShapeCommand_obj::__boot()
{
EndFill = hx::CreateEnum< ShapeCommand_obj >(HX_HCSTRING("EndFill","\xde","\xaf","\x31","\xf3"),4,0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace swf
