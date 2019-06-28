#-------------------------------------------------
#
# Project created by QtCreator 2019-06-23T19:13:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FinalDB
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        character.cpp \
        commentator.cpp \
        databasemanagementsystem.cpp \
        dynarray.cpp \
        facade.cpp \
        factory.cpp \
        hashtable.cpp \
        main.cpp \
        mainwindow.cpp \
        node.cpp \
        person.cpp \
        player.cpp \
        playercommentator.cpp

HEADERS += \
        character.h \
        commentator.h \
        databasemanagementsystem.h \
        dynarray.h \
        facade.h \
        factory.h \
        fn.h \
        hashtable.h \
        mainwindow.h \
        node.h \
        person.h \
        personfactory.h \
        player.h \
        playercommentator.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
