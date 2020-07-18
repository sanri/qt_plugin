CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(spinboxplugin)
TEMPLATE    = lib

HEADERS     = spin_box.h spinboxplugin.h
SOURCES     = spin_box.cpp spinboxplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

QT += designer

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target


