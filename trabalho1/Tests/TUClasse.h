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
        std::string getValorDefault();
        std::string getValorCasoFalha();
        std::string getValorCasoSucesso();

    public:
        ResultadoTU testar();
};

inline std::string TUClasse::getValorDefault() {
    return "CDB";
};

inline std::string TUClasse::getValorCasoSucesso() {
    return "LCA";
};

inline std::string TUClasse::getValorCasoFalha() {
    return "COR";
};

#endif // TUCLASSE_H_INCLUDED
