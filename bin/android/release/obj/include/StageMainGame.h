// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_StageMainGame
#define INCLUDED_StageMainGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(StageMainGame)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES StageMainGame_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef StageMainGame_obj OBJ_;
		StageMainGame_obj();

	public:
		enum { _hx_ClassId = 0x4a34cd89 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="StageMainGame")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"StageMainGame"); }
		static hx::ObjectPtr< StageMainGame_obj > __new();
		static hx::ObjectPtr< StageMainGame_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StageMainGame_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StageMainGame","\x89","\xcd","\x34","\x4a"); }

		static  ::openfl::display::Stage myStage;
		static void setup( ::openfl::display::Stage stageref);
		static ::Dynamic setup_dyn();

		static void start();
		static ::Dynamic start_dyn();

		static void addShack();
		static ::Dynamic addShack_dyn();

		static void addShackBack();
		static ::Dynamic addShackBack_dyn();

		static void addBeaker();
		static ::Dynamic addBeaker_dyn();

		static void addChemguide();
		static ::Dynamic addChemguide_dyn();

		static void addClient();
		static ::Dynamic addClient_dyn();

		static void addDrawerClosed();
		static ::Dynamic addDrawerClosed_dyn();

		static void addDrawerOpened();
		static ::Dynamic addDrawerOpened_dyn();

		static void addDesk();
		static ::Dynamic addDesk_dyn();

		static void addMeter();
		static ::Dynamic addMeter_dyn();

		static void addNotepad();
		static ::Dynamic addNotepad_dyn();

		static void addScreenBox();
		static ::Dynamic addScreenBox_dyn();

};


#endif /* INCLUDED_StageMainGame */ 