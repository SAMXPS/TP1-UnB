#ifndef TUCODIGODEBANCO_H_INCLUDED
#define TUCODIGODEBANCO_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/CodigoDeBanco.h"

class TUCodigoDeBanco : public TU {
    private:
        CodigoDeBanco* instancia;

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

inline std::string TUCodigoDeBanco::getValorDefault() {
    // TODO: Preencher valor
    return "001";
};

inline std::string TUCodigoDeBanco::getValorCasoSucesso() {
    // TODO: Preencher valor
    return "341";
};

inline std::string TUCodigoDeBanco::getValorCasoFalha() {
    // TODO: Preencher valor
    return "555";
};

#endif // TUCODIGODEBANCO_H_INCLUDED
