#ifndef TUENDERECO_H_INCLUDED
#define TUENDERECO_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Endereco.h"

class TUEndereco : public TU {
    private:
        Endereco* instancia;

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

inline std::string TUEndereco::getNomeUnidade() {
    return "Endereco";
};

inline std::string TUEndereco::getValorDefault() {
    return "UnB";
};

inline std::string TUEndereco::getValorCasoSucesso() {
    return "UnB-certo";
};

inline std::string TUEndereco::getValorCasoFalha() {
    return "UnB--errado";
};

#endif // TUENDERECO_H_INCLUDED
