// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_NV_read_buffer_front
#include <lime/graphics/opengl/ext/NV_read_buffer_front.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5337d949f43690c9_7_new,"lime.graphics.opengl.ext.NV_read_buffer_front","new",0xba277d50,"lime.graphics.opengl.ext.NV_read_buffer_front.new","lime/graphics/opengl/ext/NV_read_buffer_front.hx",7,0x1fa707be)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void NV_read_buffer_front_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_5337d949f43690c9_7_new)
            	}

Dynamic NV_read_buffer_front_obj::__CreateEmpty() { return new NV_read_buffer_front_obj; }

void *NV_read_buffer_front_obj::_hx_vtable = 0;

Dynamic NV_read_buffer_front_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NV_read_buffer_front_obj > _hx_result = new NV_read_buffer_front_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NV_read_buffer_front_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6ea7bda6;
}


NV_read_buffer_front_obj::NV_read_buffer_front_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *NV_read_buffer_front_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *NV_read_buffer_front_obj_sStaticStorageInfo = 0;
#endif

static void NV_read_buffer_front_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NV_read_buffer_front_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NV_read_buffer_front_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NV_read_buffer_front_obj::__mClass,"__mClass");
};

#endif

hx::Class NV_read_buffer_front_obj::__mClass;

void NV_read_buffer_front_obj::__register()
{
	hx::Object *dummy = new NV_read_buffer_front_obj;
	NV_read_buffer_front_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.NV_read_buffer_front","\x5e","\xd5","\x32","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NV_read_buffer_front_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NV_read_buffer_front_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NV_read_buffer_front_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NV_read_buffer_front_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NV_read_buffer_front_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
