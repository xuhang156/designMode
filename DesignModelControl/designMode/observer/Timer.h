#pragma once

#include <QObject>
#include <QDateTime>
#include "Subject.h"

class Timer : public QObject, public Subject
{
    Q_OBJECT

public:
    explicit Timer();

    virtual int getHour();
    virtual int getMinute();
    virtual int getSecond();

    void tick();

private:
    QScopedPointer<QTimer> _timer;
    QDateTime _dateTime;
};
