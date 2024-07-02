#pragma once
#include <QString>

class Panel
{
public:
    virtual void write(const QString&) = 0;
};
