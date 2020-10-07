#ifndef TUDATA_H_INCLUDED
#define TUDATA_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Data.h" 

class TUData : public TU {        
    private:
        Data* instancia;

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

inline std::string TUData::getNomeUnidade() {
    return "Data";
};

inline std::string TUData::getValorDefault() {
    return "29/09/2020";
};

inline std::string TUData::getValorCasoSucesso() {
    return "11/02/2020";
};

inline std::string TUData::getValorCasoFalha() {
    return "11/02/2019";
};

#endif // TUDATA_H_INCLUDED
