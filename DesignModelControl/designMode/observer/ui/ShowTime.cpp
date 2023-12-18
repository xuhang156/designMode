#include <QDebug>
#include "ShowTime.h"
#include "ui_ShowTime.h"

ShowTime::ShowTime(Timer* timer, QWidget* parent) : QWidget(parent), ui(new Ui::ShowTime)
{
    ui->setupUi(this);
    _timer = timer;
    _timer->attach(this);
}

ShowTime::~ShowTime()
{
    _timer->detach(this);
    delete ui;
}

void ShowTime::update(Subject* theChangedSubject)
{
    if (theChangedSubject != _timer)
        return;

    QString str = QString("%0:%1:%2")
                      .arg(QString::number(_timer->getHour()), QString::number(_timer->getMinute()),
                           QString::number(_timer->getSecond()));
    ui->label->setText(str);
}
