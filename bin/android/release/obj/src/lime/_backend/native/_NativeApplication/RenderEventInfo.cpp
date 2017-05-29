// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_RenderEventInfo
#include <lime/_backend/native/_NativeApplication/RenderEventInfo.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f39e850c253c633_954_new,"lime._backend.native._NativeApplication.RenderEventInfo","new",0xcf12fe07,"lime._backend.native._NativeApplication.RenderEventInfo.new","lime/_backend/native/NativeApplication.hx",954,0xb13849fd)
HX_LOCAL_STACK_FRAME(_hx_pos_7f39e850c253c633_964_clone,"lime._backend.native._NativeApplication.RenderEventInfo","clone",0xa78638c4,"lime._backend.native._NativeApplication.RenderEventInfo.clone","lime/_backend/native/NativeApplication.hx",964,0xb13849fd)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

void RenderEventInfo_obj::__construct( ::Dynamic type, ::lime::graphics::RenderContext context){
            	HX_STACKFRAME(&_hx_pos_7f39e850c253c633_954_new)
HXLINE( 956)		this->type = type;
HXLINE( 957)		this->context = context;
            	}

Dynamic RenderEventInfo_obj::__CreateEmpty() { return new RenderEventInfo_obj; }

void *RenderEventInfo_obj::_hx_vtable = 0;

Dynamic RenderEventInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RenderEventInfo_obj > _hx_result = new RenderEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool RenderEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1799b38f;
}

 ::lime::_backend::native::_NativeApplication::RenderEventInfo RenderEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_7f39e850c253c633_964_clone)
HXDLIN( 964)		return  ::lime::_backend::native::_NativeApplication::RenderEventInfo_obj::__alloc( HX_CTX ,this->type,this->context);
            	}


HX_DEFINE_DYNAMIC_FUNC0(RenderEventInfo_obj,clone,return )


hx::ObjectPtr< RenderEventInfo_obj > RenderEventInfo_obj::__new( ::Dynamic type, ::lime::graphics::RenderContext context) {
	hx::ObjectPtr< RenderEventInfo_obj > __this = new RenderEventInfo_obj();
	__this->__construct(type,context);
	return __this;
}

hx::ObjectPtr< RenderEventInfo_obj > RenderEventInfo_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic type, ::lime::graphics::RenderContext context) {
	RenderEventInfo_obj *__this = (RenderEventInfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RenderEventInfo_obj), true, "lime._backend.native._NativeApplication.RenderEventInfo"));
	*(void **)__this = RenderEventInfo_obj::_hx_vtable;
	__this->__construct(type,context);
	return __this;
}

RenderEventInfo_obj::RenderEventInfo_obj()
{
}

void RenderEventInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderEventInfo);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void RenderEventInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
	HX_VISIT_MEMBER_NAME(type,"type");
}

hx::Val RenderEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RenderEventInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::lime::graphics::RenderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RenderEventInfo_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::RenderContext*/ ,(int)offsetof(RenderEventInfo_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{hx::fsInt,(int)offsetof(RenderEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RenderEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String RenderEventInfo_obj_sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void RenderEventInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RenderEventInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class RenderEventInfo_obj::__mClass;

void RenderEventInfo_obj::__register()
{
	hx::Object *dummy = new RenderEventInfo_obj;
	RenderEventInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.RenderEventInfo","\x95","\xee","\x13","\x82");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RenderEventInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RenderEventInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RenderEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RenderEventInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RenderEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RenderEventInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
