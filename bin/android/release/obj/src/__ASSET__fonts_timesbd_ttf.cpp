// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__fonts_timesbd_ttf
#include <__ASSET__fonts_timesbd_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9accb7258e5920d_82_new,"__ASSET__fonts_timesbd_ttf","new",0x8bb861d6,"__ASSET__fonts_timesbd_ttf.new","ManifestResources.hx",82,0xf77aa668)

void __ASSET__fonts_timesbd_ttf_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c9accb7258e5920d_82_new)
HXDLIN(  82)		this->_hx___fontPath = HX_("Fonts/TIMESBD.TTF",15,80,2a,ef);
HXDLIN(  82)		this->name = HX_("Times New Roman Bold",e2,0c,6f,84);
HXDLIN(  82)		super::__construct(null());
            	}

Dynamic __ASSET__fonts_timesbd_ttf_obj::__CreateEmpty() { return new __ASSET__fonts_timesbd_ttf_obj; }

void *__ASSET__fonts_timesbd_ttf_obj::_hx_vtable = 0;

Dynamic __ASSET__fonts_timesbd_ttf_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< __ASSET__fonts_timesbd_ttf_obj > _hx_result = new __ASSET__fonts_timesbd_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool __ASSET__fonts_timesbd_ttf_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6aed2e71) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6aed2e71;
	} else {
		return inClassId==(int)0x70097ee4;
	}
}


hx::ObjectPtr< __ASSET__fonts_timesbd_ttf_obj > __ASSET__fonts_timesbd_ttf_obj::__new() {
	hx::ObjectPtr< __ASSET__fonts_timesbd_ttf_obj > __this = new __ASSET__fonts_timesbd_ttf_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< __ASSET__fonts_timesbd_ttf_obj > __ASSET__fonts_timesbd_ttf_obj::__alloc(hx::Ctx *_hx_ctx) {
	__ASSET__fonts_timesbd_ttf_obj *__this = (__ASSET__fonts_timesbd_ttf_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__fonts_timesbd_ttf_obj), true, "__ASSET__fonts_timesbd_ttf"));
	*(void **)__this = __ASSET__fonts_timesbd_ttf_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

__ASSET__fonts_timesbd_ttf_obj::__ASSET__fonts_timesbd_ttf_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *__ASSET__fonts_timesbd_ttf_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *__ASSET__fonts_timesbd_ttf_obj_sStaticStorageInfo = 0;
#endif

static void __ASSET__fonts_timesbd_ttf_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__fonts_timesbd_ttf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__fonts_timesbd_ttf_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__fonts_timesbd_ttf_obj::__mClass,"__mClass");
};

#endif

hx::Class __ASSET__fonts_timesbd_ttf_obj::__mClass;

void __ASSET__fonts_timesbd_ttf_obj::__register()
{
	hx::Object *dummy = new __ASSET__fonts_timesbd_ttf_obj;
	__ASSET__fonts_timesbd_ttf_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__fonts_timesbd_ttf","\xe4","\x7e","\x09","\x70");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = __ASSET__fonts_timesbd_ttf_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__fonts_timesbd_ttf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__fonts_timesbd_ttf_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__fonts_timesbd_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__fonts_timesbd_ttf_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

