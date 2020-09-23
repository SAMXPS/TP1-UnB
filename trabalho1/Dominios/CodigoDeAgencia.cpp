
/**
 * Implementação de construtor da classe CodigoDeAgencia
 */
CodigoDeAgencia::CodigoDeAgencia(string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
CodigoDeAgencia::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe CodigoDeAgencia
 */
void CodigoDeAgencia::setValor(string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}