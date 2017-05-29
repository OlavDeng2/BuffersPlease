// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9c60723403252d5b_22_render,"openfl._internal.renderer.opengl.GLBitmap","render",0x8d0c282c,"openfl._internal.renderer.opengl.GLBitmap.render","openfl/_internal/renderer/opengl/GLBitmap.hx",22,0x02850ac4)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLBitmap_obj::__construct() { }

Dynamic GLBitmap_obj::__CreateEmpty() { return new GLBitmap_obj; }

void *GLBitmap_obj::_hx_vtable = 0;

Dynamic GLBitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLBitmap_obj > _hx_result = new GLBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ef700ce;
}

void GLBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_9c60723403252d5b_22_render)
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if (!(!(bitmap->_hx___renderable))) {
HXLINE(  24)			_hx_tmp = (bitmap->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  24)			_hx_tmp = true;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  24)			return;
            		}
HXLINE(  26)		bool _hx_tmp1;
HXDLIN(  26)		if (hx::IsNotNull( bitmap->bitmapData )) {
HXLINE(  26)			_hx_tmp1 = bitmap->bitmapData->_hx___isValid;
            		}
            		else {
HXLINE(  26)			_hx_tmp1 = false;
            		}
HXDLIN(  26)		if (_hx_tmp1) {
HXLINE(  28)			 ::openfl::_internal::renderer::opengl::GLRenderer renderer = ( ( ::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer) );
HXLINE(  29)			 ::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
HXLINE(  31)			renderSession->blendModeManager->setBlendMode(bitmap->_hx___worldBlendMode);
HXLINE(  32)			renderSession->maskManager->pushObject(bitmap,null());
HXLINE(  34)			 ::openfl::display::Shader shader = renderSession->filterManager->pushObject(bitmap);
HXLINE(  36)			shader->get_data()->uImage0->input = bitmap->bitmapData;
HXLINE(  37)			bool _hx_tmp2;
HXDLIN(  37)			if (renderSession->allowSmoothing) {
HXLINE(  37)				if (!(bitmap->smoothing)) {
HXLINE(  37)					_hx_tmp2 = renderSession->upscaled;
            				}
            				else {
HXLINE(  37)					_hx_tmp2 = true;
            				}
            			}
            			else {
HXLINE(  37)				_hx_tmp2 = false;
            			}
HXDLIN(  37)			shader->get_data()->uImage0->smoothing = _hx_tmp2;
HXLINE(  38)			shader->get_data()->uMatrix->value = renderer->getMatrix(bitmap->_hx___renderTransform);
HXLINE(  40)			renderSession->shaderManager->setShader(shader);
HXLINE(  42)			int gl1 = gl->ARRAY_BUFFER;
HXDLIN(  42)			gl->bindBuffer(gl1,bitmap->bitmapData->getBuffer(gl,bitmap->_hx___worldAlpha));
HXLINE(  43)			int _hx_tmp3 = shader->get_data()->aPosition->index;
HXDLIN(  43)			int gl2 = gl->FLOAT;
HXDLIN(  43)			gl->vertexAttribPointer(_hx_tmp3,(int)3,gl2,false,(int)24,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
HXLINE(  44)			int _hx_tmp4 = shader->get_data()->aTexCoord->index;
HXDLIN(  44)			int gl3 = gl->FLOAT;
HXDLIN(  44)			gl->vertexAttribPointer(_hx_tmp4,(int)2,gl3,false,(int)24,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
HXLINE(  45)			int _hx_tmp5 = shader->get_data()->aAlpha->index;
HXDLIN(  45)			int gl4 = gl->FLOAT;
HXDLIN(  45)			gl->vertexAttribPointer(_hx_tmp5,(int)1,gl4,false,(int)24,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)20));
HXLINE(  47)			gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXLINE(  49)			renderSession->filterManager->popObject(bitmap);
HXLINE(  50)			renderSession->maskManager->popObject(bitmap,null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLBitmap_obj,render,(void))


GLBitmap_obj::GLBitmap_obj()
{
}

bool GLBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLBitmap_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLBitmap_obj_sStaticStorageInfo = 0;
#endif

static void GLBitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLBitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLBitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class GLBitmap_obj::__mClass;

static ::String GLBitmap_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void GLBitmap_obj::__register()
{
	hx::Object *dummy = new GLBitmap_obj;
	GLBitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLBitmap","\xd8","\x64","\xbd","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLBitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLBitmap_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLBitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLBitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLBitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
