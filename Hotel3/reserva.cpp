#include "reserva.h"

// Implementação do construtor
Reserva::Reserva(const QDate &checkIn, const QDate &checkOut, int diarias, const QString &localidade,
                 const QString &tipoQuarto, const QString &nomeCliente, const QString &cpfCliente,
                 const QString &atendente, const QString &descontoAplicado,
                 double valorTotal, const QString &status)
    : m_checkIn(checkIn),
    m_checkOut(checkOut),
    m_diarias(diarias),
    m_localidade(localidade),
    m_tipoQuarto(tipoQuarto),
    m_nomeCliente(nomeCliente),
    m_cpfCliente(cpfCliente),
    m_atendente(atendente),
    m_descontoAplicado(descontoAplicado),
    m_valorTotal(valorTotal),
    m_status(status)
{
    // O valor da entrada é calculado automaticamente ao criar a reserva.
    m_valorEntrada = m_valorTotal / 3.0;
}

// Implementação dos Getters
QDate Reserva::checkIn() const { return m_checkIn; }
int Reserva::diarias() const { return m_diarias; }
QString Reserva::localidade() const { return m_localidade; }
QString Reserva::tipoQuarto() const { return m_tipoQuarto; }
QString Reserva::nomeCliente() const { return m_nomeCliente; }
QString Reserva::cpfCliente() const { return m_cpfCliente; }
QString Reserva::atendente() const { return m_atendente; }
QString Reserva::descontoAplicado() const { return m_descontoAplicado; }
double Reserva::valorTotal() const { return m_valorTotal; }
double Reserva::valorEntrada() const { return m_valorEntrada; }
QString Reserva::status() const { return m_status; }

// Implementação do método que calcula o checkout
QDate Reserva::checkOut() const
{
    return m_checkIn.addDays(m_diarias);
}
