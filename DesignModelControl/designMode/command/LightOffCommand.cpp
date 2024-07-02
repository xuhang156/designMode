#include "LightOffCommand.h"

LightOffCommand::LightOffCommand(Panel& panel, QSharedPointer<Light>& light)
    : Command(panel), _light(light)
{
}
void LightOffCommand::execute()
{
    _light->off();
    _panel.write("Close Light");
}
