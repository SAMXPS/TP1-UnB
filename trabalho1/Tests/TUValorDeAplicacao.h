#ifndef TUVALORDEAPLICACAO_H_INCLUDED
#define TUVALORDEAPLICACAO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/ValorDeAplicacao.h" 

class TUValorDeAplicacao {        
    private:
        ValorDeAplicacao* instancia;

        bool configurar();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
        void terminar();
        
    protected:
        double getValorDefault();
        double getValorCasoFalha();
        double getValorCasoSucesso();

    public:
        ResultadoTU testar();
};

// Valor na faixa de 0 a 1000000.00 (reais).

inline double TUValorDeAplicacao::getValorDefault() {
    return 100.00;
};

inline double TUValorDeAplicacao::getValorCasoSucesso() {
    return 2020.57;
};

inline double TUValorDeAplicacao::getValorCasoFalha() {
    return 1000001.00;
};

#endif // TUVALORDEAPLICACAO_H_INCLUDED
