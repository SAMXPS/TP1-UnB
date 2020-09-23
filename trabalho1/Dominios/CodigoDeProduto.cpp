
/**
 * Implementação de construtor da classe CodigoDeProduto
 */
CodigoDeProduto::CodigoDeProduto(string valor) {
	CodigoDeProduto::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
CodigoDeProduto::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe CodigoDeProduto
 */
void CodigoDeProduto::setValor(string valor) {
	CodigoDeProduto::validate(valor);
	this->valor = valor;
}