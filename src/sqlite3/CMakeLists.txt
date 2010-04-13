

add_library(sqlite3 sqlite3.c)

add_executable(sqlshell shell.c)
target_link_libraries(sqlshell sqlite3 pthread dl)
