#ifndef TUNOME_H_INCLUDED
#define TUNOME_H_INCLUDED

#include "TU.h"
#include "ResultadoTU.h"
#include "../Dominios/Nome.h" 

class TUNome : public TU {        
    private:
        Nome* instancia;

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

inline std::string TUNome::getNomeUnidade() {
    return "Nome";
};

inline std::string TUNome::getValorDefault() {
    return "Samuel James";
};

inline std::string TUNome::getValorCasoSucesso() {
    return "Lucas Aquino";
};

inline std::string TUNome::getValorCasoFalha() {
    return "sAMUEL";
};

#endif // TUNOME_H_INCLUDED
