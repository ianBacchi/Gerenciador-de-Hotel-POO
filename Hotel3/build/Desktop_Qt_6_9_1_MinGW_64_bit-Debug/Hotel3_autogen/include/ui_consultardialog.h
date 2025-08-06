/********************************************************************************
** Form generated from reading UI file 'consultardialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTARDIALOG_H
#define UI_CONSULTARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsultarDialog
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonVoltar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBoxLocalidade;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *spinBoxDiarias;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QDateEdit *dateEditCheckIn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *comboBox_2TipoQuarto;
    QPushButton *pushButtonConsultar;

    void setupUi(QWidget *ConsultarDialog)
    {
        if (ConsultarDialog->objectName().isEmpty())
            ConsultarDialog->setObjectName("ConsultarDialog");
        ConsultarDialog->resize(749, 432);
        verticalLayout = new QVBoxLayout(ConsultarDialog);
        verticalLayout->setObjectName("verticalLayout");
        pushButtonVoltar = new QPushButton(ConsultarDialog);
        pushButtonVoltar->setObjectName("pushButtonVoltar");

        verticalLayout->addWidget(pushButtonVoltar);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(ConsultarDialog);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        comboBoxLocalidade = new QComboBox(ConsultarDialog);
        comboBoxLocalidade->addItem(QString());
        comboBoxLocalidade->addItem(QString());
        comboBoxLocalidade->addItem(QString());
        comboBoxLocalidade->setObjectName("comboBoxLocalidade");

        horizontalLayout_3->addWidget(comboBoxLocalidade);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(ConsultarDialog);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        spinBoxDiarias = new QSpinBox(ConsultarDialog);
        spinBoxDiarias->setObjectName("spinBoxDiarias");
        spinBoxDiarias->setMinimumSize(QSize(73, 25));

        horizontalLayout->addWidget(spinBoxDiarias);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(ConsultarDialog);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        dateEditCheckIn = new QDateEdit(ConsultarDialog);
        dateEditCheckIn->setObjectName("dateEditCheckIn");

        horizontalLayout_4->addWidget(dateEditCheckIn);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(ConsultarDialog);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        comboBox_2TipoQuarto = new QComboBox(ConsultarDialog);
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->setObjectName("comboBox_2TipoQuarto");

        horizontalLayout_2->addWidget(comboBox_2TipoQuarto);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButtonConsultar = new QPushButton(ConsultarDialog);
        pushButtonConsultar->setObjectName("pushButtonConsultar");

        verticalLayout->addWidget(pushButtonConsultar);


        retranslateUi(ConsultarDialog);

        QMetaObject::connectSlotsByName(ConsultarDialog);
    } // setupUi

    void retranslateUi(QWidget *ConsultarDialog)
    {
        ConsultarDialog->setWindowTitle(QCoreApplication::translate("ConsultarDialog", "Dialog", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("ConsultarDialog", "VOLTAR ", nullptr));
        label->setText(QCoreApplication::translate("ConsultarDialog", "Localidade:", nullptr));
        comboBoxLocalidade->setItemText(0, QCoreApplication::translate("ConsultarDialog", "Jericoacoara", nullptr));
        comboBoxLocalidade->setItemText(1, QCoreApplication::translate("ConsultarDialog", "Canoa Quebrada", nullptr));
        comboBoxLocalidade->setItemText(2, QCoreApplication::translate("ConsultarDialog", "Cumbuco", nullptr));

        label_3->setText(QCoreApplication::translate("ConsultarDialog", "Numero de diarias:", nullptr));
        label_2->setText(QCoreApplication::translate("ConsultarDialog", "Data de check-in:", nullptr));
        label_4->setText(QCoreApplication::translate("ConsultarDialog", "Tipo de quarto:", nullptr));
        comboBox_2TipoQuarto->setItemText(0, QCoreApplication::translate("ConsultarDialog", "Solteiro", nullptr));
        comboBox_2TipoQuarto->setItemText(1, QCoreApplication::translate("ConsultarDialog", "Duplo", nullptr));
        comboBox_2TipoQuarto->setItemText(2, QCoreApplication::translate("ConsultarDialog", "Triplo", nullptr));
        comboBox_2TipoQuarto->setItemText(3, QCoreApplication::translate("ConsultarDialog", "Qu\303\241druplo", nullptr));
        comboBox_2TipoQuarto->setItemText(4, QCoreApplication::translate("ConsultarDialog", "Casal", nullptr));

        pushButtonConsultar->setText(QCoreApplication::translate("ConsultarDialog", "CONSULTAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsultarDialog: public Ui_ConsultarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTARDIALOG_H
