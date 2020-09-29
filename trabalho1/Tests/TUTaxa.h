#ifndef TUTAXA_H_INCLUDED
#define TUTAXA_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Taxa.h" 

class TUTaxa {        
    private:
        Taxa* instancia;

        bool configurar();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
        void terminar();
        
    protected:
        float getValorDefault();
        float getValorCasoFalha();
        float getValorCasoSucesso();

    public:
        ResultadoTU testar();
};

// Valor na faixa de 0 a 200 (% ao ano).

inline float TUTaxa::getValorDefault() {
    return 10.0f;
};

inline float TUTaxa::getValorCasoSucesso() {
    return 100.0f;
};

inline float TUTaxa::getValorCasoFalha() {
    return 205.0f;
};

#endif // TUTAXA_H_INCLUDED
