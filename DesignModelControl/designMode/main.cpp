#include <QApplication>
#include "decorator/Laobing.h"
#include "decorator/Pork.h"

#include "observer/Timer.h"
#include "observer/ui/ShowTime.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    Food* laobing = new Laobing();
    Food* pork = new Pork(*laobing);
    laobing->cooking();
    pork->cooking();

    delete laobing;
    delete pork;

    //观察者模式示例
    Timer* timer = new Timer();
    ShowTime* showtime = new ShowTime(timer);
    showtime->show();

    return a.exec();
}
