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
    return "Padrao";
};

inline string TUEmissor::getValorCasoSucesso() {
    return "Aceito.1";
};

inline string TUEmissor::getValorCasoFalha() {
    return "negado";
};

#endif // TUEMISSOR_H_INCLUDED
