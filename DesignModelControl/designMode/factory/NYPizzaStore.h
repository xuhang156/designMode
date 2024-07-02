#pragma once
#include "PizzaStore.h"

//具体实现：创建产品类
//此类可能会不符合开闭原则，新增产品可能会修改代码
//但也可以通过反射内省技术进行优化
class NYPizzaStore : public PizzaStore
{
public:
    NYPizzaStore();
    QSharedPointer<Pizza> createPizza(const QString& type) override;
};
