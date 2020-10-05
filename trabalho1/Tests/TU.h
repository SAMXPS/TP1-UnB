#ifndef TU_H_INCLUDED
#define TU_H_INCLUDED
#include "ResultadoTU.h"

// Classe abstrata de Teste Unitário.
class TU {
    public:
        virtual ResultadoTU testar() = 0;   // Método virtual puro.
};

#endif // TU_H_INCLUDED