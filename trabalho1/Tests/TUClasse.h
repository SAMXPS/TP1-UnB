#ifndef TUCLASSE_H_INCLUDED
#define TUCLASSE_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Classe.h"

class TUClasse : public TU {
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
        std::string getNomeUnidade();
};

inline std::string TUClasse::getNomeUnidade() {
    return "Classe";
}

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
