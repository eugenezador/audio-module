#include "pleer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Pleer w;
    w.show();
    return a.exec();
}
