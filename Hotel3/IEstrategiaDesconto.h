#ifndef IESTRATEGIADESCONTO_H
#define IESTRATEGIADESCONTO_H

#include <QString>

// Esta é a nossa "Interface". Ela define um contrato.
// Qualquer classe de desconto DEVE implementar os métodos abaixo.
class IEstrategiaDesconto {
public:
    // Um destrutor virtual é essencial ao usar polimorfismo.
    virtual ~IEstrategiaDesconto() = default;

    // O método principal da estratégia. Recebe um valor e retorna o novo valor com desconto.
    // "virtual" e "= 0" tornam este método "puro virtual", ou seja, obrigatório de ser implementado pelas classes filhas.
    virtual double aplicarDesconto(double valorOriginal) const = 0;

    // Um método auxiliar para sabermos o nome do desconto aplicado. Útil para o resumo da reserva.
    virtual QString getNome() const = 0;
};


#endif // IESTRATEGIADESCONTO_H
