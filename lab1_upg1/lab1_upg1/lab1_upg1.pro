TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11

SOURCES += main.cpp \
    testapp.cpp \
    queue.cpp \
    menu.cpp \
    menuitem.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    testapp.h \
    queue.h \
    menu.h \
    menuitem.h

QMAKE_CXXFLAGS = -W -Wall -Wextra -pedantic -ansi
QMAKE_LFLAGS = -W -Wall -Wextra -pedantic -ansi
