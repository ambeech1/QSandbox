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

private:
    Ui::TISEMainWindow *ui;
};

#endif // TISEMAINWINDOW_H