#ifndef TUCODIGODEAPLICACAO_H_INCLUDED
#define TUCODIGODEAPLICACAO_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/CodigoDeAplicacao.h"

class TUCodigoDeAplicacao : public TU {
    private:
        CodigoDeAplicacao* instancia;

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

inline std::string TUCodigoDeAplicacao::getValorDefault() {
    return "99999";
};

inline std::string TUCodigoDeAplicacao::getValorCasoSucesso() {
    return "12345";
};

inline std::string TUCodigoDeAplicacao::getValorCasoFalha() {
    return "00000";
};

#endif // TUCODIGODEAPLICACAO_H_INCLUDED
