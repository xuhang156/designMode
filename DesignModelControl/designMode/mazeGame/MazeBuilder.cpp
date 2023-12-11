#include "MazeBuilder.h"
#include "Wall.h"
#include "Door.h"

MazeBuilder::MazeBuilder() {}

StandardMazeBuilder::StandardMazeBuilder() {}

void StandardMazeBuilder::buildMaze() { _currentMaze = new Maze(); };

void StandardMazeBuilder::buildRoom(int no)
{
    if (_currentMaze->roomNo(no))
        return;
    auto room = new Room(no);
    _currentMaze->addRoom(room);

    room->setSide(North, new Wall);
    room->setSide(South, new Wall);
    room->setSide(East, new Wall);
    room->setSide(West, new Wall);
};

void StandardMazeBuilder::buildDoor(int roomFrom, int roomTo)
{
    Room* r1 = _currentMaze->roomNo(roomFrom);
    Room* r2 = _currentMaze->roomNo(roomTo);
    Door* d = new Door(r1, r2);

    r1->setSide(commonWall(r1, r2), d);
    r2->setSide(commonWall(r2, r1), d);
}

Maze* StandardMazeBuilder::maze() { return _currentMaze; }

Direction StandardMazeBuilder::commonWall(Room* r1, Room* r2) { return North; }
