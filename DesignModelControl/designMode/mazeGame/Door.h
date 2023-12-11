#pragma once

#include "MapSite.h"
#include "Room.h"

class Door : public MapSite
{
public:
    Door(Room* = nullptr, Room* = nullptr);
    virtual void enter() override;
    Room* otherSideFrom(Room*);

private:
    Room* _room1;
    Room* _room2;
    bool _isOpen;
};
