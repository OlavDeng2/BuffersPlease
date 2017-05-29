// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_DOMRenderContext
#include <lime/graphics/DOMRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7e11e121a091958b_24_new,"openfl._internal.renderer.RenderSession","new",0x2c15cbb7,"openfl._internal.renderer.RenderSession.new","openfl/_internal/renderer/RenderSession.hx",24,0x8a77a218)
namespace openfl{
namespace _internal{
namespace renderer{

void RenderSession_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7e11e121a091958b_24_new)
HXLINE(  43)		this->activeTextures = (int)0;
HXLINE(  59)		this->allowSmoothing = true;
            	}

Dynamic RenderSession_obj::__CreateEmpty() { return new RenderSession_obj; }

void *RenderSession_obj::_hx_vtable = 0;

Dynamic RenderSession_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RenderSession_obj > _hx_result = new RenderSession_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RenderSession_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3cceacb5;
}


RenderSession_obj::RenderSession_obj()
{
}

void RenderSession_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderSession);
	HX_MARK_MEMBER_NAME(allowSmoothing,"allowSmoothing");
	HX_MARK_MEMBER_NAME(cairo,"cairo");
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(element,"element");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	HX_MARK_MEMBER_NAME(roundPixels,"roundPixels");
	HX_MARK_MEMBER_NAME(transformProperty,"transformProperty");
	HX_MARK_MEMBER_NAME(transformOriginProperty,"transformOriginProperty");
	HX_MARK_MEMBER_NAME(upscaled,"upscaled");
	HX_MARK_MEMBER_NAME(vendorPrefix,"vendorPrefix");
	HX_MARK_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_MARK_MEMBER_NAME(z,"z");
	HX_MARK_MEMBER_NAME(drawCount,"drawCount");
	HX_MARK_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_MARK_MEMBER_NAME(activeTextures,"activeTextures");
	HX_MARK_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_MARK_MEMBER_NAME(filterManager,"filterManager");
	HX_MARK_MEMBER_NAME(maskManager,"maskManager");
	HX_MARK_MEMBER_NAME(shaderManager,"shaderManager");
	HX_MARK_END_CLASS();
}

void RenderSession_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(allowSmoothing,"allowSmoothing");
	HX_VISIT_MEMBER_NAME(cairo,"cairo");
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(element,"element");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	HX_VISIT_MEMBER_NAME(roundPixels,"roundPixels");
	HX_VISIT_MEMBER_NAME(transformProperty,"transformProperty");
	HX_VISIT_MEMBER_NAME(transformOriginProperty,"transformOriginProperty");
	HX_VISIT_MEMBER_NAME(upscaled,"upscaled");
	HX_VISIT_MEMBER_NAME(vendorPrefix,"vendorPrefix");
	HX_VISIT_MEMBER_NAME(projectionMatrix,"projectionMatrix");
	HX_VISIT_MEMBER_NAME(z,"z");
	HX_VISIT_MEMBER_NAME(drawCount,"drawCount");
	HX_VISIT_MEMBER_NAME(currentBlendMode,"currentBlendMode");
	HX_VISIT_MEMBER_NAME(activeTextures,"activeTextures");
	HX_VISIT_MEMBER_NAME(blendModeManager,"blendModeManager");
	HX_VISIT_MEMBER_NAME(filterManager,"filterManager");
	HX_VISIT_MEMBER_NAME(maskManager,"maskManager");
	HX_VISIT_MEMBER_NAME(shaderManager,"shaderManager");
}

hx::Val RenderSession_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { return hx::Val( z ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { return hx::Val( cairo ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context ); }
		if (HX_FIELD_EQ(inName,"element") ) { return hx::Val( element ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { return hx::Val( renderer ); }
		if (HX_FIELD_EQ(inName,"upscaled") ) { return hx::Val( upscaled ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCount") ) { return hx::Val( drawCount ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"roundPixels") ) { return hx::Val( roundPixels ); }
		if (HX_FIELD_EQ(inName,"maskManager") ) { return hx::Val( maskManager ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vendorPrefix") ) { return hx::Val( vendorPrefix ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { return hx::Val( filterManager ); }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { return hx::Val( shaderManager ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { return hx::Val( allowSmoothing ); }
		if (HX_FIELD_EQ(inName,"activeTextures") ) { return hx::Val( activeTextures ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { return hx::Val( projectionMatrix ); }
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { return hx::Val( currentBlendMode ); }
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { return hx::Val( blendModeManager ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transformProperty") ) { return hx::Val( transformProperty ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformOriginProperty") ) { return hx::Val( transformOriginProperty ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RenderSession_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cairo") ) { cairo=inValue.Cast<  ::lime::graphics::cairo::Cairo >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::lime::graphics::CanvasRenderContext >(); return inValue; }
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast<  ::lime::graphics::DOMRenderContext >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast<  ::openfl::_internal::renderer::AbstractRenderer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"upscaled") ) { upscaled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawCount") ) { drawCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"roundPixels") ) { roundPixels=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maskManager") ) { maskManager=inValue.Cast<  ::openfl::_internal::renderer::AbstractMaskManager >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"vendorPrefix") ) { vendorPrefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"filterManager") ) { filterManager=inValue.Cast<  ::openfl::_internal::renderer::AbstractFilterManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"shaderManager") ) { shaderManager=inValue.Cast<  ::openfl::_internal::renderer::AbstractShaderManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSmoothing") ) { allowSmoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"activeTextures") ) { activeTextures=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"projectionMatrix") ) { projectionMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentBlendMode") ) { currentBlendMode=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendModeManager") ) { blendModeManager=inValue.Cast<  ::openfl::_internal::renderer::AbstractBlendModeManager >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"transformProperty") ) { transformProperty=inValue.Cast< ::String >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"transformOriginProperty") ) { transformOriginProperty=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderSession_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("allowSmoothing","\xab","\xb7","\x66","\x68"));
	outFields->push(HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"));
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("element","\xbc","\xae","\x54","\x06"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"));
	outFields->push(HX_HCSTRING("roundPixels","\x1b","\x8a","\xf8","\xbe"));
	outFields->push(HX_HCSTRING("transformProperty","\xe1","\x7d","\xca","\x83"));
	outFields->push(HX_HCSTRING("transformOriginProperty","\xe7","\x5a","\x75","\xd2"));
	outFields->push(HX_HCSTRING("upscaled","\x35","\x07","\x98","\x91"));
	outFields->push(HX_HCSTRING("vendorPrefix","\x3a","\x09","\x03","\x61"));
	outFields->push(HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("drawCount","\x2b","\x7a","\x6e","\x12"));
	outFields->push(HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"));
	outFields->push(HX_HCSTRING("activeTextures","\x1e","\x2b","\x27","\x7e"));
	outFields->push(HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b"));
	outFields->push(HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4"));
	outFields->push(HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46"));
	outFields->push(HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RenderSession_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(RenderSession_obj,allowSmoothing),HX_HCSTRING("allowSmoothing","\xab","\xb7","\x66","\x68")},
	{hx::fsObject /*::lime::graphics::cairo::Cairo*/ ,(int)offsetof(RenderSession_obj,cairo),HX_HCSTRING("cairo","\x88","\x30","\x19","\x41")},
	{hx::fsObject /*::lime::graphics::CanvasRenderContext*/ ,(int)offsetof(RenderSession_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsObject /*::lime::graphics::DOMRenderContext*/ ,(int)offsetof(RenderSession_obj,element),HX_HCSTRING("element","\xbc","\xae","\x54","\x06")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(RenderSession_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractRenderer*/ ,(int)offsetof(RenderSession_obj,renderer),HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2")},
	{hx::fsBool,(int)offsetof(RenderSession_obj,roundPixels),HX_HCSTRING("roundPixels","\x1b","\x8a","\xf8","\xbe")},
	{hx::fsString,(int)offsetof(RenderSession_obj,transformProperty),HX_HCSTRING("transformProperty","\xe1","\x7d","\xca","\x83")},
	{hx::fsString,(int)offsetof(RenderSession_obj,transformOriginProperty),HX_HCSTRING("transformOriginProperty","\xe7","\x5a","\x75","\xd2")},
	{hx::fsBool,(int)offsetof(RenderSession_obj,upscaled),HX_HCSTRING("upscaled","\x35","\x07","\x98","\x91")},
	{hx::fsString,(int)offsetof(RenderSession_obj,vendorPrefix),HX_HCSTRING("vendorPrefix","\x3a","\x09","\x03","\x61")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(RenderSession_obj,projectionMatrix),HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0")},
	{hx::fsInt,(int)offsetof(RenderSession_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(RenderSession_obj,drawCount),HX_HCSTRING("drawCount","\x2b","\x7a","\x6e","\x12")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(RenderSession_obj,currentBlendMode),HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff")},
	{hx::fsInt,(int)offsetof(RenderSession_obj,activeTextures),HX_HCSTRING("activeTextures","\x1e","\x2b","\x27","\x7e")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractBlendModeManager*/ ,(int)offsetof(RenderSession_obj,blendModeManager),HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractFilterManager*/ ,(int)offsetof(RenderSession_obj,filterManager),HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractMaskManager*/ ,(int)offsetof(RenderSession_obj,maskManager),HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46")},
	{hx::fsObject /*::openfl::_internal::renderer::AbstractShaderManager*/ ,(int)offsetof(RenderSession_obj,shaderManager),HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RenderSession_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderSession_obj_sMemberFields[] = {
	HX_HCSTRING("allowSmoothing","\xab","\xb7","\x66","\x68"),
	HX_HCSTRING("cairo","\x88","\x30","\x19","\x41"),
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("element","\xbc","\xae","\x54","\x06"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("renderer","\x43","\xc5","\xdb","\xb2"),
	HX_HCSTRING("roundPixels","\x1b","\x8a","\xf8","\xbe"),
	HX_HCSTRING("transformProperty","\xe1","\x7d","\xca","\x83"),
	HX_HCSTRING("transformOriginProperty","\xe7","\x5a","\x75","\xd2"),
	HX_HCSTRING("upscaled","\x35","\x07","\x98","\x91"),
	HX_HCSTRING("vendorPrefix","\x3a","\x09","\x03","\x61"),
	HX_HCSTRING("projectionMatrix","\x30","\x88","\xbb","\xd0"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("drawCount","\x2b","\x7a","\x6e","\x12"),
	HX_HCSTRING("currentBlendMode","\xdb","\x58","\x68","\xff"),
	HX_HCSTRING("activeTextures","\x1e","\x2b","\x27","\x7e"),
	HX_HCSTRING("blendModeManager","\x79","\xc8","\xec","\x8b"),
	HX_HCSTRING("filterManager","\x95","\x81","\x91","\xd4"),
	HX_HCSTRING("maskManager","\xe1","\xae","\x85","\x46"),
	HX_HCSTRING("shaderManager","\xc8","\x59","\x62","\x8f"),
	::String(null()) };

static void RenderSession_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderSession_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RenderSession_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderSession_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderSession_obj::__mClass;

void RenderSession_obj::__register()
{
	hx::Object *dummy = new RenderSession_obj;
	RenderSession_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.RenderSession","\x45","\x24","\xd2","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RenderSession_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RenderSession_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderSession_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RenderSession_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderSession_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderSession_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
