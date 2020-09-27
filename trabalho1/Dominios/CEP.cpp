#include "CEP.h"

/**
 * Implementação de construtor da classe CEP.
 */
CEP::CEP(long valor) {
	CEP::validate(valor);
	this->valor = valor;
}


/**
 * O valor do CEP pode estar contido nas seguintes faixas:
 * -  1000000 a  5999999
 * -  8000000 a  8499999 (São Paulo)
 * - 20000000 a 26600999 (Rio de Janeiro)
 * - 40000000 a 41999999 (Salvador)
 * - 60000000 a 60999999 (Fortaleza)
 * - 70000000 a 70999999 (Brasília)
 *
 * Caso valor informado esteja fora dessa região, exceção será lançada.
 */
void CEP::validate(long valor) throw(invalid_argument) {
    if (   (valor < 1000000  || valor > 70999999)   // valores extremos inválidos
        || (valor > 5999999  && valor < 8000000 )   // inválidos entre faixa 1 e SP
        || (valor > 8499999  && valor < 20000000)   // inválidos entre SP e RJ
        || (valor > 26600999 && valor < 40000000)   // inválidos entre RJ e SALVADOR
        || (valor > 41999999 && valor < 60000000)   // inválidos entre SALVADOR E FORTALEZA
        || (valor > 60999999 && valor < 70000000)   // inválidos entre FORTALEZA E BRASILIA
    ) throw new invalid_argument("O valor de CEP informado não está dentro das faixas válidas definidas.");
}

/**
 * Implementação de método setter da classe CEP.
 */
void CEP::setValor(long valor) {
	CEP::validate(valor);
	this->valor = valor;
}
