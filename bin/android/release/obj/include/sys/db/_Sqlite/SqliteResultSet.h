// Generated by Haxe 3.4.2 (git build master @ 890f8c7)
#ifndef INCLUDED_sys_db__Sqlite_SqliteResultSet
#define INCLUDED_sys_db__Sqlite_SqliteResultSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_sys_db_ResultSet
#include <sys/db/ResultSet.h>
#endif
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(sys,db,ResultSet)
HX_DECLARE_CLASS3(sys,db,_Sqlite,SqliteResultSet)

namespace sys{
namespace db{
namespace _Sqlite{


class HXCPP_CLASS_ATTRIBUTES SqliteResultSet_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SqliteResultSet_obj OBJ_;
		SqliteResultSet_obj();

	public:
		enum { _hx_ClassId = 0x4281b8d9 };

		void __construct( ::Dynamic r);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.db._Sqlite.SqliteResultSet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"sys.db._Sqlite.SqliteResultSet"); }
		static hx::ObjectPtr< SqliteResultSet_obj > __new( ::Dynamic r);
		static hx::ObjectPtr< SqliteResultSet_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic r);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SqliteResultSet_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("SqliteResultSet","\x39","\x58","\x4c","\xf7"); }

		 ::Dynamic r;
		 ::List cache;
		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

};

} // end namespace sys
} // end namespace db
} // end namespace _Sqlite

#endif /* INCLUDED_sys_db__Sqlite_SqliteResultSet */ 
