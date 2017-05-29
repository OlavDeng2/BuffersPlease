// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoBitmap
#define INCLUDED_openfl__internal_renderer_cairo_CairoBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,cairo,CairoBitmap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace cairo{


class HXCPP_CLASS_ATTRIBUTES CairoBitmap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CairoBitmap_obj OBJ_;
		CairoBitmap_obj();

	public:
		enum { _hx_ClassId = 0x01a7cfda };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.cairo.CairoBitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.cairo.CairoBitmap"); }

		hx::ObjectPtr< CairoBitmap_obj > __new() {
			hx::ObjectPtr< CairoBitmap_obj > __this = new CairoBitmap_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CairoBitmap_obj > __alloc(hx::Ctx *_hx_ctx) {
			CairoBitmap_obj *__this = (CairoBitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CairoBitmap_obj), false, "openfl._internal.renderer.cairo.CairoBitmap"));
			*(void **)__this = CairoBitmap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CairoBitmap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CairoBitmap","\x77","\x62","\x57","\xc1"); }

		static void render( ::openfl::display::Bitmap bitmap, ::openfl::_internal::renderer::RenderSession renderSession);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace cairo

#endif /* INCLUDED_openfl__internal_renderer_cairo_CairoBitmap */ 
