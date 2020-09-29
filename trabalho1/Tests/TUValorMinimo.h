#ifndef VALORMINIMO_H_INCLUDED
#define VALORMINIMO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/ValorMinimo.h" 

class TUValorMinimo {        
    private:
        ValorMinimo* instancia;

        bool configurar();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
        void terminar();
        
    protected:
        string getValorDefault();
        string getValorCasoFalha();
        string getValorCasoSucesso();

    public:
        ResultadoTU testar();
};

inline string TUValorMinimo::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUValorMinimo::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUValorMinimo::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // VALORMINIMO_H_INCLUDED
