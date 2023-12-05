#pragma once
#include "SideDish.h"

class Pork : public SideDish
{
public:
    Pork(Food& food);
    ~Pork();
    void cooking() override;
    void secretRecipe() override;
};
