#pragma once
#include <QHash>

#include "MapSite.h"

class Room : public MapSite
{
public:
    Room(int roomNo);
    MapSite* getSide(Direction) const;
    void setSide(Direction, MapSite*);
    void enter() override;
    int roomNo() const;

private:
    int _roomNo;
    MapSite* _sides[4];
};

class Maze
{
public:
    Maze(){};
    void addRoom(Room*);
    Room* roomNo(int) const;

private:
    QHash<int, Room*> _rooms;
};
