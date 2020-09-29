#include "CodigoDeAplicacao.h"

/**
 * Implementação de construtor da classe CodigoDeAplicacao 
 */
CodigoDeAplicacao ::CodigoDeAplicacao (string valor) {
	CodigoDeAplicacao ::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
CodigoDeAplicacao ::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe CodigoDeAplicacao 
 */
void CodigoDeAplicacao ::setValor(string valor) {
	CodigoDeAplicacao ::validate(valor);
	this->valor = valor;
}