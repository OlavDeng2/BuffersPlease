// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLSampler_GLSampler_Impl_
#include <lime/graphics/opengl/_GLSampler/GLSampler_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3ddd19a8470d1ea4_14_fromInt,"lime.graphics.opengl._GLSampler.GLSampler_Impl_","fromInt",0x2f824e25,"lime.graphics.opengl._GLSampler.GLSampler_Impl_.fromInt","lime/graphics/opengl/GLSampler.hx",14,0x764fda11)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLSampler{

void GLSampler_Impl__obj::__construct() { }

Dynamic GLSampler_Impl__obj::__CreateEmpty() { return new GLSampler_Impl__obj; }

void *GLSampler_Impl__obj::_hx_vtable = 0;

Dynamic GLSampler_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLSampler_Impl__obj > _hx_result = new GLSampler_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLSampler_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x72890db0;
}

 ::lime::graphics::opengl::GLObject GLSampler_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_3ddd19a8470d1ea4_14_fromInt)
HXDLIN(  14)		return ::lime::graphics::opengl::GLObject_obj::fromInt((int)9,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLSampler_Impl__obj,fromInt,return )


GLSampler_Impl__obj::GLSampler_Impl__obj()
{
}

bool GLSampler_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLSampler_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLSampler_Impl__obj_sStaticStorageInfo = 0;
#endif

static void GLSampler_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLSampler_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLSampler_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLSampler_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLSampler_Impl__obj::__mClass;

static ::String GLSampler_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	::String(null())
};

void GLSampler_Impl__obj::__register()
{
	hx::Object *dummy = new GLSampler_Impl__obj;
	GLSampler_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLSampler.GLSampler_Impl_","\xee","\x50","\x37","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLSampler_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLSampler_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLSampler_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLSampler_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLSampler_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLSampler_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLSampler_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLSampler
