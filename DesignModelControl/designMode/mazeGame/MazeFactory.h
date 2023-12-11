#pragma once

#include "Door.h"

class MazeFactory
{
public:
    MazeFactory();
    virtual Maze* makeMaze() const;
    virtual Room* makeRoom(int no) const;
    virtual Door* makeDoor(Room* r1, Room* r2) const;
};
