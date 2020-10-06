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

// Critério de cobertura:
// Formato DD/MM/AAAA onde DD é número de 1 e 31. MM é número de 1 e 12. AAAA é
// número de 2020 a 2099. O valor da data deve considerar a ocorrência de anos que sejam bissextos.

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
