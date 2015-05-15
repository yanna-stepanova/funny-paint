
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = funny-paint
TEMPLATE = app

HEADERS += \
    headers/cr_mainwindow.h \
    headers/cr_point_item.h \
    headers/cr_graphics_view.h \
    headers/cr_singleton.h \
    headers/cr_pencil.h

SOURCES += \
    sources/cr_mainwindow.cpp \
    sources/cr_main.cpp \
    sources/cr_point_item.cpp \
    sources/cr_singleton.cpp \
    sources/cr_graphics_view.cpp \
    sources/cr_pencil.cpp

RESOURCES += \
    ../resources/icon-sources.qrc

FORMS += \
    cr_mainwindow.ui

DISTFILES +=
