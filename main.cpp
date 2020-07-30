#include "DeskMonitionControl.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CDeskMonitionControl w;
    w.OnBegin();
    return a.exec();
}
