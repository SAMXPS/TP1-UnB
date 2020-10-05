#ifndef TUNUMERO_H_INCLUDED
#define TUNUMERO_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Numero.h"

class TUNumero : public TU {
    private:
        Numero* instancia;

        bool configurar();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
        void terminar();

    protected:
        std::string getValorDefault();
        std::string getValorCasoFalha();
        std::string getValorCasoSucesso();

    public:
        ResultadoTU testar();
};

inline std::string TUNumero::getValorDefault() {
    // TODO: Preencher valor
    return "111111-2";
};

inline std::string TUNumero::getValorCasoSucesso() {
    // TODO: Preencher valor
    return "345678-1";
};

inline std::string TUNumero::getValorCasoFalha() {
    // TODO: Preencher valor
    return "456789-5";
};

#endif // TUNUMERO_H_INCLUDED
