#ifndef TU_H_INCLUDED
#define TU_H_INCLUDED

#include "ResultadoTU.h"

/**
 * Classe abstrata criada com intuito de facilitar a criação de testes unitários de domínios.
 */
template<class Dominio, class ValorDominio>
class TU {
    private:
        Dominio* instancia;

        /**
         * Este método configura o ambiente de testes.
         */
        bool configurar();

        /**
         * Este método finaliza o ambiente de testes.
         */
        void terminar();

        /**
         * Este método testa o cenário de sucesso.
         */
        bool testarCenarioSucesso();

        /**
         * Este método testa o cenário de falha.
         */
        bool testarCenarioFalha();

    protected:
        /**
         * A implementação deste método deve retornar um valor válido que será passado
         * para o construtor da classe de domínio.
         */
        virtual ValorDominio getValorDefault() = 0;

        /**
         * A implementação deste método deve retornar um valor válido que será passado
         * para o método setter da instância de classe de domínio.
         * Espera-se que, ao passar este valor para o método setter,
         * <strong>não seja lançada exceção</strong> de argumento inválido.
         */
        virtual ValorDominio getValorCasoSucesso() = 0;

        /**
         * Método deve retornar um valor inválido que será passado
         * para o método setter da instância de classe de domínio.
         * Espera-se que, ao passar este valor para o método setter,
         * <strong>seja lançada exceção</strong> de argumento inválido.
         */
        virtual ValorDominio getValorCasoFalha() = 0;

    public:
        /**
         * Método responsável por preparar o ambiente e realizar testar todos os
         * cenários de testes. No contexto deste trabalho, apenas dois cenários
         * de cobertura serão testados: cenário de sucesso e cenário de falha.
         *
         * @return ResultadoTU com os resultados do teste.
         */
        virtual ResultadoTU testar();
};

#endif //TU_H_INCLUDED
