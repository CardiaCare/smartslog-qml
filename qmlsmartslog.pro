TEMPLATE = lib
TARGET = qmlsmartslogplugin

CONFIG += qt plugin
CONFIG += c++11 object_parallel_to_source

QT += qml quick

QMAKE_CFLAGS += -std=c99 -DMTENABLE -DHAVE_EXPAT_CONFIG_H -DHAVE_MEMMOVE \
                -Wall -pedantic -Wno-sign-compare -Wno-unused-parameter -Wno-missing-field-initializers -Wno-unused-but-set-variable

DEFINES += _GNU_SOURCE

TARGET = $$qtLibraryTarget($$TARGET)
uri = QmlSmartSlog

INCLUDEPATH += \
            $$PWD/src/SmartSlog

SOURCES += \
    $$PWD/src/*.cpp \
    $$system(ls $$PWD/src/SmartSlog/utils/*.c) \
    $$system(ls $$PWD/src/SmartSlog/expat/*.c) \
    $$system(ls $$PWD/src/SmartSlog/scew/*.c)  \
    $$system(ls $$PWD/src/SmartSlog/ckpi/*.c)  \
    $$system(ls $$PWD/src/SmartSlog/*.c) \
    src/subscriptionmodel.cpp

HEADERS += \
    $$PWD/src/*.h \
    src/subscriptionmodel.h


OTHER_FILES += qmldir \
        README.md

qmldir.files = qmldir

unix {
    installPath = $$[QT_INSTALL_QML]/$$replace(uri, \\., /)
    qmldir.path = $$installPath
    target.path = $$installPath
    INSTALLS += target qmldir
}
