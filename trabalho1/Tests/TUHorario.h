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
    return "13:00";
};

inline string TUHorario::getValorCasoSucesso() {
    return "15:10";
};

inline string TUHorario::getValorCasoFalha() {
    return "17:01";
};

#endif // TUHORARIO_H_INCLUDED
