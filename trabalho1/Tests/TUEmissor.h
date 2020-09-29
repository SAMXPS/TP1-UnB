#ifndef TUEMISSOR_H_INCLUDED
#define TUEMISSOR_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Emissor.h" 

class TUEmissor {        
    private:
        Emissor* instancia;

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

inline string TUEmissor::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUEmissor::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUEmissor::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // TUEMISSOR_H_INCLUDED
