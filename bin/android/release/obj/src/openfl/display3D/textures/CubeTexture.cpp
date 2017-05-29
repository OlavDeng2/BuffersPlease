// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccb53fcc86b81631_31_new,"openfl.display3D.textures.CubeTexture","new",0x2100f37b,"openfl.display3D.textures.CubeTexture.new","openfl/display3D/textures/CubeTexture.hx",31,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_45_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",45,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_74_uploadCompressedTextureFromByteArray,"openfl.display3D.textures.CubeTexture","uploadCompressedTextureFromByteArray",0x47d49053,"openfl.display3D.textures.CubeTexture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",74,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_83_uploadFromBitmapData,"openfl.display3D.textures.CubeTexture","uploadFromBitmapData",0xf44b3429,"openfl.display3D.textures.CubeTexture.uploadFromBitmapData","openfl/display3D/textures/CubeTexture.hx",83,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_116_uploadFromByteArray,"openfl.display3D.textures.CubeTexture","uploadFromByteArray",0x1e356101,"openfl.display3D.textures.CubeTexture.uploadFromByteArray","openfl/display3D/textures/CubeTexture.hx",116,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_121_uploadFromTypedArray,"openfl.display3D.textures.CubeTexture","uploadFromTypedArray",0xb8da2b3f,"openfl.display3D.textures.CubeTexture.uploadFromTypedArray","openfl/display3D/textures/CubeTexture.hx",121,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_157___setSamplerState,"openfl.display3D.textures.CubeTexture","__setSamplerState",0x909e23e6,"openfl.display3D.textures.CubeTexture.__setSamplerState","openfl/display3D/textures/CubeTexture.hx",157,0xffe9b114)
HX_LOCAL_STACK_FRAME(_hx_pos_ccb53fcc86b81631_184___uploadATFTextureFromByteArray,"openfl.display3D.textures.CubeTexture","__uploadATFTextureFromByteArray",0xf80c80f9,"openfl.display3D.textures.CubeTexture.__uploadATFTextureFromByteArray","openfl/display3D/textures/CubeTexture.hx",184,0xffe9b114)
namespace openfl{
namespace display3D{
namespace textures{

void CubeTexture_obj::__construct( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_31_new)
HXLINE(  33)		super::__construct(context,(int)34067);
HXLINE(  35)		this->_hx___size = size;
HXLINE(  37)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  38)		this->_hx___streamingLevels = streamingLevels;
HXLINE(  40)		this->_hx___uploadedSides = (int)0;
            	}

Dynamic CubeTexture_obj::__CreateEmpty() { return new CubeTexture_obj; }

void *CubeTexture_obj::_hx_vtable = 0;

Dynamic CubeTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CubeTexture_obj > _hx_result = new CubeTexture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool CubeTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19affbf1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19affbf1;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x2d6abef7;
	}
}

void CubeTexture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_45_uploadCompressedTextureFromByteArray)
HXDLIN(  45)		 ::openfl::display3D::textures::CubeTexture _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  47)		data->position = byteArrayOffset;
HXLINE(  48)		::String signature = data->readUTFBytes((int)3);
HXLINE(  49)		data->position = byteArrayOffset;
HXLINE(  51)		if ((signature == HX_("ATF",f3,9b,31,00))) {
HXLINE(  53)			::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,this->_hx___textureID);
HXLINE(  54)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  56)			this->_hx___uploadATFTextureFromByteArray(data,byteArrayOffset);
HXLINE(  58)			::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE(  59)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            		}
            		else {
HXLINE(  65)			::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE(  66)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            		}
HXLINE(  70)		if (async) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::CubeTexture,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_74_uploadCompressedTextureFromByteArray)
HXLINE(  74)				_gthis->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("textureReady",88,4d,5a,df),null(),null()));
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  72)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),(int)1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadCompressedTextureFromByteArray,(void))

void CubeTexture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,int side,hx::Null< int >  __o_miplevel,hx::Null< bool >  __o_generateMipmap){
int miplevel = __o_miplevel.Default(0);
bool generateMipmap = __o_generateMipmap.Default(false);
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_83_uploadFromBitmapData)
HXLINE(  85)		if (hx::IsNull( source )) {
HXLINE(  85)			return;
            		}
HXLINE(  87)		int size = ((int)this->_hx___size >> (int)miplevel);
HXLINE(  88)		if ((size == (int)0)) {
HXLINE(  88)			return;
            		}
HXLINE(  98)		 ::lime::graphics::Image image = this->_hx___getImage(source);
HXLINE( 100)		this->uploadFromTypedArray(image->get_data(),side,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromBitmapData,(void))

void CubeTexture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_116_uploadFromByteArray)
HXDLIN( 116)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 116)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 116)		if (hx::IsNotNull( buffer )) {
HXDLIN( 116)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 116)			int in_byteOffset = byteArrayOffset;
HXDLIN( 116)			if ((in_byteOffset < (int)0)) {
HXDLIN( 116)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 116)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXDLIN( 116)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 116)			int bufferByteLength = buffer->length;
HXDLIN( 116)			int elementSize = _this->bytesPerElement;
HXDLIN( 116)			int newByteLength = bufferByteLength;
HXDLIN( 116)			{
HXDLIN( 116)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 116)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXDLIN( 116)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 116)				if ((newByteLength < (int)0)) {
HXDLIN( 116)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 116)			_this->buffer = buffer;
HXDLIN( 116)			_this->byteOffset = in_byteOffset;
HXDLIN( 116)			_this->byteLength = newByteLength;
HXDLIN( 116)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 116)			this1 = _this;
            		}
            		else {
HXDLIN( 116)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 116)		this->uploadFromTypedArray(this1,side,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubeTexture_obj,uploadFromByteArray,(void))

void CubeTexture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,int side,hx::Null< int >  __o_miplevel){
int miplevel = __o_miplevel.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_ccb53fcc86b81631_121_uploadFromTypedArray)
HXLINE( 123)		if (hx::IsNull( data )) {
HXLINE( 123)			return;
            		}
HXLINE( 125)		int size = ((int)this->_hx___size >> (int)miplevel);
HXLINE( 126)		if ((size == (int)0)) {
HXLINE( 126)			return;
            		}
HXLINE( 128)		int target;
HXDLIN( 128)		switch((int)(side)){
            			case (int)0: {
HXLINE( 128)				target = (int)34069;
            			}
            			break;
            			case (int)1: {
HXLINE( 128)				target = (int)34070;
            			}
            			break;
            			case (int)2: {
HXLINE( 128)				target = (int)34071;
            			}
            			break;
            			case (int)3: {
HXLINE( 128)				target = (int)34072;
            			}
            			break;
            			case (int)4: {
HXLINE( 128)				target = (int)34073;
            			}
            			break;
            			case (int)5: {
HXLINE( 128)				target = (int)34074;
            			}
            			break;
            			default:{
HXLINE( 136)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            			}
            		}
HXLINE( 140)		::lime::graphics::opengl::GL_obj::context->bindTexture((int)34067,this->_hx___textureID);
HXLINE( 141)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 143)		{
HXLINE( 143)			int internalformat = this->_hx___internalFormat;
HXDLIN( 143)			int format = this->_hx___format;
HXDLIN( 143)			Float data1 = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(data);
HXDLIN( 143)			::lime::graphics::opengl::GL_obj::context->texImage2D(target,miplevel,internalformat,size,size,(int)0,format,(int)5121,data1);
            		}
HXLINE( 144)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 146)		::lime::graphics::opengl::GL_obj::context->bindTexture(this->_hx___textureTarget,null());
HXLINE( 147)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 149)		 ::openfl::display3D::textures::CubeTexture _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 149)		_hx_tmp->_hx___uploadedSides = ((int)_hx_tmp->_hx___uploadedSides | (int)((int)(int)1 << (int)side));
HXLINE( 151)		int memUsage = ((this->_hx___size * this->_hx___size) * (int)4);
HXLINE( 152)		this->_hx___trackMemoryUsage(memUsage);
            	}


HX_DEFINE_DYNAMIC_FUNC3(CubeTexture_obj,uploadFromTypedArray,(void))

void CubeTexture_obj::_hx___setSamplerState( ::openfl::_internal::stage3D::SamplerState state){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_157___setSamplerState)
HXLINE( 159)		if (!(state->equals(this->_hx___samplerState))) {
HXLINE( 161)			bool _hx_tmp;
HXDLIN( 161)			bool _hx_tmp1;
HXDLIN( 161)			if ((state->minFilter != (int)9987)) {
HXLINE( 161)				_hx_tmp1 = (state->minFilter == (int)9984);
            			}
            			else {
HXLINE( 161)				_hx_tmp1 = true;
            			}
HXDLIN( 161)			if (_hx_tmp1) {
HXLINE( 161)				_hx_tmp = !(state->mipmapGenerated);
            			}
            			else {
HXLINE( 161)				_hx_tmp = false;
            			}
HXDLIN( 161)			if (_hx_tmp) {
HXLINE( 163)				::lime::graphics::opengl::GL_obj::context->generateMipmap((int)34067);
HXLINE( 164)				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 166)				state->mipmapGenerated = true;
            			}
HXLINE( 170)			if ((state->maxAniso != ((Float)0.0))) {
HXLINE( 172)				::lime::graphics::opengl::GL_obj::context->texParameterf((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,state->maxAniso);
HXLINE( 173)				::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            			}
            		}
HXLINE( 179)		this->super::_hx___setSamplerState(state);
            	}


void CubeTexture_obj::_hx___uploadATFTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset){
            	HX_STACKFRAME(&_hx_pos_ccb53fcc86b81631_184___uploadATFTextureFromByteArray)
            	}


HX_DEFINE_DYNAMIC_FUNC2(CubeTexture_obj,_hx___uploadATFTextureFromByteArray,(void))


hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__new( ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	hx::ObjectPtr< CubeTexture_obj > __this = new CubeTexture_obj();
	__this->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

hx::ObjectPtr< CubeTexture_obj > CubeTexture_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int size, ::Dynamic format,bool optimizeForRenderToTexture,int streamingLevels) {
	CubeTexture_obj *__this = (CubeTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CubeTexture_obj), true, "openfl.display3D.textures.CubeTexture"));
	*(void **)__this = CubeTexture_obj::_hx_vtable;
	__this->__construct(context,size,format,optimizeForRenderToTexture,streamingLevels);
	return __this;
}

CubeTexture_obj::CubeTexture_obj()
{
}

hx::Val CubeTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { return hx::Val( _hx___size ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { return hx::Val( _hx___uploadedSides ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__setSamplerState") ) { return hx::Val( _hx___setSamplerState_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn() ); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__uploadATFTextureFromByteArray") ) { return hx::Val( _hx___uploadATFTextureFromByteArray_dyn() ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CubeTexture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__size") ) { _hx___size=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__uploadedSides") ) { _hx___uploadedSides=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CubeTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"));
	outFields->push(HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CubeTexture_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___size),HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb")},
	{hx::fsInt,(int)offsetof(CubeTexture_obj,_hx___uploadedSides),HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CubeTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String CubeTexture_obj_sMemberFields[] = {
	HX_HCSTRING("__size","\xe1","\x03","\x4c","\xfb"),
	HX_HCSTRING("__uploadedSides","\x1c","\xd7","\x55","\xa3"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__setSamplerState","\x8b","\xe7","\xcf","\x5d"),
	HX_HCSTRING("__uploadATFTextureFromByteArray","\x5e","\x7b","\xdb","\xc9"),
	::String(null()) };

static void CubeTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CubeTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubeTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class CubeTexture_obj::__mClass;

void CubeTexture_obj::__register()
{
	hx::Object *dummy = new CubeTexture_obj;
	CubeTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.CubeTexture","\x09","\x1a","\x15","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CubeTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CubeTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubeTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CubeTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubeTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubeTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
