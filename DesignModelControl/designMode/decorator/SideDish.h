#pragma once
#include "Food.h"

class SideDish : public Food
{
public:
    SideDish(Food& food);
    virtual void secretRecipe();
    virtual ~SideDish();

protected:
    Food& _food;
};
