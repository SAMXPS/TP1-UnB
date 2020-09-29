#ifndef TUHORARIO_H_INCLUDED
#define TUHORARIO_H_INCLUDED

#include "ResultadoTU.h"
#include "../Dominios/Horario.h" 

class TUHorario {        
    private:
        Horario* instancia;

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

inline string TUHorario::getValorDefault() {
    // TODO: Preencher valor
    return 0;
};

inline string TUHorario::getValorCasoSucesso() {
    // TODO: Preencher valor
    return 0;
};

inline string TUHorario::getValorCasoFalha() {
    // TODO: Preencher valor
    return 0;
};

#endif // TUHORARIO_H_INCLUDED
