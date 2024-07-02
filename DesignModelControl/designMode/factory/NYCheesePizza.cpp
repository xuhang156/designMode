#include "NYCheesePizza.h"
#include <QDebug>
NYCheesePizza::NYCheesePizza() {}

void NYCheesePizza::prepare() { qDebug() << "NYCheesePizza::prepare"; }
void NYCheesePizza::cut() { qDebug() << "NYCheesePizza::cut"; }
void NYCheesePizza::box() { qDebug() << "NYCheesePizza::box"; }
