#ifndef TUCPF_H_INCLUDED
#define TUCPF_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/CPF.h"

class TUCPF {
    private:
        CPF* instancia;

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

inline string TUCPF::getValorDefault() {

    return "111.444.777-35";
};

inline string TUCPF::getValorCasoSucesso() {

    return "246.894.452-65";
};

inline string TUCPF::getValorCasoFalha() {

    return "246.894.452-35";
};

#endif // TUCPF_H_INCLUDED
