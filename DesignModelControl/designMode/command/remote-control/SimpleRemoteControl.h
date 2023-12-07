#ifndef SIMPLEREMOTECONTROL_H
#define SIMPLEREMOTECONTROL_H

#include "command/Command.h"

class SimpleRemoteControl
{
public:
    SimpleRemoteControl();
    void setCommand(QSharedPointer<Command> command);
    void buttonWasPressed();

private:
    QSharedPointer<Command> _command;
};

#endif // SIMPLEREMOTECONTROL_H
