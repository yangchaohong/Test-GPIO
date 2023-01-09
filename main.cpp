#include "mainwindow.h"

#include <QApplication>
#include <wiringPi.h>
#include <wiringSerial.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    if(wiringPiSetup()<0)
    {
        a.exit(1);
    }
    w.show();
    return a.exec();
}
