#ifndef SENHA_H_INCLUDED
#define SENHA_H_INCLUDED

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
    return 0;
};

inline string TUSenha::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUSenha::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // SENHA_H_INCLUDED
