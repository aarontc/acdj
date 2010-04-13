cmake_minimum_required(2.8)
project(ACDJ)
set(VERSION_MAJOR 0)
set(VERSION_MINOR 01)
configure_file(
	"${PROJECT_SOURCE_DIR}/BuildConfig.h.in"
	"${PROJECT_BINARY_DIR}/BuildConfig.h"
)

include_directories("${PROJECT_BINARY_DIR}")



option(USE_INCLUDED_SQLITE3
	"Use bundled SQLite3 library" ON)


if(USE_INCLUDED_SQLITE3)
	include_directories("${PROJECT_SOURCE_DIR}/sqlite3")
	add_subdirectory(sqlite3)
	set(EXTRA_LIBS ${EXTRA_LIBS} sqlite3)
endif(USE_INCLUDED_SQLITE3)




add_executable(ACDJ)
target_link_libraries(ACDJ ${EXTRA_LIBS})

