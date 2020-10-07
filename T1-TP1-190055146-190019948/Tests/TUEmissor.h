#ifndef TUEMISSOR_H_INCLUDED
#define TUEMISSOR_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Emissor.h"

class TUEmissor : public TU {
    private:
        Emissor* instancia;

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
        std::string getNomeUnidade();
};

inline std::string TUEmissor::getNomeUnidade() {
    return "Emissor";
};

inline std::string TUEmissor::getValorDefault() {
    return "Padrao";
};

inline std::string TUEmissor::getValorCasoSucesso() {
    return "Aceito.1";
};

inline std::string TUEmissor::getValorCasoFalha() {
    return "negado";
};

#endif // TUEMISSOR_H_INCLUDED
