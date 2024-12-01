#include "mainwindow.h"
#include <Eigen>
#include <QApplication>


//#include "muParser.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();


    /**
    double var_a = 1;
    mu::Parser p;
    p.DefineVar("a", &var_a);
    p.SetExpr("a*_pi");
    */
}
