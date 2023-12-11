#pragma once
#include "Room.h"

//使用build模式再次重构迷宫的创建过程
//此类仅仅提供接口，不实现创建的实际工作
class MazeBuilder
{
public:
    virtual void buildMaze(){};
    virtual void buildRoom(int no){};
    virtual void buildDoor(int roomFrom, int roomTo) {}
    virtual Maze* maze() { return nullptr; }

protected:
    MazeBuilder();
};

class StandardMazeBuilder : public MazeBuilder
{
public:
    StandardMazeBuilder();
    virtual void buildMaze() override;
    virtual void buildRoom(int no) override;
    virtual void buildDoor(int roomFrom, int roomTo) override;
    virtual Maze* maze() override;

private:
    Direction commonWall(Room*r1, Room*r2);
    Maze* _currentMaze = nullptr;
};
