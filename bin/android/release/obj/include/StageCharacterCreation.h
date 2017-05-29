// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_StageCharacterCreation
#define INCLUDED_StageCharacterCreation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(StageCharacterCreation)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)



class HXCPP_CLASS_ATTRIBUTES StageCharacterCreation_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef StageCharacterCreation_obj OBJ_;
		StageCharacterCreation_obj();

	public:
		enum { _hx_ClassId = 0x2511846a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="StageCharacterCreation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"StageCharacterCreation"); }
		static hx::ObjectPtr< StageCharacterCreation_obj > __new();
		static hx::ObjectPtr< StageCharacterCreation_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StageCharacterCreation_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("StageCharacterCreation","\x6a","\x84","\x11","\x25"); }

		static void __boot();
		static  ::openfl::display::Stage myStage;
		static  ::openfl::text::TextField characterNameField;
		static  ::openfl::text::TextField pleaseEnterCharacterNameTextField;
		static  ::openfl::text::TextField storyTextField;
		static int storyLocation;
		static int storyLength;
		static ::String characterName;
		static void setup( ::openfl::display::Stage stageref);
		static ::Dynamic setup_dyn();

		static void start();
		static ::Dynamic start_dyn();

		static void addBackground();
		static ::Dynamic addBackground_dyn();

		static void displayStory(int storyId);
		static ::Dynamic displayStory_dyn();

		static void inputCharacterName();
		static ::Dynamic inputCharacterName_dyn();

		static void acceptCharacterName(int xPos,int yPos);
		static ::Dynamic acceptCharacterName_dyn();

		static void acceptCharacterNameButtonPress( ::openfl::events::MouseEvent event);
		static ::Dynamic acceptCharacterNameButtonPress_dyn();

		static void nextStory(int xPos,int yPos);
		static ::Dynamic nextStory_dyn();

		static void nextStoryPress( ::openfl::events::MouseEvent event);
		static ::Dynamic nextStoryPress_dyn();

};


#endif /* INCLUDED_StageCharacterCreation */ 