// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_stencil4
#include <lime/graphics/opengl/ext/OES_stencil4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_516111834cfcca0e_7_new,"lime.graphics.opengl.ext.OES_stencil4","new",0x1f7a308e,"lime.graphics.opengl.ext.OES_stencil4.new","lime/graphics/opengl/ext/OES_stencil4.hx",7,0x3d6f3840)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_stencil4_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_516111834cfcca0e_7_new)
HXDLIN(   7)		this->STENCIL_INDEX4_OES = (int)36167;
            	}

Dynamic OES_stencil4_obj::__CreateEmpty() { return new OES_stencil4_obj; }

void *OES_stencil4_obj::_hx_vtable = 0;

Dynamic OES_stencil4_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OES_stencil4_obj > _hx_result = new OES_stencil4_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_stencil4_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x09c62ec8;
}


OES_stencil4_obj::OES_stencil4_obj()
{
}

hx::Val OES_stencil4_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX4_OES") ) { return hx::Val( STENCIL_INDEX4_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OES_stencil4_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX4_OES") ) { STENCIL_INDEX4_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_stencil4_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("STENCIL_INDEX4_OES","\x43","\xee","\x6a","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OES_stencil4_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_stencil4_obj,STENCIL_INDEX4_OES),HX_HCSTRING("STENCIL_INDEX4_OES","\x43","\xee","\x6a","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OES_stencil4_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_stencil4_obj_sMemberFields[] = {
	HX_HCSTRING("STENCIL_INDEX4_OES","\x43","\xee","\x6a","\x12"),
	::String(null()) };

static void OES_stencil4_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_stencil4_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OES_stencil4_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_stencil4_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_stencil4_obj::__mClass;

void OES_stencil4_obj::__register()
{
	hx::Object *dummy = new OES_stencil4_obj;
	OES_stencil4_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_stencil4","\x9c","\x91","\x9f","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OES_stencil4_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OES_stencil4_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_stencil4_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OES_stencil4_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_stencil4_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_stencil4_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
