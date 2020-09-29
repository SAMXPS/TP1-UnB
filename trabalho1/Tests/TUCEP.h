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
    return 20000001L;
};

inline long TUCEP::getValorCasoSucesso() {
    return 70999998L;
};

inline long TUCEP::getValorCasoFalha() {
    return 71000000L;
};

#endif // TUCEP_H_INCLUDED