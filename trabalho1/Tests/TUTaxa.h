#ifndef TUTAXA_H_INCLUDED
#define TUTAXA_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Taxa.h" 

class TUTaxa : public TU {        
    private:
        Taxa* instancia;

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

// Valor na faixa de 0 a 200 (% ao ano).

inline double TUTaxa::getValorDefault() {
    return 10.0f;
};

inline double TUTaxa::getValorCasoSucesso() {
    return 100.0f;
};

inline double TUTaxa::getValorCasoFalha() {
    return 205.0f;
};

#endif // TUTAXA_H_INCLUDED
