# -------------------------------------------------
# Project created by QtCreator 2009-10-30T21:32:52
# -------------------------------------------------
QT += network \
    opengl \
    sql \
    webkit \
    xml
TARGET = ACDJ
TEMPLATE = app
SOURCES += main.cpp \
    mainwindow.cpp \
    dialog_preferences.cpp
HEADERS += mainwindow.h \
    dialog_preferences.h
FORMS += mainwindow.ui \
    dialog_about.ui \
    dialog_preferences.ui
RESOURCES += system_tray.qrc
