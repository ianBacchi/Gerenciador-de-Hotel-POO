#ifndef CONSULTARDIALOG_H
#define CONSULTARDIALOG_H

#include <QDialog>

namespace Ui {
class ConsultarDialog;
}

class ConsultarDialog : public QWidget
{
    Q_OBJECT

public:
    explicit ConsultarDialog(QWidget *parent = nullptr);
    ~ConsultarDialog();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonConsultar_clicked();

private:
    Ui::ConsultarDialog *ui;
signals:
    void solicitarVoltarParaPrincipal();
};

#endif // CONSULTARDIALOG_H
