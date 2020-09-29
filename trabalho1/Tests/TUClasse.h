#ifndef TUCLASSE_H_INCLUDED
#define TUCLASSE_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Classe.h" 

class TUClasse {        
    private:
        Classe* instancia;

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

inline string TUClasse::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUClasse::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUClasse::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // TUCLASSE_H_INCLUDED
