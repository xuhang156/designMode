#include "SimpleControl.h"
#include "LightOffCommand.h"
#include "LightOnCommand.h"
#include "furniture/Light.h"
#include "ui_SimpleControl.h"

SimpleControl::SimpleControl(QWidget* parent) : QWidget(parent), ui(new Ui::SimpleControl)
{
    ui->setupUi(this);

    QSharedPointer<Light> light = QSharedPointer<Light>::create();
    _light_on = QSharedPointer<LightOnCommand>::create(*this, light);
    _light_off = QSharedPointer<LightOffCommand>::create(*this, light);
}

void SimpleControl::on_on1_pressed() { _light_on->execute(); }

void SimpleControl::on_off1_pressed() { _light_off->execute(); }

SimpleControl::~SimpleControl() { delete ui; }

void SimpleControl::write(const QString& text) { ui->textEdit->append(text); }
