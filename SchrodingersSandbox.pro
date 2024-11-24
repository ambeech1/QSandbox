QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD/Eigen

SOURCES += \
    State.cpp \
    State1D.cpp \
    TDSE_1D.cpp \
    TDSE_2D.cpp \
    TISE_1D.cpp \
    TISE_2D.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp

HEADERS += \
    Potential.h \
    Potential1D.h \
    Potential2D.h \
    SpinState.h \
    Spinor.h \
    State.h \
    State1D.h \
    State2D.h \
    mainwindow.h \
    qcustomplot.h

FORMS += \
    mainwindow.ui

QMAKE_CXXFLAGS += -Wa,-mbig-obj

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
