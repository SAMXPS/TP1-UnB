#ifndef TAXA_H_INCLUDED
#define TAXA_H_INCLUDED

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
        string getValorDefault();
        string getValorCasoFalha();
        string getValorCasoSucesso();

    public:
        ResultadoTU testar();
};

inline string TUTaxa::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUTaxa::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUTaxa::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // TAXA_H_INCLUDED
