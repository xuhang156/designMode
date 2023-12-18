#include "Subject.h"
#include "Observer.h"

Subject::Subject() {}

void Subject::attach(Observer* object)
{
    if (_observers.contains(object))
        return;
    _observers.append(object);
}

void Subject::detach(Observer* object)
{
    if (_observers.contains(object))
        _observers.removeOne(object);
}

void Subject::notify()
{
    for (auto observer : qAsConst(_observers))
        observer->update(this);
}
