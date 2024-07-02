#pragma once

//抽象层：产品类，所有的产品都应该继承此类
//不同产品通过扩展继承此类形成的新类
class Pizza
{
public:
    Pizza();
    virtual void prepare();
    virtual void cut();
    virtual void box();
};
