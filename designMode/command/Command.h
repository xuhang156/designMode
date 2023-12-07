#ifndef COMMAND_H
#define COMMAND_H
#include <QDebug>

class Command
{
public:
    Command();
    virtual ~Command();

    virtual void execute() = 0;
};

#endif // COMMAND_H
