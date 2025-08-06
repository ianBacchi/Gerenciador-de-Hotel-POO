/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelUsuario;
    QLineEdit *lineEditUsuario;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2Senha;
    QLineEdit *lineEdit_2Senha;
    QPushButton *pushButtonConfirmar;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 413);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 741, 371));
        page = new QWidget();
        page->setObjectName("page");
        horizontalLayout_5 = new QHBoxLayout(page);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        groupBox = new QGroupBox(page);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelUsuario = new QLabel(groupBox);
        labelUsuario->setObjectName("labelUsuario");

        horizontalLayout->addWidget(labelUsuario);

        lineEditUsuario = new QLineEdit(groupBox);
        lineEditUsuario->setObjectName("lineEditUsuario");

        horizontalLayout->addWidget(lineEditUsuario);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2Senha = new QLabel(groupBox);
        label_2Senha->setObjectName("label_2Senha");

        horizontalLayout_2->addWidget(label_2Senha);

        lineEdit_2Senha = new QLineEdit(groupBox);
        lineEdit_2Senha->setObjectName("lineEdit_2Senha");

        horizontalLayout_2->addWidget(lineEdit_2Senha);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        pushButtonConfirmar = new QPushButton(groupBox);
        pushButtonConfirmar->setObjectName("pushButtonConfirmar");

        gridLayout->addWidget(pushButtonConfirmar, 2, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Entrar", nullptr));
        labelUsuario->setText(QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        label_2Senha->setText(QCoreApplication::translate("MainWindow", "Senha:", nullptr));
        pushButtonConfirmar->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
