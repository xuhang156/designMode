#pragma once

enum Direction {
    North,
    South,
    East,
    West,
};

class MapSite
{
public:
    MapSite();
    virtual void enter() = 0;
};
