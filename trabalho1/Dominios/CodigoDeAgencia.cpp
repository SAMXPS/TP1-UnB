#include "CodigoDeAgencia.h"

/**
 * Implementação de construtor da classe CodigoDeAgencia
 */
CodigoDeAgencia::CodigoDeAgencia(std::string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
void CodigoDeAgencia::validate(std::string valor) throw (std::invalid_argument) {
	// TODO: Implementar função de validação
	if(valor.length() != 4){
        throw new std::invalid_argument("O tamanho do codigo esta errado");
	}
	if(valor == "0000"){
        throw new std::invalid_argument("O codigo nao pode ser 0000");
	}
}

/**
 * Implementação de método setter da classe CodigoDeAgencia
 */
void CodigoDeAgencia::setValor(std::string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}
