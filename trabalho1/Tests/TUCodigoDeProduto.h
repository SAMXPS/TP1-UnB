#ifndef TUCODIGODEPRODUTO_H_INCLUDED
#define TUCODIGODEPRODUTO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/CodigoDeProduto.h" 

class TUCodigoDeProduto {        
    private:
        CodigoDeProduto* instancia;

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

inline string TUCodigoDeProduto::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUCodigoDeProduto::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUCodigoDeProduto::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // TUCODIGODEPRODUTO_H_INCLUDED
