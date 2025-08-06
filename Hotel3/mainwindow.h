#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"principaldialog.h"
#include"listardialog.h"
#include"consultardialog.h"
#include"reservardialog.h"

#include<QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonConfirmar_clicked();

private:
    Ui::MainWindow *ui;

    PrincipalDialog* principalDialog = nullptr;
    ReservarDialog* reservarDialog = nullptr;
    ConsultarDialog* consultarDialog = nullptr;
    ListarDialog* listarDialog = nullptr;

};
#endif // MAINWINDOW_H
