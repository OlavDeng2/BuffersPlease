// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils__Log_LogLevel_Impl_
#include <lime/utils/_Log/LogLevel_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_164_gt,"lime.utils._Log.LogLevel_Impl_","gt",0x45da0308,"lime.utils._Log.LogLevel_Impl_.gt","lime/utils/Log.hx",164,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_165_gte,"lime.utils._Log.LogLevel_Impl_","gte",0xd8e8a45d,"lime.utils._Log.LogLevel_Impl_.gte","lime/utils/Log.hx",165,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_166_lt,"lime.utils._Log.LogLevel_Impl_","lt",0x45da0763,"lime.utils._Log.LogLevel_Impl_.lt","lime/utils/Log.hx",166,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_167_lte,"lime.utils._Log.LogLevel_Impl_","lte",0xd8ec6fa2,"lime.utils._Log.LogLevel_Impl_.lte","lime/utils/Log.hx",167,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_157_boot,"lime.utils._Log.LogLevel_Impl_","boot",0xef5559cd,"lime.utils._Log.LogLevel_Impl_.boot","lime/utils/Log.hx",157,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_158_boot,"lime.utils._Log.LogLevel_Impl_","boot",0xef5559cd,"lime.utils._Log.LogLevel_Impl_.boot","lime/utils/Log.hx",158,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_159_boot,"lime.utils._Log.LogLevel_Impl_","boot",0xef5559cd,"lime.utils._Log.LogLevel_Impl_.boot","lime/utils/Log.hx",159,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_160_boot,"lime.utils._Log.LogLevel_Impl_","boot",0xef5559cd,"lime.utils._Log.LogLevel_Impl_.boot","lime/utils/Log.hx",160,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_161_boot,"lime.utils._Log.LogLevel_Impl_","boot",0xef5559cd,"lime.utils._Log.LogLevel_Impl_.boot","lime/utils/Log.hx",161,0x300eb2b2)
HX_LOCAL_STACK_FRAME(_hx_pos_7301aa71ca1f1265_162_boot,"lime.utils._Log.LogLevel_Impl_","boot",0xef5559cd,"lime.utils._Log.LogLevel_Impl_.boot","lime/utils/Log.hx",162,0x300eb2b2)
namespace lime{
namespace utils{
namespace _Log{

void LogLevel_Impl__obj::__construct() { }

Dynamic LogLevel_Impl__obj::__CreateEmpty() { return new LogLevel_Impl__obj; }

void *LogLevel_Impl__obj::_hx_vtable = 0;

Dynamic LogLevel_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LogLevel_Impl__obj > _hx_result = new LogLevel_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LogLevel_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f1f751d;
}

int LogLevel_Impl__obj::NONE;

int LogLevel_Impl__obj::ERROR;

int LogLevel_Impl__obj::WARN;

int LogLevel_Impl__obj::INFO;

int LogLevel_Impl__obj::DEBUG;

int LogLevel_Impl__obj::VERBOSE;

bool LogLevel_Impl__obj::gt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_164_gt)
HXDLIN( 164)		return (a > b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogLevel_Impl__obj,gt,return )

bool LogLevel_Impl__obj::gte(int a,int b){
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_165_gte)
HXDLIN( 165)		return (a >= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogLevel_Impl__obj,gte,return )

bool LogLevel_Impl__obj::lt(int a,int b){
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_166_lt)
HXDLIN( 166)		return (a < b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogLevel_Impl__obj,lt,return )

bool LogLevel_Impl__obj::lte(int a,int b){
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_167_lte)
HXDLIN( 167)		return (a <= b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LogLevel_Impl__obj,lte,return )


LogLevel_Impl__obj::LogLevel_Impl__obj()
{
}

bool LogLevel_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gt") ) { outValue = gt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lt") ) { outValue = lt_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gte") ) { outValue = gte_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lte") ) { outValue = lte_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LogLevel_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo LogLevel_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &LogLevel_Impl__obj::NONE,HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(void *) &LogLevel_Impl__obj::ERROR,HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1")},
	{hx::fsInt,(void *) &LogLevel_Impl__obj::WARN,HX_HCSTRING("WARN","\x46","\x2a","\xb3","\x39")},
	{hx::fsInt,(void *) &LogLevel_Impl__obj::INFO,HX_HCSTRING("INFO","\x6e","\x00","\x7c","\x30")},
	{hx::fsInt,(void *) &LogLevel_Impl__obj::DEBUG,HX_HCSTRING("DEBUG","\x33","\x8a","\x0d","\x55")},
	{hx::fsInt,(void *) &LogLevel_Impl__obj::VERBOSE,HX_HCSTRING("VERBOSE","\x62","\xab","\x8d","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void LogLevel_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::ERROR,"ERROR");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::WARN,"WARN");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::INFO,"INFO");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::DEBUG,"DEBUG");
	HX_MARK_MEMBER_NAME(LogLevel_Impl__obj::VERBOSE,"VERBOSE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LogLevel_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::ERROR,"ERROR");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::WARN,"WARN");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::INFO,"INFO");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::DEBUG,"DEBUG");
	HX_VISIT_MEMBER_NAME(LogLevel_Impl__obj::VERBOSE,"VERBOSE");
};

#endif

hx::Class LogLevel_Impl__obj::__mClass;

static ::String LogLevel_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("ERROR","\xa8","\x03","\x18","\xf1"),
	HX_HCSTRING("WARN","\x46","\x2a","\xb3","\x39"),
	HX_HCSTRING("INFO","\x6e","\x00","\x7c","\x30"),
	HX_HCSTRING("DEBUG","\x33","\x8a","\x0d","\x55"),
	HX_HCSTRING("VERBOSE","\x62","\xab","\x8d","\xf1"),
	HX_HCSTRING("gt","\x2d","\x5a","\x00","\x00"),
	HX_HCSTRING("gte","\x98","\x8d","\x4e","\x00"),
	HX_HCSTRING("lt","\x88","\x5e","\x00","\x00"),
	HX_HCSTRING("lte","\xdd","\x58","\x52","\x00"),
	::String(null())
};

void LogLevel_Impl__obj::__register()
{
	hx::Object *dummy = new LogLevel_Impl__obj;
	LogLevel_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._Log.LogLevel_Impl_","\xb3","\x70","\x80","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LogLevel_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LogLevel_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LogLevel_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LogLevel_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LogLevel_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogLevel_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogLevel_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LogLevel_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_157_boot)
HXDLIN( 157)		NONE = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_158_boot)
HXDLIN( 158)		ERROR = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_159_boot)
HXDLIN( 159)		WARN = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_160_boot)
HXDLIN( 160)		INFO = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_161_boot)
HXDLIN( 161)		DEBUG = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7301aa71ca1f1265_162_boot)
HXDLIN( 162)		VERBOSE = (int)5;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace _Log
