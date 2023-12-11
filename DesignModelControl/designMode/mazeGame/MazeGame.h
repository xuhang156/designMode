#pragma once
#include "MazeFactory.h"

class MazeGame
{
public:
    MazeGame();
    Maze* createMaze();
    Maze* createMazeRefacotry(MazeFactory& factory);
};
