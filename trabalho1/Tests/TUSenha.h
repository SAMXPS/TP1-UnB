#ifndef TUSENHA_H_INCLUDED
#define TUSENHA_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Senha.h"

class TUSenha {
    private:
        Senha* instancia;

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

inline string TUSenha::getValorDefault() {
    // TODO: Preencher valor
    return "123456";
};

inline string TUSenha::getValorCasoSucesso() {
    // TODO: Preencher valor
    return "654789";
};

inline string TUSenha::getValorCasoFalha() {
    // TODO: Preencher valor
    return "189107";
};

#endif // TUSENHA_H_INCLUDED
