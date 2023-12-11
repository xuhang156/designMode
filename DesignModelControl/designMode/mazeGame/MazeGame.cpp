#include "MazeGame.h"
#include "Door.h"
#include "Wall.h"

MazeGame::MazeGame() {}

Maze* MazeGame::createMaze()
{
    Maze* aMaze = new Maze();
    Room* r1 = new Room(1);
    Room* r2 = new Room(2);

    Door* theDoor = new Door(r1, r2);

    aMaze->addRoom(r1);
    aMaze->addRoom(r2);

    r1->setSide(North, new Wall());
    r1->setSide(East, theDoor);
    r1->setSide(North, new Wall());
    r1->setSide(North, new Wall());

    r2->setSide(North, new Wall());
    r2->setSide(East, new Wall());
    r2->setSide(North, new Wall());
    r2->setSide(North, theDoor);

    return aMaze;
}
