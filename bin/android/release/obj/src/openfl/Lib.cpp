// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_49_as,"openfl.Lib","as",0x3965ffb9,"openfl.Lib.as","openfl/Lib.hx",49,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_60_attach,"openfl.Lib","attach",0xe350160c,"openfl.Lib.attach","openfl/Lib.hx",60,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_89_getTimer,"openfl.Lib","getTimer",0xd73d4956,"openfl.Lib.getTimer","openfl/Lib.hx",89,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_95_getURL,"openfl.Lib","getURL",0xa66862c0,"openfl.Lib.getURL","openfl/Lib.hx",95,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_112_notImplemented,"openfl.Lib","notImplemented",0x6ff873b6,"openfl.Lib.notImplemented","openfl/Lib.hx",112,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_127_preventDefaultTouchMove,"openfl.Lib","preventDefaultTouchMove",0x0727aa40,"openfl.Lib.preventDefaultTouchMove","openfl/Lib.hx",127,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_151_trace,"openfl.Lib","trace",0xeba99a1e,"openfl.Lib.trace","openfl/Lib.hx",151,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_36_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",36,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_41_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",41,0x62fb7c98)
namespace openfl{

void Lib_obj::__construct() { }

Dynamic Lib_obj::__CreateEmpty() { return new Lib_obj; }

void *Lib_obj::_hx_vtable = 0;

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Lib_obj > _hx_result = new Lib_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lib_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19d6bed5;
}

 ::openfl::display::Application Lib_obj::application;

 ::openfl::display::MovieClip Lib_obj::current;

 ::haxe::ds::StringMap Lib_obj::_hx___sentWarnings;

 ::Dynamic Lib_obj::as( ::Dynamic v,hx::Class c){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_49_as)
HXDLIN(  49)		if (::Std_obj::is(v,c)) {
HXDLIN(  49)			return v;
            		}
            		else {
HXDLIN(  49)			return null();
            		}
HXDLIN(  49)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

 ::openfl::display::MovieClip Lib_obj::attach(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_60_attach)
HXDLIN(  60)		return  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

int Lib_obj::getTimer(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_89_getTimer)
HXDLIN(  89)		return ::lime::_hx_system::System_obj::getTimer();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

void Lib_obj::getURL( ::openfl::net::URLRequest request,::String target){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_95_getURL)
HXLINE(  97)		if (hx::IsNull( target )) {
HXLINE(  99)			target = HX_("_blank",95,26,d9,b0);
            		}
HXLINE( 106)		::lime::_hx_system::System_obj::openURL(request->url,target);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

void Lib_obj::notImplemented( ::Dynamic posInfo){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_112_notImplemented)
HXLINE( 114)		::String api = ((( (::String)(posInfo->__Field(HX_("className",a3,92,3d,dc),hx::paccDynamic)) ) + HX_(".",2e,00,00,00)) + ( (::String)(posInfo->__Field(HX_("methodName",cc,19,0f,12),hx::paccDynamic)) ));
HXLINE( 116)		if (!(::openfl::Lib_obj::_hx___sentWarnings->exists(api))) {
HXLINE( 118)			::openfl::Lib_obj::_hx___sentWarnings->set(api,true);
HXLINE( 120)			::lime::utils::Log_obj::warn((( (::String)(posInfo->__Field(HX_("methodName",cc,19,0f,12),hx::paccDynamic)) ) + HX_(" is not implemented",1f,12,d2,b9)),posInfo);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))

void Lib_obj::preventDefaultTouchMove(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_127_preventDefaultTouchMove)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,preventDefaultTouchMove,(void))

void Lib_obj::trace( ::Dynamic arg){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_151_trace)
HXDLIN( 151)		::haxe::Log_obj::trace(arg,hx::SourceInfo(HX_("Lib.hx",b9,80,1c,19),151,HX_("openfl.Lib",47,43,57,2f),HX_("trace",85,8e,1f,16)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { outValue = as_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = trace_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { outValue = attach_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getURL") ) { outValue = getURL_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = ( current ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { outValue = ( application ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { outValue = ( _hx___sentWarnings ); return true; }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { outValue = notImplemented_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"preventDefaultTouchMove") ) { outValue = preventDefaultTouchMove_dyn(); return true; }
	}
	return false;
}

bool Lib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast<  ::openfl::display::MovieClip >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { application=ioValue.Cast<  ::openfl::display::Application >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { _hx___sentWarnings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Lib_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Lib_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Application*/ ,(void *) &Lib_obj::application,HX_HCSTRING("application","\x50","\xab","\x3e","\x2a")},
	{hx::fsObject /*::openfl::display::MovieClip*/ ,(void *) &Lib_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Lib_obj::_hx___sentWarnings,HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Lib_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::application,"application");
	HX_MARK_MEMBER_NAME(Lib_obj::current,"current");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lib_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::application,"application");
	HX_VISIT_MEMBER_NAME(Lib_obj::current,"current");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String Lib_obj_sStaticFields[] = {
	HX_HCSTRING("application","\x50","\xab","\x3e","\x2a"),
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("__sentWarnings","\x2f","\x1b","\x27","\x19"),
	HX_HCSTRING("as","\xf2","\x54","\x00","\x00"),
	HX_HCSTRING("attach","\xc5","\xfb","\x0f","\xe0"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("getURL","\x79","\x48","\x28","\xa3"),
	HX_HCSTRING("notImplemented","\x6f","\x3a","\x1a","\x27"),
	HX_HCSTRING("preventDefaultTouchMove","\x67","\xc4","\x6d","\x72"),
	HX_HCSTRING("trace","\x85","\x8e","\x1f","\x16"),
	::String(null())
};

void Lib_obj::__register()
{
	hx::Object *dummy = new Lib_obj;
	Lib_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.Lib","\x47","\x43","\x57","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &Lib_obj::__SetStatic;
	__mClass->mMarkFunc = Lib_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Lib_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lib_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lib_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Lib_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_36_boot)
HXDLIN(  36)		current =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_41_boot)
HXDLIN(  41)		_hx___sentWarnings =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
