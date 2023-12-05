#include "SideDish.h"

SideDish::SideDish(Food& food) : _food(food) { qDebug() << "Prepare the side dishes."; }

void SideDish::secretRecipe() { qDebug() << "Add some special recipe."; }

SideDish::~SideDish() { qDebug() << "Dishes has been finished."; }
