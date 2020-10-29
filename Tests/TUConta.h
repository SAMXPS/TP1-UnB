#ifndef TUCONTA_H_INCLUDED
#define TUCONTA_H_INCLUDED

#include "TU.h" 
#include "../Entidades/Conta.h" 

class TUConta: public TU<Conta>{        
    protected:
        bool testarCriacaoObjeto();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
};

#endif // TUCONTA_H_INCLUDED