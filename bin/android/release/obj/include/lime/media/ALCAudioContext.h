// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_lime_media_ALCAudioContext
#define INCLUDED_lime_media_ALCAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,media,ALCAudioContext)

namespace lime{
namespace media{


class HXCPP_CLASS_ATTRIBUTES ALCAudioContext_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ALCAudioContext_obj OBJ_;
		ALCAudioContext_obj();

	public:
		enum { _hx_ClassId = 0x4f497182 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.media.ALCAudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.media.ALCAudioContext"); }
		static hx::ObjectPtr< ALCAudioContext_obj > __new();
		static hx::ObjectPtr< ALCAudioContext_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALCAudioContext_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ALCAudioContext","\xd1","\x20","\xbe","\xcd"); }

		int FALSE;
		int TRUE;
		int FREQUENCY;
		int REFRESH;
		int SYNC;
		int MONO_SOURCES;
		int STEREO_SOURCES;
		int NO_ERROR;
		int INVALID_DEVICE;
		int INVALID_CONTEXT;
		int INVALID_ENUM;
		int INVALID_VALUE;
		int OUT_OF_MEMORY;
		int ATTRIBUTES_SIZE;
		int ALL_ATTRIBUTES;
		int DEFAULT_DEVICE_SPECIFIER;
		int DEVICE_SPECIFIER;
		int EXTENSIONS;
		int ENUMERATE_ALL_EXT;
		int DEFAULT_ALL_DEVICES_SPECIFIER;
		int ALL_DEVICES_SPECIFIER;
		bool closeDevice( ::Dynamic device);
		::Dynamic closeDevice_dyn();

		 ::Dynamic createContext( ::Dynamic device,::Array< int > attrlist);
		::Dynamic createContext_dyn();

		void destroyContext( ::Dynamic context);
		::Dynamic destroyContext_dyn();

		 ::Dynamic getContextsDevice( ::Dynamic context);
		::Dynamic getContextsDevice_dyn();

		 ::Dynamic getCurrentContext();
		::Dynamic getCurrentContext_dyn();

		int getError( ::Dynamic device);
		::Dynamic getError_dyn();

		::String getErrorString( ::Dynamic device);
		::Dynamic getErrorString_dyn();

		::Array< int > getIntegerv( ::Dynamic device,int param,hx::Null< int >  count);
		::Dynamic getIntegerv_dyn();

		::String getString( ::Dynamic device,int param);
		::Dynamic getString_dyn();

		bool makeContextCurrent( ::Dynamic context);
		::Dynamic makeContextCurrent_dyn();

		 ::Dynamic openDevice(::String deviceName);
		::Dynamic openDevice_dyn();

		void pauseDevice( ::Dynamic device);
		::Dynamic pauseDevice_dyn();

		void processContext( ::Dynamic context);
		::Dynamic processContext_dyn();

		void resumeDevice( ::Dynamic device);
		::Dynamic resumeDevice_dyn();

		void suspendContext( ::Dynamic context);
		::Dynamic suspendContext_dyn();

};

} // end namespace lime
} // end namespace media

#endif /* INCLUDED_lime_media_ALCAudioContext */ 
