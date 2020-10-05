#ifndef TUHORARIO_H_INCLUDED
#define TUHORARIO_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Horario.h"

class TUHorario : public TU {
    private:
        Horario* instancia;

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

inline std::string TUHorario::getValorDefault() {
    return "13:00";
};

inline std::string TUHorario::getValorCasoSucesso() {
    return "15:10";
};

inline std::string TUHorario::getValorCasoFalha() {
    return "17:01";
};

#endif // TUHORARIO_H_INCLUDED
