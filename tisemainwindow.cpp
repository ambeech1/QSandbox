#include "tisemainwindow.h"
#include "ui_tisemainwindow.h"

int legendPosInd;

TISEMainWindow::TISEMainWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TISEMainWindow)
{
    // set up default tab and widget settings
    ui->setupUi(this);
    ui->tabs1d->setCurrentIndex(0);
    ui->tabs2d->setCurrentIndex(0);
    ui->showAxisLabels->setChecked(true);
    ui->showLegend->setChecked(true);
    ui->showXTicks->setChecked(true);
    ui->showYTicksL->setChecked(true);
    ui->showYTicksR->setChecked(true);
    ui->showGrid->setChecked(true);
    ui->showAxes->setChecked(true);

    // set up legend
    ui->TISEPlot1D->legend->setVisible(true);
    QFont legendFont = font();
    legendFont.setPointSize(9);
    ui->TISEPlot1D->legend->setFont(legendFont);
    ui->TISEPlot1D->legend->setBrush(QBrush(QColor(255, 255, 255, 230)));
    ui->TISEPlot1D->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop | Qt::AlignRight);
    legendPosInd = 0;

    // set up plot
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
    ui->TISEPlot1D->xAxis->grid()->setSubGridVisible(true);
    ui->TISEPlot1D->yAxis->grid()->setSubGridVisible(true);


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
        ui->TISEPlot1D->yAxis2->setRange(-7, 7);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        ui->TISEPlot1D->rescaleAxes();
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_yminR_textChanged(const QString &arg1)
{
    if (arg1 == "") {
        ui->TISEPlot1D->yAxis2->setRangeLower(-7);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        double ymin = arg1.toDouble();
        ui->TISEPlot1D->yAxis2->setRangeLower(ymin);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }

}


void TISEMainWindow::on_ymaxR_textChanged(const QString &arg1)
{
    if (arg1 == "") {
        ui->TISEPlot1D->yAxis2->setRangeUpper(7);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        double ymax = arg1.toDouble();
        ui->TISEPlot1D->yAxis2->setRangeUpper(ymax);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }

}

void TISEMainWindow::on_showAxisLabels_stateChanged(int arg1)
{
    if (ui->showAxisLabels->isChecked()) {
        ui->TISEPlot1D->xAxis->setLabel("Position");
        ui->TISEPlot1D->yAxis->setLabel("Wavefunction");
        ui->TISEPlot1D->yAxis2->setLabel("Potential Energy");
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        ui->TISEPlot1D->xAxis->setLabel("");
        ui->TISEPlot1D->yAxis->setLabel("");
        ui->TISEPlot1D->yAxis2->setLabel("");
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_showLegend_stateChanged(int arg1)
{
    if (ui->showLegend->isChecked()) {
        ui->TISEPlot1D->legend->setVisible(true);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        ui->TISEPlot1D->legend->setVisible(false);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}

void TISEMainWindow::on_showGrid_stateChanged(int arg1)
{
    if (ui->showGrid->isChecked()) {
        ui->TISEPlot1D->xAxis->grid()->setSubGridVisible(true);
        ui->TISEPlot1D->yAxis->grid()->setSubGridVisible(true);
        ui->TISEPlot1D->xAxis->grid()->setPen(QPen(QColor(0, 0, 0, 30), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        ui->TISEPlot1D->yAxis->grid()->setPen(QPen(QColor(0, 0, 0, 30), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        if (!ui->showAxes->isChecked()) {
            ui->TISEPlot1D->xAxis->grid()->setZeroLinePen(QPen(QColor(0, 0, 0, 30), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            ui->TISEPlot1D->yAxis->grid()->setZeroLinePen(QPen(QColor(0, 0, 0, 30), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
        QColor();
    }
    else {
        ui->TISEPlot1D->xAxis->grid()->setSubGridVisible(false);
        ui->TISEPlot1D->yAxis->grid()->setSubGridVisible(false);
        ui->TISEPlot1D->xAxis->grid()->setPen(QPen(QColor(255, 255, 255, 100), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        ui->TISEPlot1D->yAxis->grid()->setPen(QPen(QColor(255, 255, 255, 100), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        if (!ui->showAxes->isChecked()) {
            ui->TISEPlot1D->xAxis->grid()->setZeroLinePen(QPen(QColor(255, 255, 255, 100), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            ui->TISEPlot1D->yAxis->grid()->setZeroLinePen(QPen(QColor(255, 255, 255, 100), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_showAxes_stateChanged(int arg1)
{
    if (ui->showAxes->isChecked()) {
        ui->TISEPlot1D->xAxis->grid()->setZeroLinePen(QPen(QColor(0, 0, 0, 100), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        ui->TISEPlot1D->yAxis->grid()->setZeroLinePen(QPen(QColor(0, 0, 0, 100), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        if (ui->showGrid->isChecked()) {
            ui->TISEPlot1D->xAxis->grid()->setZeroLinePen(QPen(QColor(0, 0, 0, 30), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            ui->TISEPlot1D->yAxis->grid()->setZeroLinePen(QPen(QColor(0, 0, 0, 30), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }
        else {
            ui->TISEPlot1D->xAxis->grid()->setZeroLinePen(QPen(QColor(255, 255, 255, 100), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
            ui->TISEPlot1D->yAxis->grid()->setZeroLinePen(QPen(QColor(255, 255, 255, 100), 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_showXTicks_stateChanged(int arg1)
{
    if (ui->showXTicks->isChecked()) {
        ui->TISEPlot1D->xAxis->setTicks(true);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        ui->TISEPlot1D->xAxis->setTicks(false);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_showYTicksL_stateChanged(int arg1)
{
    if (ui->showYTicksL->isChecked()) {
        ui->TISEPlot1D->yAxis->setTicks(true);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        ui->TISEPlot1D->yAxis->setTicks(false);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_showYTicksR_stateChanged(int arg1)
{
    if (ui->showYTicksR->isChecked()) {
        ui->TISEPlot1D->yAxis2->setTicks(true);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
    else {
        ui->TISEPlot1D->yAxis2->setTicks(false);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
    }
}


void TISEMainWindow::on_pushButton_clicked()
{
    if (legendPosInd == 0) {
        ui->TISEPlot1D->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignBottom | Qt::AlignRight);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
        legendPosInd = 1;
    }
    else if (legendPosInd == 1) {
        ui->TISEPlot1D->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignBottom | Qt::AlignLeft);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
        legendPosInd = 2;
    }
    else if (legendPosInd == 2) {
        ui->TISEPlot1D->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop | Qt::AlignLeft);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
        legendPosInd = 3;
    }
    else if (legendPosInd == 3) {
        ui->TISEPlot1D->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop | Qt::AlignRight);
        ui->TISEPlot1D->replot();
        ui->TISEPlot1D->update();
        legendPosInd = 0;
    }
}
// ui->TISEPlot1D->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignBottom | Qt::AlignRight);
