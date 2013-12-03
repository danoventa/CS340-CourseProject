#-------------------------------------------------
#
# Project created by QtCreator 2013-11-25T19:17:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PirateAdventure
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    worldmap.cpp \
    maphero.cpp \
    mapenemy.cpp

HEADERS  += mainwindow.h \
    worldmap.h \
    maphero.h \
    mapenemy.h

FORMS    += mainwindow.ui \
    worldmap.ui

RESOURCES += \
    images.qrc
