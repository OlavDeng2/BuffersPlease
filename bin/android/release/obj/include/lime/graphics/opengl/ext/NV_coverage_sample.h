// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample
#define INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d197f49e97430958_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,NV_coverage_sample)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES NV_coverage_sample_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NV_coverage_sample_obj OBJ_;
		NV_coverage_sample_obj();

	public:
		enum { _hx_ClassId = 0x155ab0dc };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.NV_coverage_sample")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.NV_coverage_sample"); }

		hx::ObjectPtr< NV_coverage_sample_obj > __new() {
			hx::ObjectPtr< NV_coverage_sample_obj > __this = new NV_coverage_sample_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< NV_coverage_sample_obj > __alloc(hx::Ctx *_hx_ctx) {
			NV_coverage_sample_obj *__this = (NV_coverage_sample_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NV_coverage_sample_obj), false, "lime.graphics.opengl.ext.NV_coverage_sample"));
			*(void **)__this = NV_coverage_sample_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d197f49e97430958_4_new)
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_BUFFER_BIT_NV = (int)32768;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_AUTOMATIC_NV = (int)36567;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_EDGE_FRAGMENTS_NV = (int)36566;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_ALL_FRAGMENTS_NV = (int)36565;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_SAMPLES_NV = (int)36564;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_BUFFERS_NV = (int)36563;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_ATTACHMENT_NV = (int)36562;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_COMPONENT4_NV = (int)36561;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::NV_coverage_sample)(__this) )->COVERAGE_COMPONENT_NV = (int)36560;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NV_coverage_sample_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NV_coverage_sample","\xaa","\x83","\xfd","\xdb"); }

		int COVERAGE_COMPONENT_NV;
		int COVERAGE_COMPONENT4_NV;
		int COVERAGE_ATTACHMENT_NV;
		int COVERAGE_BUFFERS_NV;
		int COVERAGE_SAMPLES_NV;
		int COVERAGE_ALL_FRAGMENTS_NV;
		int COVERAGE_EDGE_FRAGMENTS_NV;
		int COVERAGE_AUTOMATIC_NV;
		int COVERAGE_BUFFER_BIT_NV;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_NV_coverage_sample */ 
