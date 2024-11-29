#include "tisemainwindow.h"
#include "ui_tisemainwindow.h"

TISEMainWindow::TISEMainWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TISEMainWindow)
{
    ui->setupUi(this);
    ui->tabs1d->setCurrentIndex(0);
    ui->tabs2d->setCurrentIndex(0);

    ui->TISEPlot1D->legend->setVisible(true);
    QFont legendFont = font();
    legendFont.setPointSize(9);
    ui->TISEPlot1D->legend->setFont(legendFont);
    ui->TISEPlot1D->legend->setBrush(QBrush(QColor(255, 255, 255, 230)));
    ui->TISEPlot1D->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignBottom | Qt::AlignRight);

    ui->TISEPlot1D->addGraph(ui->TISEPlot1D->xAxis, ui->TISEPlot1D->yAxis);
    ui->TISEPlot1D->graph(0)->setPen(QPen(QColor(255, 100, 0)));
    ui->TISEPlot1D->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->TISEPlot1D->graph(0)->setName("Wavefunction");
    ui->TISEPlot1D->addGraph(ui->TISEPlot1D->xAxis, ui->TISEPlot1D->yAxis2);
    ui->TISEPlot1D->graph(1)->setPen(QPen(QColor(0, 255, 100)));
    ui->TISEPlot1D->graph(1)->setLineStyle(QCPGraph::lsLine);
    ui->TISEPlot1D->graph(1)->setName("Potential Energy");
    ui->TISEPlot1D->xAxis->setLabel("Position");
    ui->TISEPlot1D->yAxis->setLabel("Wavefunction");
    ui->TISEPlot1D->yAxis2->setLabel("Potential Energy");
    ui->TISEPlot1D->xAxis->setRange(-10, 10);
    ui->TISEPlot1D->yAxis->setRange(-7, 7);
    ui->TISEPlot1D->yAxis2->setRange(-7, 7);
    ui->TISEPlot1D->yAxis2->setVisible(true);


    /**
    ui->TISEPlot2D->addGraph();
    ui->TISEPlot2D->graph()->setLineStyle(QCPGraph::lsLine);
    ui->TISEPlot2D->xAxis->setLabel("Position");
    ui->TISEPlot2D->yAxis->setLabel("Wavefunction");
    ui->TISEPlot2D->yAxis2->setLabel("Potential Energy");
    ui->TISEPlot2D->xAxis->setRange(-10, 10);
    ui->TISEPlot2D->yAxis->setRange(-7, 7);
    ui->TISEPlot2D->yAxis2->setRange(-7, 7);
    */
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

void TISEMainWindow::on_xmin_textChanged(const QString &arg1)
{
    if (arg1 == "") {
        ui->TISEPlot1D->xAxis->setRangeLower(-10);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        double xmin = arg1.toDouble();
        ui->TISEPlot1D->xAxis->setRangeLower(xmin);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_xmax_textChanged(const QString &arg1)
{
    if (arg1 == "") {
        ui->TISEPlot1D->xAxis->setRangeUpper(10);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        double xmax = arg1.toDouble();
        ui->TISEPlot1D->xAxis->setRangeUpper(xmax);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_ymin_textChanged(const QString &arg1)
{
    if (arg1 == "") {
        ui->TISEPlot1D->yAxis->setRangeLower(-7);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        double ymin = arg1.toDouble();
        ui->TISEPlot1D->yAxis->setRangeLower(ymin);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_ymax_textChanged(const QString &arg1)
{
    if (arg1 == "") {
        ui->TISEPlot1D->yAxis->setRangeUpper(7);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        double ymax = arg1.toDouble();
        ui->TISEPlot1D->yAxis->setRangeUpper(ymax);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_autoRange1d_clicked()
{
    if (ui->TISEPlot1D->itemCount() == 0) {
        ui->TISEPlot1D->xAxis->setRange(-10, 10);
        ui->TISEPlot1D->yAxis->setRange(-7, 7);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        ui->TISEPlot1D->rescaleAxes();
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}

