#include "Food.h"

Food::Food() {}

void Food::cooking() { qDebug() << "Is cooking food."; }

Food::~Food() { qDebug() << "Finished eating."; }
