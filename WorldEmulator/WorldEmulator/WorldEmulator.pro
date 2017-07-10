#-------------------------------------------------
#
# Project created by QtCreator 2015-06-18T20:05:55
#
#-------------------------------------------------

QT  += core
QT  += gui
QT += opengl
QT += network

LIBS += -lOpenGL32
LIBS +=  -lGLU32 -lglut

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WorldEmulator
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    cubes.cpp

HEADERS  += widget.h \
    cubes.h
