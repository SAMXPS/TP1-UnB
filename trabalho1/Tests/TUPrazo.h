#ifndef PRAZO_H_INCLUDED
#define PRAZO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Prazo.h" 

class TUPrazo {        
    private:
        Prazo* instancia;

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

inline string TUPrazo::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUPrazo::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUPrazo::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // PRAZO_H_INCLUDED
