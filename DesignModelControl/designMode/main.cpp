#include <QApplication>
#include "decorator/Laobing.h"
#include "decorator/Pork.h"
#include "decorator/coffee.h"

#include "observer/Timer.h"
#include "observer/ui/ShowTime.h"

#include "factory/NYPizzaStore.h"

#include "command/SimpleControl.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    {
        //装饰器测试，给咖啡店增加装饰功能，增加不同行为如：计算价格
        QSharedPointer<Beverage> coffe(new Espresso());
        qDebug() << coffe->description();
        qDebug() << coffe->cost();

        QSharedPointer<Beverage> mochaCoffe(new Mocha(coffe));
        qDebug() << mochaCoffe->description();
        qDebug() << mochaCoffe->cost();
    }

    {
        // 工厂模式测试
        auto store = QSharedPointer<NYPizzaStore>::create();
        store->orderPizza("cheese");
    }

    {
        //命令模式示例
        SimpleControl* ctrl = new SimpleControl();
        ctrl->show();
    }

    Food* laobing = new Laobing();
    Food* pork = new Pork(*laobing);
    laobing->cooking();
    pork->cooking();

    delete laobing;
    delete pork;

    {
        //观察者模式示例
        Timer* timer = new Timer();
        ShowTime* showtime = new ShowTime(timer);
        showtime->show();
    }
    return a.exec();
}
