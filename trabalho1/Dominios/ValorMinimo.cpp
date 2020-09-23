
/**
 * Implementação de construtor da classe ValorMinimo
 */
ValorMinimo::ValorMinimo(string valor) {
	ValorMinimo::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
ValorMinimo::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe ValorMinimo
 */
void ValorMinimo::setValor(string valor) {
	ValorMinimo::validate(valor);
	this->valor = valor;
}