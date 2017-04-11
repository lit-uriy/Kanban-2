#-------------------------------------------------
#
# Project created by QtCreator 2016-05-17T16:28:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kanban_Board
TEMPLATE = app
#QMAKE_LFLAGS += /INCREMENTAL:NO

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    resource.qrc

#RC_FILE = Kanban_Board.rc

win32:RC_ICONS += Pencil.ico

