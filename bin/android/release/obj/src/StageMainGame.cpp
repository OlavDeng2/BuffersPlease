// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_Button
#include <Button.h>
#endif
#ifndef INCLUDED_ImageManager
#include <ImageManager.h>
#endif
#ifndef INCLUDED_SceneManager
#include <SceneManager.h>
#endif
#ifndef INCLUDED_StageMainGame
#include <StageMainGame.h>
#endif
#ifndef INCLUDED_UIButton
#include <UIButton.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_50c8625a2fee8961_13_new,"StageMainGame","new",0x99c066fb,"StageMainGame.new","StageMainGame.hx",13,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_30_setup,"StageMainGame","setup",0xb8e361d8,"StageMainGame.setup","StageMainGame.hx",30,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_35_start,"StageMainGame","start",0xc2bf27bd,"StageMainGame.start","StageMainGame.hx",35,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_49_addShack,"StageMainGame","addShack",0x35fe9578,"StageMainGame.addShack","StageMainGame.hx",49,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_61_addShackBack,"StageMainGame","addShackBack",0x056cb7bf,"StageMainGame.addShackBack","StageMainGame.hx",61,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_68_addBeaker,"StageMainGame","addBeaker",0x828560f6,"StageMainGame.addBeaker","StageMainGame.hx",68,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_76_addChemguide,"StageMainGame","addChemguide",0x505f40f3,"StageMainGame.addChemguide","StageMainGame.hx",76,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_83_addClient,"StageMainGame","addClient",0xf5f3fc27,"StageMainGame.addClient","StageMainGame.hx",83,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_90_addDrawerClosed,"StageMainGame","addDrawerClosed",0xeb6ed4d9,"StageMainGame.addDrawerClosed","StageMainGame.hx",90,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_97_addDrawerOpened,"StageMainGame","addDrawerOpened",0xfeb18dd6,"StageMainGame.addDrawerOpened","StageMainGame.hx",97,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_104_addDesk,"StageMainGame","addDesk",0x982f2135,"StageMainGame.addDesk","StageMainGame.hx",104,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_111_addMeter,"StageMainGame","addMeter",0xbfa9e32d,"StageMainGame.addMeter","StageMainGame.hx",111,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_118_addNotepad,"StageMainGame","addNotepad",0x9170ab45,"StageMainGame.addNotepad","StageMainGame.hx",118,0xe9bad0d5)
HX_LOCAL_STACK_FRAME(_hx_pos_50c8625a2fee8961_125_addScreenBox,"StageMainGame","addScreenBox",0x1faa85a3,"StageMainGame.addScreenBox","StageMainGame.hx",125,0xe9bad0d5)

void StageMainGame_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_50c8625a2fee8961_13_new)
HXDLIN(  13)		super::__construct();
            	}

Dynamic StageMainGame_obj::__CreateEmpty() { return new StageMainGame_obj; }

void *StageMainGame_obj::_hx_vtable = 0;

Dynamic StageMainGame_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< StageMainGame_obj > _hx_result = new StageMainGame_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageMainGame_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x4a34cd89;
		}
	}
}

 ::openfl::display::Stage StageMainGame_obj::myStage;

void StageMainGame_obj::setup( ::openfl::display::Stage stageref){
            	HX_STACKFRAME(&_hx_pos_50c8625a2fee8961_30_setup)
HXDLIN(  30)		::StageMainGame_obj::myStage = stageref;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageMainGame_obj,setup,(void))

void StageMainGame_obj::start(){
            	HX_STACKFRAME(&_hx_pos_50c8625a2fee8961_35_start)
HXLINE(  36)		::SceneManager_obj::setMyStage(::StageMainGame_obj::myStage);
HXLINE(  38)		::StageMainGame_obj::addShack();
HXLINE(  39)		::UIButton_obj::bufferReadyButton((int)600,(int)750);
HXLINE(  40)		::UIButton_obj::mixingButton((int)85,(int)460);
HXLINE(  41)		::UIButton_obj::chemGuideButton((int)595,(int)505);
HXLINE(  42)		::UIButton_obj::cupboardOpenButton((int)360,(int)1065);
HXLINE(  43)		::UIButton_obj::notepadButton((int)120,(int)720);
HXLINE(  44)		::UIButton_obj::mainMenuButton((int)600,(int)900);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,start,(void))

void StageMainGame_obj::addShack(){
            	HX_STACKFRAME(&_hx_pos_50c8625a2fee8961_49_addShack)
HXLINE(  50)		::ImageManager_obj::addImage(HX_("img/shackUI/Background.png",5c,b6,34,13),(int)0,(int)0);
HXLINE(  51)		::ImageManager_obj::addImage(HX_("img/shackUI/Client.png",b9,09,bc,d9),(int)0,(int)0);
HXLINE(  52)		::ImageManager_obj::addImage(HX_("img/shackUI/CupboardClosed.png",22,07,b6,94),(int)0,(int)0);
HXLINE(  53)		::ImageManager_obj::addImage(HX_("img/shackUI/Screen.png",5a,1f,0f,69),(int)0,(int)0);
HXLINE(  55)		::ImageManager_obj::addImage(HX_("img/shackUI/Desk.png",07,1a,3b,78),(int)0,(int)0);
HXLINE(  56)		::ImageManager_obj::addImage(HX_("img/shackUI/Meter.png",f1,91,0a,e5),(int)0,(int)0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addShack,(void))

void StageMainGame_obj::addShackBack(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_61_addShackBack)
HXLINE(  62)		 ::openfl::display::BitmapData shackBackData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/Background.png",5c,b6,34,13),null());
HXLINE(  63)		 ::openfl::display::Bitmap shackBack =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,shackBackData,null(),null());
HXLINE(  64)		::StageMainGame_obj::myStage->addChild(shackBack);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addShackBack,(void))

void StageMainGame_obj::addBeaker(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_68_addBeaker)
HXLINE(  70)		 ::openfl::display::BitmapData beakerData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/Beaker.png",08,82,c1,c4),null());
HXLINE(  71)		 ::openfl::display::Bitmap beaker =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,beakerData,null(),null());
HXLINE(  72)		::StageMainGame_obj::myStage->addChild(beaker);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addBeaker,(void))

void StageMainGame_obj::addChemguide(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_76_addChemguide)
HXLINE(  77)		 ::openfl::display::BitmapData chemGuideData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/Chemguide.png",37,03,a4,32),null());
HXLINE(  78)		 ::openfl::display::Bitmap chemGuide =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,chemGuideData,null(),null());
HXLINE(  79)		::StageMainGame_obj::myStage->addChild(chemGuide);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addChemguide,(void))

void StageMainGame_obj::addClient(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_83_addClient)
HXLINE(  84)		 ::openfl::display::BitmapData clientData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/Client.png",b9,09,bc,d9),null());
HXLINE(  85)		 ::openfl::display::Bitmap client =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,clientData,null(),null());
HXLINE(  86)		::StageMainGame_obj::myStage->addChild(client);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addClient,(void))

void StageMainGame_obj::addDrawerClosed(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_90_addDrawerClosed)
HXLINE(  91)		 ::openfl::display::BitmapData drawerCloseData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/CupboardClosed.png",22,07,b6,94),null());
HXLINE(  92)		 ::openfl::display::Bitmap drawerClose =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,drawerCloseData,null(),null());
HXLINE(  93)		::StageMainGame_obj::myStage->addChild(drawerClose);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addDrawerClosed,(void))

void StageMainGame_obj::addDrawerOpened(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_97_addDrawerOpened)
HXLINE(  98)		 ::openfl::display::BitmapData drawerOpenData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/CupboardOpened.png",9f,82,15,d8),null());
HXLINE(  99)		 ::openfl::display::Bitmap drawerOpen =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,drawerOpenData,null(),null());
HXLINE( 100)		::StageMainGame_obj::myStage->addChild(drawerOpen);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addDrawerOpened,(void))

void StageMainGame_obj::addDesk(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_104_addDesk)
HXLINE( 105)		 ::openfl::display::BitmapData deskData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/Desk.png",07,1a,3b,78),null());
HXLINE( 106)		 ::openfl::display::Bitmap desk =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,deskData,null(),null());
HXLINE( 107)		::StageMainGame_obj::myStage->addChild(desk);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addDesk,(void))

void StageMainGame_obj::addMeter(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_111_addMeter)
HXLINE( 112)		 ::openfl::display::BitmapData meterData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/Meter.png",f1,91,0a,e5),null());
HXLINE( 113)		 ::openfl::display::Bitmap meter =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,meterData,null(),null());
HXLINE( 114)		::StageMainGame_obj::myStage->addChild(meter);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addMeter,(void))

void StageMainGame_obj::addNotepad(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_118_addNotepad)
HXLINE( 119)		 ::openfl::display::BitmapData notepadData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/Notepad.png",49,da,01,2c),null());
HXLINE( 120)		 ::openfl::display::Bitmap notepad =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,notepadData,null(),null());
HXLINE( 121)		::StageMainGame_obj::myStage->addChild(notepad);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addNotepad,(void))

void StageMainGame_obj::addScreenBox(){
            	HX_GC_STACKFRAME(&_hx_pos_50c8625a2fee8961_125_addScreenBox)
HXLINE( 126)		 ::openfl::display::BitmapData screenData = ::openfl::utils::Assets_obj::getBitmapData(HX_("img/shackUI/Screen.png",5a,1f,0f,69),null());
HXLINE( 127)		 ::openfl::display::Bitmap screen =  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,screenData,null(),null());
HXLINE( 128)		::StageMainGame_obj::myStage->addChild(screen);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StageMainGame_obj,addScreenBox,(void))


hx::ObjectPtr< StageMainGame_obj > StageMainGame_obj::__new() {
	hx::ObjectPtr< StageMainGame_obj > __this = new StageMainGame_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< StageMainGame_obj > StageMainGame_obj::__alloc(hx::Ctx *_hx_ctx) {
	StageMainGame_obj *__this = (StageMainGame_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StageMainGame_obj), true, "StageMainGame"));
	*(void **)__this = StageMainGame_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StageMainGame_obj::StageMainGame_obj()
{
}

bool StageMainGame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { outValue = setup_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"myStage") ) { outValue = ( myStage ); return true; }
		if (HX_FIELD_EQ(inName,"addDesk") ) { outValue = addDesk_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addShack") ) { outValue = addShack_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addMeter") ) { outValue = addMeter_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addBeaker") ) { outValue = addBeaker_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addClient") ) { outValue = addClient_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addNotepad") ) { outValue = addNotepad_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addShackBack") ) { outValue = addShackBack_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addChemguide") ) { outValue = addChemguide_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addScreenBox") ) { outValue = addScreenBox_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addDrawerClosed") ) { outValue = addDrawerClosed_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addDrawerOpened") ) { outValue = addDrawerOpened_dyn(); return true; }
	}
	return false;
}

bool StageMainGame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"myStage") ) { myStage=ioValue.Cast<  ::openfl::display::Stage >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *StageMainGame_obj_sMemberStorageInfo = 0;
static hx::StaticInfo StageMainGame_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Stage*/ ,(void *) &StageMainGame_obj::myStage,HX_HCSTRING("myStage","\xb2","\x13","\x0b","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void StageMainGame_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageMainGame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageMainGame_obj::myStage,"myStage");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageMainGame_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageMainGame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageMainGame_obj::myStage,"myStage");
};

#endif

hx::Class StageMainGame_obj::__mClass;

static ::String StageMainGame_obj_sStaticFields[] = {
	HX_HCSTRING("myStage","\xb2","\x13","\x0b","\x2d"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("addShack","\xf3","\xfd","\x79","\xf5"),
	HX_HCSTRING("addShackBack","\xba","\x79","\x05","\x1d"),
	HX_HCSTRING("addBeaker","\x1b","\x64","\x05","\x4f"),
	HX_HCSTRING("addChemguide","\xee","\x02","\xf8","\x67"),
	HX_HCSTRING("addClient","\x4c","\xff","\x73","\xc2"),
	HX_HCSTRING("addDrawerClosed","\xbe","\x41","\xed","\xda"),
	HX_HCSTRING("addDrawerOpened","\xbb","\xfa","\x2f","\xee"),
	HX_HCSTRING("addDesk","\x1a","\xa1","\xa3","\x7e"),
	HX_HCSTRING("addMeter","\xa8","\x4b","\x25","\x7f"),
	HX_HCSTRING("addNotepad","\x80","\x68","\xf3","\xb4"),
	HX_HCSTRING("addScreenBox","\x9e","\x47","\x43","\x37"),
	::String(null())
};

void StageMainGame_obj::__register()
{
	hx::Object *dummy = new StageMainGame_obj;
	StageMainGame_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("StageMainGame","\x89","\xcd","\x34","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageMainGame_obj::__GetStatic;
	__mClass->mSetStaticField = &StageMainGame_obj::__SetStatic;
	__mClass->mMarkFunc = StageMainGame_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(StageMainGame_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< StageMainGame_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageMainGame_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageMainGame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageMainGame_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
