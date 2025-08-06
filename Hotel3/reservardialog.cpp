#include "reservardialog.h"
#include "ui_reservardialog.h"


#include "gerenciadorreservas.h"
#include "estrategiaconcreta.h"
#include <QMessageBox>
#include <memory>
#include<QWidget>
#include<QDate>
// Implementação do CONSTRUTOR
ReservarDialog::ReservarDialog(const QString &atendenteLogado, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReservarDialog),
    m_atendenteLogado(atendenteLogado)
{
    ui->setupUi(this);
    this->setWindowTitle("Realizar Nova Reserva");

    GerenciadorDeReservas* g = GerenciadorDeReservas::getInstance();
    ui->comboBoxLocalidade->addItems(g->getLocalidades());
    for (const Quarto &quarto : g->getTiposDeQuartos()) {
        ui->comboBox_2TipoQuarto->addItem(quarto.tipo());
    }
}

void ReservarDialog::on_pushButtonVoltar_clicked()
{
    emit solicitarVoltarParaPrincipal();
}

// Implementação do DESTRUTOR
ReservarDialog::~ReservarDialog()
{
    delete ui;
}

// Implementação da função do BOTÃO
void ReservarDialog::on_pushButtonReservar_clicked()
{
    // Coleta de dados da UI
    QString localidade = ui->comboBoxLocalidade->currentText();
    QString tipoQuarto = ui->comboBox_2TipoQuarto->currentText();
    QDate checkIn = ui->dateEditCheckIn->date();
    int diarias = ui->spinBoxDiarias->value();
    QString nomeCliente = ui->lineEditNomeCliente->text();
    QString cpfCliente = ui->lineEditCpfCliente->text(); // Lembre-se de ajustar este nome

    if (nomeCliente.isEmpty() || cpfCliente.isEmpty() ) {
        QMessageBox::warning(this, "Campos Inválidos", "Por favor, preencha o nome do cliente, CPF");
        return;
    }

    // Lógica do Padrão Strategy
    std::unique_ptr<IEstrategiaDesconto> estrategia;
    // Lembre-se de ajustar os nomes dos RadioButtons
    if (ui->radioButtonVip->isChecked()) {
        estrategia = std::make_unique<DescontoVIP>();
    } else if (ui->radioButtonBaixaTemporada->isChecked()) {
        estrategia = std::make_unique<DescontoBaixaTemporada>();
    } else if (ui->radioButtonPromocao->isChecked()) {
        estrategia = std::make_unique<DescontoFeriados>();
    } else {
        estrategia = std::make_unique<DescontoSemDesconto>();
    }

    // Lógica de verificação e cálculo
    GerenciadorDeReservas* g = GerenciadorDeReservas::getInstance();
    if (!g->verificarDisponibilidade(localidade, tipoQuarto, checkIn, diarias)) {
        QMessageBox::critical(this, "Indisponível", "O quarto selecionado não está disponível para o período informado.");
        return;
    }

    double precoDiaria = 0;
    for (const Quarto &quarto : g->getTiposDeQuartos()) {
        if (quarto.tipo() == tipoQuarto) {
            precoDiaria = quarto.valorDiaria();
            break;
        }
    }
    double valorOriginal = precoDiaria * diarias;
    double valorFinal = estrategia->aplicarDesconto(valorOriginal);

    QDate checkOut = checkIn.addDays(diarias);

    // Criação do objeto Reserva e salvamento
    Reserva novaReserva(checkIn, checkOut ,diarias, localidade, tipoQuarto, nomeCliente, cpfCliente,
                        m_atendenteLogado, estrategia->getNome(), valorFinal, "Pendente");

    g->adicionarReserva(novaReserva);
    if (g->salvarReservasEmArquivo()) {
        // Exibição do resumo
        QString resumo = QString("Resumo da Reserva (Pendente)\n\n"
                                 "Atendente: %1\n"
                                 "------------------------------------\n"
                                 "Cliente: %2\n"
                                 "CPF: %3\n"
                                 "Localidade: %4\n"
                                 "Tipo de Quarto: %5\n"
                                 "Check-in: %6\n"
                                 "Check-out: %7\n"
                                 "Total de Diárias: %8\n"
                                 "------------------------------------\n"
                                 "Política de Desconto: %9\n"
                                 "Valor Total: R$ %10\n"
                                 "Valor da Entrada (1/3): R$ %11\n\n"
                                 "Status Atual: %12")
                             // Abaixo, os argumentos na ordem correta para preencher os espaços %1, %2, etc.
                             .arg(novaReserva.atendente())                               // %1
                             .arg(novaReserva.nomeCliente())                           // %2
                             .arg(novaReserva.cpfCliente())                            // %3
                             .arg(novaReserva.localidade())                            // %4
                             .arg(novaReserva.tipoQuarto())                            // %5
                             .arg(novaReserva.checkIn().toString("dd/MM/yyyy"))        // %6
                             .arg(novaReserva.checkOut().toString("dd/MM/yyyy"))       // %7
                             .arg(QString::number(novaReserva.diarias()))              // %8
                             .arg(novaReserva.descontoAplicado())                      // %9
                             .arg(QString::number(novaReserva.valorTotal(), 'f', 2))   // %10 (formato com 2 casas decimais)
                             .arg(QString::number(novaReserva.valorEntrada(), 'f', 2)) // %11 (formato com 2 casas decimais)
                             .arg(novaReserva.status());                               // %12

        QMessageBox::information(this, "Reserva Realizada com Sucesso", resumo);

    } else {
        QMessageBox::critical(this, "Erro", "Não foi possível salvar a reserva no arquivo.");
    }
}
