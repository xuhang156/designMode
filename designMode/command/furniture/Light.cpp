#include "Light.h"
#include <QDebug>

Light::Light() {}

Light::~Light() {}

void Light::on() { qDebug() << "Turn on the light"; }
