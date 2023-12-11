#pragma once
#include "MazeFactory.h"
#include "MazeBuilder.h"

class MazeGame
{
public:
    MazeGame();
    Maze* createMaze();
    Maze* createMazeRefacotry(MazeFactory& factory);
    Maze* createMazeUseBuilder(MazeBuilder& builder);
};
