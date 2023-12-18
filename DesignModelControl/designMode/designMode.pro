QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    command/Command.cpp \
    command/LightOnCommand.cpp \
    command/furniture/Light.cpp \
    command/remote-control/SimpleRemoteControl.cpp \
    decorator/Food.cpp \
    decorator/Laobing.cpp \
    decorator/Pork.cpp \
    decorator/SideDish.cpp \
    main.cpp \
    mazeGame/Door.cpp \
    mazeGame/MapSite.cpp \
    mazeGame/MazeBuilder.cpp \
    mazeGame/MazeFactory.cpp \
    mazeGame/MazeGame.cpp \
    mazeGame/Room.cpp \
    mazeGame/Wall.cpp \
    observer/Observer.cpp

HEADERS += \
    command/Command.h \
    command/LightOnCommand.h \
    command/furniture/Light.h \
    command/remote-control/SimpleRemoteControl.h \
    decorator/Food.h \
    decorator/Laobing.h \
    decorator/Pork.h \
    decorator/SideDish.h \
    mazeGame/Door.h \
    mazeGame/MapSite.h \
    mazeGame/MazeBuilder.h \
    mazeGame/MazeFactory.h \
    mazeGame/MazeGame.h \
    mazeGame/Room.h \
    mazeGame/Wall.h \
    observer/Observer.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
