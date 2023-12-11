#include "MazeFactory.h"

MazeFactory::MazeFactory() {}

Maze* MazeFactory::makeMaze() const { return new Maze; }

Room* MazeFactory::makeRoom(int no) const { return new Room(no); }

Door* MazeFactory::makeDoor(Room* r1, Room* r2) const { return new Door(r1, r2); }
