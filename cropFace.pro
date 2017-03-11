TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    FileConfig.cpp \
    FaceImageProcessing.cpp \
    FileLogger.cpp \

LIBS += /home/lisin/stasm-tmp/stasm4.1.0/stasm/libstasm.a
LIBS += /usr/local/lib/libopencv_calib3d.so
LIBS += /usr/local/lib/libopencv_contrib.so
LIBS += /usr/local/lib/libopencv_core.so
LIBS += /usr/local/lib/libopencv_features2d.so
LIBS += /usr/local/lib/libopencv_flann.so
LIBS += /usr/local/lib/libopencv_gpu.so
LIBS += /usr/local/lib/libopencv_highgui.so
LIBS += /usr/local/lib/libopencv_imgproc.so
LIBS += /usr/local/lib/libopencv_legacy.so
LIBS += /usr/local/lib/libopencv_ml.so
LIBS += /usr/local/lib/libopencv_objdetect.so
LIBS += /usr/local/lib/libopencv_ts.so
LIBS += /usr/lib/x86_64-linux-gnu/libtinyxml.a

INCLUDEPATH += /home/lisin/stasm/stasm4.1.0/stasm
INCLUDEPATH += /usr/local/include/opencv
INCLUDEPATH += /usr/local/include/opencv2

HEADERS += \
    IConfig.h \
    FileConfig.h \
    FaceImageProcessing.h \
    ILogger.h \
    FileLogger.h \
