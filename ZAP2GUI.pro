#-------------------------------------------------
#
# Project created by QtCreator 2016-05-28T12:55:23
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZAP2GUI
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plansza.cpp \
    mrowka.cpp \
    menu.cpp \
    lista.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    plansza.h \
    mrowka.h \
    menu.h \
    lista.h \
    global.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui
