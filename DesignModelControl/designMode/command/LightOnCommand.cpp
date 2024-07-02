#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(Panel& panel, QSharedPointer<Light> light)
    : Command(panel), _light(light)
{
}

void LightOnCommand::execute()
{
    _light->on();
    _panel.write("Open Light");
}
