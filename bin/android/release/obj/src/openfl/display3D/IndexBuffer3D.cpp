// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferIO
#include <lime/utils/ArrayBufferIO.h>
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
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3DBufferUsage_Context3DBufferUsage_Impl_
#include <openfl/display3D/_Context3DBufferUsage/Context3DBufferUsage_Impl_.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0f6a02916d47e310_30_new,"openfl.display3D.IndexBuffer3D","new",0x7b4eb39c,"openfl.display3D.IndexBuffer3D.new","openfl/display3D/IndexBuffer3D.hx",30,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_47_dispose,"openfl.display3D.IndexBuffer3D","dispose",0xbcffb1db,"openfl.display3D.IndexBuffer3D.dispose","openfl/display3D/IndexBuffer3D.hx",47,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_58_uploadFromByteArray,"openfl.display3D.IndexBuffer3D","uploadFromByteArray",0x61713322,"openfl.display3D.IndexBuffer3D.uploadFromByteArray","openfl/display3D/IndexBuffer3D.hx",58,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_67_uploadFromTypedArray,"openfl.display3D.IndexBuffer3D","uploadFromTypedArray",0x49f635fe,"openfl.display3D.IndexBuffer3D.uploadFromTypedArray","openfl/display3D/IndexBuffer3D.hx",67,0x3d934296)
HX_LOCAL_STACK_FRAME(_hx_pos_0f6a02916d47e310_87_uploadFromVector,"openfl.display3D.IndexBuffer3D","uploadFromVector",0xaabe3672,"openfl.display3D.IndexBuffer3D.uploadFromVector","openfl/display3D/IndexBuffer3D.hx",87,0x3d934296)
namespace openfl{
namespace display3D{

void IndexBuffer3D_obj::__construct( ::openfl::display3D::Context3D context3D,int numIndices,::String bufferUsage){
            	HX_STACKFRAME(&_hx_pos_0f6a02916d47e310_30_new)
HXLINE(  32)		this->_hx___context = context3D;
HXLINE(  33)		this->_hx___numIndices = numIndices;
HXLINE(  34)		this->_hx___elementType = (int)5123;
HXLINE(  36)		this->_hx___id = ::lime::graphics::opengl::GL_obj::context->createBuffer();
HXLINE(  37)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  39)		int _hx_tmp;
HXDLIN(  39)		if (hx::IsEq( ::openfl::display3D::_Context3DBufferUsage::Context3DBufferUsage_Impl__obj::fromString(bufferUsage),(int)0 )) {
HXLINE(  39)			_hx_tmp = (int)35048;
            		}
            		else {
HXLINE(  39)			_hx_tmp = (int)35044;
            		}
HXDLIN(  39)		this->_hx___usage = _hx_tmp;
HXLINE(  41)		this->_hx___context->_hx___statsIncrement((int)1);
HXLINE(  42)		this->_hx___memoryUsage = (int)0;
            	}

Dynamic IndexBuffer3D_obj::__CreateEmpty() { return new IndexBuffer3D_obj; }

void *IndexBuffer3D_obj::_hx_vtable = 0;

Dynamic IndexBuffer3D_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IndexBuffer3D_obj > _hx_result = new IndexBuffer3D_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool IndexBuffer3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36314040;
}

void IndexBuffer3D_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_0f6a02916d47e310_47_dispose)
HXLINE(  49)		::lime::graphics::opengl::GL_obj::context->deleteBuffer(this->_hx___id);
HXLINE(  51)		this->_hx___context->_hx___statsDecrement((int)1);
HXLINE(  52)		this->_hx___context->_hx___statsSubtract((int)6,this->_hx___memoryUsage);
HXLINE(  53)		this->_hx___memoryUsage = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(IndexBuffer3D_obj,dispose,(void))

void IndexBuffer3D_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startOffset,int count){
            	HX_GC_STACKFRAME(&_hx_pos_0f6a02916d47e310_58_uploadFromByteArray)
HXLINE(  60)		int offset = (byteArrayOffset + (startOffset * (int)2));
HXLINE(  62)		 ::haxe::io::Bytes buffer = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN(  62)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  62)		if (hx::IsNotNull( buffer )) {
HXLINE(  62)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)2);
HXDLIN(  62)			int in_byteOffset = offset;
HXDLIN(  62)			if ((in_byteOffset < (int)0)) {
HXLINE(  62)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  62)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE(  62)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  62)			int bufferByteLength = buffer->length;
HXDLIN(  62)			int elementSize = _this->bytesPerElement;
HXDLIN(  62)			int newByteLength = bufferByteLength;
HXDLIN(  62)			if (hx::IsNull( count )) {
HXLINE(  62)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  62)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  62)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  62)				if ((newByteLength < (int)0)) {
HXLINE(  62)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
            			else {
HXLINE(  62)				newByteLength = (count * _this->bytesPerElement);
HXDLIN(  62)				int newRange = (in_byteOffset + newByteLength);
HXDLIN(  62)				if ((newRange > bufferByteLength)) {
HXLINE(  62)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  62)			_this->buffer = buffer;
HXDLIN(  62)			_this->byteOffset = in_byteOffset;
HXDLIN(  62)			_this->byteLength = newByteLength;
HXDLIN(  62)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN(  62)			this1 = _this;
            		}
            		else {
HXLINE(  62)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            		}
HXDLIN(  62)		this->uploadFromTypedArray(this1);
            	}


HX_DEFINE_DYNAMIC_FUNC4(IndexBuffer3D_obj,uploadFromByteArray,(void))

void IndexBuffer3D_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data){
            	HX_STACKFRAME(&_hx_pos_0f6a02916d47e310_67_uploadFromTypedArray)
HXLINE(  69)		if (hx::IsNull( data )) {
HXLINE(  69)			return;
            		}
HXLINE(  71)		::lime::graphics::opengl::GL_obj::context->bindBuffer((int)34963,this->_hx___id);
HXLINE(  72)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  74)		{
HXLINE(  74)			int size = data->byteLength;
HXDLIN(  74)			Float srcData = ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromArrayBufferView(data);
HXDLIN(  74)			::lime::graphics::opengl::GL_obj::context->bufferData((int)34963,size,srcData,this->_hx___usage);
            		}
HXLINE(  75)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  77)		if ((data->byteLength != this->_hx___memoryUsage)) {
HXLINE(  79)			 ::openfl::display3D::Context3D _hx_tmp = this->_hx___context;
HXDLIN(  79)			_hx_tmp->_hx___statsAdd((int)6,(data->byteLength - this->_hx___memoryUsage));
HXLINE(  80)			this->_hx___memoryUsage = data->byteLength;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(IndexBuffer3D_obj,uploadFromTypedArray,(void))

void IndexBuffer3D_obj::uploadFromVector( ::openfl::_Vector::IntVector data,int startOffset,int count){
            	HX_GC_STACKFRAME(&_hx_pos_0f6a02916d47e310_87_uploadFromVector)
HXLINE(  91)		int length = (startOffset + count);
HXLINE(  93)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  93)		if (hx::IsNotNull( count )) {
HXLINE(  93)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,count,(int)2);
            		}
            		else {
HXLINE(  93)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            		}
HXDLIN(  93)		 ::lime::utils::ArrayBufferView buffer = this1;
HXLINE(  95)		{
HXLINE(  95)			int _g1 = startOffset;
HXDLIN(  95)			int _g = length;
HXDLIN(  95)			while((_g1 < _g)){
HXLINE(  95)				_g1 = (_g1 + (int)1);
HXDLIN(  95)				int i = (_g1 - (int)1);
HXLINE(  97)				{
HXLINE(  97)					int val = data->get(i);
HXDLIN(  97)					 ::haxe::io::Bytes buffer1 = buffer->buffer;
HXDLIN(  97)					int buffer2 = buffer->byteOffset;
HXDLIN(  97)					::lime::utils::ArrayBufferIO_obj::setInt16(buffer1,(buffer2 + ((i - startOffset) * (int)2)),val);
            				}
            			}
            		}
HXLINE( 101)		this->uploadFromTypedArray(buffer);
            	}


HX_DEFINE_DYNAMIC_FUNC3(IndexBuffer3D_obj,uploadFromVector,(void))


hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__new( ::openfl::display3D::Context3D context3D,int numIndices,::String bufferUsage) {
	hx::ObjectPtr< IndexBuffer3D_obj > __this = new IndexBuffer3D_obj();
	__this->__construct(context3D,numIndices,bufferUsage);
	return __this;
}

hx::ObjectPtr< IndexBuffer3D_obj > IndexBuffer3D_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context3D,int numIndices,::String bufferUsage) {
	IndexBuffer3D_obj *__this = (IndexBuffer3D_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IndexBuffer3D_obj), true, "openfl.display3D.IndexBuffer3D"));
	*(void **)__this = IndexBuffer3D_obj::_hx_vtable;
	__this->__construct(context3D,numIndices,bufferUsage);
	return __this;
}

IndexBuffer3D_obj::IndexBuffer3D_obj()
{
}

void IndexBuffer3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexBuffer3D);
	HX_MARK_MEMBER_NAME(_hx___context,"__context");
	HX_MARK_MEMBER_NAME(_hx___elementType,"__elementType");
	HX_MARK_MEMBER_NAME(_hx___id,"__id");
	HX_MARK_MEMBER_NAME(_hx___memoryUsage,"__memoryUsage");
	HX_MARK_MEMBER_NAME(_hx___numIndices,"__numIndices");
	HX_MARK_MEMBER_NAME(_hx___usage,"__usage");
	HX_MARK_END_CLASS();
}

void IndexBuffer3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___context,"__context");
	HX_VISIT_MEMBER_NAME(_hx___elementType,"__elementType");
	HX_VISIT_MEMBER_NAME(_hx___id,"__id");
	HX_VISIT_MEMBER_NAME(_hx___memoryUsage,"__memoryUsage");
	HX_VISIT_MEMBER_NAME(_hx___numIndices,"__numIndices");
	HX_VISIT_MEMBER_NAME(_hx___usage,"__usage");
}

hx::Val IndexBuffer3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { return hx::Val( _hx___id ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { return hx::Val( _hx___usage ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return hx::Val( dispose_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { return hx::Val( _hx___context ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__numIndices") ) { return hx::Val( _hx___numIndices ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__elementType") ) { return hx::Val( _hx___elementType ); }
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { return hx::Val( _hx___memoryUsage ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"uploadFromVector") ) { return hx::Val( uploadFromVector_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IndexBuffer3D_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"__id") ) { _hx___id=inValue.Cast<  ::lime::graphics::opengl::GLObject >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__usage") ) { _hx___usage=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__context") ) { _hx___context=inValue.Cast<  ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__numIndices") ) { _hx___numIndices=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__elementType") ) { _hx___elementType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__memoryUsage") ) { _hx___memoryUsage=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexBuffer3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"));
	outFields->push(HX_HCSTRING("__elementType","\x76","\x1c","\xf3","\x38"));
	outFields->push(HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"));
	outFields->push(HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__numIndices","\xa1","\x00","\x08","\x4c"));
	outFields->push(HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IndexBuffer3D_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(IndexBuffer3D_obj,_hx___context),HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,_hx___elementType),HX_HCSTRING("__elementType","\x76","\x1c","\xf3","\x38")},
	{hx::fsObject /*::lime::graphics::opengl::GLObject*/ ,(int)offsetof(IndexBuffer3D_obj,_hx___id),HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,_hx___memoryUsage),HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,_hx___numIndices),HX_HCSTRING("__numIndices","\xa1","\x00","\x08","\x4c")},
	{hx::fsInt,(int)offsetof(IndexBuffer3D_obj,_hx___usage),HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IndexBuffer3D_obj_sStaticStorageInfo = 0;
#endif

static ::String IndexBuffer3D_obj_sMemberFields[] = {
	HX_HCSTRING("__context","\xcf","\xe6","\xc5","\x9a"),
	HX_HCSTRING("__elementType","\x76","\x1c","\xf3","\x38"),
	HX_HCSTRING("__id","\xfb","\xb6","\x13","\x3f"),
	HX_HCSTRING("__memoryUsage","\x40","\xbf","\x50","\xc5"),
	HX_HCSTRING("__numIndices","\xa1","\x00","\x08","\x4c"),
	HX_HCSTRING("__usage","\x01","\xb6","\x8d","\x14"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("uploadFromVector","\x2e","\x6f","\x6b","\xa8"),
	::String(null()) };

static void IndexBuffer3D_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IndexBuffer3D_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer3D_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexBuffer3D_obj::__mClass;

void IndexBuffer3D_obj::__register()
{
	hx::Object *dummy = new IndexBuffer3D_obj;
	IndexBuffer3D_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.IndexBuffer3D","\xaa","\xf5","\xd5","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IndexBuffer3D_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IndexBuffer3D_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IndexBuffer3D_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IndexBuffer3D_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IndexBuffer3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IndexBuffer3D_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
