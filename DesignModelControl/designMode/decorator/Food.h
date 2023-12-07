#pragma once
#include <QDebug>

///
/// \brief The Food class
/// 抽象构建，用于具体构建（饼）和抽象装饰器（辅料：肉、菜）继承公共接口
///
class Food
{
public:
    Food();
    virtual ~Food();
    virtual void cooking();
};
