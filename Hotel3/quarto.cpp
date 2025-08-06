#include "quarto.h"

#include <QString>



Quarto::Quarto(const QString &tipo, const QString &descricao, double valorDiaria) :
    m_tipo(tipo),
    m_descricao(descricao),
    m_valorDiaria(valorDiaria)
{
}

// Implementação dos getters.
QString Quarto::tipo() const
{
    return m_tipo;
}

QString Quarto::descricao() const
{
    return m_descricao;
}

double Quarto::valorDiaria() const
{
    return m_valorDiaria;
}
