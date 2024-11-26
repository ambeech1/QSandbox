#include "tisemainwindow.h"
#include "ui_tisemainwindow.h"

TISEMainWindow::TISEMainWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TISEMainWindow)
{
    ui->setupUi(this);
    ui->tabs1d->setCurrentIndex(0);
    ui->tabs2d->setCurrentIndex(0);
}

TISEMainWindow::~TISEMainWindow()
{
    delete ui;
}


void TISEMainWindow::on_tise1DTabInfo_clicked()
{
    QMessageBox::about(this, "Tab Descriptions", "Plot Settings: Adjust the appearance and axis ranges of the plot window.\n\nPotential Energy: Configure the desired potential energy function and boundary conditions.\n\nSolution Parameters: Adjust the accuracy of the solution, as well as particle mass and the scale of Planck's constant.\n\nDisplay: Choose what variables should appear on the plot.\n\nManage Solutions: Show and hide previously found solutions, and save desired solutions to be viewed and manipulated in the TDSE module.");
}


void TISEMainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this, "Tab Descriptions", "Plot Settings: Adjust the appearance and axis ranges of the plot window.\n\nPotential Energy: Configure the desired potential energy function and boundary conditions. Specify a spin-dependency if desired.\n\nSolution Parameters: Adjust the accuracy of the solution, as well as particle mass and the scale of Planck's constant.\n\nDisplay: Choose what variables should appear on the plot.\n\nManage Solutions: Show and hide previously found solutions, and save desired solutions to be viewed and manipulated in the TDSE module.\n\nSpin Parameters: Configure the spin components of the wavefunction, if desired.");
}

