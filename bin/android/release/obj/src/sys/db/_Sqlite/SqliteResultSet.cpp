// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#include <sys/db/_Sqlite/SqliteResultSet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6f319ae2042e0e13_118_new,"sys.db._Sqlite.SqliteResultSet","new",0x31627399,"sys.db._Sqlite.SqliteResultSet.new","D:\\Software\\Haxe\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",118,0xb6ce1f27)
HX_LOCAL_STACK_FRAME(_hx_pos_6f319ae2042e0e13_141_hasNext,"sys.db._Sqlite.SqliteResultSet","hasNext",0x0ab9d926,"sys.db._Sqlite.SqliteResultSet.hasNext","D:\\Software\\Haxe\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",141,0xb6ce1f27)
HX_LOCAL_STACK_FRAME(_hx_pos_6f319ae2042e0e13_149_next,"sys.db._Sqlite.SqliteResultSet","next",0x04c2b39a,"sys.db._Sqlite.SqliteResultSet.next","D:\\Software\\Haxe\\haxe\\std/cpp/_std/sys/db/Sqlite.hx",149,0xb6ce1f27)
namespace sys{
namespace db{
namespace _Sqlite{

void SqliteResultSet_obj::__construct( ::Dynamic r){
            	HX_GC_STACKFRAME(&_hx_pos_6f319ae2042e0e13_118_new)
HXLINE( 119)		this->cache =  ::List_obj::__alloc( HX_CTX );
HXLINE( 120)		this->r = r;
HXLINE( 121)		this->hasNext();
            	}

Dynamic SqliteResultSet_obj::__CreateEmpty() { return new SqliteResultSet_obj; }

void *SqliteResultSet_obj::_hx_vtable = 0;

Dynamic SqliteResultSet_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SqliteResultSet_obj > _hx_result = new SqliteResultSet_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SqliteResultSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4281b8d9;
}

static ::sys::db::ResultSet_obj _hx_sys_db__Sqlite_SqliteResultSet__hx_sys_db_ResultSet= {
	( bool (hx::Object::*)())&::sys::db::_Sqlite::SqliteResultSet_obj::hasNext,
	(  ::Dynamic (hx::Object::*)())&::sys::db::_Sqlite::SqliteResultSet_obj::next,
};

void *SqliteResultSet_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc11b83fa: return &_hx_sys_db__Sqlite_SqliteResultSet__hx_sys_db_ResultSet;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool SqliteResultSet_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_6f319ae2042e0e13_141_hasNext)
HXLINE( 142)		 ::Dynamic c = this->next();
HXLINE( 143)		if (hx::IsNull( c )) {
HXLINE( 144)			return false;
            		}
HXLINE( 145)		this->cache->push(c);
HXLINE( 146)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,hasNext,return )

 ::Dynamic SqliteResultSet_obj::next(){
            	HX_STACKFRAME(&_hx_pos_6f319ae2042e0e13_149_next)
HXLINE( 150)		 ::Dynamic c = this->cache->pop();
HXLINE( 151)		if (hx::IsNotNull( c )) {
HXLINE( 152)			return c;
            		}
HXLINE( 153)		return _hx_sqlite_result_next(this->r);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SqliteResultSet_obj,next,return )


hx::ObjectPtr< SqliteResultSet_obj > SqliteResultSet_obj::__new( ::Dynamic r) {
	hx::ObjectPtr< SqliteResultSet_obj > __this = new SqliteResultSet_obj();
	__this->__construct(r);
	return __this;
}

hx::ObjectPtr< SqliteResultSet_obj > SqliteResultSet_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic r) {
	SqliteResultSet_obj *__this = (SqliteResultSet_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SqliteResultSet_obj), true, "sys.db._Sqlite.SqliteResultSet"));
	*(void **)__this = SqliteResultSet_obj::_hx_vtable;
	__this->__construct(r);
	return __this;
}

SqliteResultSet_obj::SqliteResultSet_obj()
{
}

void SqliteResultSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SqliteResultSet);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_END_CLASS();
}

void SqliteResultSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(cache,"cache");
}

hx::Val SqliteResultSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return hx::Val( r ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return hx::Val( cache ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SqliteResultSet_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast<  ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SqliteResultSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SqliteResultSet_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SqliteResultSet_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsObject /*::List*/ ,(int)offsetof(SqliteResultSet_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SqliteResultSet_obj_sStaticStorageInfo = 0;
#endif

static ::String SqliteResultSet_obj_sMemberFields[] = {
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	::String(null()) };

static void SqliteResultSet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SqliteResultSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SqliteResultSet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SqliteResultSet_obj::__mClass,"__mClass");
};

#endif

hx::Class SqliteResultSet_obj::__mClass;

void SqliteResultSet_obj::__register()
{
	hx::Object *dummy = new SqliteResultSet_obj;
	SqliteResultSet_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.db._Sqlite.SqliteResultSet","\x27","\xb3","\x30","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SqliteResultSet_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SqliteResultSet_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SqliteResultSet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SqliteResultSet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SqliteResultSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SqliteResultSet_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite
