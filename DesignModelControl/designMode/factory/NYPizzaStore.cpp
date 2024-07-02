#include "NYPizzaStore.h"
#include "NYCheesePizza.h"

NYPizzaStore::NYPizzaStore() {}

QSharedPointer<Pizza> NYPizzaStore::createPizza(const QString& type)
{
    if (type == "cheese") {
        return QSharedPointer<NYCheesePizza>::create();
    }
    return nullptr;
}
