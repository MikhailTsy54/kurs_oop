QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addtable.cpp \
    addwindow.cpp \
    database.cpp \
    date.cpp \
    editor.cpp \
    main.cpp \
    mainwindow.cpp \
    setting.cpp \
    tablesetting.cpp

HEADERS += \
    addtable.h \
    addwindow.h \
    database.h \
    date.h \
    editor.h \
    mainwindow.h \
    setting.h \
    tablesetting.h

FORMS += \
    addtable.ui \
    addwindow.ui \
    editor.ui \
    mainwindow.ui \
    setting.ui \
    tablesetting.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    file.txt
