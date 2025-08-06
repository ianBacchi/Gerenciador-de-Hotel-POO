#ifndef LISTARDIALOG_H
#define LISTARDIALOG_H

#include <QDialog>

namespace Ui {
class ListarDialog;
}

class ListarDialog : public QWidget
{
    Q_OBJECT

public:
    explicit ListarDialog(QWidget *parent = nullptr);
    ~ListarDialog();

private slots:
    void on_pushButtonVoltar_clicked();

private:
    Ui::ListarDialog *ui;
    void setupTabela();
    void carregarDadosNaTabela();
signals:
    void solicitarVoltarParaPrincipal();
protected:
    void showEvent(QShowEvent *event) override;
};

#endif // LISTARDIALOG_H
