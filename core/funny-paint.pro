
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = funny-paint
TEMPLATE = app

HEADERS += \
    headers/cr_mainwindow.h \
    headers/cr_point_item.h

SOURCES += \
    sources/cr_mainwindow.cpp \
    sources/cr_main.cpp \
    sources/cr_point_item.cpp

RESOURCES += \
    ../resources/icon-sources.qrc

FORMS += \
    cr_mainwindow.ui
