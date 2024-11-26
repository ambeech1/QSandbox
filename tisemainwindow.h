#ifndef TISEMAINWINDOW_H
#define TISEMAINWINDOW_H

#include <QDialog>

namespace Ui {
class TISEMainWindow;
}

class TISEMainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TISEMainWindow(QWidget *parent = nullptr);
    ~TISEMainWindow();

private slots:
    void on_tise1DTabInfo_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TISEMainWindow *ui;
};

#endif // TISEMAINWINDOW_H
