#pragma once
#include <QList>

class Observer;

class Subject
{
public:
    virtual ~Subject() {}

    virtual void attach(Observer* object);
    virtual void detach(Observer* object);
    virtual void notify();

protected:
    Subject();

private:
    QList<Observer*> _observers;
};
