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
    attacklist.cpp \
    attackmove.cpp \
    bomber.cpp \
    brokengun.cpp \
    brokenshot.cpp \
    cannon.cpp \
    character.cpp \
    enemy.cpp \
    hookslash.cpp \
    hunter.cpp \
    swordslash.cpp \
    swordsman.cpp \
    xgun.cpp \
    pause.cpp \
    battlepause.cpp



HEADERS  += mainwindow.h \
    worldmap.h \
    maphero.h \
    attacklist.h \
    attackmove.h \
    bomber.h \
    brokengun.h \
    brokenshot.h \
    cannon.h \
    character.h \
    enemy.h \
    hookslash.h \
    hunter.h \
    swordslash.h \
    swordsman.h \
    xgun.h \
    pause.h \
    battlepause.h

FORMS    += mainwindow.ui \
    worldmap.ui \
    pause.ui \
    battlepause.ui


RESOURCES += \
    images.qrc
