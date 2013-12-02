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
<<<<<<< HEAD
    mapenemy.cpp
=======
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
    battlepause.cpp \
    form.cpp


>>>>>>> 15c00596aba20c04d0d8c671fe26fdbe2f4faf04

HEADERS  += mainwindow.h \
    worldmap.h \
    maphero.h \
<<<<<<< HEAD
    mapenemy.h
=======
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
    battlepause.h \
    form.h
>>>>>>> 15c00596aba20c04d0d8c671fe26fdbe2f4faf04

FORMS    += mainwindow.ui \
    worldmap.ui \
    pause.ui \
    battlepause.ui \
    form.ui


RESOURCES += \
    images.qrc
