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
    // TODO: Preencher valor
    return 0;
};

inline string TUEndereco::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUEndereco::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // TUENDERECO_H_INCLUDED
