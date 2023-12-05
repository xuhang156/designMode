#include <QApplication>
#include "decorator/Laobing.h"
#include "decorator/Pork.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Food* laobing = new Laobing();
    Food* pork = new Pork(*laobing);
    laobing->cooking();
    pork->cooking();

    delete laobing;
    delete pork;

    return a.exec();
}
