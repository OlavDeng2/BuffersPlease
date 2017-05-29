// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_lime_utils_compress_LZMA
#define INCLUDED_lime_utils_compress_LZMA

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,utils,compress,LZMA)

namespace lime{
namespace utils{
namespace compress{


class HXCPP_CLASS_ATTRIBUTES LZMA_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LZMA_obj OBJ_;
		LZMA_obj();

	public:
		enum { _hx_ClassId = 0x69a0af1c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils.compress.LZMA")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.utils.compress.LZMA"); }

		hx::ObjectPtr< LZMA_obj > __new() {
			hx::ObjectPtr< LZMA_obj > __this = new LZMA_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< LZMA_obj > __alloc(hx::Ctx *_hx_ctx) {
			LZMA_obj *__this = (LZMA_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LZMA_obj), false, "lime.utils.compress.LZMA"));
			*(void **)__this = LZMA_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LZMA_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32"); }

		static  ::haxe::io::Bytes compress( ::haxe::io::Bytes bytes);
		static ::Dynamic compress_dyn();

		static  ::haxe::io::Bytes decompress( ::haxe::io::Bytes bytes);
		static ::Dynamic decompress_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace compress

#endif /* INCLUDED_lime_utils_compress_LZMA */ 
