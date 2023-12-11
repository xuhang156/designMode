#include "Door.h"

Door::Door(Room* room1, Room* room2) : _room1(room1), _room2(room2) {}

void Door::enter() {}

Room* Door::otherSideFrom(Room* room)
{
    if (!_isOpen)
        return nullptr;
    if (room == _room1)
        return _room2;
    else if (room == _room2)
        return _room1;
    return nullptr;
}
