// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_BytePointerData
#include <lime/utils/BytePointerData.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_lime_utils__BytePointer_BytePointer_Impl_
#include <lime/utils/_BytePointer/BytePointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_16__new,"lime.utils._BytePointer.BytePointer_Impl_","_new",0xc3bc293c,"lime.utils._BytePointer.BytePointer_Impl_._new","lime/utils/BytePointer.hx",16,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_23_set,"lime.utils._BytePointer.BytePointer_Impl_","set",0x582efc27,"lime.utils._BytePointer.BytePointer_Impl_.set","lime/utils/BytePointer.hx",23,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_57___arrayGet,"lime.utils._BytePointer.BytePointer_Impl_","__arrayGet",0x95acedb8,"lime.utils._BytePointer.BytePointer_Impl_.__arrayGet","lime/utils/BytePointer.hx",57,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_62___arraySet,"lime.utils._BytePointer.BytePointer_Impl_","__arraySet",0x95b608c4,"lime.utils._BytePointer.BytePointer_Impl_.__arraySet","lime/utils/BytePointer.hx",62,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_70_fromArrayBufferView,"lime.utils._BytePointer.BytePointer_Impl_","fromArrayBufferView",0xf5b7eab9,"lime.utils._BytePointer.BytePointer_Impl_.fromArrayBufferView","lime/utils/BytePointer.hx",70,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_83_fromArrayBuffer,"lime.utils._BytePointer.BytePointer_Impl_","fromArrayBuffer",0x96e06234,"lime.utils._BytePointer.BytePointer_Impl_.fromArrayBuffer","lime/utils/BytePointer.hx",83,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_98_fromBytes,"lime.utils._BytePointer.BytePointer_Impl_","fromBytes",0x6c6704e6,"lime.utils._BytePointer.BytePointer_Impl_.fromBytes","lime/utils/BytePointer.hx",98,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_105_fromBytesData,"lime.utils._BytePointer.BytePointer_Impl_","fromBytesData",0x619ef230,"lime.utils._BytePointer.BytePointer_Impl_.fromBytesData","lime/utils/BytePointer.hx",105,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_113_fromFile,"lime.utils._BytePointer.BytePointer_Impl_","fromFile",0xee6b3a61,"lime.utils._BytePointer.BytePointer_Impl_.fromFile","lime/utils/BytePointer.hx",113,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_120_fromLimeBytes,"lime.utils._BytePointer.BytePointer_Impl_","fromLimeBytes",0xd543eb11,"lime.utils._BytePointer.BytePointer_Impl_.fromLimeBytes","lime/utils/BytePointer.hx",120,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_130_toUInt8Array,"lime.utils._BytePointer.BytePointer_Impl_","toUInt8Array",0x7bcbbd71,"lime.utils._BytePointer.BytePointer_Impl_.toUInt8Array","lime/utils/BytePointer.hx",130,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_136_toUInt8ClampedArray,"lime.utils._BytePointer.BytePointer_Impl_","toUInt8ClampedArray",0x97605a47,"lime.utils._BytePointer.BytePointer_Impl_.toUInt8ClampedArray","lime/utils/BytePointer.hx",136,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_149_toInt8Array,"lime.utils._BytePointer.BytePointer_Impl_","toInt8Array",0x19ac5cfa,"lime.utils._BytePointer.BytePointer_Impl_.toInt8Array","lime/utils/BytePointer.hx",149,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_162_toUInt16Array,"lime.utils._BytePointer.BytePointer_Impl_","toUInt16Array",0x16e13344,"lime.utils._BytePointer.BytePointer_Impl_.toUInt16Array","lime/utils/BytePointer.hx",162,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_175_toInt16Array,"lime.utils._BytePointer.BytePointer_Impl_","toInt16Array",0x9d8c2b9b,"lime.utils._BytePointer.BytePointer_Impl_.toInt16Array","lime/utils/BytePointer.hx",175,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_188_toUInt32Array,"lime.utils._BytePointer.BytePointer_Impl_","toUInt32Array",0xd09eaf4a,"lime.utils._BytePointer.BytePointer_Impl_.toUInt32Array","lime/utils/BytePointer.hx",188,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_201_toInt32Array,"lime.utils._BytePointer.BytePointer_Impl_","toInt32Array",0x5749a7a1,"lime.utils._BytePointer.BytePointer_Impl_.toInt32Array","lime/utils/BytePointer.hx",201,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_214_toFloat32Array,"lime.utils._BytePointer.BytePointer_Impl_","toFloat32Array",0x10400814,"lime.utils._BytePointer.BytePointer_Impl_.toFloat32Array","lime/utils/BytePointer.hx",214,0x50fae541)
HX_LOCAL_STACK_FRAME(_hx_pos_83619bfc0c6e35e8_227_toFloat64Array,"lime.utils._BytePointer.BytePointer_Impl_","toFloat64Array",0x59b72515,"lime.utils._BytePointer.BytePointer_Impl_.toFloat64Array","lime/utils/BytePointer.hx",227,0x50fae541)
namespace lime{
namespace utils{
namespace _BytePointer{

void BytePointer_Impl__obj::__construct() { }

Dynamic BytePointer_Impl__obj::__CreateEmpty() { return new BytePointer_Impl__obj; }

void *BytePointer_Impl__obj::_hx_vtable = 0;

Dynamic BytePointer_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BytePointer_Impl__obj > _hx_result = new BytePointer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BytePointer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a5eae87;
}

 ::lime::utils::BytePointerData BytePointer_Impl__obj::_new( ::haxe::io::Bytes bytes,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_16__new)
HXDLIN(  16)		 ::lime::utils::BytePointerData this1 =  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,bytes,offset);
HXDLIN(  16)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BytePointer_Impl__obj,_new,return )

void BytePointer_Impl__obj::set( ::lime::utils::BytePointerData this1, ::haxe::io::Bytes bytes, ::lime::utils::ArrayBufferView bufferView, ::haxe::io::Bytes buffer, ::Dynamic offset){
            	HX_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_23_set)
HXLINE(  25)		if (hx::IsNotNull( buffer )) {
HXLINE(  30)			bytes = buffer;
            		}
HXLINE(  35)		bool _hx_tmp;
HXDLIN(  35)		if (hx::IsNull( bytes )) {
HXLINE(  35)			_hx_tmp = hx::IsNull( bufferView );
            		}
            		else {
HXLINE(  35)			_hx_tmp = true;
            		}
HXDLIN(  35)		if (_hx_tmp) {
HXLINE(  37)			this1->bytes = bytes;
HXLINE(  38)			int _hx_tmp1;
HXDLIN(  38)			if (hx::IsNotNull( offset )) {
HXLINE(  38)				_hx_tmp1 = offset;
            			}
            			else {
HXLINE(  38)				_hx_tmp1 = (int)0;
            			}
HXDLIN(  38)			this1->offset = _hx_tmp1;
            		}
            		else {
HXLINE(  45)			this1->bytes = bufferView->buffer;
HXLINE(  48)			int _hx_tmp2;
HXDLIN(  48)			if (hx::IsNotNull( offset )) {
HXLINE(  48)				_hx_tmp2 = (bufferView->byteOffset + offset);
            			}
            			else {
HXLINE(  48)				_hx_tmp2 = bufferView->byteOffset;
            			}
HXDLIN(  48)			this1->offset = _hx_tmp2;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BytePointer_Impl__obj,set,(void))

int BytePointer_Impl__obj::_hx___arrayGet( ::lime::utils::BytePointerData this1,int index){
            	HX_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_57___arrayGet)
HXDLIN(  57)		if (hx::IsNotNull( this1->bytes )) {
HXDLIN(  57)			return this1->bytes->b->__get((index + this1->offset));
            		}
            		else {
HXDLIN(  57)			return (int)0;
            		}
HXDLIN(  57)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BytePointer_Impl__obj,_hx___arrayGet,return )

int BytePointer_Impl__obj::_hx___arraySet( ::lime::utils::BytePointerData this1,int index,int value){
            	HX_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_62___arraySet)
HXLINE(  64)		if (hx::IsNull( this1->bytes )) {
HXLINE(  64)			this1->bytes->b[(index + this1->offset)] = value;
            		}
HXLINE(  65)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BytePointer_Impl__obj,_hx___arraySet,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromArrayBufferView( ::lime::utils::ArrayBufferView arrayBufferView){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_70_fromArrayBufferView)
HXLINE(  72)		if (hx::IsNull( arrayBufferView )) {
HXLINE(  72)			return null();
            		}
HXLINE(  77)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,arrayBufferView->buffer,arrayBufferView->byteOffset);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromArrayBufferView,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromArrayBuffer( ::haxe::io::Bytes buffer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_83_fromArrayBuffer)
HXLINE(  85)		if (hx::IsNull( buffer )) {
HXLINE(  85)			return null();
            		}
HXLINE(  90)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,buffer,(int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromArrayBuffer,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_98_fromBytes)
HXDLIN(  98)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,bytes,(int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromBytes,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromBytesData(::Array< unsigned char > bytesData){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_105_fromBytesData)
HXDLIN( 105)		if (hx::IsNull( bytesData )) {
HXDLIN( 105)			return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,null(),(int)0);
            		}
            		else {
HXLINE( 106)			return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,::haxe::io::Bytes_obj::ofData(bytesData),(int)0);
            		}
HXLINE( 105)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromBytesData,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_113_fromFile)
HXDLIN( 113)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,::lime::utils::_Bytes::Bytes_Impl__obj::fromFile(path),(int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromFile,return )

 ::lime::utils::BytePointerData BytePointer_Impl__obj::fromLimeBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_120_fromLimeBytes)
HXDLIN( 120)		return  ::lime::utils::BytePointerData_obj::__alloc( HX_CTX ,bytes,(int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,fromLimeBytes,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt8Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_130_toUInt8Array)
HXDLIN( 130)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 130)		 ::Dynamic byteoffset = ::Std_obj::_hx_int(((Float)bytePointer->offset / (Float)(int)8));
HXDLIN( 130)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 130)		if (hx::IsNotNull( buffer )) {
HXDLIN( 130)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 130)			int in_byteOffset = byteoffset;
HXDLIN( 130)			if ((in_byteOffset < (int)0)) {
HXDLIN( 130)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 130)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXDLIN( 130)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 130)			int bufferByteLength = buffer->length;
HXDLIN( 130)			int elementSize = _this->bytesPerElement;
HXDLIN( 130)			int newByteLength = bufferByteLength;
HXDLIN( 130)			{
HXDLIN( 130)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 130)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXDLIN( 130)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 130)				if ((newByteLength < (int)0)) {
HXDLIN( 130)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 130)			_this->buffer = buffer;
HXDLIN( 130)			_this->byteOffset = in_byteOffset;
HXDLIN( 130)			_this->byteLength = newByteLength;
HXDLIN( 130)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 130)			this1 = _this;
            		}
            		else {
HXDLIN( 130)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 130)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt8Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt8ClampedArray( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_136_toUInt8ClampedArray)
HXLINE( 138)		bool _hx_tmp;
HXDLIN( 138)		if (hx::IsNotNull( bytePointer )) {
HXLINE( 138)			_hx_tmp = hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 138)			_hx_tmp = true;
            		}
HXDLIN( 138)		if (_hx_tmp) {
HXLINE( 138)			return null();
            		}
HXLINE( 143)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 143)		 ::Dynamic byteoffset = ::Std_obj::_hx_int(((Float)bytePointer->offset / (Float)(int)8));
HXDLIN( 143)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 143)		if (hx::IsNotNull( buffer )) {
HXLINE( 143)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)5);
HXDLIN( 143)			int in_byteOffset = byteoffset;
HXDLIN( 143)			if ((in_byteOffset < (int)0)) {
HXLINE( 143)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 143)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 143)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 143)			int bufferByteLength = buffer->length;
HXDLIN( 143)			int elementSize = _this->bytesPerElement;
HXDLIN( 143)			int newByteLength = bufferByteLength;
HXDLIN( 143)			{
HXLINE( 143)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 143)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 143)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 143)				if ((newByteLength < (int)0)) {
HXLINE( 143)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 143)			_this->buffer = buffer;
HXDLIN( 143)			_this->byteOffset = in_byteOffset;
HXDLIN( 143)			_this->byteLength = newByteLength;
HXDLIN( 143)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 143)			this1 = _this;
            		}
            		else {
HXLINE( 143)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8ClampedArray",8d,06,77,13));
            		}
HXDLIN( 143)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt8ClampedArray,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toInt8Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_149_toInt8Array)
HXLINE( 151)		bool _hx_tmp;
HXDLIN( 151)		if (hx::IsNotNull( bytePointer )) {
HXLINE( 151)			_hx_tmp = hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 151)			_hx_tmp = true;
            		}
HXDLIN( 151)		if (_hx_tmp) {
HXLINE( 151)			return null();
            		}
HXLINE( 156)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 156)		 ::Dynamic byteoffset = ::Std_obj::_hx_int(((Float)bytePointer->offset / (Float)(int)8));
HXDLIN( 156)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 156)		if (hx::IsNotNull( buffer )) {
HXLINE( 156)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)1);
HXDLIN( 156)			int in_byteOffset = byteoffset;
HXDLIN( 156)			if ((in_byteOffset < (int)0)) {
HXLINE( 156)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 156)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 156)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 156)			int bufferByteLength = buffer->length;
HXDLIN( 156)			int elementSize = _this->bytesPerElement;
HXDLIN( 156)			int newByteLength = bufferByteLength;
HXDLIN( 156)			{
HXLINE( 156)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 156)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 156)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 156)				if ((newByteLength < (int)0)) {
HXLINE( 156)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 156)			_this->buffer = buffer;
HXDLIN( 156)			_this->byteOffset = in_byteOffset;
HXDLIN( 156)			_this->byteLength = newByteLength;
HXDLIN( 156)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 156)			this1 = _this;
            		}
            		else {
HXLINE( 156)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int8Array",40,53,da,77));
            		}
HXDLIN( 156)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toInt8Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt16Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_162_toUInt16Array)
HXLINE( 164)		bool _hx_tmp;
HXDLIN( 164)		if (hx::IsNotNull( bytePointer )) {
HXLINE( 164)			_hx_tmp = hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 164)			_hx_tmp = true;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 164)			return null();
            		}
HXLINE( 169)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 169)		 ::Dynamic byteoffset = ::Std_obj::_hx_int(((Float)bytePointer->offset / (Float)(int)16));
HXDLIN( 169)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 169)		if (hx::IsNotNull( buffer )) {
HXLINE( 169)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)6);
HXDLIN( 169)			int in_byteOffset = byteoffset;
HXDLIN( 169)			if ((in_byteOffset < (int)0)) {
HXLINE( 169)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 169)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 169)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 169)			int bufferByteLength = buffer->length;
HXDLIN( 169)			int elementSize = _this->bytesPerElement;
HXDLIN( 169)			int newByteLength = bufferByteLength;
HXDLIN( 169)			{
HXLINE( 169)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 169)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 169)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 169)				if ((newByteLength < (int)0)) {
HXLINE( 169)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 169)			_this->buffer = buffer;
HXDLIN( 169)			_this->byteOffset = in_byteOffset;
HXDLIN( 169)			_this->byteLength = newByteLength;
HXDLIN( 169)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 169)			this1 = _this;
            		}
            		else {
HXLINE( 169)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5));
            		}
HXDLIN( 169)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt16Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toInt16Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_175_toInt16Array)
HXLINE( 177)		bool _hx_tmp;
HXDLIN( 177)		if (hx::IsNotNull( bytePointer )) {
HXLINE( 177)			_hx_tmp = hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 177)			_hx_tmp = true;
            		}
HXDLIN( 177)		if (_hx_tmp) {
HXLINE( 177)			return null();
            		}
HXLINE( 182)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 182)		 ::Dynamic byteoffset = ::Std_obj::_hx_int(((Float)bytePointer->offset / (Float)(int)16));
HXDLIN( 182)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 182)		if (hx::IsNotNull( buffer )) {
HXLINE( 182)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)2);
HXDLIN( 182)			int in_byteOffset = byteoffset;
HXDLIN( 182)			if ((in_byteOffset < (int)0)) {
HXLINE( 182)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 182)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 182)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 182)			int bufferByteLength = buffer->length;
HXDLIN( 182)			int elementSize = _this->bytesPerElement;
HXDLIN( 182)			int newByteLength = bufferByteLength;
HXDLIN( 182)			{
HXLINE( 182)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 182)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 182)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 182)				if ((newByteLength < (int)0)) {
HXLINE( 182)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 182)			_this->buffer = buffer;
HXDLIN( 182)			_this->byteOffset = in_byteOffset;
HXDLIN( 182)			_this->byteLength = newByteLength;
HXDLIN( 182)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 182)			this1 = _this;
            		}
            		else {
HXLINE( 182)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int16Array",95,b2,95,a7));
            		}
HXDLIN( 182)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toInt16Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toUInt32Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_188_toUInt32Array)
HXLINE( 190)		bool _hx_tmp;
HXDLIN( 190)		if (hx::IsNotNull( bytePointer )) {
HXLINE( 190)			_hx_tmp = hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 190)			_hx_tmp = true;
            		}
HXDLIN( 190)		if (_hx_tmp) {
HXLINE( 190)			return null();
            		}
HXLINE( 195)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 195)		 ::Dynamic byteoffset = ::Std_obj::_hx_int(((Float)bytePointer->offset / (Float)(int)32));
HXDLIN( 195)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 195)		if (hx::IsNotNull( buffer )) {
HXLINE( 195)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)7);
HXDLIN( 195)			int in_byteOffset = byteoffset;
HXDLIN( 195)			if ((in_byteOffset < (int)0)) {
HXLINE( 195)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 195)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 195)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 195)			int bufferByteLength = buffer->length;
HXDLIN( 195)			int elementSize = _this->bytesPerElement;
HXDLIN( 195)			int newByteLength = bufferByteLength;
HXDLIN( 195)			{
HXLINE( 195)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 195)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 195)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 195)				if ((newByteLength < (int)0)) {
HXLINE( 195)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 195)			_this->buffer = buffer;
HXDLIN( 195)			_this->byteOffset = in_byteOffset;
HXDLIN( 195)			_this->byteLength = newByteLength;
HXDLIN( 195)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 195)			this1 = _this;
            		}
            		else {
HXLINE( 195)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt32Array",10,43,eb,8e));
            		}
HXDLIN( 195)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toUInt32Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toInt32Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_201_toInt32Array)
HXLINE( 203)		bool _hx_tmp;
HXDLIN( 203)		if (hx::IsNotNull( bytePointer )) {
HXLINE( 203)			_hx_tmp = hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 203)			_hx_tmp = true;
            		}
HXDLIN( 203)		if (_hx_tmp) {
HXLINE( 203)			return null();
            		}
HXLINE( 208)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 208)		 ::Dynamic byteoffset = ::Std_obj::_hx_int(((Float)bytePointer->offset / (Float)(int)32));
HXDLIN( 208)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 208)		if (hx::IsNotNull( buffer )) {
HXLINE( 208)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)3);
HXDLIN( 208)			int in_byteOffset = byteoffset;
HXDLIN( 208)			if ((in_byteOffset < (int)0)) {
HXLINE( 208)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 208)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 208)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 208)			int bufferByteLength = buffer->length;
HXDLIN( 208)			int elementSize = _this->bytesPerElement;
HXDLIN( 208)			int newByteLength = bufferByteLength;
HXDLIN( 208)			{
HXLINE( 208)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 208)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 208)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 208)				if ((newByteLength < (int)0)) {
HXLINE( 208)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 208)			_this->buffer = buffer;
HXDLIN( 208)			_this->byteOffset = in_byteOffset;
HXDLIN( 208)			_this->byteLength = newByteLength;
HXDLIN( 208)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 208)			this1 = _this;
            		}
            		else {
HXLINE( 208)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Int32Array",9b,2e,53,61));
            		}
HXDLIN( 208)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toInt32Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toFloat32Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_214_toFloat32Array)
HXLINE( 216)		bool _hx_tmp;
HXDLIN( 216)		if (hx::IsNotNull( bytePointer )) {
HXLINE( 216)			_hx_tmp = hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 216)			_hx_tmp = true;
            		}
HXDLIN( 216)		if (_hx_tmp) {
HXLINE( 216)			return null();
            		}
HXLINE( 221)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 221)		 ::Dynamic byteoffset = ::Std_obj::_hx_int(((Float)bytePointer->offset / (Float)(int)32));
HXDLIN( 221)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 221)		if (hx::IsNotNull( buffer )) {
HXLINE( 221)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)8);
HXDLIN( 221)			int in_byteOffset = byteoffset;
HXDLIN( 221)			if ((in_byteOffset < (int)0)) {
HXLINE( 221)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 221)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 221)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 221)			int bufferByteLength = buffer->length;
HXDLIN( 221)			int elementSize = _this->bytesPerElement;
HXDLIN( 221)			int newByteLength = bufferByteLength;
HXDLIN( 221)			{
HXLINE( 221)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 221)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 221)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 221)				if ((newByteLength < (int)0)) {
HXLINE( 221)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 221)			_this->buffer = buffer;
HXDLIN( 221)			_this->byteOffset = in_byteOffset;
HXDLIN( 221)			_this->byteLength = newByteLength;
HXDLIN( 221)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 221)			this1 = _this;
            		}
            		else {
HXLINE( 221)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float32Array",8e,c1,f4,d4));
            		}
HXDLIN( 221)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toFloat32Array,return )

 ::lime::utils::ArrayBufferView BytePointer_Impl__obj::toFloat64Array( ::lime::utils::BytePointerData bytePointer){
            	HX_GC_STACKFRAME(&_hx_pos_83619bfc0c6e35e8_227_toFloat64Array)
HXLINE( 229)		bool _hx_tmp;
HXDLIN( 229)		if (hx::IsNotNull( bytePointer )) {
HXLINE( 229)			_hx_tmp = hx::IsNull( bytePointer->bytes );
            		}
            		else {
HXLINE( 229)			_hx_tmp = true;
            		}
HXDLIN( 229)		if (_hx_tmp) {
HXLINE( 229)			return null();
            		}
HXLINE( 234)		 ::haxe::io::Bytes buffer = bytePointer->bytes;
HXDLIN( 234)		 ::Dynamic byteoffset = ::Std_obj::_hx_int(((Float)bytePointer->offset / (Float)(int)64));
HXDLIN( 234)		 ::lime::utils::ArrayBufferView this1;
HXDLIN( 234)		if (hx::IsNotNull( buffer )) {
HXLINE( 234)			 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)9);
HXDLIN( 234)			int in_byteOffset = byteoffset;
HXDLIN( 234)			if ((in_byteOffset < (int)0)) {
HXLINE( 234)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 234)			if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 234)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 234)			int bufferByteLength = buffer->length;
HXDLIN( 234)			int elementSize = _this->bytesPerElement;
HXDLIN( 234)			int newByteLength = bufferByteLength;
HXDLIN( 234)			{
HXLINE( 234)				newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 234)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 234)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 234)				if ((newByteLength < (int)0)) {
HXLINE( 234)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 234)			_this->buffer = buffer;
HXDLIN( 234)			_this->byteOffset = in_byteOffset;
HXDLIN( 234)			_this->byteLength = newByteLength;
HXDLIN( 234)			_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 234)			this1 = _this;
            		}
            		else {
HXLINE( 234)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for Float64Array",8f,de,6b,1e));
            		}
HXDLIN( 234)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytePointer_Impl__obj,toFloat64Array,return )


BytePointer_Impl__obj::BytePointer_Impl__obj()
{
}

bool BytePointer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__arrayGet") ) { outValue = _hx___arrayGet_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__arraySet") ) { outValue = _hx___arraySet_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"toInt8Array") ) { outValue = toInt8Array_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toUInt8Array") ) { outValue = toUInt8Array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt16Array") ) { outValue = toInt16Array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt32Array") ) { outValue = toInt32Array_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fromBytesData") ) { outValue = fromBytesData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromLimeBytes") ) { outValue = fromLimeBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUInt16Array") ) { outValue = toUInt16Array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUInt32Array") ) { outValue = toUInt32Array_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toFloat32Array") ) { outValue = toFloat32Array_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toFloat64Array") ) { outValue = toFloat64Array_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"fromArrayBuffer") ) { outValue = fromArrayBuffer_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"fromArrayBufferView") ) { outValue = fromArrayBufferView_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toUInt8ClampedArray") ) { outValue = toUInt8ClampedArray_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BytePointer_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BytePointer_Impl__obj_sStaticStorageInfo = 0;
#endif

static void BytePointer_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytePointer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BytePointer_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytePointer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class BytePointer_Impl__obj::__mClass;

static ::String BytePointer_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("__arrayGet","\x9d","\x03","\xa3","\x92"),
	HX_HCSTRING("__arraySet","\xa9","\x1e","\xac","\x92"),
	HX_HCSTRING("fromArrayBufferView","\x34","\x70","\x74","\xc8"),
	HX_HCSTRING("fromArrayBuffer","\x2f","\xce","\x77","\xec"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromBytesData","\x6b","\xd9","\x41","\xdb"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromLimeBytes","\x4c","\xd2","\xe6","\x4e"),
	HX_HCSTRING("toUInt8Array","\x96","\xd6","\xde","\x32"),
	HX_HCSTRING("toUInt8ClampedArray","\xc2","\xdf","\x1c","\x6a"),
	HX_HCSTRING("toInt8Array","\x75","\x6f","\x09","\x74"),
	HX_HCSTRING("toUInt16Array","\x7f","\x1a","\x84","\x90"),
	HX_HCSTRING("toInt16Array","\xc0","\x44","\x9f","\x54"),
	HX_HCSTRING("toUInt32Array","\x85","\x96","\x41","\x4a"),
	HX_HCSTRING("toInt32Array","\xc6","\xc0","\x5c","\x0e"),
	HX_HCSTRING("toFloat32Array","\x79","\x74","\x27","\x05"),
	HX_HCSTRING("toFloat64Array","\x7a","\x91","\x9e","\x4e"),
	::String(null())
};

void BytePointer_Impl__obj::__register()
{
	hx::Object *dummy = new BytePointer_Impl__obj;
	BytePointer_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils._BytePointer.BytePointer_Impl_","\x73","\xda","\x65","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BytePointer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BytePointer_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BytePointer_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BytePointer_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BytePointer_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytePointer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytePointer_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace _BytePointer