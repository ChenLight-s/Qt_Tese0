#include "mainwindow.h"

#include <QApplication>
#include <iostream>
#include <QtDebug>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    int test0 =10;
    qDebug() << "我叠加的懂" << test0 <<endl;
    w.show();
    return a.exec();

}
