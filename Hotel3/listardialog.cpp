#include "listardialog.h"
#include "ui_listardialog.h"
#include "gerenciadorreservas.h" // Inclua o gerenciador
#include "reserva.h"
#include <QShowEvent>

#include<QWidget>
#include<QList>

void ListarDialog::showEvent(QShowEvent *event)
{
    // Primeiro, chama a implementação da classe base (passo importante)
    QWidget::showEvent(event);

    // Agora, executa a sua função para recarregar os dados da tabela
    // toda vez que esta tela fica visível.
    carregarDadosNaTabela();
    qDebug() << "Tela de lista de reservas exibida, dados atualizados."; // Debug opcional
}

ListarDialog::ListarDialog(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ListarDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Todas as Reservas");

    setupTabela();

    carregarDadosNaTabela();
}

ListarDialog::~ListarDialog()
{
    delete ui;
}

void ListarDialog::on_pushButtonVoltar_clicked()
{
    emit  solicitarVoltarParaPrincipal();
}

void ListarDialog::setupTabela()
{
    // Define o número de colunas que vamos mostrar
    ui->tableWidgetListar->setColumnCount(8); // Por exemplo: Check-in, Cliente, Local, etc.

    // Define os nomes dos cabeçalhos das colunas
    QStringList headers = {"Check-In", "Check-Out", "Cliente", "CPF", "Localidade", "Quarto", "Status", "Valor Total"};
    ui->tableWidgetListar->setHorizontalHeaderLabels(headers);

    // Opcional: faz a tabela ficar com colunas de largura ajustada e não editável
    ui->tableWidgetListar->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidgetListar->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void ListarDialog::carregarDadosNaTabela()
{
    // Pega a instância do gerenciador
    GerenciadorDeReservas* g = GerenciadorDeReservas::getInstance();
    // Pega a lista de todas as reservas que já estão na memória
    const QList<Reserva>& todasAsReservas = g->getTodasAsReservas();

    // Limpa a tabela antes de adicionar os novos dados
    ui->tableWidgetListar->setRowCount(0);

    // Itera sobre cada reserva na lista
    for (const Reserva &reserva : todasAsReservas)
    {
        // Pega o número da linha atual para inserir uma nova linha no final
        int linha = ui->tableWidgetListar->rowCount();
        ui->tableWidgetListar->insertRow(linha);

        // Cria e insere os itens em cada coluna da nova linha
        // Coluna 0: Check-In
        ui->tableWidgetListar->setItem(linha, 0, new QTableWidgetItem(reserva.checkIn().toString("dd/MM/yyyy")));
        // Coluna 1: Check-Out
        ui->tableWidgetListar->setItem(linha, 1, new QTableWidgetItem(reserva.checkOut().toString("dd/MM/yyyy")));
        // Coluna 2: Cliente
        ui->tableWidgetListar->setItem(linha, 2, new QTableWidgetItem(reserva.nomeCliente()));
        // Coluna 3: CPF
        ui->tableWidgetListar->setItem(linha, 3, new QTableWidgetItem(reserva.cpfCliente()));
        // Coluna 4: Localidade
        ui->tableWidgetListar->setItem(linha, 4, new QTableWidgetItem(reserva.localidade()));
        // Coluna 5: Tipo de Quarto
        ui->tableWidgetListar->setItem(linha, 5, new QTableWidgetItem(reserva.tipoQuarto()));
        // Coluna 6: Status
        ui->tableWidgetListar->setItem(linha, 6, new QTableWidgetItem(reserva.status()));
        // Coluna 7: Valor Total
        ui->tableWidgetListar->setItem(linha, 7, new QTableWidgetItem(QString("R$ %1").arg(reserva.valorTotal(), 0, 'f', 2)));
    }
}

