#ifndef TUCEP_H_INCLUDED
#define TUCEP_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/CEP.h" 

class TUCEP {        
    private:
        CEP* instancia;

        bool configurar();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
        void terminar();
        
    protected:
        long getValorDefault();
        long getValorCasoSucesso();
        long getValorCasoFalha();

    public:
        ResultadoTU testar();
};

inline long TUCEP::getValorDefault() {
    // TODO: Preencher valor
    return 20000001;
};

inline long TUCEP::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 70999998;
};

inline long TUCEP::getValorCasoFalha() {
    // TODO: Preencher valor
    return 71000000;
};

#endif // TUCEP_H_INCLUDED