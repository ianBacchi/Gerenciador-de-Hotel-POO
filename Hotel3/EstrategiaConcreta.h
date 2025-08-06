#ifndef ESTRATEGIACONCRETA_H
#define ESTRATEGIACONCRETA_H

#include "iestrategiadesconto.h" // Inclui a interface que todos vão usar

// --- Estratégia 1: Sem Desconto ---
class DescontoSemDesconto : public IEstrategiaDesconto {
public:
    double aplicarDesconto(double valorOriginal) const override {
        return valorOriginal;
    }
    QString getNome() const override {
        return "Sem desconto";
    }
};

// --- Estratégia 2: Cliente VIP ---
class DescontoVIP : public IEstrategiaDesconto {
public:
    double aplicarDesconto(double valorOriginal) const override {
        return valorOriginal * 0.90; // 10%
    }
    QString getNome() const override {
        return "Clientes VIP (10%)";
    }
};

// --- Estratégia 3: Baixa Temporada ---
class DescontoBaixaTemporada : public IEstrategiaDesconto {
public:
    double aplicarDesconto(double valorOriginal) const override {
        return valorOriginal * 0.80; // 20%
    }
    QString getNome() const override {
        return "Baixa temporada (20%)";
    }
};

// --- Estratégia 4: Feriados ---
class DescontoFeriados : public IEstrategiaDesconto {
public:
    double aplicarDesconto(double valorOriginal) const override {
        return valorOriginal * 0.85; // 15%
    }
    QString getNome() const override {
        return "Promoção de feriados específicos (15%)";
    }
};


#endif // ESTRATEGIACONCRETA_H
