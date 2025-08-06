/********************************************************************************
** Form generated from reading UI file 'listardialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTARDIALOG_H
#define UI_LISTARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ListarDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonVoltar;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidgetListar;

    void setupUi(QWidget *ListarDialog)
    {
        if (ListarDialog->objectName().isEmpty())
            ListarDialog->setObjectName("ListarDialog");
        ListarDialog->resize(749, 432);
        verticalLayout_2 = new QVBoxLayout(ListarDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButtonVoltar = new QPushButton(ListarDialog);
        pushButtonVoltar->setObjectName("pushButtonVoltar");

        verticalLayout_2->addWidget(pushButtonVoltar);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableWidgetListar = new QTableWidget(ListarDialog);
        tableWidgetListar->setObjectName("tableWidgetListar");

        verticalLayout->addWidget(tableWidgetListar);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(ListarDialog);

        QMetaObject::connectSlotsByName(ListarDialog);
    } // setupUi

    void retranslateUi(QWidget *ListarDialog)
    {
        ListarDialog->setWindowTitle(QCoreApplication::translate("ListarDialog", "Dialog", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("ListarDialog", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ListarDialog: public Ui_ListarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTARDIALOG_H
