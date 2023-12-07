#include "Pork.h"

Pork::Pork(Food& food) : SideDish(food) {}

Pork::~Pork() { qDebug() << "Pick up the Pork."; }

void Pork::cooking()
{
    _food.cooking();
    secretRecipe();
}

void Pork::secretRecipe()
{
    qDebug() << "Braise the pork.";
    qDebug() << "Chop the pork.";
    qDebug() << "Put the minced pork into the lao bing.";
}
