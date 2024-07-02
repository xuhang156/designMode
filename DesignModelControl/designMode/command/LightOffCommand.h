#pragma once

#include "Command.h"
#include "command/furniture/Light.h"

class LightOffCommand : public Command
{
public:
    LightOffCommand(Panel& panel, QSharedPointer<Light>& light);
    void execute() override;

private:
    QSharedPointer<Light> _light;
};
