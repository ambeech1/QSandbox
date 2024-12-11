#include "mainwindow.h"
#include <Eigen>
#include <QApplication>

/**
#include "muParser.h"
using namespace mu;

#include <locale>
#include <codecvt>
*/

#include <Spectra/SymEigsBase.h>

int main(int argc, char *argv[])
{
    /**
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;

    double var_a = 1;
    mu::Parser p;
    p.DefineVar(converter.from_bytes("a"), &var_a);
    p.SetExpr(converter.from_bytes("a*_pi"));

    qDebug() << p.Eval();
    */


    // Eigen::Matrix<double, 2, 2> M;


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
