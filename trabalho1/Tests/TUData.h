#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Data.h" 

class TUData {        
    private:
        Data* instancia;

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

inline string TUData::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUData::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUData::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // DATA_H_INCLUDED
