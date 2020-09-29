#ifndef TUCODIGODEAGENCIA_H_INCLUDED
#define TUCODIGODEAGENCIA_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/CodigoDeAgencia.h" 

class TUCodigoDeAgencia {        
    private:
        CodigoDeAgencia* instancia;

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

inline string TUCodigoDeAgencia::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUCodigoDeAgencia::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUCodigoDeAgencia::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // TUCODIGODEAGENCIA_H_INCLUDED
