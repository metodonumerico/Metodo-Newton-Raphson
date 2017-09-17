/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QDoubleSpinBox *X1;
    QLabel *label_2;
    QDoubleSpinBox *X2;
    QLabel *label_3;
    QDoubleSpinBox *Err;
    QPushButton *Procesar;
    QPushButton *Borrar;
    QPushButton *Salir;
    QTextEdit *Texto;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 30, 20));
        X1 = new QDoubleSpinBox(centralWidget);
        X1->setObjectName(QStringLiteral("X1"));
        X1->setGeometry(QRect(60, 10, 111, 20));
        X1->setDecimals(5);
        X1->setMaximum(999.99);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 30, 20));
        X2 = new QDoubleSpinBox(centralWidget);
        X2->setObjectName(QStringLiteral("X2"));
        X2->setGeometry(QRect(60, 40, 111, 20));
        X2->setDecimals(5);
        X2->setMaximum(999.99);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 41, 20));
        Err = new QDoubleSpinBox(centralWidget);
        Err->setObjectName(QStringLiteral("Err"));
        Err->setGeometry(QRect(60, 70, 111, 20));
        Err->setDecimals(5);
        Err->setMaximum(999.99);
        Procesar = new QPushButton(centralWidget);
        Procesar->setObjectName(QStringLiteral("Procesar"));
        Procesar->setGeometry(QRect(20, 100, 141, 31));
        Borrar = new QPushButton(centralWidget);
        Borrar->setObjectName(QStringLiteral("Borrar"));
        Borrar->setGeometry(QRect(30, 190, 111, 31));
        Salir = new QPushButton(centralWidget);
        Salir->setObjectName(QStringLiteral("Salir"));
        Salir->setGeometry(QRect(290, 190, 101, 31));
        Texto = new QTextEdit(centralWidget);
        Texto->setObjectName(QStringLiteral("Texto"));
        Texto->setGeometry(QRect(180, 10, 211, 171));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "X1:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "X2:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Error:", Q_NULLPTR));
        Procesar->setText(QApplication::translate("MainWindow", "Procesar", Q_NULLPTR));
        Borrar->setText(QApplication::translate("MainWindow", "Borrar", Q_NULLPTR));
        Salir->setText(QApplication::translate("MainWindow", "Salir", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
