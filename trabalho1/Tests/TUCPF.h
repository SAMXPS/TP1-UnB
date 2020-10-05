#ifndef TUCPF_H_INCLUDED
#define TUCPF_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/CPF.h"

class TUCPF : public TU {
    private:
        CPF* instancia;

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

inline std::string TUCPF::getValorDefault() {

    return "111.444.777-35";
};

inline std::string TUCPF::getValorCasoSucesso() {

    return "246.894.452-65";
};

inline std::string TUCPF::getValorCasoFalha() {

    return "246.894.452-35";
};

#endif // TUCPF_H_INCLUDED
