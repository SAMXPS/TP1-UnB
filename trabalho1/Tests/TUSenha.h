#ifndef TUSENHA_H_INCLUDED
#define TUSENHA_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Senha.h"

class TUSenha : public TU {
    private:
        Senha* instancia;

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

inline std::string TUSenha::getNomeUnidade() {
    return "Senha";
}

inline std::string TUSenha::getValorDefault() {
    // TODO: Preencher valor
    return "123456";
};

inline std::string TUSenha::getValorCasoSucesso() {
    // TODO: Preencher valor
    return "654789";
};

inline std::string TUSenha::getValorCasoFalha() {
    // TODO: Preencher valor
    return "189107";
};

#endif // TUSENHA_H_INCLUDED
