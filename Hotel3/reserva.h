#ifndef RESERVA_H
#define RESERVA_H

#include <QString>
#include <QDate>

class Reserva
{
public:
    // Um construtor bem completo para criar uma reserva com todos os dados de uma vez.
    Reserva(const QDate &checkIn, const QDate &checkOut, int diarias, const QString &localidade,
            const QString &tipoQuarto, const QString &nomeCliente, const QString &cpfCliente,
            const QString &atendente, const QString &descontoAplicado,
            double valorTotal, const QString &status);

    // Getters para acessar cada um dos dados da reserva.
    QDate checkIn() const;
    int diarias() const;
    QString localidade() const;
    QString tipoQuarto() const;
    QString nomeCliente() const;
    QString cpfCliente() const;
    QString atendente() const;
    QString descontoAplicado() const;
    double valorTotal() const;
    double valorEntrada() const; // O valor da entrada será calculado
    QString status() const;
    QDate checkOut() const;


private:
    QDate m_checkIn;
    QDate m_checkOut;
    int m_diarias;
    QString m_localidade;
    QString m_tipoQuarto;
    QString m_nomeCliente;
    QString m_cpfCliente;
    QString m_atendente;
    QString m_descontoAplicado;
    double m_valorTotal;
    double m_valorEntrada; // 1/3 do total
    QString m_status;
};

#endif // RESERVA_H
