#ifndef TUPRAZO_H_INCLUDED
#define TUPRAZO_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Prazo.h" 

class TUPrazo : public TU {        
    private:
        Prazo* instancia;

        bool configurar();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
        void terminar();
        
    protected:
        int getValorDefault();
        int getValorCasoFalha();
        int getValorCasoSucesso();

    public:
        ResultadoTU testar();
        std::string getNomeUnidade();
};

inline std::string TUPrazo::getNomeUnidade() {
    return "Prazo";
}

inline int TUPrazo::getValorDefault() {
    return 6;
};

inline int TUPrazo::getValorCasoSucesso() {
    return 12;
};

inline int TUPrazo::getValorCasoFalha() {
    return 13;
};

#endif // TUPRAZO_H_INCLUDED
