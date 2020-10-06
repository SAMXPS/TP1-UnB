#ifndef TUVALORMINIMO_H_INCLUDED
#define TUVALORMINIMO_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/ValorMinimo.h"

class TUValorMinimo : public TU {
    private:
        ValorMinimo* instancia;

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
        std::string getNomeUnidade();
};

inline std::string TUValorMinimo::getNomeUnidade() {
    return "ValorMinimo";
}

inline double TUValorMinimo::getValorDefault() {
    return 1000.0f;
};

inline double TUValorMinimo::getValorCasoSucesso() {
    return 5000.0f;
};

inline double TUValorMinimo::getValorCasoFalha() {
    return 2000.0f;
};

#endif // TUVALORMINIMO_H_INCLUDED
