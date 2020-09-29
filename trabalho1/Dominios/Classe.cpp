#include "Classe.h"

/**
 * Implementação de construtor da classe Classe
 */
Classe::Classe(std::string valor) {
	Classe::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
void Classe::validate(std::string valor) throw (std::invalid_argument) {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Classe
 */
void Classe::setValor(std::string valor) {
	Classe::validate(valor);
	this->valor = valor;
}