// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#define INCLUDED_openfl_display_IBitmapDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES IBitmapDrawable_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx__hx___renderCairo)( ::openfl::_internal::renderer::RenderSession renderSession); 
		static inline void _hx___renderCairo( ::Dynamic _hx_, ::openfl::_internal::renderer::RenderSession renderSession) {
			(_hx_.mPtr->*( static_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderCairo)(renderSession);
		}
		void (hx::Object :: *_hx__hx___renderCairoMask)( ::openfl::_internal::renderer::RenderSession renderSession); 
		static inline void _hx___renderCairoMask( ::Dynamic _hx_, ::openfl::_internal::renderer::RenderSession renderSession) {
			(_hx_.mPtr->*( static_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderCairoMask)(renderSession);
		}
		void (hx::Object :: *_hx__hx___renderCanvas)( ::openfl::_internal::renderer::RenderSession renderSession); 
		static inline void _hx___renderCanvas( ::Dynamic _hx_, ::openfl::_internal::renderer::RenderSession renderSession) {
			(_hx_.mPtr->*( static_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderCanvas)(renderSession);
		}
		void (hx::Object :: *_hx__hx___renderCanvasMask)( ::openfl::_internal::renderer::RenderSession renderSession); 
		static inline void _hx___renderCanvasMask( ::Dynamic _hx_, ::openfl::_internal::renderer::RenderSession renderSession) {
			(_hx_.mPtr->*( static_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderCanvasMask)(renderSession);
		}
		void (hx::Object :: *_hx__hx___renderGL)( ::openfl::_internal::renderer::RenderSession renderSession); 
		static inline void _hx___renderGL( ::Dynamic _hx_, ::openfl::_internal::renderer::RenderSession renderSession) {
			(_hx_.mPtr->*( static_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___renderGL)(renderSession);
		}
		void (hx::Object :: *_hx__hx___updateChildren)(bool transformOnly); 
		static inline void _hx___updateChildren( ::Dynamic _hx_,bool transformOnly) {
			(_hx_.mPtr->*( static_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___updateChildren)(transformOnly);
		}
		void (hx::Object :: *_hx__hx___updateTransforms)( ::openfl::geom::Matrix overrideTransform); 
		static inline void _hx___updateTransforms( ::Dynamic _hx_, ::openfl::geom::Matrix overrideTransform) {
			(_hx_.mPtr->*( static_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___updateTransforms)(overrideTransform);
		}
		void (hx::Object :: *_hx__hx___updateMask)( ::openfl::display::Graphics maskGraphics); 
		static inline void _hx___updateMask( ::Dynamic _hx_, ::openfl::display::Graphics maskGraphics) {
			(_hx_.mPtr->*( static_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___updateMask)(maskGraphics);
		}
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_IBitmapDrawable */ 
