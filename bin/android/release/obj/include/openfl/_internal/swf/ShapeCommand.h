// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__internal_swf_ShapeCommand
#define INCLUDED_openfl__internal_swf_ShapeCommand

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,swf,ShapeCommand)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace openfl{
namespace _internal{
namespace swf{


class ShapeCommand_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ShapeCommand_obj OBJ_;

	public:
		ShapeCommand_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("openfl._internal.swf.ShapeCommand","\x26","\xcf","\x25","\xf0"); }
		::String __ToString() const { return HX_HCSTRING("ShapeCommand.","\xa4","\x28","\x4e","\x19") + _hx_tag; }

		static ::openfl::_internal::swf::ShapeCommand BeginBitmapFill(int bitmap, ::openfl::geom::Matrix matrix,bool repeat,bool smooth);
		static ::Dynamic BeginBitmapFill_dyn();
		static ::openfl::_internal::swf::ShapeCommand BeginFill(int color,Float alpha);
		static ::Dynamic BeginFill_dyn();
		static ::openfl::_internal::swf::ShapeCommand BeginGradientFill( ::Dynamic fillType,::Array< int > colors,::Array< Float > alphas,::Array< int > ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio);
		static ::Dynamic BeginGradientFill_dyn();
		static ::openfl::_internal::swf::ShapeCommand CurveTo(Float controlX,Float controlY,Float anchorX,Float anchorY);
		static ::Dynamic CurveTo_dyn();
		static ::openfl::_internal::swf::ShapeCommand EndFill;
		static inline ::openfl::_internal::swf::ShapeCommand EndFill_dyn() { return EndFill; }
		static ::openfl::_internal::swf::ShapeCommand LineStyle( ::Dynamic thickness, ::Dynamic color, ::Dynamic alpha, ::Dynamic pixelHinting, ::Dynamic scaleMode, ::Dynamic caps, ::Dynamic joints, ::Dynamic miterLimit);
		static ::Dynamic LineStyle_dyn();
		static ::openfl::_internal::swf::ShapeCommand LineTo(Float x,Float y);
		static ::Dynamic LineTo_dyn();
		static ::openfl::_internal::swf::ShapeCommand MoveTo(Float x,Float y);
		static ::Dynamic MoveTo_dyn();
};

} // end namespace openfl
} // end namespace _internal
} // end namespace swf

#endif /* INCLUDED_openfl__internal_swf_ShapeCommand */ 
