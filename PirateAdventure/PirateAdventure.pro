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
    attacklist.cpp \
    attackmove.cpp \
    bomber.cpp \
    brokengun.cpp \
    brokenshot.cpp \
    cannon.cpp \
    character.cpp \
    enemy.cpp \
    hookslash.cpp \
    swordslash.cpp \
    swordsman.cpp \
    skeleton.cpp \
    shotgun.cpp \
    hunter.cpp \
    xgun.cpp

HEADERS  += mainwindow.h \
    worldmap.h \
    attacklist.h \
    attackmove.h \
    bomber.h \
    brokengun.h \
    brokenshot.h \
    cannon.h \
    character.h \
    enemy.h \
    hookslash.h \
    swordslash.h \
    swordsman.h \
    skeleton.h \
    shotgun.h \
    hunter.h \
    xgun.h

FORMS    += mainwindow.ui \
    worldmap.ui

RESOURCES += \
    images.qrc
