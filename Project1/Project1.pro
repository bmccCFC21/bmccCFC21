QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    dialogsec.cpp \
    main.cpp \
    mainthree.cpp \
    mainwindow.cpp \
    mainwt.cpp

HEADERS += \
    dialog.h \
    dialogsec.h \
    mainthree.h \
    mainwindow.h \
    mainwt.h

FORMS += \
    dialog.ui \
    dialogsec.ui \
    mainthree.ui \
    mainwindow.ui \
    mainwt.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
