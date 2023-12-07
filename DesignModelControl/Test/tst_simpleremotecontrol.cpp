#include <QtTest>

// add necessary includes here

class SimpleRemoteControl : public QObject
{
    Q_OBJECT

public:
    SimpleRemoteControl();
    ~SimpleRemoteControl();

private slots:
    void test_case1();

};

SimpleRemoteControl::SimpleRemoteControl()
{

}

SimpleRemoteControl::~SimpleRemoteControl()
{

}

void SimpleRemoteControl::test_case1()
{

}

QTEST_APPLESS_MAIN(SimpleRemoteControl)

#include "tst_simpleremotecontrol.moc"
