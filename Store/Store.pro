QT       += core gui
QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    additem.cpp \
    addnewgroup.cpp \
    addtocart.cpp \
    customer.cpp \
    customerlogin.cpp \
    displaygroupproducts.cpp \
    displayitems.cpp \
    edititem.cpp \
    item.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    searchgroups.cpp \
    searchitem.cpp \
    sellitem.cpp \
    start.cpp

HEADERS += \
    additem.h \
    addnewgroup.h \
    addtocart.h \
    customer.h \
    customerlogin.h \
    displaygroupproducts.h \
    displayitems.h \
    edititem.h \
    item.h \
    loginpage.h \
    mainwindow.h \
    searchgroups.h \
    searchitem.h \
    sellitem.h \
    start.h

FORMS += \
    additem.ui \
    addnewgroup.ui \
    addtocart.ui \
    customer.ui \
    customerlogin.ui \
    displaygroupproducts.ui \
    displayitems.ui \
    edititem.ui \
    loginpage.ui \
    mainwindow.ui \
    searchgroups.ui \
    searchitem.ui \
    sellitem.ui \
    start.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ../Sources/projectSources.qrc

