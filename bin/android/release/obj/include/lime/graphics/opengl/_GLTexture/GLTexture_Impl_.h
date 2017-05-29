// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_lime_graphics_opengl__GLTexture_GLTexture_Impl_
#define INCLUDED_lime_graphics_opengl__GLTexture_GLTexture_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLTexture,GLTexture_Impl_)

namespace lime{
namespace graphics{
namespace opengl{
namespace _GLTexture{


class HXCPP_CLASS_ATTRIBUTES GLTexture_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLTexture_Impl__obj OBJ_;
		GLTexture_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7ec52cc8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLTexture.GLTexture_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._GLTexture.GLTexture_Impl_"); }

		hx::ObjectPtr< GLTexture_Impl__obj > __new() {
			hx::ObjectPtr< GLTexture_Impl__obj > __this = new GLTexture_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLTexture_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			GLTexture_Impl__obj *__this = (GLTexture_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLTexture_Impl__obj), false, "lime.graphics.opengl._GLTexture.GLTexture_Impl_"));
			*(void **)__this = GLTexture_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLTexture_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLTexture_Impl_","\x56","\xfa","\x3a","\x10"); }

		static  ::lime::graphics::opengl::GLObject fromInt(int id);
		static ::Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLTexture

#endif /* INCLUDED_lime_graphics_opengl__GLTexture_GLTexture_Impl_ */ 
