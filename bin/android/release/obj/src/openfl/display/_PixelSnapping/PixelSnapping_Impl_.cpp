// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__PixelSnapping_PixelSnapping_Impl_
#include <openfl/display/_PixelSnapping/PixelSnapping_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_12_fromString,"openfl.display._PixelSnapping.PixelSnapping_Impl_","fromString",0xc7730368,"openfl.display._PixelSnapping.PixelSnapping_Impl_.fromString","openfl/display/PixelSnapping.hx",12,0x71d03308)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_25_toString,"openfl.display._PixelSnapping.PixelSnapping_Impl_","toString",0xd1c938f9,"openfl.display._PixelSnapping.PixelSnapping_Impl_.toString","openfl/display/PixelSnapping.hx",25,0x71d03308)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_6_boot,"openfl.display._PixelSnapping.PixelSnapping_Impl_","boot",0x4f8e81ff,"openfl.display._PixelSnapping.PixelSnapping_Impl_.boot","openfl/display/PixelSnapping.hx",6,0x71d03308)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_7_boot,"openfl.display._PixelSnapping.PixelSnapping_Impl_","boot",0x4f8e81ff,"openfl.display._PixelSnapping.PixelSnapping_Impl_.boot","openfl/display/PixelSnapping.hx",7,0x71d03308)
HX_LOCAL_STACK_FRAME(_hx_pos_0f3cf3c73141d162_8_boot,"openfl.display._PixelSnapping.PixelSnapping_Impl_","boot",0x4f8e81ff,"openfl.display._PixelSnapping.PixelSnapping_Impl_.boot","openfl/display/PixelSnapping.hx",8,0x71d03308)
namespace openfl{
namespace display{
namespace _PixelSnapping{

void PixelSnapping_Impl__obj::__construct() { }

Dynamic PixelSnapping_Impl__obj::__CreateEmpty() { return new PixelSnapping_Impl__obj; }

void *PixelSnapping_Impl__obj::_hx_vtable = 0;

Dynamic PixelSnapping_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PixelSnapping_Impl__obj > _hx_result = new PixelSnapping_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PixelSnapping_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2d23c379;
}

 ::Dynamic PixelSnapping_Impl__obj::ALWAYS;

 ::Dynamic PixelSnapping_Impl__obj::AUTO;

 ::Dynamic PixelSnapping_Impl__obj::NEVER;

 ::Dynamic PixelSnapping_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_12_fromString)
HXDLIN(  12)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("always",cf,0e,d7,46)) ){
HXLINE(  14)			return (int)0;
HXDLIN(  14)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("auto",6f,df,76,40)) ){
HXLINE(  15)			return (int)1;
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("never",8c,3e,30,99)) ){
HXLINE(  16)			return (int)2;
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  17)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  12)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelSnapping_Impl__obj,fromString,return )

::String PixelSnapping_Impl__obj::toString(int value){
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_25_toString)
HXDLIN(  25)		switch((int)(value)){
            			case (int)0: {
HXLINE(  27)				return HX_("always",cf,0e,d7,46);
            			}
            			break;
            			case (int)1: {
HXLINE(  28)				return HX_("auto",6f,df,76,40);
            			}
            			break;
            			case (int)2: {
HXLINE(  29)				return HX_("never",8c,3e,30,99);
            			}
            			break;
            			default:{
HXLINE(  30)				return null();
            			}
            		}
HXLINE(  25)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PixelSnapping_Impl__obj,toString,return )


PixelSnapping_Impl__obj::PixelSnapping_Impl__obj()
{
}

bool PixelSnapping_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PixelSnapping_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo PixelSnapping_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &PixelSnapping_Impl__obj::ALWAYS,HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &PixelSnapping_Impl__obj::AUTO,HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &PixelSnapping_Impl__obj::NEVER,HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void PixelSnapping_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::ALWAYS,"ALWAYS");
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(PixelSnapping_Impl__obj::NEVER,"NEVER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PixelSnapping_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::ALWAYS,"ALWAYS");
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(PixelSnapping_Impl__obj::NEVER,"NEVER");
};

#endif

hx::Class PixelSnapping_Impl__obj::__mClass;

static ::String PixelSnapping_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("AUTO","\x6f","\xa7","\x37","\x2b"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null())
};

void PixelSnapping_Impl__obj::__register()
{
	hx::Object *dummy = new PixelSnapping_Impl__obj;
	PixelSnapping_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._PixelSnapping.PixelSnapping_Impl_","\xc1","\x35","\x7c","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PixelSnapping_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PixelSnapping_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(PixelSnapping_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PixelSnapping_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PixelSnapping_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PixelSnapping_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PixelSnapping_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PixelSnapping_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_6_boot)
HXDLIN(   6)		ALWAYS = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_7_boot)
HXDLIN(   7)		AUTO = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0f3cf3c73141d162_8_boot)
HXDLIN(   8)		NEVER = (int)2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _PixelSnapping
