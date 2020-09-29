#ifndef NUMERO_H_INCLUDED
#define NUMERO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Numero.h" 

class TUNumero {        
    private:
        Numero* instancia;

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

inline string TUNumero::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUNumero::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUNumero::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // NUMERO_H_INCLUDED
