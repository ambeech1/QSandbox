QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD/Eigen
INCLUDEPATH += $$PWD/spectra-1.0.1/include

SOURCES += \
    Complex.cpp \
    State.cpp \
    State1D.cpp \
    TDSE_1D.cpp \
    TDSE_2D.cpp \
    TISE_1D.cpp \
    TISE_2D.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    tdsemainwindow.cpp \
    tisemainwindow.cpp

HEADERS += \
    Complex.h \
    Potential.h \
    Potential1D.h \
    Potential2D.h \
    SpinState.h \
    Spinor.h \
    State.h \
    State1D.h \
    State2D.h \
    TISE_1D.h \
    mainwindow.h \
    qcustomplot.h \
    tdsemainwindow.h \
    tisemainwindow.h

FORMS += \
    mainwindow.ui \
    tdsemainwindow.ui \
    tisemainwindow.ui

QMAKE_CXXFLAGS += -Wa,-mbig-obj

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# MuParser
#INCLUDEPATH += $$PWD/libs/muparser/include
#LIBS += -L$$PWD/libs/muparser/lib
#LIBS += -lmuparser
#LIBS += -lmsys-muparser-2
