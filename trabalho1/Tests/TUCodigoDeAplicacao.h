#ifndef TUCODIGODEAPLICACAO_H_INCLUDED
#define TUCODIGODEAPLICACAO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/CodigoDeAplicacao.h" 

class TUCodigoDeAplicacao {        
    private:
        CodigoDeAplicacao* instancia;

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

inline string TUCodigoDeAplicacao::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUCodigoDeAplicacao::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUCodigoDeAplicacao::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // TUCODIGODEAPLICACAO_H_INCLUDED
