#include "Room.h"

Room::Room(int roomNo) : _roomNo(roomNo) {}

void Room::enter() {}

int Room::roomNo() const { return _roomNo; }

MapSite* Room::getSide(Direction direction) const { return _sides[direction]; }

void Room::setSide(Direction direction, MapSite* obj) { _sides[direction] = obj; }

Room* Maze::roomNo(int no) const
{
    if (_rooms.contains(no))
        return _rooms[no];
    return nullptr;
}

void Maze::addRoom(Room* room) { _rooms[room->roomNo()] = room; }
