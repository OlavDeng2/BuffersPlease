// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_sys_db_Connection
#include <sys/db/Connection.h>
#endif
#ifndef INCLUDED_sys_db_Sqlite
#include <sys/db/Sqlite.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteConnection
#include <sys/db/_Sqlite/SqliteConnection.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_98648538d5dded7a_204_open,"sys.db.Sqlite","open",0x1432cbdd,"sys.db.Sqlite.open","D:\\Software\\Haxe\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",204,0xb6ce1f27)
namespace sys{
namespace db{

void Sqlite_obj::__construct() { }

Dynamic Sqlite_obj::__CreateEmpty() { return new Sqlite_obj; }

void *Sqlite_obj::_hx_vtable = 0;

Dynamic Sqlite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sqlite_obj > _hx_result = new Sqlite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sqlite_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24961477;
}

::Dynamic Sqlite_obj::open(::String file){
            	HX_GC_STACKFRAME(&_hx_pos_98648538d5dded7a_204_open)
HXDLIN( 204)		return  ::sys::db::_Sqlite::SqliteConnection_obj::__alloc( HX_CTX ,file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sqlite_obj,open,return )


Sqlite_obj::Sqlite_obj()
{
}

bool Sqlite_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { outValue = open_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Sqlite_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Sqlite_obj_sStaticStorageInfo = 0;
#endif

static void Sqlite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sqlite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sqlite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sqlite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sqlite_obj::__mClass;

static ::String Sqlite_obj_sStaticFields[] = {
	HX_HCSTRING("open","\xca","\x03","\xb4","\x49"),
	::String(null())
};

void Sqlite_obj::__register()
{
	hx::Object *dummy = new Sqlite_obj;
	Sqlite_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db.Sqlite","\x3b","\x91","\x50","\x26");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sqlite_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sqlite_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Sqlite_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sqlite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sqlite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sqlite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sqlite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace db
