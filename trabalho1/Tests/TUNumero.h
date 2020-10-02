#ifndef TUNUMERO_H_INCLUDED
#define TUNUMERO_H_INCLUDED

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
    return "111111-2";
};

inline string TUNumero::getValorCasoSucesso() {
    // TODO: Preencher valor
    return "345678-1";
};

inline string TUNumero::getValorCasoFalha() {
    // TODO: Preencher valor
    return "456789-5";
};

#endif // TUNUMERO_H_INCLUDED
