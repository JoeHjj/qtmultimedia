TEMPLATE = app
TARGET = player

CONFIG += qt warn_on

QT += network \
      xml \
      multimediakit \
      multimediakitwidgets

HEADERS = \
    player.h \
    playercontrols.h \
    playlistmodel.h \
    videowidget.h
SOURCES = main.cpp \
    player.cpp \
    playercontrols.cpp \
    playlistmodel.cpp \
    videowidget.cpp

maemo* {
    DEFINES += PLAYER_NO_COLOROPTIONS
}

#install
target.path = $$[QT_INSTALL_EXAMPLES]/qtmultimediakit/player
sources.files = $$SOURCES $HEADERS $$RESOURCES $$FORMS *.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/qtmultimediakit/player
INSTALLS += target sources

QT+=widgets
