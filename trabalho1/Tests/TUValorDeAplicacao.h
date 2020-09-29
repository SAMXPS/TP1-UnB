#ifndef VALORDEAPLICACAO_H_INCLUDED
#define VALORDEAPLICACAO_H_INCLUDED

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
        string getValorDefault();
        string getValorCasoFalha();
        string getValorCasoSucesso();

    public:
        ResultadoTU testar();
};

inline string TUValorDeAplicacao::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUValorDeAplicacao::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUValorDeAplicacao::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // VALORDEAPLICACAO_H_INCLUDED
