#include "principaldialog.h"
#include "ui_principaldialog.h"

PrincipalDialog::PrincipalDialog(const QString &atendenteLogado, QWidget *parent):
    QWidget(parent),
    ui(new Ui::PrincipalDialog),
    m_atendenteLogado(atendenteLogado)
{
    ui->setupUi(this);
    setNomeAtendente(m_atendenteLogado);

}

PrincipalDialog::~PrincipalDialog()
{
    delete ui;
}

void PrincipalDialog::on_pushButtonRealizar_clicked()
{
    emit solicitarTelaReserva();
}


void PrincipalDialog::on_pushButtonConsultar_clicked()
{
    emit solicitarTelaConsulta();
}


void PrincipalDialog::on_pushButtonListar_clicked()
{
    emit solicitarTelaLista();
}


void PrincipalDialog::on_pushButtonSair_clicked()
{
    emit solicitarTelaSaida();
}

void PrincipalDialog::setNomeAtendente(const QString &nome)
{

    QString saudacao = QString("Bem-vindo(a), %1").arg(nome);


    ui->labelNome->setText(saudacao);


    ui->labelNome->setStyleSheet("font-weight: bold; color: cyan;");
}

