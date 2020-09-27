#ifndef RESULTADOTU_H_INCLUDED
#define RESULTADOTU_H_INCLUDED
#include <iostream>

/**
 * Classe que representa um Resultado de Teste Unitário.
 * <br>
 * Um ResultadoTU consiste basicamente em três boleanos:
 * - Um referente ao processo de criação de objeto.
 * - Um referente ao teste de cenário de sucesso.
 * - Um referente ao teste de cenário de falha.
 * <br>
 * Para o boleano true, associa-se o sentido de PASSAR no teste. <br>
 * Para o boleano false, associa-se o sentido de FALHAR no teste.
 */
class ResultadoTU {
    public:
        const static bool FALHOU = false;
        const static bool PASSOU = true;

        bool criacaoDeObjeto = FALHOU;
        bool cenarioSucesso  = FALHOU;
        bool cenarioFalha    = FALHOU;

        void mostrar() {
            std::cout << "CRIACAO: " << criacaoDeObjeto << std::endl;
            std::cout << "SUCESSO: " << criacaoDeObjeto << std::endl;
            std::cout << "FALHA: " << criacaoDeObjeto << std::endl;
        };
};

#endif // RESULTADOTU_H_INCLUDED
