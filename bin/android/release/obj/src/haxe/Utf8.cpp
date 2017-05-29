// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3216e60db662636b_31_new,"haxe.Utf8","new",0x67cc940b,"haxe.Utf8.new","D:\\Software\\Haxe\\haxe\\std/cpp/_std/haxe/Utf8.hx",31,0xa6a42748)
HX_LOCAL_STACK_FRAME(_hx_pos_3216e60db662636b_38_addChar,"haxe.Utf8","addChar",0x9a1816c2,"haxe.Utf8.addChar","D:\\Software\\Haxe\\haxe\\std/cpp/_std/haxe/Utf8.hx",38,0xa6a42748)
HX_LOCAL_STACK_FRAME(_hx_pos_3216e60db662636b_42_toString,"haxe.Utf8","toString",0xb459e121,"haxe.Utf8.toString","D:\\Software\\Haxe\\haxe\\std/cpp/_std/haxe/Utf8.hx",42,0xa6a42748)
HX_LOCAL_STACK_FRAME(_hx_pos_3216e60db662636b_74_length,"haxe.Utf8","length",0x88322e1b,"haxe.Utf8.length","D:\\Software\\Haxe\\haxe\\std/cpp/_std/haxe/Utf8.hx",74,0xa6a42748)
namespace haxe{

void Utf8_obj::__construct( ::Dynamic size){
            	HX_STACKFRAME(&_hx_pos_3216e60db662636b_31_new)
HXLINE(  32)		this->__s = ::Array_obj< int >::__new();
HXLINE(  33)		bool _hx_tmp;
HXDLIN(  33)		if (hx::IsNotNull( size )) {
HXLINE(  33)			_hx_tmp = hx::IsGreater( size,(int)0 );
            		}
            		else {
HXLINE(  33)			_hx_tmp = false;
            		}
HXDLIN(  33)		if (_hx_tmp) {
HXLINE(  34)			this->__s->reserve(size);
            		}
            	}

Dynamic Utf8_obj::__CreateEmpty() { return new Utf8_obj; }

void *Utf8_obj::_hx_vtable = 0;

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Utf8_obj > _hx_result = new Utf8_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Utf8_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11cee8b7;
}

void Utf8_obj::addChar(int c){
            	HX_STACKFRAME(&_hx_pos_3216e60db662636b_38_addChar)
HXDLIN(  38)		this->__s->push(c);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,addChar,(void))

::String Utf8_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_3216e60db662636b_42_toString)
HXDLIN(  42)		return ::__hxcpp_char_array_to_utf8_string(this->__s);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,toString,return )

int Utf8_obj::length(::String s){
            	HX_STACKFRAME(&_hx_pos_3216e60db662636b_74_length)
HXDLIN(  74)		return _hx_utf8_length(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,length,return )


Utf8_obj::Utf8_obj()
{
}

void Utf8_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utf8);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_END_CLASS();
}

void Utf8_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
}

hx::Val Utf8_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return hx::Val( __s ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addChar") ) { return hx::Val( addChar_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Utf8_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { outValue = length_dyn(); return true; }
	}
	return false;
}

hx::Val Utf8_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Utf8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__s","\x53","\x69","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Utf8_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Utf8_obj,__s),HX_HCSTRING("__s","\x53","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Utf8_obj_sStaticStorageInfo = 0;
#endif

static ::String Utf8_obj_sMemberFields[] = {
	HX_HCSTRING("__s","\x53","\x69","\x48","\x00"),
	HX_HCSTRING("addChar","\x97","\xa1","\xfc","\x7d"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void Utf8_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Utf8_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8_obj::__mClass;

static ::String Utf8_obj_sStaticFields[] = {
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	::String(null())
};

void Utf8_obj::__register()
{
	hx::Object *dummy = new Utf8_obj;
	Utf8_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Utf8","\x99","\x32","\x41","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Utf8_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Utf8_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Utf8_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Utf8_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Utf8_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utf8_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utf8_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
