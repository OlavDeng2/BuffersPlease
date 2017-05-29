// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bad5236c57cf1a4a_36_new,"lime.system.DisplayMode","new",0x2251a8d1,"lime.system.DisplayMode.new","lime/system/DisplayMode.hx",36,0xb4b505df)
namespace lime{
namespace _hx_system{

void DisplayMode_obj::__construct(int width,int height,int refreshRate,int pixelFormat){
            	HX_STACKFRAME(&_hx_pos_bad5236c57cf1a4a_36_new)
HXLINE(  38)		this->width = width;
HXLINE(  39)		this->height = height;
HXLINE(  40)		this->refreshRate = refreshRate;
HXLINE(  41)		this->pixelFormat = pixelFormat;
            	}

Dynamic DisplayMode_obj::__CreateEmpty() { return new DisplayMode_obj; }

void *DisplayMode_obj::_hx_vtable = 0;

Dynamic DisplayMode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DisplayMode_obj > _hx_result = new DisplayMode_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool DisplayMode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x600bc2bd;
}


DisplayMode_obj::DisplayMode_obj()
{
}

hx::Val DisplayMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelFormat") ) { return hx::Val( pixelFormat ); }
		if (HX_FIELD_EQ(inName,"refreshRate") ) { return hx::Val( refreshRate ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DisplayMode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelFormat") ) { pixelFormat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"refreshRate") ) { refreshRate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayMode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"));
	outFields->push(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DisplayMode_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DisplayMode_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(DisplayMode_obj,pixelFormat),HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f")},
	{hx::fsInt,(int)offsetof(DisplayMode_obj,refreshRate),HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")},
	{hx::fsInt,(int)offsetof(DisplayMode_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DisplayMode_obj_sStaticStorageInfo = 0;
#endif

static ::String DisplayMode_obj_sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("pixelFormat","\x5d","\x72","\x1b","\x6f"),
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	::String(null()) };

static void DisplayMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayMode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DisplayMode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayMode_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayMode_obj::__mClass;

void DisplayMode_obj::__register()
{
	hx::Object *dummy = new DisplayMode_obj;
	DisplayMode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.DisplayMode","\x5f","\xec","\x9e","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DisplayMode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DisplayMode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayMode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DisplayMode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayMode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayMode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
