#ifndef TUENDERECO_H_INCLUDED
#define TUENDERECO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Endereco.h"

class TUEndereco {
    private:
        Endereco* instancia;

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

inline string TUEndereco::getValorDefault() {
    return "UnB";
};

inline string TUEndereco::getValorCasoSucesso() {
    return "UnB-certo";
};

inline string TUEndereco::getValorCasoFalha() {
    return "UnB--errado";
};

#endif // TUENDERECO_H_INCLUDED
