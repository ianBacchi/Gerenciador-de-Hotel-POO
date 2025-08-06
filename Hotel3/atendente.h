#ifndef ATENDENTE_H
#define ATENDENTE_H

#include<QString>

class Atendente
{
public:
    Atendente(const QString &usuario, const QString &senha);

    // Métodos "getters": formas públicas e seguras de LER os dados privados.
    QString usuario() const;
    QString senha() const;

private:
    // Membros privados: os dados em si. Só a própria classe pode mexer neles diretamente.
    // Isso é encapsulamento!
    QString m_usuario;
    QString m_senha;
};

#endif // ATENDENTE_H
