#pragma once

#include "Pizza.h"

//具体实现类
class NYCheesePizza : public Pizza
{
public:
    NYCheesePizza();
    void prepare() override;
    void cut() override;
    void box() override;
};
