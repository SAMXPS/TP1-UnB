#ifndef TUCEP_H_INCLUDED
#define TUCEP_H_INCLUDED

#include "TU.h"                 // Abstração de teste unitário
#include "../Dominios/CEP.h"    // Classe de domínio a ser testada

class TUCEP : public TU<CEP, long> {
    protected:
    
        long getValorCasoFalha() {
            return 71000000;
        };

        long getValorCasoSucesso() {
            return 70999998;
        }

        long getValorDefault() {
            return 20000001;
        }
};

#endif // TUCEP_H_INCLUDED
