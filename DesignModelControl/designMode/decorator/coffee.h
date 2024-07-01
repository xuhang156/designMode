#pragma once
#include <QString>
#include <QSharedPointer>

class Beverage
{
protected:
    QString _description = "Unknow";
    double _cost = 0;

public:
    virtual double cost() const { return _cost; };
    virtual QString description() const { return _description; };
};

//装饰者基类
class CondimentDecorator : public Beverage
{
protected:
    QSharedPointer<Beverage> _beverage;

public:
    CondimentDecorator(QSharedPointer<Beverage>& beverage) : _beverage(beverage)
    {
        _description = "Decorator";
    }
};

//浓咖啡主体
class Espresso : public Beverage
{
public:
    Espresso()
    {
        _description = "Espresso";
        _cost = 1.99;
    }
};

class Mocha : public CondimentDecorator
{
public:
    Mocha(QSharedPointer<Beverage>& beverage) : CondimentDecorator(beverage)
    {
        _description = "Mocha";
        _cost = .99;
    }

    QString description() const override { return _beverage->description() + _description; }
    double cost() const override { return _beverage->cost() + _cost; };
};
