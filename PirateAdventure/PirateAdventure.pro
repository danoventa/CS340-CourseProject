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


=======
    pause.cpp
    mapenemy.cpp
>>>>>>> c3ea0e39c156ce019f70fd3fc90007429d5aa605

HEADERS  += mainwindow.h \
    worldmap.h \
    maphero.h \
<<<<<<< HEAD
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
=======
    pause.h
    mapenemy.h
>>>>>>> c3ea0e39c156ce019f70fd3fc90007429d5aa605

FORMS    += mainwindow.ui \
    worldmap.ui \
    pause.ui \
    battlepause.ui


RESOURCES += \
    images.qrc
