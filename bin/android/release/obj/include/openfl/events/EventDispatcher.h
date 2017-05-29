// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl_events_EventDispatcher
#define INCLUDED_openfl_events_EventDispatcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,events,_EventDispatcher,Listener)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES EventDispatcher_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EventDispatcher_obj OBJ_;
		EventDispatcher_obj();

	public:
		enum { _hx_ClassId = 0x1b123bf8 };

		void __construct(::Dynamic target);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.EventDispatcher")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.events.EventDispatcher"); }
		static hx::ObjectPtr< EventDispatcher_obj > __new(::Dynamic target);
		static hx::ObjectPtr< EventDispatcher_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic target);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventDispatcher_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("EventDispatcher","\x41","\x82","\x63","\x5e"); }

		static int _hx___sortByPriority( ::openfl::events::_EventDispatcher::Listener l1, ::openfl::events::_EventDispatcher::Listener l2);
		static ::Dynamic _hx___sortByPriority_dyn();

		 ::haxe::ds::StringMap _hx___eventMap;
		 ::haxe::ds::StringMap _hx___iterators;
		::Dynamic _hx___targetDispatcher;
		virtual void addEventListener(::String type, ::Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);
		::Dynamic addEventListener_dyn();

		virtual bool dispatchEvent( ::openfl::events::Event event);
		::Dynamic dispatchEvent_dyn();

		bool hasEventListener(::String type);
		::Dynamic hasEventListener_dyn();

		virtual void removeEventListener(::String type, ::Dynamic listener,hx::Null< bool >  useCapture);
		::Dynamic removeEventListener_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		bool willTrigger(::String type);
		::Dynamic willTrigger_dyn();

		virtual bool _hx___dispatchEvent( ::openfl::events::Event event);
		::Dynamic _hx___dispatchEvent_dyn();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_EventDispatcher */ 
