#ifndef PRINCIPALDIALOG_H
#define PRINCIPALDIALOG_H

#include <QWidget>
#include <QString> // Importante ter o include para QString

namespace Ui {
class PrincipalDialog;
}

class PrincipalDialog : public QWidget
{
    Q_OBJECT

public:
    // ESTA É A LINHA MAIS IMPORTANTE A SER CORRIGIDA:
    // O construtor é declarado para receber a QString do atendente.
    explicit PrincipalDialog(const QString &atendenteLogado, QWidget *parent = nullptr);

    ~PrincipalDialog();
    void setNomeAtendente(const QString &nome);

signals:
    // Seus sinais para navegação (estão corretos)
    void solicitarTelaReserva();
    void solicitarTelaConsulta();
    void solicitarTelaLista();
    void solicitarTelaSaida();

private slots:
    // Seus slots para os botões (estão corretos)
    void on_pushButtonRealizar_clicked();
    void on_pushButtonConsultar_clicked();
    void on_pushButtonListar_clicked();

    void on_pushButtonSair_clicked();

private:
    Ui::PrincipalDialog *ui;

    // E ESTA É A SEGUNDA LINHA IMPORTANTE:
    // A variável para guardar o nome do atendente.
    QString m_atendenteLogado;
};

#endif // PRINCIPALDIALOG_H
