#ifndef TUUSUARIO_H_INCLUDED
#define TUUSUARIO_H_INCLUDED

#include "TU.h" 
#include "../Entidades/Usuario.h" 

class TUUsuario: public TU<Usuario>{        
    protected:
        bool testarCriacaoObjeto();
        bool testarCenarioSucesso();
        bool testarCenarioFalha();
};

#endif // TUUSUARIO_H_INCLUDED