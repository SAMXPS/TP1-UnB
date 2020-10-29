#ifndef TUAPLICACAO_H_INCLUDED
#define TUAPLICACAO_H_INCLUDED

#include "TU.h" 
#include "../Entidades/Aplicacao.h" 

class TUAplicacao: public TU<Aplicacao>{        
    protected:
        bool testarCriacaoObjeto();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
};

#endif // TUAPLICACAO_H_INCLUDED