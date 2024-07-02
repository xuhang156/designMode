#pragma once
#include <QString>
#include <QSharedPointer>

class Pizza;

//抽象层：创建类，用于对产品的创建
class PizzaStore
{
public:
    PizzaStore();

    void orderPizza(const QString& type);
    virtual QSharedPointer<Pizza> createPizza(const QString& type) = 0;
};
