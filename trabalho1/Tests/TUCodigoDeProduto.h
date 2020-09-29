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
        std::string getValorDefault();
        std::string getValorCasoFalha();
        std::string getValorCasoSucesso();

    public:
        ResultadoTU testar();
};

inline std::string TUCodigoDeProduto::getValorDefault() {
    return "001";
};

inline std::string TUCodigoDeProduto::getValorCasoSucesso() {
    return "123";
};

inline std::string TUCodigoDeProduto::getValorCasoFalha() {
    return "000";
};

#endif // TUCODIGODEPRODUTO_H_INCLUDED
