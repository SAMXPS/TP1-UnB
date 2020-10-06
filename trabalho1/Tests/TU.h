#ifndef TU_H_INCLUDED
#define TU_H_INCLUDED
#include "ResultadoTU.h"
#include <string>
#include <iostream>

// Classe abstrata de Teste Unitário.
class TU {
    public:
        virtual ResultadoTU testar() = 0;           // Métodos virtuais puros.
        virtual std::string getNomeUnidade() = 0; 

        void mostrarResultado(ResultadoTU resultado)  {
            std::cout << "[TU] [" << getNomeUnidade() << "]" << std::endl << std::endl;
            resultado.mostrar();
            std::cout << "--------------------------" << std::endl;
        };
};

#endif // TU_H_INCLUDED