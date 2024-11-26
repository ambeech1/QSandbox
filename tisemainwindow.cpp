#include "tisemainwindow.h"
#include "ui_tisemainwindow.h"

TISEMainWindow::TISEMainWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TISEMainWindow)
{
    ui->setupUi(this);
}

TISEMainWindow::~TISEMainWindow()
{
    delete ui;
}
