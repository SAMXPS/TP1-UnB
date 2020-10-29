#ifndef TUPRODUTO_H_INCLUDED
#define TUPRODUTO_H_INCLUDED

#include "TU.h" 
#include "../Entidades/Produto.h" 

class TUProduto: public TU<Produto>{        
    protected:
        bool testarCriacaoObjeto();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
};

#endif // TUPRODUTO_H_INCLUDED