#ifndef COMMAND_H
#define COMMAND_H
#include <QDebug>
#include "Panel.h"
class Command
{
public:
    Command(Panel& panel);
    virtual ~Command();
    virtual void execute() = 0;

protected:
    Panel& _panel;
};

#endif // COMMAND_H
