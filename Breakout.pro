TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    conio21/conio.c

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    display.h \
    conio21/conio2.h \
    navigation.h \
    persistence.h \
    records.h

DISTFILES += \
    records.txt \
    game_screen.txt \
    records_screen.txt
