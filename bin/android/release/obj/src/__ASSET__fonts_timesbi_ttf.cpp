// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__fonts_timesbi_ttf
#include <__ASSET__fonts_timesbi_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_71baaaa3d172a3fc_83_new,"__ASSET__fonts_timesbi_ttf","new",0xaa6f6edb,"__ASSET__fonts_timesbi_ttf.new","ManifestResources.hx",83,0xf77aa668)

void __ASSET__fonts_timesbi_ttf_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_71baaaa3d172a3fc_83_new)
HXDLIN(  83)		this->_hx___fontPath = HX_("Fonts/TIMESBI.TTF",9a,66,2b,d0);
HXDLIN(  83)		this->name = HX_("Times New Roman Bold Italic",8e,ae,fa,c0);
HXDLIN(  83)		super::__construct(null());
            	}

Dynamic __ASSET__fonts_timesbi_ttf_obj::__CreateEmpty() { return new __ASSET__fonts_timesbi_ttf_obj; }

void *__ASSET__fonts_timesbi_ttf_obj::_hx_vtable = 0;

Dynamic __ASSET__fonts_timesbi_ttf_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< __ASSET__fonts_timesbi_ttf_obj > _hx_result = new __ASSET__fonts_timesbi_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool __ASSET__fonts_timesbi_ttf_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x510a6569) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x510a6569;
	} else {
		return inClassId==(int)0x6aed2e71;
	}
}


hx::ObjectPtr< __ASSET__fonts_timesbi_ttf_obj > __ASSET__fonts_timesbi_ttf_obj::__new() {
	hx::ObjectPtr< __ASSET__fonts_timesbi_ttf_obj > __this = new __ASSET__fonts_timesbi_ttf_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< __ASSET__fonts_timesbi_ttf_obj > __ASSET__fonts_timesbi_ttf_obj::__alloc(hx::Ctx *_hx_ctx) {
	__ASSET__fonts_timesbi_ttf_obj *__this = (__ASSET__fonts_timesbi_ttf_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__fonts_timesbi_ttf_obj), true, "__ASSET__fonts_timesbi_ttf"));
	*(void **)__this = __ASSET__fonts_timesbi_ttf_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

__ASSET__fonts_timesbi_ttf_obj::__ASSET__fonts_timesbi_ttf_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *__ASSET__fonts_timesbi_ttf_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *__ASSET__fonts_timesbi_ttf_obj_sStaticStorageInfo = 0;
#endif

static void __ASSET__fonts_timesbi_ttf_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__fonts_timesbi_ttf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__fonts_timesbi_ttf_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__fonts_timesbi_ttf_obj::__mClass,"__mClass");
};

#endif

hx::Class __ASSET__fonts_timesbi_ttf_obj::__mClass;

void __ASSET__fonts_timesbi_ttf_obj::__register()
{
	hx::Object *dummy = new __ASSET__fonts_timesbi_ttf_obj;
	__ASSET__fonts_timesbi_ttf_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__fonts_timesbi_ttf","\x69","\x65","\x0a","\x51");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = __ASSET__fonts_timesbi_ttf_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__fonts_timesbi_ttf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__fonts_timesbi_ttf_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__fonts_timesbi_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__fonts_timesbi_ttf_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

