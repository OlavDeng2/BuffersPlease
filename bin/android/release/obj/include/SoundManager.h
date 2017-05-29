// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_SoundManager
#define INCLUDED_SoundManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(SoundManager)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,media,Sound)
HX_DECLARE_CLASS2(openfl,media,SoundChannel)



class HXCPP_CLASS_ATTRIBUTES SoundManager_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SoundManager_obj OBJ_;
		SoundManager_obj();

	public:
		enum { _hx_ClassId = 0x2f3d47e2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="SoundManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"SoundManager"); }

		hx::ObjectPtr< SoundManager_obj > __new() {
			hx::ObjectPtr< SoundManager_obj > __this = new SoundManager_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SoundManager_obj > __alloc(hx::Ctx *_hx_ctx) {
			SoundManager_obj *__this = (SoundManager_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SoundManager_obj), false, "SoundManager"));
			*(void **)__this = SoundManager_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SoundManager","\x7e","\x41","\x0c","\xf0"); }

		static void __boot();
		static  ::openfl::media::SoundChannel musicChannel;
		static  ::openfl::media::SoundChannel sfxChannel;
		static  ::openfl::media::Sound playedMusic;
		static  ::openfl::media::Sound sfxSoundPlay;
		static bool musicPlaying;
		static Float musicGain;
		static void playMusic(::String musicName);
		static ::Dynamic playMusic_dyn();

		static void playSFX(::String sfxName);
		static ::Dynamic playSFX_dyn();

		static void musicGainSofter();
		static ::Dynamic musicGainSofter_dyn();

		static void musicGainLouder();
		static ::Dynamic musicGainLouder_dyn();

};


#endif /* INCLUDED_SoundManager */ 