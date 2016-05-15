#-------------------------------------------------
#
# Project created by QtCreator 2016-05-12T03:27:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    form.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    form.h

FORMS    += mainwindow.ui \
    dialog.ui \
    form.ui

RESOURCES += \
    bg.qrc \
    bg2.qrc \
    red.qrc \
    blue.qrc \
    bar.qrc \
    circle.qrc
