#pragma once

#include <QWidget>
#include "Panel.h"

class Command;
namespace Ui {
class SimpleControl;
}

class SimpleControl : public QWidget, public Panel
{
    Q_OBJECT

public:
    explicit SimpleControl(QWidget* parent = nullptr);
    ~SimpleControl();

    void write(const QString&) override;

public slots:
    void on_on1_pressed();
    void on_off1_pressed();

private:
    Ui::SimpleControl* ui;
    QSharedPointer<Command> _light_on;
    QSharedPointer<Command> _light_off;
};
