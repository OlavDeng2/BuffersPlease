// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#include <openfl/_internal/stage3D/_AGALConverter/RegisterUsage.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::MATRIX_4_4;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_2D;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_2D_ALPHA;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::SAMPLER_CUBE;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::UNUSED;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::VECTOR_4;

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterUsage_obj::VECTOR_4_ARRAY;

bool RegisterUsage_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MATRIX_4_4",eb,a3,62,96)) { outValue = RegisterUsage_obj::MATRIX_4_4; return true; }
	if (inName==HX_("SAMPLER_2D",09,2a,93,6e)) { outValue = RegisterUsage_obj::SAMPLER_2D; return true; }
	if (inName==HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5)) { outValue = RegisterUsage_obj::SAMPLER_2D_ALPHA; return true; }
	if (inName==HX_("SAMPLER_CUBE",ec,3e,82,a4)) { outValue = RegisterUsage_obj::SAMPLER_CUBE; return true; }
	if (inName==HX_("UNUSED",16,45,05,1e)) { outValue = RegisterUsage_obj::UNUSED; return true; }
	if (inName==HX_("VECTOR_4",78,a6,43,c8)) { outValue = RegisterUsage_obj::VECTOR_4; return true; }
	if (inName==HX_("VECTOR_4_ARRAY",32,bd,f8,e4)) { outValue = RegisterUsage_obj::VECTOR_4_ARRAY; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(RegisterUsage_obj)

int RegisterUsage_obj::__FindIndex(::String inName)
{
	if (inName==HX_("MATRIX_4_4",eb,a3,62,96)) return 2;
	if (inName==HX_("SAMPLER_2D",09,2a,93,6e)) return 3;
	if (inName==HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5)) return 4;
	if (inName==HX_("SAMPLER_CUBE",ec,3e,82,a4)) return 5;
	if (inName==HX_("UNUSED",16,45,05,1e)) return 0;
	if (inName==HX_("VECTOR_4",78,a6,43,c8)) return 1;
	if (inName==HX_("VECTOR_4_ARRAY",32,bd,f8,e4)) return 6;
	return super::__FindIndex(inName);
}

int RegisterUsage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("MATRIX_4_4",eb,a3,62,96)) return 0;
	if (inName==HX_("SAMPLER_2D",09,2a,93,6e)) return 0;
	if (inName==HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5)) return 0;
	if (inName==HX_("SAMPLER_CUBE",ec,3e,82,a4)) return 0;
	if (inName==HX_("UNUSED",16,45,05,1e)) return 0;
	if (inName==HX_("VECTOR_4",78,a6,43,c8)) return 0;
	if (inName==HX_("VECTOR_4_ARRAY",32,bd,f8,e4)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val RegisterUsage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("MATRIX_4_4",eb,a3,62,96)) return MATRIX_4_4;
	if (inName==HX_("SAMPLER_2D",09,2a,93,6e)) return SAMPLER_2D;
	if (inName==HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5)) return SAMPLER_2D_ALPHA;
	if (inName==HX_("SAMPLER_CUBE",ec,3e,82,a4)) return SAMPLER_CUBE;
	if (inName==HX_("UNUSED",16,45,05,1e)) return UNUSED;
	if (inName==HX_("VECTOR_4",78,a6,43,c8)) return VECTOR_4;
	if (inName==HX_("VECTOR_4_ARRAY",32,bd,f8,e4)) return VECTOR_4_ARRAY;
	return super::__Field(inName,inCallProp);
}

static ::String RegisterUsage_obj_sStaticFields[] = {
	HX_("UNUSED",16,45,05,1e),
	HX_("VECTOR_4",78,a6,43,c8),
	HX_("MATRIX_4_4",eb,a3,62,96),
	HX_("SAMPLER_2D",09,2a,93,6e),
	HX_("SAMPLER_2D_ALPHA",48,fd,fb,b5),
	HX_("SAMPLER_CUBE",ec,3e,82,a4),
	HX_("VECTOR_4_ARRAY",32,bd,f8,e4),
	::String(null())
};

static void RegisterUsage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::MATRIX_4_4,"MATRIX_4_4");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::SAMPLER_2D_ALPHA,"SAMPLER_2D_ALPHA");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::UNUSED,"UNUSED");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::VECTOR_4,"VECTOR_4");
	HX_MARK_MEMBER_NAME(RegisterUsage_obj::VECTOR_4_ARRAY,"VECTOR_4_ARRAY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RegisterUsage_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::MATRIX_4_4,"MATRIX_4_4");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::SAMPLER_2D,"SAMPLER_2D");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::SAMPLER_2D_ALPHA,"SAMPLER_2D_ALPHA");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::SAMPLER_CUBE,"SAMPLER_CUBE");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::UNUSED,"UNUSED");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::VECTOR_4,"VECTOR_4");
	HX_VISIT_MEMBER_NAME(RegisterUsage_obj::VECTOR_4_ARRAY,"VECTOR_4_ARRAY");
};
#endif

hx::Class RegisterUsage_obj::__mClass;

Dynamic __Create_RegisterUsage_obj() { return new RegisterUsage_obj; }

void RegisterUsage_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._internal.stage3D._AGALConverter.RegisterUsage","\x8f","\x93","\xf5","\x03"), hx::TCanCast< RegisterUsage_obj >,RegisterUsage_obj_sStaticFields,0,
	&__Create_RegisterUsage_obj, &__Create,
	&super::__SGetClass(), &CreateRegisterUsage_obj, RegisterUsage_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , RegisterUsage_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &RegisterUsage_obj::__GetStatic;
}

void RegisterUsage_obj::__boot()
{
MATRIX_4_4 = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("MATRIX_4_4","\xeb","\xa3","\x62","\x96"),2,0);
SAMPLER_2D = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"),3,0);
SAMPLER_2D_ALPHA = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("SAMPLER_2D_ALPHA","\x48","\xfd","\xfb","\xb5"),4,0);
SAMPLER_CUBE = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"),5,0);
UNUSED = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("UNUSED","\x16","\x45","\x05","\x1e"),0,0);
VECTOR_4 = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("VECTOR_4","\x78","\xa6","\x43","\xc8"),1,0);
VECTOR_4_ARRAY = hx::CreateEnum< RegisterUsage_obj >(HX_HCSTRING("VECTOR_4_ARRAY","\x32","\xbd","\xf8","\xe4"),6,0);
}


} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
