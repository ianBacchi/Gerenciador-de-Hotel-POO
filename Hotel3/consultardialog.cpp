#include "consultardialog.h"
#include "ui_consultardialog.h"
#include"gerenciadorreservas.h"
#include"quarto.h"
#include<QMessageBox>
#include<QString>
#include<QWidget>

ConsultarDialog::ConsultarDialog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ConsultarDialog)
{
    ui->setupUi(this);
    GerenciadorDeReservas* g = GerenciadorDeReservas::getInstance();
    ui->comboBoxLocalidade->addItems(g->getLocalidades());
    for (const Quarto &quarto : g->getTiposDeQuartos()) {
        ui->comboBox_2TipoQuarto->addItem(quarto.tipo());
    }
}

ConsultarDialog::~ConsultarDialog()
{
    delete ui;
}

void ConsultarDialog::on_pushButtonVoltar_clicked()
{
    emit solicitarVoltarParaPrincipal();
}


void ConsultarDialog::on_pushButtonConsultar_clicked()
{
    QString localidade = ui->comboBoxLocalidade->currentText();
    QString tipoQuarto = ui->comboBox_2TipoQuarto->currentText();
    QDate checkIn = ui->dateEditCheckIn->date(); // Assumindo o nome 'dateEditCheckIn'
    int diarias = ui->spinBoxDiarias->value();   // Assumindo o nome 'spinBoxDiarias'

    // Uma pequena validação para evitar consultas sem sentido
    if (diarias <= 0) {
        QMessageBox::warning(this, "Dados Inválidos", "O número de diárias deve ser maior que zero.");
        return;
    }

    // 2. Usar o Gerenciador para verificar a disponibilidade
    GerenciadorDeReservas* g = GerenciadorDeReservas::getInstance();
    bool disponivel = g->verificarDisponibilidade(localidade, tipoQuarto, checkIn, diarias);

    // 3. Mostrar o resultado ao usuário
    if (disponivel) {
        QString mensagem = QString("Ótima notícia!\n\nO quarto '%1' está disponível em %2 para as datas solicitadas.")
                               .arg(tipoQuarto)
                               .arg(localidade);
        QMessageBox::information(this, "Quarto Disponível!", mensagem);
    } else {
        QString mensagem = QString("Que pena!\n\nO quarto '%1' em %2 já está reservado para o período solicitado.")
                               .arg(tipoQuarto)
                               .arg(localidade);
        QMessageBox::warning(this, "Quarto Indisponível", mensagem);
    }
}

