#ifndef RESERVARDIALOG_H
#define RESERVARDIALOG_H

#include <QWidget>
namespace Ui {
class ReservarDialog;
}

class ReservarDialog : public QWidget
{
    Q_OBJECT

public:
    explicit ReservarDialog(const QString &atendenteLogado, QWidget *parent = nullptr);
    ~ReservarDialog();

private slots:
    void on_pushButtonReservar_clicked();
    void on_pushButtonVoltar_clicked();

private:
    Ui::ReservarDialog *ui;
    QString m_atendenteLogado;
signals:
    void solicitarVoltarParaPrincipal();
};

#endif // RESERVARDIALOG_H
