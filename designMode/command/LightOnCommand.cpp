#include "LightOnCommand.h"

LightOnCommand::LightOnCommand(QSharedPointer<Light> light) : _light(light) {}

void LightOnCommand::execute() { _light->on(); }
