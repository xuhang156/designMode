#pragma once
#include "Food.h"

class Laobing : public Food
{
public:
    Laobing();
    ~Laobing();
    void cooking() override;
};
