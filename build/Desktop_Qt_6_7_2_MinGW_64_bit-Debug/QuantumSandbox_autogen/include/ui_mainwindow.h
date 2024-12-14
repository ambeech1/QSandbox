/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *aboutApp;
    QPushButton *aboutQt;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget;
    QWidget *tise;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QGridLayout *gridLayout_2;
    QPushButton *startTise;
    QPushButton *tiseInfo;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tdse;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_3;
    QGridLayout *gridLayout_3;
    QPushButton *startTdse;
    QPushButton *tdseInfo;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QWidget *measurement;
    QWidget *twoparticles;
    QWidget *fourieranalysis;
    QWidget *hilbertspaces;
    QWidget *samplesimulations;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(975, 748);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        aboutApp = new QPushButton(centralwidget);
        aboutApp->setObjectName("aboutApp");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutApp->sizePolicy().hasHeightForWidth());
        aboutApp->setSizePolicy(sizePolicy);
        aboutApp->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(aboutApp);

        aboutQt = new QPushButton(centralwidget);
        aboutQt->setObjectName("aboutQt");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(aboutQt->sizePolicy().hasHeightForWidth());
        aboutQt->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(aboutQt);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(pushButton_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        horizontalLayout->addLayout(verticalLayout);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setElideMode(Qt::TextElideMode::ElideNone);
        tise = new QWidget();
        tise->setObjectName("tise");
        verticalLayout_5 = new QVBoxLayout(tise);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_2 = new QLabel(tise);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        startTise = new QPushButton(tise);
        startTise->setObjectName("startTise");
        sizePolicy.setHeightForWidth(startTise->sizePolicy().hasHeightForWidth());
        startTise->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(startTise, 0, 1, 1, 1);

        tiseInfo = new QPushButton(tise);
        tiseInfo->setObjectName("tiseInfo");
        sizePolicy1.setHeightForWidth(tiseInfo->sizePolicy().hasHeightForWidth());
        tiseInfo->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(tiseInfo, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        tabWidget->addTab(tise, QString());
        tdse = new QWidget();
        tdse->setObjectName("tdse");
        verticalLayout_7 = new QVBoxLayout(tdse);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_3 = new QLabel(tdse);
        label_3->setObjectName("label_3");
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_6->addWidget(label_3);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        startTdse = new QPushButton(tdse);
        startTdse->setObjectName("startTdse");
        sizePolicy.setHeightForWidth(startTdse->sizePolicy().hasHeightForWidth());
        startTdse->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(startTdse, 0, 1, 1, 1);

        tdseInfo = new QPushButton(tdse);
        tdseInfo->setObjectName("tdseInfo");
        sizePolicy1.setHeightForWidth(tdseInfo->sizePolicy().hasHeightForWidth());
        tdseInfo->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(tdseInfo, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        verticalLayout_6->addLayout(gridLayout_3);


        verticalLayout_7->addLayout(verticalLayout_6);

        tabWidget->addTab(tdse, QString());
        measurement = new QWidget();
        measurement->setObjectName("measurement");
        tabWidget->addTab(measurement, QString());
        twoparticles = new QWidget();
        twoparticles->setObjectName("twoparticles");
        tabWidget->addTab(twoparticles, QString());
        fourieranalysis = new QWidget();
        fourieranalysis->setObjectName("fourieranalysis");
        tabWidget->addTab(fourieranalysis, QString());
        hilbertspaces = new QWidget();
        hilbertspaces->setObjectName("hilbertspaces");
        tabWidget->addTab(hilbertspaces, QString());
        samplesimulations = new QWidget();
        samplesimulations->setObjectName("samplesimulations");
        tabWidget->addTab(samplesimulations, QString());

        horizontalLayout->addWidget(tabWidget);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);

        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 1);
        verticalLayout_2->setStretch(3, 5);

        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 975, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Quantum\n"
"Sandbox", nullptr));
        aboutApp->setText(QCoreApplication::translate("MainWindow", "About This App", nullptr));
        aboutQt->setText(QCoreApplication::translate("MainWindow", "About Qt", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "About Eigen", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "About MuParser", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "A toolbox for studying the Time-Independent Schrodinger Equation (TISE).", nullptr));
        startTise->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        tiseInfo->setText(QCoreApplication::translate("MainWindow", "More Information", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tise), QCoreApplication::translate("MainWindow", "TISE", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "A toolbox for studying the Time-Dependent Schrodinger Equation (TDSE).", nullptr));
        startTdse->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        tdseInfo->setText(QCoreApplication::translate("MainWindow", "More Information", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tdse), QCoreApplication::translate("MainWindow", "TDSE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(measurement), QCoreApplication::translate("MainWindow", "Measurement", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(twoparticles), QCoreApplication::translate("MainWindow", "Two Particles", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(fourieranalysis), QCoreApplication::translate("MainWindow", "Fourier Analysis", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(hilbertspaces), QCoreApplication::translate("MainWindow", "Hilbert Spaces", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(samplesimulations), QCoreApplication::translate("MainWindow", "Sample Simulations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
