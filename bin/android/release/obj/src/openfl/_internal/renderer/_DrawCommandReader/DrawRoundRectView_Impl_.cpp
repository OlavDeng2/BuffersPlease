// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawRoundRectView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawRoundRectView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_29f1a366b7797e4c_324__new,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","_new",0x282357e4,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",324,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_29f1a366b7797e4c_325_get_x,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_x",0x8c16956c,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_x","openfl/_internal/renderer/DrawCommandReader.hx",325,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_29f1a366b7797e4c_326_get_y,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_y",0x8c16956d,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_y","openfl/_internal/renderer/DrawCommandReader.hx",326,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_29f1a366b7797e4c_327_get_width,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_width",0xe518d4fa,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_width","openfl/_internal/renderer/DrawCommandReader.hx",327,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_29f1a366b7797e4c_328_get_height,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_height",0x46f0fe73,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_height","openfl/_internal/renderer/DrawCommandReader.hx",328,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_29f1a366b7797e4c_329_get_ellipseWidth,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_ellipseWidth",0x1c1a67d4,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_ellipseWidth","openfl/_internal/renderer/DrawCommandReader.hx",329,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_29f1a366b7797e4c_330_get_ellipseHeight,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","get_ellipseHeight",0x314fea59,"openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_.get_ellipseHeight","openfl/_internal/renderer/DrawCommandReader.hx",330,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void DrawRoundRectView_Impl__obj::__construct() { }

Dynamic DrawRoundRectView_Impl__obj::__CreateEmpty() { return new DrawRoundRectView_Impl__obj; }

void *DrawRoundRectView_Impl__obj::_hx_vtable = 0;

Dynamic DrawRoundRectView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DrawRoundRectView_Impl__obj > _hx_result = new DrawRoundRectView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawRoundRectView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x568b4c1d;
}

 ::openfl::_internal::renderer::DrawCommandReader DrawRoundRectView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_29f1a366b7797e4c_324__new)
HXDLIN( 324)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 324)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,_new,return )

Float DrawRoundRectView_Impl__obj::get_x( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_29f1a366b7797e4c_325_get_x)
HXDLIN( 325)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_x,return )

Float DrawRoundRectView_Impl__obj::get_y( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_29f1a366b7797e4c_326_get_y)
HXDLIN( 326)		::Array< Float > this2 = this1->buffer->f;
HXDLIN( 326)		return this2->__get((this1->fPos + (int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_y,return )

Float DrawRoundRectView_Impl__obj::get_width( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_29f1a366b7797e4c_327_get_width)
HXDLIN( 327)		::Array< Float > this2 = this1->buffer->f;
HXDLIN( 327)		return this2->__get((this1->fPos + (int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_width,return )

Float DrawRoundRectView_Impl__obj::get_height( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_29f1a366b7797e4c_328_get_height)
HXDLIN( 328)		::Array< Float > this2 = this1->buffer->f;
HXDLIN( 328)		return this2->__get((this1->fPos + (int)3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_height,return )

Float DrawRoundRectView_Impl__obj::get_ellipseWidth( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_29f1a366b7797e4c_329_get_ellipseWidth)
HXDLIN( 329)		::Array< Float > this2 = this1->buffer->f;
HXDLIN( 329)		return this2->__get((this1->fPos + (int)4));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_ellipseWidth,return )

 ::Dynamic DrawRoundRectView_Impl__obj::get_ellipseHeight( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_29f1a366b7797e4c_330_get_ellipseHeight)
HXDLIN( 330)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRoundRectView_Impl__obj,get_ellipseHeight,return )


DrawRoundRectView_Impl__obj::DrawRoundRectView_Impl__obj()
{
}

bool DrawRoundRectView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_ellipseWidth") ) { outValue = get_ellipseWidth_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_ellipseHeight") ) { outValue = get_ellipseHeight_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DrawRoundRectView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DrawRoundRectView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void DrawRoundRectView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawRoundRectView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DrawRoundRectView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawRoundRectView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DrawRoundRectView_Impl__obj::__mClass;

static ::String DrawRoundRectView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_ellipseWidth","\xd1","\xec","\x3a","\x6b"),
	HX_HCSTRING("get_ellipseHeight","\xbc","\xc2","\xa3","\x1e"),
	::String(null())
};

void DrawRoundRectView_Impl__obj::__register()
{
	hx::Object *dummy = new DrawRoundRectView_Impl__obj;
	DrawRoundRectView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.DrawRoundRectView_Impl_","\xcb","\x2c","\x9d","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawRoundRectView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DrawRoundRectView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DrawRoundRectView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawRoundRectView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DrawRoundRectView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawRoundRectView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawRoundRectView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
