// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLProgram_GLProgram_Impl_
#include <lime/graphics/opengl/_GLProgram/GLProgram_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f26ce6442e8f3a65_14_fromInt,"lime.graphics.opengl._GLProgram.GLProgram_Impl_","fromInt",0x3e290e1d,"lime.graphics.opengl._GLProgram.GLProgram_Impl_.fromInt","lime/graphics/opengl/GLProgram.hx",14,0x48d7ea15)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLProgram{

void GLProgram_Impl__obj::__construct() { }

Dynamic GLProgram_Impl__obj::__CreateEmpty() { return new GLProgram_Impl__obj; }

void *GLProgram_Impl__obj::_hx_vtable = 0;

Dynamic GLProgram_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLProgram_Impl__obj > _hx_result = new GLProgram_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLProgram_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x699ee368;
}

 ::lime::graphics::opengl::GLObject GLProgram_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_f26ce6442e8f3a65_14_fromInt)
HXDLIN(  14)		return ::lime::graphics::opengl::GLObject_obj::fromInt((int)1,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLProgram_Impl__obj,fromInt,return )


GLProgram_Impl__obj::GLProgram_Impl__obj()
{
}

bool GLProgram_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLProgram_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLProgram_Impl__obj_sStaticStorageInfo = 0;
#endif

static void GLProgram_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLProgram_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLProgram_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLProgram_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLProgram_Impl__obj::__mClass;

static ::String GLProgram_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	::String(null())
};

void GLProgram_Impl__obj::__register()
{
	hx::Object *dummy = new GLProgram_Impl__obj;
	GLProgram_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLProgram.GLProgram_Impl_","\xe6","\x58","\x21","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLProgram_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLProgram_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLProgram_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLProgram_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLProgram_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLProgram_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLProgram_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLProgram