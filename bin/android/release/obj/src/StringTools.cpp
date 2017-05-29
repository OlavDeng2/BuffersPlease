// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_5f5af744d9ff5693
#define INCLUDED_5f5af744d9ff5693
#include "cpp/Pointer.h"
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_45_urlEncode,"StringTools","urlEncode",0x06afdce1,"StringTools.urlEncode","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",45,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_115_urlDecode,"StringTools","urlDecode",0x71b947f9,"StringTools.urlDecode","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",115,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_183_startsWith,"StringTools","startsWith",0x5f4e6efb,"StringTools.startsWith","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",183,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_211_endsWith,"StringTools","endsWith",0x0eb5bfe2,"StringTools.endsWith","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",211,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_245_isSpace,"StringTools","isSpace",0xe0290778,"StringTools.isSpace","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",245,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_262_ltrim,"StringTools","ltrim",0x24d2234a,"StringTools.ltrim","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",262,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_287_rtrim,"StringTools","rtrim",0x99399e50,"StringTools.rtrim","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",287,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_315_trim,"StringTools","trim",0x2908d066,"StringTools.trim","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",315,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_331_lpad,"StringTools","lpad",0x23bd8feb,"StringTools.lpad","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",331,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_386_replace,"StringTools","replace",0x6d651f30,"StringTools.replace","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",386,0x56bf9eef)
HX_LOCAL_STACK_FRAME(_hx_pos_902ed83cc8a7dfaa_396_hex,"StringTools","hex",0xd91debd7,"StringTools.hex","D:\\Software\\Haxe\\haxe\\std/StringTools.hx",396,0x56bf9eef)

void StringTools_obj::__construct() { }

Dynamic StringTools_obj::__CreateEmpty() { return new StringTools_obj; }

void *StringTools_obj::_hx_vtable = 0;

Dynamic StringTools_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StringTools_obj > _hx_result = new StringTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StringTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0363db6a;
}

::String StringTools_obj::urlEncode(::String s){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_45_urlEncode)
HXDLIN(  45)		return ( (::String)(s.__URLEncode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlEncode,return )

::String StringTools_obj::urlDecode(::String s){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_115_urlDecode)
HXDLIN( 115)		return ( (::String)(s.__URLDecode()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,urlDecode,return )

bool StringTools_obj::startsWith(::String s,::String start){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_183_startsWith)
HXLINE( 189)		if ((s.length < start.length)) {
HXLINE( 190)			return false;
            		}
HXLINE( 191)		::cpp::Pointer< char > p0 = cpp::Pointer_obj::fromPointer(s.__s);
HXLINE( 192)		::cpp::Pointer< char > p1 = cpp::Pointer_obj::fromPointer(start.__s);
HXLINE( 193)		{
HXLINE( 193)			int _g1 = (int)0;
HXDLIN( 193)			int _g = start.length;
HXDLIN( 193)			while((_g1 < _g)){
HXLINE( 193)				_g1 = (_g1 + (int)1);
HXDLIN( 193)				int i = (_g1 - (int)1);
HXLINE( 194)				char & _hx_tmp = p0->at(i);
HXDLIN( 194)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 194)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 195)					return false;
            				}
            			}
            		}
HXLINE( 196)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,startsWith,return )

bool StringTools_obj::endsWith(::String s,::String end){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_211_endsWith)
HXLINE( 217)		if ((s.length < end.length)) {
HXLINE( 218)			return false;
            		}
HXLINE( 219)		::cpp::Pointer< char > p0 = cpp::Pointer_obj::fromPointer(s.__s);
HXDLIN( 219)		::cpp::Pointer< char > p01 = p0->add((s.length - end.length));
HXLINE( 220)		::cpp::Pointer< char > p1 = cpp::Pointer_obj::fromPointer(end.__s);
HXLINE( 221)		{
HXLINE( 221)			int _g1 = (int)0;
HXDLIN( 221)			int _g = end.length;
HXDLIN( 221)			while((_g1 < _g)){
HXLINE( 221)				_g1 = (_g1 + (int)1);
HXDLIN( 221)				int i = (_g1 - (int)1);
HXLINE( 222)				char & _hx_tmp = p01->at(i);
HXDLIN( 222)				char & _hx_tmp1 = p1->at(i);
HXDLIN( 222)				if (hx::IsNotEq( _hx_tmp,_hx_tmp1 )) {
HXLINE( 223)					return false;
            				}
            			}
            		}
HXLINE( 224)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,endsWith,return )

bool StringTools_obj::isSpace(::String s,int pos){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_245_isSpace)
HXLINE( 249)		 ::Dynamic c = s.charCodeAt(pos);
HXLINE( 250)		bool _hx_tmp;
HXDLIN( 250)		if (hx::IsGreater( c,(int)8 )) {
HXLINE( 250)			_hx_tmp = hx::IsLess( c,(int)14 );
            		}
            		else {
HXLINE( 250)			_hx_tmp = false;
            		}
HXDLIN( 250)		if (!(_hx_tmp)) {
HXLINE( 250)			return hx::IsEq( c,(int)32 );
            		}
            		else {
HXLINE( 250)			return true;
            		}
HXDLIN( 250)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,isSpace,return )

::String StringTools_obj::ltrim(::String s){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_262_ltrim)
HXLINE( 266)		int l = s.length;
HXLINE( 267)		int r = (int)0;
HXLINE( 268)		while(true){
HXLINE( 268)			bool _hx_tmp;
HXDLIN( 268)			if ((r < l)) {
HXLINE( 268)				_hx_tmp = ::StringTools_obj::isSpace(s,r);
            			}
            			else {
HXLINE( 268)				_hx_tmp = false;
            			}
HXDLIN( 268)			if (!(_hx_tmp)) {
HXLINE( 268)				goto _hx_goto_7;
            			}
HXLINE( 269)			r = (r + (int)1);
            		}
            		_hx_goto_7:;
HXLINE( 271)		if ((r > (int)0)) {
HXLINE( 272)			return s.substr(r,(l - r));
            		}
            		else {
HXLINE( 274)			return s;
            		}
HXLINE( 271)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,ltrim,return )

::String StringTools_obj::rtrim(::String s){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_287_rtrim)
HXLINE( 291)		int l = s.length;
HXLINE( 292)		int r = (int)0;
HXLINE( 293)		while(true){
HXLINE( 293)			bool _hx_tmp;
HXDLIN( 293)			if ((r < l)) {
HXLINE( 293)				_hx_tmp = ::StringTools_obj::isSpace(s,((l - r) - (int)1));
            			}
            			else {
HXLINE( 293)				_hx_tmp = false;
            			}
HXDLIN( 293)			if (!(_hx_tmp)) {
HXLINE( 293)				goto _hx_goto_9;
            			}
HXLINE( 294)			r = (r + (int)1);
            		}
            		_hx_goto_9:;
HXLINE( 296)		if ((r > (int)0)) {
HXLINE( 297)			return s.substr((int)0,(l - r));
            		}
            		else {
HXLINE( 299)			return s;
            		}
HXLINE( 296)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,rtrim,return )

::String StringTools_obj::trim(::String s){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_315_trim)
HXDLIN( 315)		return ::StringTools_obj::ltrim(::StringTools_obj::rtrim(s));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringTools_obj,trim,return )

::String StringTools_obj::lpad(::String s,::String c,int l){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_331_lpad)
HXLINE( 332)		if ((c.length <= (int)0)) {
HXLINE( 333)			return s;
            		}
HXLINE( 335)		while((s.length < l)){
HXLINE( 336)			s = (c + s);
            		}
HXLINE( 338)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,lpad,return )

::String StringTools_obj::replace(::String s,::String sub,::String by){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_386_replace)
HXDLIN( 386)		return s.split(sub)->join(by);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StringTools_obj,replace,return )

::String StringTools_obj::hex(int n, ::Dynamic digits){
            	HX_STACKFRAME(&_hx_pos_902ed83cc8a7dfaa_396_hex)
HXLINE( 402)		::String s = HX_("",00,00,00,00);
HXLINE( 403)		::String hexChars = HX_("0123456789ABCDEF",68,2a,58,a2);
HXLINE( 404)		while(true){
HXLINE( 405)			s = (hexChars.charAt(((int)n & (int)(int)15)) + s);
HXLINE( 406)			n = hx::UShr(n,(int)4);
HXLINE( 404)			if (!((n > (int)0))) {
HXLINE( 404)				goto _hx_goto_15;
            			}
            		}
            		_hx_goto_15:;
HXLINE( 417)		if (hx::IsNotNull( digits )) {
HXLINE( 418)			while(hx::IsLess( s.length,digits )){
HXLINE( 419)				s = (HX_("0",30,00,00,00) + s);
            			}
            		}
HXLINE( 421)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StringTools_obj,hex,return )


StringTools_obj::StringTools_obj()
{
}

bool StringTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { outValue = hex_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"trim") ) { outValue = trim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lpad") ) { outValue = lpad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ltrim") ) { outValue = ltrim_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"rtrim") ) { outValue = rtrim_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isSpace") ) { outValue = isSpace_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"replace") ) { outValue = replace_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { outValue = endsWith_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"urlEncode") ) { outValue = urlEncode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"urlDecode") ) { outValue = urlDecode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startsWith") ) { outValue = startsWith_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StringTools_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *StringTools_obj_sStaticStorageInfo = 0;
#endif

static void StringTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StringTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringTools_obj::__mClass,"__mClass");
};

#endif

hx::Class StringTools_obj::__mClass;

static ::String StringTools_obj_sStaticFields[] = {
	HX_HCSTRING("urlEncode","\xe5","\x4e","\x52","\x9a"),
	HX_HCSTRING("urlDecode","\xfd","\xb9","\x5b","\x05"),
	HX_HCSTRING("startsWith","\x77","\xc0","\xcf","\xf9"),
	HX_HCSTRING("endsWith","\x5e","\x7a","\xb6","\xdb"),
	HX_HCSTRING("isSpace","\x7c","\x30","\xec","\x1d"),
	HX_HCSTRING("ltrim","\x4e","\x43","\x4a","\x7c"),
	HX_HCSTRING("rtrim","\x54","\xbe","\xb1","\xf0"),
	HX_HCSTRING("trim","\xe2","\x9c","\x03","\x4d"),
	HX_HCSTRING("lpad","\x67","\x5c","\xb8","\x47"),
	HX_HCSTRING("replace","\x34","\x48","\x28","\xab"),
	HX_HCSTRING("hex","\xdb","\x42","\x4f","\x00"),
	::String(null())
};

void StringTools_obj::__register()
{
	hx::Object *dummy = new StringTools_obj;
	StringTools_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StringTools","\x6a","\xdb","\x63","\x03");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StringTools_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StringTools_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StringTools_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StringTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StringTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StringTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StringTools_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

