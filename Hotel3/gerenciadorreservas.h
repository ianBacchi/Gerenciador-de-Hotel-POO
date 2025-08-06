#ifndef GERENCIADORADERESERVAS_H
#define GERENCIADORADERESERVAS_H

#include "atendente.h"
#include "quarto.h"
#include "reserva.h"
#include <QVector>
#include <QString>
#include <QDate>

class GerenciadorDeReservas {
public:
    static GerenciadorDeReservas* getInstance();

    GerenciadorDeReservas(const GerenciadorDeReservas&) = delete;
    void operator=(const GerenciadorDeReservas&) = delete;

    // --- Métodos de Lógica ---
    bool autenticarAtendente(const QString &usuario, const QString &senha);

    //  MÉTODOS PARA GERENCIAR AS RESERVAS
    void adicionarReserva(const Reserva &reserva);
    bool verificarDisponibilidade(const QString &localidade, const QString &tipoQuarto, const QDate &checkIn, int numDiarias);
    bool salvarReservasEmArquivo(const QString &caminhoArquivo = "reservas.csv");

    // --- Getters para dados do sistema ---
    const QVector<Quarto>& getTiposDeQuartos() const;
    QStringList getLocalidades() const; //
    const QList<Reserva>& getTodasAsReservas() const;

private:
    GerenciadorDeReservas();

    QVector<Atendente> m_atendentes;
    QVector<Quarto> m_quartos;
    QVector<Reserva> m_reservas;
    void carregarReservasDoArquivo(const QString &caminhoArquivo);
    static GerenciadorDeReservas* m_instance;
};
#endif // GERENCIADORADERESERVAS_H
