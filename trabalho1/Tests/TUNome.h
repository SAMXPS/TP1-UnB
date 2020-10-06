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

// Texto composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou
// espaço, há pelo menos 5 letras, não há espaços em sequência, primeira letra de cada termo é
// letra maiúscula.

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
