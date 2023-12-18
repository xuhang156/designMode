#include "Timer.h"
#include <QTimer>

Timer::Timer() : _timer(new QTimer)
{
    connect(_timer.get(), &QTimer::timeout, this, &Timer::tick);
    _timer->start(1000);
}

int Timer::getHour() { return _dateTime.time().hour(); }

int Timer::getMinute() { return _dateTime.time().minute(); }

int Timer::getSecond() { return _dateTime.time().second(); }

void Timer::tick()
{
    _dateTime = QDateTime::currentDateTime();
    notify();
}
