// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineGradientStyleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/LineGradientStyleView_Impl_.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_366__new,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","_new",0x223b6625,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",366,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_367_get_type,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_type",0x56d1b107,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_type","openfl/_internal/renderer/DrawCommandReader.hx",367,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_368_get_colors,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_colors",0x62b5713d,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_colors","openfl/_internal/renderer/DrawCommandReader.hx",368,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_369_get_alphas,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_alphas",0xde6a76e2,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_alphas","openfl/_internal/renderer/DrawCommandReader.hx",369,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_370_get_ratios,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_ratios",0x57b8e095,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_ratios","openfl/_internal/renderer/DrawCommandReader.hx",370,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_371_get_matrix,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_matrix",0x57f6e1ce,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_matrix","openfl/_internal/renderer/DrawCommandReader.hx",371,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_372_get_spreadMethod,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_spreadMethod",0x9d775901,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_spreadMethod","openfl/_internal/renderer/DrawCommandReader.hx",372,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_373_get_interpolationMethod,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_interpolationMethod",0xa82def78,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_interpolationMethod","openfl/_internal/renderer/DrawCommandReader.hx",373,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_98ef2f8e255bc688_374_get_focalPointRatio,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","get_focalPointRatio",0xd5f26c33,"openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_.get_focalPointRatio","openfl/_internal/renderer/DrawCommandReader.hx",374,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void LineGradientStyleView_Impl__obj::__construct() { }

Dynamic LineGradientStyleView_Impl__obj::__CreateEmpty() { return new LineGradientStyleView_Impl__obj; }

void *LineGradientStyleView_Impl__obj::_hx_vtable = 0;

Dynamic LineGradientStyleView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineGradientStyleView_Impl__obj > _hx_result = new LineGradientStyleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LineGradientStyleView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x36add018;
}

 ::openfl::_internal::renderer::DrawCommandReader LineGradientStyleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_366__new)
HXDLIN( 366)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 366)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,_new,return )

 ::Dynamic LineGradientStyleView_Impl__obj::get_type( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_367_get_type)
HXDLIN( 367)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_type,return )

::Array< int > LineGradientStyleView_Impl__obj::get_colors( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_368_get_colors)
HXDLIN( 368)		return this1->buffer->ii->__get(this1->iiPos).StaticCast< ::Array< int > >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_colors,return )

::Array< Float > LineGradientStyleView_Impl__obj::get_alphas( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_369_get_alphas)
HXDLIN( 369)		return this1->buffer->ff->__get(this1->ffPos).StaticCast< ::Array< Float > >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_alphas,return )

::Array< int > LineGradientStyleView_Impl__obj::get_ratios( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_370_get_ratios)
HXDLIN( 370)		::Array< ::Dynamic> this2 = this1->buffer->ii;
HXDLIN( 370)		return this2->__get((this1->iiPos + (int)1)).StaticCast< ::Array< int > >();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_ratios,return )

 ::openfl::geom::Matrix LineGradientStyleView_Impl__obj::get_matrix( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_371_get_matrix)
HXDLIN( 371)		::cpp::VirtualArray this2 = this1->buffer->o;
HXDLIN( 371)		return ( ( ::openfl::geom::Matrix)(this2->__get((this1->oPos + (int)1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_matrix,return )

 ::Dynamic LineGradientStyleView_Impl__obj::get_spreadMethod( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_372_get_spreadMethod)
HXDLIN( 372)		::cpp::VirtualArray this2 = this1->buffer->o;
HXDLIN( 372)		return this2->__get((this1->oPos + (int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_spreadMethod,return )

 ::Dynamic LineGradientStyleView_Impl__obj::get_interpolationMethod( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_373_get_interpolationMethod)
HXDLIN( 373)		::cpp::VirtualArray this2 = this1->buffer->o;
HXDLIN( 373)		return this2->__get((this1->oPos + (int)3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_interpolationMethod,return )

Float LineGradientStyleView_Impl__obj::get_focalPointRatio( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_98ef2f8e255bc688_374_get_focalPointRatio)
HXDLIN( 374)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineGradientStyleView_Impl__obj,get_focalPointRatio,return )


LineGradientStyleView_Impl__obj::LineGradientStyleView_Impl__obj()
{
}

bool LineGradientStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { outValue = get_type_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_colors") ) { outValue = get_colors_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alphas") ) { outValue = get_alphas_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_ratios") ) { outValue = get_ratios_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_matrix") ) { outValue = get_matrix_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_spreadMethod") ) { outValue = get_spreadMethod_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_focalPointRatio") ) { outValue = get_focalPointRatio_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_interpolationMethod") ) { outValue = get_interpolationMethod_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LineGradientStyleView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LineGradientStyleView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void LineGradientStyleView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineGradientStyleView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineGradientStyleView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineGradientStyleView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class LineGradientStyleView_Impl__obj::__mClass;

static ::String LineGradientStyleView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("get_colors","\x79","\x35","\x0e","\xb7"),
	HX_HCSTRING("get_alphas","\x1e","\x3b","\xc3","\x32"),
	HX_HCSTRING("get_ratios","\xd1","\xa4","\x11","\xac"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("get_spreadMethod","\x3d","\xf2","\xc2","\xf1"),
	HX_HCSTRING("get_interpolationMethod","\xbc","\x35","\x4a","\xd1"),
	HX_HCSTRING("get_focalPointRatio","\x77","\x40","\xd5","\x4b"),
	::String(null())
};

void LineGradientStyleView_Impl__obj::__register()
{
	hx::Object *dummy = new LineGradientStyleView_Impl__obj;
	LineGradientStyleView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.LineGradientStyleView_Impl_","\x2a","\xc6","\x21","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineGradientStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineGradientStyleView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LineGradientStyleView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineGradientStyleView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineGradientStyleView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineGradientStyleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineGradientStyleView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
