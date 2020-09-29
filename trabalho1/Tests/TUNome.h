#ifndef NOME_H_INCLUDED
#define NOME_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Nome.h" 

class TUNome {        
    private:
        Nome* instancia;

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

inline string TUNome::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUNome::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUNome::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // NOME_H_INCLUDED
