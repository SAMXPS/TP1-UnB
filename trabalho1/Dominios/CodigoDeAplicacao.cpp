#include "CodigoDeAplicacao.h"

/**
 * Implementação de construtor da classe CodigoDeAplicacao 
 */
CodigoDeAplicacao::CodigoDeAplicacao(std::string valor) {
	CodigoDeAplicacao ::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
void CodigoDeAplicacao::validate(std::string valor) throw (std::invalid_argument) {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe CodigoDeAplicacao 
 */
void CodigoDeAplicacao::setValor(std::string valor) {
	CodigoDeAplicacao::validate(valor);
	this->valor = valor;
}