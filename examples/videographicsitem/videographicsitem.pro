TEMPLATE = app
TARGET = videographicsitem

QT += multimedia multimediawidgets

HEADERS   += videoplayer.h

SOURCES   += main.cpp \
             videoplayer.cpp

target.path = $$[QT_INSTALL_EXAMPLES]/qtmultimedia/videographicsitem
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS *.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/qtmultimedia/videographicsitem

INSTALLS += target sources

QT+=widgets
