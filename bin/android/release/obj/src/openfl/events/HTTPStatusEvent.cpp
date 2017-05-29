// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e9f49414be9df9e_16_new,"openfl.events.HTTPStatusEvent","new",0x992d4c1b,"openfl.events.HTTPStatusEvent.new","openfl/events/HTTPStatusEvent.hx",16,0x9d0269d5)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_26_clone,"openfl.events.HTTPStatusEvent","clone",0xe75f33d8,"openfl.events.HTTPStatusEvent.clone","openfl/events/HTTPStatusEvent.hx",26,0x9d0269d5)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_39_toString,"openfl.events.HTTPStatusEvent","toString",0x9713ef11,"openfl.events.HTTPStatusEvent.toString","openfl/events/HTTPStatusEvent.hx",39,0x9d0269d5)
static const ::String _hx_array_data_61c0a2a9_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("status",32,e7,fb,05),HX_("redirected",7b,4e,5a,3e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_7_boot,"openfl.events.HTTPStatusEvent","boot",0x668e4c17,"openfl.events.HTTPStatusEvent.boot","openfl/events/HTTPStatusEvent.hx",7,0x9d0269d5)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_8_boot,"openfl.events.HTTPStatusEvent","boot",0x668e4c17,"openfl.events.HTTPStatusEvent.boot","openfl/events/HTTPStatusEvent.hx",8,0x9d0269d5)
namespace openfl{
namespace events{

void HTTPStatusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status,hx::Null< bool >  __o_redirected){
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
int status = __o_status.Default(0);
bool redirected = __o_redirected.Default(false);
            	HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_16_new)
HXLINE(  18)		this->status = status;
HXLINE(  19)		this->redirected = redirected;
HXLINE(  21)		super::__construct(type,bubbles,cancelable);
            	}

Dynamic HTTPStatusEvent_obj::__CreateEmpty() { return new HTTPStatusEvent_obj; }

void *HTTPStatusEvent_obj::_hx_vtable = 0;

Dynamic HTTPStatusEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HTTPStatusEvent_obj > _hx_result = new HTTPStatusEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool HTTPStatusEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3243040d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3243040d;
	} else {
		return inClassId==(int)0x7ed4634b;
	}
}

 ::openfl::events::Event HTTPStatusEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_3e9f49414be9df9e_26_clone)
HXLINE(  28)		 ::openfl::events::HTTPStatusEvent event =  ::openfl::events::HTTPStatusEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,null(),this->status,this->redirected);
HXLINE(  29)		event->target = this->target;
HXLINE(  30)		event->currentTarget = this->currentTarget;
HXLINE(  31)		event->eventPhase = this->eventPhase;
HXLINE(  32)		return event;
            	}


::String HTTPStatusEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_39_toString)
HXDLIN(  39)		return this->_hx___formatToString(HX_("HTTPStatusEvent",e0,4c,1b,fe),::Array_obj< ::String >::fromData( _hx_array_data_61c0a2a9_3,5));
            	}


::String HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS;

::String HTTPStatusEvent_obj::HTTP_STATUS;


hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status,hx::Null< bool >  __o_redirected) {
	hx::ObjectPtr< HTTPStatusEvent_obj > __this = new HTTPStatusEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_status,__o_redirected);
	return __this;
}

hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_status,hx::Null< bool >  __o_redirected) {
	HTTPStatusEvent_obj *__this = (HTTPStatusEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HTTPStatusEvent_obj), true, "openfl.events.HTTPStatusEvent"));
	*(void **)__this = HTTPStatusEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_status,__o_redirected);
	return __this;
}

HTTPStatusEvent_obj::HTTPStatusEvent_obj()
{
}

void HTTPStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPStatusEvent);
	HX_MARK_MEMBER_NAME(redirected,"redirected");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(responseURL,"responseURL");
	HX_MARK_MEMBER_NAME(status,"status");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HTTPStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redirected,"redirected");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(responseURL,"responseURL");
	HX_VISIT_MEMBER_NAME(status,"status");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val HTTPStatusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return hx::Val( status ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"redirected") ) { return hx::Val( redirected ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { return hx::Val( responseURL ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return hx::Val( responseHeaders ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val HTTPStatusEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"redirected") ) { redirected=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { responseURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HTTPStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("redirected","\x7b","\x4e","\x5a","\x3e"));
	outFields->push(HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"));
	outFields->push(HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"));
	outFields->push(HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HTTPStatusEvent_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(HTTPStatusEvent_obj,redirected),HX_HCSTRING("redirected","\x7b","\x4e","\x5a","\x3e")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(HTTPStatusEvent_obj,responseHeaders),HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43")},
	{hx::fsString,(int)offsetof(HTTPStatusEvent_obj,responseURL),HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86")},
	{hx::fsInt,(int)offsetof(HTTPStatusEvent_obj,status),HX_HCSTRING("status","\x32","\xe7","\xfb","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo HTTPStatusEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,HX_HCSTRING("HTTP_RESPONSE_STATUS","\x79","\xde","\x26","\x00")},
	{hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_STATUS,HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String HTTPStatusEvent_obj_sMemberFields[] = {
	HX_HCSTRING("redirected","\x7b","\x4e","\x5a","\x3e"),
	HX_HCSTRING("responseHeaders","\xc5","\x0d","\xca","\x43"),
	HX_HCSTRING("responseURL","\x6e","\x5f","\x19","\x86"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void HTTPStatusEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,"HTTP_RESPONSE_STATUS");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HTTPStatusEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,"HTTP_RESPONSE_STATUS");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
};

#endif

hx::Class HTTPStatusEvent_obj::__mClass;

static ::String HTTPStatusEvent_obj_sStaticFields[] = {
	HX_HCSTRING("HTTP_RESPONSE_STATUS","\x79","\xde","\x26","\x00"),
	HX_HCSTRING("HTTP_STATUS","\x49","\x42","\xed","\x94"),
	::String(null())
};

void HTTPStatusEvent_obj::__register()
{
	hx::Object *dummy = new HTTPStatusEvent_obj;
	HTTPStatusEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.HTTPStatusEvent","\xa9","\xa2","\xc0","\x61");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HTTPStatusEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(HTTPStatusEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HTTPStatusEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HTTPStatusEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HTTPStatusEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTTPStatusEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTTPStatusEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HTTPStatusEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_7_boot)
HXDLIN(   7)		HTTP_RESPONSE_STATUS = HX_("httpResponseStatus",3b,ae,f6,61);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_8_boot)
HXDLIN(   8)		HTTP_STATUS = HX_("httpStatus",da,4c,74,0a);
            	}
}

} // end namespace openfl
} // end namespace events
