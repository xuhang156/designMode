#pragma once

class Subject;

//观察者
class Observer
{
public:
    virtual ~Observer(){};
    virtual void update(Subject* theChangedSubject) = 0;

protected:
    Observer();
};
