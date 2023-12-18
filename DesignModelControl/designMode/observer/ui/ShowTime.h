#pragma once

#include <QWidget>
#include "../Observer.h"
#include "../Timer.h"

class Subject;
namespace Ui {
class ShowTime;
}

class ShowTime : public QWidget, public Observer
{
    Q_OBJECT

public:
    explicit ShowTime(Timer* timer, QWidget* parent = nullptr);
    void update(Subject* theChangedSubject) override;
    ~ShowTime();

private:
    Ui::ShowTime* ui;
    Timer* _timer;
};
