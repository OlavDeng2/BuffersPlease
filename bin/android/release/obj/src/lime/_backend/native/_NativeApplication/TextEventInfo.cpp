// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_TextEventInfo
#include <lime/_backend/native/_NativeApplication/TextEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d4a11b6fb4b30fe3_1030_new,"lime._backend.native._NativeApplication.TextEventInfo","new",0xb1ead390,"lime._backend.native._NativeApplication.TextEventInfo.new","lime/_backend/native/NativeApplication.hx",1030,0xb13849fd)
HX_LOCAL_STACK_FRAME(_hx_pos_d4a11b6fb4b30fe3_1043_clone,"lime._backend.native._NativeApplication.TextEventInfo","clone",0xd025428d,"lime._backend.native._NativeApplication.TextEventInfo.clone","lime/_backend/native/NativeApplication.hx",1043,0xb13849fd)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

void TextEventInfo_obj::__construct( ::Dynamic type,hx::Null< int >  __o_windowID,::String __o_text,hx::Null< int >  __o_start,hx::Null< int >  __o_length){
int windowID = __o_windowID.Default(0);
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
int start = __o_start.Default(0);
int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_d4a11b6fb4b30fe3_1030_new)
HXLINE(1032)		this->type = type;
HXLINE(1033)		this->windowID = windowID;
HXLINE(1034)		this->text = text;
HXLINE(1035)		this->start = start;
HXLINE(1036)		this->length = length;
            	}

Dynamic TextEventInfo_obj::__CreateEmpty() { return new TextEventInfo_obj; }

void *TextEventInfo_obj::_hx_vtable = 0;

Dynamic TextEventInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextEventInfo_obj > _hx_result = new TextEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TextEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08407934;
}

 ::lime::_backend::native::_NativeApplication::TextEventInfo TextEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d4a11b6fb4b30fe3_1043_clone)
HXDLIN(1043)		return  ::lime::_backend::native::_NativeApplication::TextEventInfo_obj::__alloc( HX_CTX ,this->type,this->windowID,this->text,this->start,this->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEventInfo_obj,clone,return )


TextEventInfo_obj::TextEventInfo_obj()
{
}

void TextEventInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEventInfo);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(windowID,"windowID");
	HX_MARK_END_CLASS();
}

void TextEventInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(windowID,"windowID");
}

hx::Val TextEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { return hx::Val( windowID ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TextEventInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextEventInfo_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsString,(int)offsetof(TextEventInfo_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(TextEventInfo_obj,windowID),HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TextEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String TextEventInfo_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("windowID","\xcb","\xaf","\xcd","\x7d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void TextEventInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEventInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class TextEventInfo_obj::__mClass;

void TextEventInfo_obj::__register()
{
	hx::Object *dummy = new TextEventInfo_obj;
	TextEventInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.TextEventInfo","\x9e","\x0b","\x7e","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextEventInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextEventInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEventInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEventInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
