
/**
 * Implementação de construtor da classe CodigoDeBanco
 */
CodigoDeBanco::CodigoDeBanco(string valor) {
	CodigoDeBanco::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
CodigoDeBanco::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe CodigoDeBanco
 */
void CodigoDeBanco::setValor(string valor) {
	CodigoDeBanco::validate(valor);
	this->valor = valor;
}