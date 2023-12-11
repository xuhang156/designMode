#include "MazeGame.h"
#include "Wall.h"

MazeGame::MazeGame() {}

///
/// \brief MazeGame::createMaze
/// 此函数最大的问题在于它不灵活，对迷宫的布局进行了硬编码
/// 改变布局就意味着改变这个成员函数
/// 可以使用创建型模式对它进行重构
/// 1. 如果此时调用虚函数而不是构造器来创建需要的门、房间、墙，可以创建一个子类重新定义这些虚函数
/// 2. 如果传递一个对象作为参数创建，则可以传递不同参数改变房、门等，这就是Abstract Factory例子
/// 3.
/// 如果传递一个对象，它可以在创建的迷宫中增加，来全面创建新的迷宫，可以使用继承来改变迷宫的一些部分，这是Builder模式
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

//重构之后不再使用硬编码创建迷宫
Maze* MazeGame::createMazeRefacotry(MazeFactory& factory)
{
    Maze* aMaze = factory.makeMaze();
    Room* r1 = factory.makeRoom(1);
    Room* r2 = factory.makeRoom(2);

    Door* theDoor = factory.makeDoor(r1, r2);

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
