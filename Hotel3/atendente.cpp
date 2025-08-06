#include "atendente.h"
#include<QString>

Atendente::Atendente(const QString &usuario, const QString &senha) :
    m_usuario(usuario),
    m_senha(senha)
{
    // O corpo do construtor pode ficar vazio por enquanto.
}

// Implementação dos getters. Eles simplesmente retornam o valor da variável privada.
QString Atendente::usuario() const
{
    return m_usuario;
}

QString Atendente::senha() const
{
    return m_senha;
}
