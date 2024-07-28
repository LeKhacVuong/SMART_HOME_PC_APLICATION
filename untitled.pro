QT       += core gui
QT       += bluetooth

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    # mb_master/sm_mb_master_impl.c \
    mb_master/sm_mb_master_impl.c \
    nanoModbus/nanomodbus.c \
    utils/sm_logger.c \
    utils/timing/DateTime.cpp

HEADERS += \
    mainwindow.h \
    mb_master/sm_mb_master_if.h \
    mb_master/sm_mb_master_impl.h \
    mb_master/sm_modbus_define.h \
    nanoModbus/nanomodbus.h \
    utils/sm_logger.h \
    utils/timing/DateTime.h \
    utils/timing/TimeUtils.h \
    utils/timing/Timer.h \
    utils/timing/elapsed_timer.h

INCLUDEPATH += \
    nanoModbus/ \
    mb_master/ \
    utils/ \
    utils/timing \

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

