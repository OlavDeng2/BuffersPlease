// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasShape
#include <openfl/_internal/renderer/canvas/CanvasShape.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f609dc9640c6ad89_15_render,"openfl._internal.renderer.canvas.CanvasShape","render",0x1f16b136,"openfl._internal.renderer.canvas.CanvasShape.render","openfl/_internal/renderer/canvas/CanvasShape.hx",15,0x418319d2)
namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{

void CanvasShape_obj::__construct() { }

Dynamic CanvasShape_obj::__CreateEmpty() { return new CanvasShape_obj; }

void *CanvasShape_obj::_hx_vtable = 0;

Dynamic CanvasShape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CanvasShape_obj > _hx_result = new CanvasShape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasShape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x27bca002;
}

void CanvasShape_obj::render( ::openfl::display::DisplayObject shape, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f609dc9640c6ad89_15_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasShape_obj,render,(void))


CanvasShape_obj::CanvasShape_obj()
{
}

bool CanvasShape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CanvasShape_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CanvasShape_obj_sStaticStorageInfo = 0;
#endif

static void CanvasShape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasShape_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CanvasShape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasShape_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasShape_obj::__mClass;

static ::String CanvasShape_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void CanvasShape_obj::__register()
{
	hx::Object *dummy = new CanvasShape_obj;
	CanvasShape_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.canvas.CanvasShape","\x8e","\x1e","\x69","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasShape_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CanvasShape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CanvasShape_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CanvasShape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CanvasShape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasShape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasShape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas
