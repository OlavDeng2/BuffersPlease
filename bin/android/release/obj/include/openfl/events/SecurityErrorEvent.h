// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#define INCLUDED_openfl_events_SecurityErrorEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,SecurityErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES SecurityErrorEvent_obj : public  ::openfl::events::ErrorEvent_obj
{
	public:
		typedef  ::openfl::events::ErrorEvent_obj super;
		typedef SecurityErrorEvent_obj OBJ_;
		SecurityErrorEvent_obj();

	public:
		enum { _hx_ClassId = 0x4733dcdb };

		void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.SecurityErrorEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.events.SecurityErrorEvent"); }
		static hx::ObjectPtr< SecurityErrorEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id);
		static hx::ObjectPtr< SecurityErrorEvent_obj > __alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String __o_text,hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SecurityErrorEvent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SecurityErrorEvent","\x32","\xea","\xb2","\xa1"); }

		static void __boot();
		static ::String SECURITY_ERROR;
		 ::openfl::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_SecurityErrorEvent */ 
