#include "Pizza.h"
#include <QDebug>

Pizza::Pizza() {}

void Pizza::prepare() { qDebug() << "Pizza::prepare"; }

void Pizza::cut() { qDebug() << "Pizza::cut"; }

void Pizza::box() { qDebug() << "Pizza::box"; }
