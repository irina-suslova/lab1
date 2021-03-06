TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += "gtest/include"
INCLUDEPATH += "gtest/"
INCLUDEPATH += "../"

SOURCES += \
        gtest/src/gtest-all.cc \
        gtest/src/gtest-death-test.cc \
        gtest/src/gtest-filepath.cc \
        gtest/src/gtest-matchers.cc \
        gtest/src/gtest-port.cc \
        gtest/src/gtest-printers.cc \
        gtest/src/gtest-test-part.cc \
        gtest/src/gtest-typed-test.cc \
        gtest/src/gtest.cc \

SOURCES += \
        ../arraysequence.cpp \
        ../isorter.cpp \
        ../listsequence.cpp \
        main.cpp

HEADERS += \
 ../arraysequence.h \
 ../extra_functions.h \
 ../isorter.h \
 ../listsequence.h \
 ../sequence.h
