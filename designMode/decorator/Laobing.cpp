#include "Laobing.h"
#include <QDebug>

Laobing::Laobing() {}

Laobing::~Laobing() { qDebug() << "Finished eating lao bing."; }

void Laobing::cooking() { qDebug() << "Pick up the lao bing."; }
