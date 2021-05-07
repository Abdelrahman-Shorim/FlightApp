<<<<<<< HEAD
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    costoftickets.cpp \
    edittickets.cpp \
    listsofpassengers.cpp \
    main.cpp \
    mainwindow.cpp \
    planeseats.cpp \
    receipt.cpp \
    addanewflight.cpp \
    editanewflight.cpp \
    editnewpassenger.cpp

HEADERS += \
    costoftickets.h \
    edittickets.h \
    listsofpassengers.h \
    mainwindow.h \
    planeseats.h \
    receipt.h \
    addanewflight.h \
    editanewflight.h \
    editnewpassenger.h

FORMS += \
    costoftickets.ui \
    edittickets.ui \
    listsofpassengers.ui \
    mainwindow.ui \
    planeseats.ui \
    receipt.ui \
    addanewflight.ui \
    editanewflight.ui \
    editnewpassenger.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
