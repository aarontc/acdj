cmake_minimum_required(VERSION 2.8)
project(ACDJ)
set(VERSION_MAJOR 0)
set(VERSION_MINOR 01)



configure_file(
	"${PROJECT_SOURCE_DIR}/config.h.in"
	"${PROJECT_BINARY_DIR}/config.h"
)

include_directories("${PROJECT_BINARY_DIR}")



option(USE_INCLUDED_SQLITE3
	"Use bundled SQLite3 library" ON)


if(USE_INCLUDED_SQLITE3)
	include_directories("${PROJECT_SOURCE_DIR}/sqlite3")
	add_subdirectory(sqlite3)
	set(EXTRA_LIBS ${EXTRA_LIBS} sqlite3 pthread dl)
endif(USE_INCLUDED_SQLITE3)


# with SET() command you can change variables or define new ones
# here we define HF_SRCS variable that contains a list of all .cpp files
# note that we don't need \ at the end of line
set(ACDJ_SOURCES
	dialog_preferences.cpp
	mainwindow.cpp
	main.cpp
	library.cpp
	controlwidget.cpp
	musicmodewidget.cpp
)

# another list, this time it includes all header files that should be treated with moc
set(ACDJ_MOC_HEADERS
	dialog_preferences.h
	mainwindow.h
	controlwidget.h
	musicmodewidget.h
)

# some .ui files
set(ACDJ_UIS
	mainwindow.ui
	dialog_preferences.ui
	dialog_about.ui
)

# and finally an resource file
set(ACDJ_RESOURCES
	system_tray.qrc
)


add_definitions(-Wall)



# by default only QtCore and QtGui modules are enabled
# other modules must be enabled like this:
set(QT_USE_QTXML TRUE)

# this command finds Qt4 libraries and sets all required variables
# note that it's Qt4, not QT4 or qt4
find_package(Qt4 REQUIRED)

# add some useful macros and variables
# (QT_USE_FILE is a variable defined by FIND_PACKAGE( Qt4 ) that contains a path to CMake script)
include(${QT_USE_FILE})

# this command will generate rules that will run rcc on all files from HF_RCS
# in result HF_RC_SRCS variable will contain paths to files produced by rcc
qt4_add_resources(ACDJ_RC_SOURCES ${ACDJ_RESOURCES})

# this will run uic on .ui files:
qt4_wrap_ui(ACDJ_UI_HEADERS ${ACDJ_UIS})

# and finally this will run moc:
qt4_wrap_cpp(ACDJ_MOC_SOURCES ${ACDJ_MOC_HEADERS})

# we need this to be able to include headers produced by uic in our code
# (CMAKE_BINARY_DIR holds a path to the build directory, while INCLUDE_DIRECTORIES() works just like INCLUDEPATH from qmake)
include_directories(${CMAKE_BINARY_DIR})

# here we instruct CMake to build "sample" executable from all of the source files
add_executable(ACDJ ${ACDJ_SOURCES} ${ACDJ_MOC_SOURCES} ${HF_RC_SOURCES} ${HF_UI_HEADERS})
add_executable(test test.cpp library.cpp)

# last thing we have to do is to tell CMake what libraries our executable needs,
# luckily FIND_PACKAGE prepared QT_LIBRARIES variable for us:
target_link_libraries(ACDJ ${QT_LIBRARIES} ${EXTRA_LIBS})
target_link_libraries(test ${EXTRA_LIBS})



# build a CPack driven installer package
include (InstallRequiredSystemLibraries)
set (CPACK_RESOURCE_FILE_LICENSE
	"${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set (CPACK_PACKAGE_VERSION_MAJOR "${VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${VERSION_MINOR}")
include (CPack)
