#include "PizzaStore.h"
#include "Pizza.h"

PizzaStore::PizzaStore() {}

void PizzaStore::orderPizza(const QString& type)
{
    auto pizza = createPizza(type);

    pizza->prepare();
    pizza->cut();
    pizza->box();
}
