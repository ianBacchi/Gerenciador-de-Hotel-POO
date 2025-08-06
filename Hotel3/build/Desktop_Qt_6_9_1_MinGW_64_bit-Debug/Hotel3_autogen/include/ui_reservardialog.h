/********************************************************************************
** Form generated from reading UI file 'reservardialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVARDIALOG_H
#define UI_RESERVARDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReservarDialog
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonReservar;
    QPushButton *pushButtonVoltar;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *lineEditNomeCliente;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QDateEdit *dateEditCheckOut;
    QGroupBox *groupBoxDesconto;
    QRadioButton *radioButtonVip;
    QRadioButton *radioButtonBaixaTemporada;
    QRadioButton *radioButtonPromocao;
    QRadioButton *radioButtonSemDesconto;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QDateEdit *dateEditCheckIn;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *comboBox_2TipoQuarto;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *comboBoxLocalidade;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEditCpfCliente;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spinBoxDiarias;

    void setupUi(QWidget *ReservarDialog)
    {
        if (ReservarDialog->objectName().isEmpty())
            ReservarDialog->setObjectName("ReservarDialog");
        ReservarDialog->resize(609, 403);
        widget = new QWidget(ReservarDialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 10, 561, 391));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonReservar = new QPushButton(widget);
        pushButtonReservar->setObjectName("pushButtonReservar");

        gridLayout->addWidget(pushButtonReservar, 6, 1, 1, 1);

        pushButtonVoltar = new QPushButton(widget);
        pushButtonVoltar->setObjectName("pushButtonVoltar");

        gridLayout->addWidget(pushButtonVoltar, 6, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout_7->addWidget(label_5);

        lineEditNomeCliente = new QLineEdit(widget);
        lineEditNomeCliente->setObjectName("lineEditNomeCliente");

        horizontalLayout_7->addWidget(lineEditNomeCliente);


        gridLayout->addLayout(horizontalLayout_7, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        horizontalLayout->addWidget(label_7);

        dateEditCheckOut = new QDateEdit(widget);
        dateEditCheckOut->setObjectName("dateEditCheckOut");

        horizontalLayout->addWidget(dateEditCheckOut);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        groupBoxDesconto = new QGroupBox(widget);
        groupBoxDesconto->setObjectName("groupBoxDesconto");
        radioButtonVip = new QRadioButton(groupBoxDesconto);
        radioButtonVip->setObjectName("radioButtonVip");
        radioButtonVip->setGeometry(QRect(12, 31, 41, 21));
        radioButtonBaixaTemporada = new QRadioButton(groupBoxDesconto);
        radioButtonBaixaTemporada->setObjectName("radioButtonBaixaTemporada");
        radioButtonBaixaTemporada->setGeometry(QRect(12, 58, 114, 21));
        radioButtonPromocao = new QRadioButton(groupBoxDesconto);
        radioButtonPromocao->setObjectName("radioButtonPromocao");
        radioButtonPromocao->setGeometry(QRect(12, 85, 201, 21));
        radioButtonSemDesconto = new QRadioButton(groupBoxDesconto);
        radioButtonSemDesconto->setObjectName("radioButtonSemDesconto");
        radioButtonSemDesconto->setGeometry(QRect(12, 112, 105, 21));

        gridLayout->addWidget(groupBoxDesconto, 2, 1, 4, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        dateEditCheckIn = new QDateEdit(widget);
        dateEditCheckIn->setObjectName("dateEditCheckIn");

        horizontalLayout_6->addWidget(dateEditCheckIn);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        comboBox_2TipoQuarto = new QComboBox(widget);
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->addItem(QString());
        comboBox_2TipoQuarto->setObjectName("comboBox_2TipoQuarto");

        horizontalLayout_5->addWidget(comboBox_2TipoQuarto);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        comboBoxLocalidade = new QComboBox(widget);
        comboBoxLocalidade->addItem(QString());
        comboBoxLocalidade->addItem(QString());
        comboBoxLocalidade->addItem(QString());
        comboBoxLocalidade->setObjectName("comboBoxLocalidade");

        horizontalLayout_4->addWidget(comboBoxLocalidade);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        lineEditCpfCliente = new QLineEdit(widget);
        lineEditCpfCliente->setObjectName("lineEditCpfCliente");

        horizontalLayout_3->addWidget(lineEditCpfCliente);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        spinBoxDiarias = new QSpinBox(widget);
        spinBoxDiarias->setObjectName("spinBoxDiarias");
        spinBoxDiarias->setMinimumSize(QSize(73, 25));

        horizontalLayout_2->addWidget(spinBoxDiarias);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 2, 1);


        retranslateUi(ReservarDialog);

        QMetaObject::connectSlotsByName(ReservarDialog);
    } // setupUi

    void retranslateUi(QWidget *ReservarDialog)
    {
        ReservarDialog->setWindowTitle(QCoreApplication::translate("ReservarDialog", "Dialog", nullptr));
        pushButtonReservar->setText(QCoreApplication::translate("ReservarDialog", "RESERVAR", nullptr));
        pushButtonVoltar->setText(QCoreApplication::translate("ReservarDialog", "VOLTAR", nullptr));
        label_5->setText(QCoreApplication::translate("ReservarDialog", "Nome do cliente:", nullptr));
        label_7->setText(QCoreApplication::translate("ReservarDialog", "Data de check-out:", nullptr));
        groupBoxDesconto->setTitle(QCoreApplication::translate("ReservarDialog", "Tipo de desconto:", nullptr));
        radioButtonVip->setText(QCoreApplication::translate("ReservarDialog", "Vip", nullptr));
        radioButtonBaixaTemporada->setText(QCoreApplication::translate("ReservarDialog", "Baixa Temporada", nullptr));
        radioButtonPromocao->setText(QCoreApplication::translate("ReservarDialog", "Promo\303\247\303\243o de feriados espec\303\255ficos", nullptr));
        radioButtonSemDesconto->setText(QCoreApplication::translate("ReservarDialog", "Sem promo\303\247\303\243o", nullptr));
        label_2->setText(QCoreApplication::translate("ReservarDialog", "Data de check-in:", nullptr));
        label_4->setText(QCoreApplication::translate("ReservarDialog", "Tipo de quarto:", nullptr));
        comboBox_2TipoQuarto->setItemText(0, QCoreApplication::translate("ReservarDialog", "Solteiro", nullptr));
        comboBox_2TipoQuarto->setItemText(1, QCoreApplication::translate("ReservarDialog", "Duplo", nullptr));
        comboBox_2TipoQuarto->setItemText(2, QCoreApplication::translate("ReservarDialog", "Triplo", nullptr));
        comboBox_2TipoQuarto->setItemText(3, QCoreApplication::translate("ReservarDialog", "Qu\303\241druplo", nullptr));
        comboBox_2TipoQuarto->setItemText(4, QCoreApplication::translate("ReservarDialog", "Casal", nullptr));

        label->setText(QCoreApplication::translate("ReservarDialog", "Localidade:", nullptr));
        comboBoxLocalidade->setItemText(0, QCoreApplication::translate("ReservarDialog", "Jericoacoara", nullptr));
        comboBoxLocalidade->setItemText(1, QCoreApplication::translate("ReservarDialog", "Canoa Quebrada", nullptr));
        comboBoxLocalidade->setItemText(2, QCoreApplication::translate("ReservarDialog", "Cumbuco", nullptr));

        label_6->setText(QCoreApplication::translate("ReservarDialog", "CPF:", nullptr));
        label_3->setText(QCoreApplication::translate("ReservarDialog", "Numero de diarias:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReservarDialog: public Ui_ReservarDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVARDIALOG_H
