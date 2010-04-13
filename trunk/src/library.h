#include "config.h"
#include "sqlite3.h"

class Library {

	public:
		Library(char* dbfile = "/tmp/library.db");
		~Library();
		void testdb();


	private:

//		int callback(void *NotUsed, int argc, char **argv, char **azColName);

		sqlite3* m_db;
		char* m_db_errmsg;


};
