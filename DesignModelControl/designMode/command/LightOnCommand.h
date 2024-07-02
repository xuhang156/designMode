#ifndef LIGHTONCOMMAND_H
#define LIGHTONCOMMAND_H

#include "Command.h"
#include "command/furniture/Light.h"

class LightOnCommand : public Command
{
public:
    LightOnCommand(Panel& panel, QSharedPointer<Light> light);
    void execute() override;

private:
    QSharedPointer<Light> _light;
};

#endif // LIGHTONCOMMAND_H
