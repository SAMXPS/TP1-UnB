#ifndef RESULTADOTU_H_INCLUDED
#define RESULTADOTU_H_INCLUDED
#include <iostream>
#include <string>

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

        std::string falhouPassou(bool b) {
            return b ? "PASSOU" : "FALHOU";
        }

        const void mostrar() {
            std::cout << "Criacao de Unidade:\t" << falhouPassou(criacaoDeObjeto) << std::endl;
            std::cout << "Cenario de Sucesso:\t" << falhouPassou(cenarioSucesso)  << std::endl;
            std::cout << "Cenario de Falha:  \t" << falhouPassou(cenarioFalha)    << std::endl;
        };
};

#endif // RESULTADOTU_H_INCLUDED
