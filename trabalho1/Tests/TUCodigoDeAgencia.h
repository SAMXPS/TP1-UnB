#ifndef TUCODIGODEAGENCIA_H_INCLUDED
#define TUCODIGODEAGENCIA_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/CodigoDeAgencia.h"

class TUCodigoDeAgencia : public TU {
    private:
        CodigoDeAgencia* instancia;

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

inline std::string TUCodigoDeAgencia::getValorDefault() {
    return "0001";
};

inline std::string TUCodigoDeAgencia::getValorCasoSucesso() {
    return "1239";
};

inline std::string TUCodigoDeAgencia::getValorCasoFalha() {
    return "0000";
};

#endif // TUCODIGODEAGENCIA_H_INCLUDED
