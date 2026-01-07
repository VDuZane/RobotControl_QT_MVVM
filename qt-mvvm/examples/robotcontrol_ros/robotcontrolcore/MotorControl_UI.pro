QT += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MotorControl_UI
TEMPLATE = app

SOURCES += \
    main.cpp \
    ui_MotorControl_UI.cpp \
    motion_control.cpp \
    motor_control.cpp

HEADERS += \
    MotorControlWindow.h \
    ui_MotorControl_UI.h \
    motion_control.h \
    motor_control.h

FORMS += \
    MotorControl_UI.ui