// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#define INCLUDED_lime_utils__BytePointer_BytePointer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)
HX_DECLARE_CLASS3(lime,utils,_BytePointer,BytePointer_Impl_)

namespace lime{
namespace utils{
namespace _BytePointer{


class HXCPP_CLASS_ATTRIBUTES BytePointer_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BytePointer_Impl__obj OBJ_;
		BytePointer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2a5eae87 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils._BytePointer.BytePointer_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.utils._BytePointer.BytePointer_Impl_"); }

		hx::ObjectPtr< BytePointer_Impl__obj > __new() {
			hx::ObjectPtr< BytePointer_Impl__obj > __this = new BytePointer_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BytePointer_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			BytePointer_Impl__obj *__this = (BytePointer_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BytePointer_Impl__obj), false, "lime.utils._BytePointer.BytePointer_Impl_"));
			*(void **)__this = BytePointer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BytePointer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BytePointer_Impl_","\xd5","\xd4","\xc9","\xf9"); }

		static  ::lime::utils::BytePointerData _new( ::haxe::io::Bytes bytes,hx::Null< int >  offset);
		static ::Dynamic _new_dyn();

		static void set( ::lime::utils::BytePointerData this1, ::haxe::io::Bytes bytes, ::lime::utils::ArrayBufferView bufferView, ::haxe::io::Bytes buffer, ::Dynamic offset);
		static ::Dynamic set_dyn();

		static int _hx___arrayGet( ::lime::utils::BytePointerData this1,int index);
		static ::Dynamic _hx___arrayGet_dyn();

		static int _hx___arraySet( ::lime::utils::BytePointerData this1,int index,int value);
		static ::Dynamic _hx___arraySet_dyn();

		static  ::lime::utils::BytePointerData fromArrayBufferView( ::lime::utils::ArrayBufferView arrayBufferView);
		static ::Dynamic fromArrayBufferView_dyn();

		static  ::lime::utils::BytePointerData fromArrayBuffer( ::haxe::io::Bytes buffer);
		static ::Dynamic fromArrayBuffer_dyn();

		static  ::lime::utils::BytePointerData fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::lime::utils::BytePointerData fromBytesData(::Array< unsigned char > bytesData);
		static ::Dynamic fromBytesData_dyn();

		static  ::lime::utils::BytePointerData fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		static  ::lime::utils::BytePointerData fromLimeBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromLimeBytes_dyn();

		static  ::lime::utils::ArrayBufferView toUInt8Array( ::lime::utils::BytePointerData bytePointer);
		static ::Dynamic toUInt8Array_dyn();

		static  ::lime::utils::ArrayBufferView toUInt8ClampedArray( ::lime::utils::BytePointerData bytePointer);
		static ::Dynamic toUInt8ClampedArray_dyn();

		static  ::lime::utils::ArrayBufferView toInt8Array( ::lime::utils::BytePointerData bytePointer);
		static ::Dynamic toInt8Array_dyn();

		static  ::lime::utils::ArrayBufferView toUInt16Array( ::lime::utils::BytePointerData bytePointer);
		static ::Dynamic toUInt16Array_dyn();

		static  ::lime::utils::ArrayBufferView toInt16Array( ::lime::utils::BytePointerData bytePointer);
		static ::Dynamic toInt16Array_dyn();

		static  ::lime::utils::ArrayBufferView toUInt32Array( ::lime::utils::BytePointerData bytePointer);
		static ::Dynamic toUInt32Array_dyn();

		static  ::lime::utils::ArrayBufferView toInt32Array( ::lime::utils::BytePointerData bytePointer);
		static ::Dynamic toInt32Array_dyn();

		static  ::lime::utils::ArrayBufferView toFloat32Array( ::lime::utils::BytePointerData bytePointer);
		static ::Dynamic toFloat32Array_dyn();

		static  ::lime::utils::ArrayBufferView toFloat64Array( ::lime::utils::BytePointerData bytePointer);
		static ::Dynamic toFloat64Array_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _BytePointer

#endif /* INCLUDED_lime_utils__BytePointer_BytePointer_Impl_ */ 
