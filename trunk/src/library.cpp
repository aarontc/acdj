#include <stdio.h>
#include "library.h"

static int callback(void *NotUsed, int argc, char **argv, char **azColName){
	int i;
	for(i=0; i<argc; i++){
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}


Library::Library(char* db_path) :
m_db_errmsg(0)
{
	int rc;
	rc = sqlite3_open(db_path, &m_db);

	if(rc) {
		sqlite3_close(m_db);
		throw("Failed to open database");
		//exit(1);
	}

	rc = sqlite3_exec(m_db, "SELECT now()", callback, 0, &m_db_errmsg);
	if(rc != SQLITE_OK) {
		throw("Failed to execute query");
		sqlite3_free(m_db_errmsg);
	}
}

Library::~Library() {
	sqlite3_close(m_db);
}



void Library::testdb() {
}
