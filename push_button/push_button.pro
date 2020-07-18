CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(pushbuttonplugin)
TEMPLATE    = lib

HEADERS     = push_button.h pushbuttonplugin.h
SOURCES     = push_button.cpp pushbuttonplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L.

QT += designer

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target


