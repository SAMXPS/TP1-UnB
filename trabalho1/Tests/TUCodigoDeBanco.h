#ifndef TUCODIGODEBANCO_H_INCLUDED
#define TUCODIGODEBANCO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/CodigoDeBanco.h" 

class TUCodigoDeBanco {        
    private:
        CodigoDeBanco* instancia;

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

inline string TUCodigoDeBanco::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUCodigoDeBanco::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUCodigoDeBanco::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // TUCODIGODEBANCO_H_INCLUDED
