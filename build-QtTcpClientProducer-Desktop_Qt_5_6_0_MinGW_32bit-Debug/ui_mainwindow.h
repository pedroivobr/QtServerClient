/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *buttonConnect;
    QPushButton *buttonDisconnect;
    QHBoxLayout *horizontalLayout_2;
    QSlider *sliderMin;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLCDNumber *lcdMin;
    QHBoxLayout *horizontalLayout;
    QSlider *sliderMax;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdMax;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSlider *sliderTiming;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *buttonStart;
    QPushButton *buttonStop;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(645, 356);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_5 = new QVBoxLayout(centralWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_3->addWidget(lineEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        buttonConnect = new QPushButton(centralWidget);
        buttonConnect->setObjectName(QStringLiteral("buttonConnect"));

        horizontalLayout_3->addWidget(buttonConnect);

        buttonDisconnect = new QPushButton(centralWidget);
        buttonDisconnect->setObjectName(QStringLiteral("buttonDisconnect"));

        horizontalLayout_3->addWidget(buttonDisconnect);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sliderMin = new QSlider(centralWidget);
        sliderMin->setObjectName(QStringLiteral("sliderMin"));
        sliderMin->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderMin);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lcdMin = new QLCDNumber(centralWidget);
        lcdMin->setObjectName(QStringLiteral("lcdMin"));

        verticalLayout->addWidget(lcdMin);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sliderMax = new QSlider(centralWidget);
        sliderMax->setObjectName(QStringLiteral("sliderMax"));
        sliderMax->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderMax);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lcdMax = new QLCDNumber(centralWidget);
        lcdMax->setObjectName(QStringLiteral("lcdMax"));

        verticalLayout_2->addWidget(lcdMax);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        sliderTiming = new QSlider(centralWidget);
        sliderTiming->setObjectName(QStringLiteral("sliderTiming"));
        sliderTiming->setMinimum(1);
        sliderTiming->setMaximum(5);
        sliderTiming->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(sliderTiming);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        buttonStart = new QPushButton(centralWidget);
        buttonStart->setObjectName(QStringLiteral("buttonStart"));
        buttonStart->setAutoFillBackground(false);
        buttonStart->setCheckable(false);
        buttonStart->setAutoRepeat(false);

        horizontalLayout_5->addWidget(buttonStart);

        buttonStop = new QPushButton(centralWidget);
        buttonStop->setObjectName(QStringLiteral("buttonStop"));

        horizontalLayout_5->addWidget(buttonStop);


        verticalLayout_4->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_4);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_6->addWidget(textEdit);


        verticalLayout_5->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 645, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(sliderMax, SIGNAL(valueChanged(int)), lcdMax, SLOT(display(int)));
        QObject::connect(sliderMin, SIGNAL(valueChanged(int)), lcdMin, SLOT(display(int)));
        QObject::connect(sliderTiming, SIGNAL(valueChanged(int)), label_4, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "localhost", 0));
        buttonConnect->setText(QApplication::translate("MainWindow", "Connect", 0));
        buttonDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        label->setText(QApplication::translate("MainWindow", "Min", 0));
        label_2->setText(QApplication::translate("MainWindow", "Max", 0));
        label_3->setText(QApplication::translate("MainWindow", "Timing(s)", 0));
        label_4->setText(QApplication::translate("MainWindow", "1", 0));
        buttonStart->setText(QApplication::translate("MainWindow", "Start", 0));
        buttonStop->setText(QApplication::translate("MainWindow", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
