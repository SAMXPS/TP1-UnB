#ifndef TUCODIGODEAPLICACAO_H_INCLUDED
#define TUCODIGODEAPLICACAO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/CodigoDeAplicacao.h"

class TUCodigoDeAplicacao {
    private:
        CodigoDeAplicacao* instancia;

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

inline string TUCodigoDeAplicacao::getValorDefault() {
    return "99999";
};

inline string TUCodigoDeAplicacao::getValorCasoSucesso() {
    return "12345";
};

inline string TUCodigoDeAplicacao::getValorCasoFalha() {
    return "00000";
};

#endif // TUCODIGODEAPLICACAO_H_INCLUDED
