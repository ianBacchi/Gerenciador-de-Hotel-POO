#include <QStackedWidget>
#include <QMainWindow>
#include<QMessageBox>

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include"listardialog.h"
#include"consultardialog.h"
#include"reservardialog.h"
#include"principaldialog.h"
#include "gerenciadorreservas.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Instancia telas


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonConfirmar_clicked()
{
    QString usuario = ui->lineEditUsuario->text();
    QString senha = ui->lineEdit_2Senha->text();

    GerenciadorDeReservas* gerenciador = GerenciadorDeReservas::getInstance();

    if (gerenciador->autenticarAtendente(usuario, senha))
    {
        QMessageBox::information(this, "Login", "Login realizado com sucesso!");


        if (principalDialog == nullptr)
        {

            principalDialog = new PrincipalDialog(usuario, this);
            reservarDialog = new ReservarDialog(usuario, this);
            consultarDialog = new ConsultarDialog(this);
            listarDialog = new ListarDialog(this);

            // 2. ADICIONAR AS TELAS AO STACKED WIDGET
            ui->stackedWidget->addWidget(principalDialog);
            ui->stackedWidget->addWidget(reservarDialog);
            ui->stackedWidget->addWidget(consultarDialog);
            ui->stackedWidget->addWidget(listarDialog);

            // 3. CONECTAR OS SINAIS E SLOTS
            connect(principalDialog, &PrincipalDialog::solicitarTelaReserva, this, [=]() {
                ui->stackedWidget->setCurrentWidget(reservarDialog);
            });
            connect(principalDialog, &PrincipalDialog::solicitarTelaConsulta, this, [=]() {
                ui->stackedWidget->setCurrentWidget(consultarDialog);
            });
            connect(principalDialog, &PrincipalDialog::solicitarTelaLista, this, [=]() {
                ui->stackedWidget->setCurrentWidget(listarDialog);
            });

            connect(consultarDialog, &ConsultarDialog::solicitarVoltarParaPrincipal, this, [=]() {
                ui->stackedWidget->setCurrentWidget(principalDialog);
            });
            connect(reservarDialog, &ReservarDialog::solicitarVoltarParaPrincipal, this, [=]() {
                ui->stackedWidget->setCurrentWidget(principalDialog);
            });
            connect(listarDialog, &ListarDialog::solicitarVoltarParaPrincipal, this, [=]() {
                ui->stackedWidget->setCurrentWidget(principalDialog);
            });
            connect(principalDialog, &PrincipalDialog::solicitarTelaSaida, this, &QMainWindow::close);
        }

        // 4. NAVEGAR PARA A TELA PRINCIPAL
        ui->stackedWidget->setCurrentWidget(principalDialog);
    }else{
        QMessageBox::warning(this,"Entrar", "Usuario ou Senha Incorretos");
    }
}

