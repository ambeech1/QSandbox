#include "mainwindow.h"
#include <Eigen>
#include <QApplication>

#include "mpParser.h"

using namespace mup;

#include <Spectra/SymEigsBase.h>

int main(int argc, char *argv[])
{
    ParserX p;
    Value val(3.14);
    Variable var(&val);
    p.DefineVar("a", var);

    p.DefineConst("b", val);
    p.DefineConst("c", 3.14);

    p.SetExpr("a = 123");
    Value result = p.Eval();

    qDebug() << result.ToString();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
