// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_GlyphMetrics
#include <lime/text/GlyphMetrics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_64e3d4d6ee91dfdb_21_new,"lime.text.GlyphMetrics","new",0x60d06751,"lime.text.GlyphMetrics.new","lime/text/GlyphMetrics.hx",21,0x56473cdf)
namespace lime{
namespace text{

void GlyphMetrics_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_64e3d4d6ee91dfdb_21_new)
            	}

Dynamic GlyphMetrics_obj::__CreateEmpty() { return new GlyphMetrics_obj; }

void *GlyphMetrics_obj::_hx_vtable = 0;

Dynamic GlyphMetrics_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlyphMetrics_obj > _hx_result = new GlyphMetrics_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlyphMetrics_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a905c99;
}


GlyphMetrics_obj::GlyphMetrics_obj()
{
}

void GlyphMetrics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GlyphMetrics);
	HX_MARK_MEMBER_NAME(advance,"advance");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(horizontalBearing,"horizontalBearing");
	HX_MARK_MEMBER_NAME(verticalBearing,"verticalBearing");
	HX_MARK_END_CLASS();
}

void GlyphMetrics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(advance,"advance");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(horizontalBearing,"horizontalBearing");
	HX_VISIT_MEMBER_NAME(verticalBearing,"verticalBearing");
}

hx::Val GlyphMetrics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { return hx::Val( advance ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"verticalBearing") ) { return hx::Val( verticalBearing ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalBearing") ) { return hx::Val( horizontalBearing ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GlyphMetrics_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"advance") ) { advance=inValue.Cast<  ::lime::math::Vector2 >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"verticalBearing") ) { verticalBearing=inValue.Cast<  ::lime::math::Vector2 >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"horizontalBearing") ) { horizontalBearing=inValue.Cast<  ::lime::math::Vector2 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlyphMetrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("horizontalBearing","\x6a","\xdb","\xfd","\x51"));
	outFields->push(HX_HCSTRING("verticalBearing","\x18","\x12","\xb7","\xdb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GlyphMetrics_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphMetrics_obj,advance),HX_HCSTRING("advance","\x82","\x08","\x0c","\xef")},
	{hx::fsInt,(int)offsetof(GlyphMetrics_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphMetrics_obj,horizontalBearing),HX_HCSTRING("horizontalBearing","\x6a","\xdb","\xfd","\x51")},
	{hx::fsObject /*::lime::math::Vector2*/ ,(int)offsetof(GlyphMetrics_obj,verticalBearing),HX_HCSTRING("verticalBearing","\x18","\x12","\xb7","\xdb")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GlyphMetrics_obj_sStaticStorageInfo = 0;
#endif

static ::String GlyphMetrics_obj_sMemberFields[] = {
	HX_HCSTRING("advance","\x82","\x08","\x0c","\xef"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("horizontalBearing","\x6a","\xdb","\xfd","\x51"),
	HX_HCSTRING("verticalBearing","\x18","\x12","\xb7","\xdb"),
	::String(null()) };

static void GlyphMetrics_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlyphMetrics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlyphMetrics_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlyphMetrics_obj::__mClass,"__mClass");
};

#endif

hx::Class GlyphMetrics_obj::__mClass;

void GlyphMetrics_obj::__register()
{
	hx::Object *dummy = new GlyphMetrics_obj;
	GlyphMetrics_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.GlyphMetrics","\xdf","\x6a","\x3c","\x94");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GlyphMetrics_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlyphMetrics_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlyphMetrics_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlyphMetrics_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlyphMetrics_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlyphMetrics_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
