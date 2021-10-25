TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        arraysequence.cpp \
        dynamicarray.cpp \
        graphtests.cpp \
        isorter.cpp \
        linkedlist.cpp \
        listsequence.cpp \
        main.cpp

HEADERS += \
 arraysequence.h \
 dynamicarray.h \
 extrafunctions.h \
 isorter.h \
 linkedlist.h \
 listsequence.h \
 sequence.h

DISTFILES += \
 ../build-lab1-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/array.txt \
 ../build-lab1-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/sorted.txt \
 ../build-lab1-Desktop_Qt_5_15_2_MinGW_64_bit-Debug/time.txt
