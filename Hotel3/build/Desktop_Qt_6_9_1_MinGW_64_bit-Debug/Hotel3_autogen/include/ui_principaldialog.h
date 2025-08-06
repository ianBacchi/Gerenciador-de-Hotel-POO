/********************************************************************************
** Form generated from reading UI file 'principaldialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPALDIALOG_H
#define UI_PRINCIPALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrincipalDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *labelNome;
    QPushButton *pushButtonRealizar;
    QPushButton *pushButtonConsultar;
    QPushButton *pushButtonListar;
    QPushButton *pushButtonSair;

    void setupUi(QWidget *PrincipalDialog)
    {
        if (PrincipalDialog->objectName().isEmpty())
            PrincipalDialog->setObjectName("PrincipalDialog");
        PrincipalDialog->resize(660, 400);
        verticalLayout = new QVBoxLayout(PrincipalDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(PrincipalDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(PrincipalDialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        labelNome = new QLabel(PrincipalDialog);
        labelNome->setObjectName("labelNome");

        horizontalLayout->addWidget(labelNome);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonRealizar = new QPushButton(PrincipalDialog);
        pushButtonRealizar->setObjectName("pushButtonRealizar");

        verticalLayout->addWidget(pushButtonRealizar);

        pushButtonConsultar = new QPushButton(PrincipalDialog);
        pushButtonConsultar->setObjectName("pushButtonConsultar");

        verticalLayout->addWidget(pushButtonConsultar);

        pushButtonListar = new QPushButton(PrincipalDialog);
        pushButtonListar->setObjectName("pushButtonListar");

        verticalLayout->addWidget(pushButtonListar);

        pushButtonSair = new QPushButton(PrincipalDialog);
        pushButtonSair->setObjectName("pushButtonSair");

        verticalLayout->addWidget(pushButtonSair);


        retranslateUi(PrincipalDialog);

        QMetaObject::connectSlotsByName(PrincipalDialog);
    } // setupUi

    void retranslateUi(QWidget *PrincipalDialog)
    {
        PrincipalDialog->setWindowTitle(QCoreApplication::translate("PrincipalDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PrincipalDialog", "TELA PRINCIPAL", nullptr));
        label_2->setText(QCoreApplication::translate("PrincipalDialog", "Nome Do Usuario:", nullptr));
        labelNome->setText(QCoreApplication::translate("PrincipalDialog", "..............", nullptr));
        pushButtonRealizar->setText(QCoreApplication::translate("PrincipalDialog", "Realizar reserva.", nullptr));
        pushButtonConsultar->setText(QCoreApplication::translate("PrincipalDialog", "Consultar disponibilidade.", nullptr));
        pushButtonListar->setText(QCoreApplication::translate("PrincipalDialog", "Listar reservas feitas.", nullptr));
        pushButtonSair->setText(QCoreApplication::translate("PrincipalDialog", "Sair do sistema.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrincipalDialog: public Ui_PrincipalDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPALDIALOG_H
