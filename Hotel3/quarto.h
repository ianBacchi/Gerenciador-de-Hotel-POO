#ifndef QUARTO_H
#define QUARTO_H

#include <QString>

class Quarto
{
public:
    Quarto(const QString &tipo, const QString &descricao, double valorDiaria);

    QString tipo() const;
    QString descricao() const;
    double valorDiaria() const;

private:
    QString m_tipo;
    QString m_descricao;
    double m_valorDiaria;
};

#endif // QUARTO_H
