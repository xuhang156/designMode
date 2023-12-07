#include "SimpleRemoteControl.h"

SimpleRemoteControl::SimpleRemoteControl()
{

}

void SimpleRemoteControl::setCommand(QSharedPointer<Command> command)
{
    _command = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
    _command->execute();
}
