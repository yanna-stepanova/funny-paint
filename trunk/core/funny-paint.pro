
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = funny-paint
TEMPLATE = app

HEADERS += \
    headers/cr_mainwindow.h \
    headers/cr_hash.h \
    headers/cr_paint_space.h

SOURCES += \
    sources/cr_mainwindow.cpp \
    sources/cr_main.cpp \
    sources/cr_pain_space.cpp

RESOURCES += \
    ../resources/icon-sources.qrc

FORMS += \
    cr_mainwindow.ui
