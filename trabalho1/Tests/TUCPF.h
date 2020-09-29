#ifndef CPF_H_INCLUDED
#define CPF_H_INCLUDED

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
    // TODO: Preencher valor
    return 0;
};

inline string TUCPF::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUCPF::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // CPF_H_INCLUDED
