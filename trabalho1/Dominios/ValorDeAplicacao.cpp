
/**
 * Implementação de construtor da classe ValorDeAplicacao
 */
ValorDeAplicacao::ValorDeAplicacao(string valor) {
	ValorDeAplicacao::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
ValorDeAplicacao::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe ValorDeAplicacao
 */
void ValorDeAplicacao::setValor(string valor) {
	ValorDeAplicacao::validate(valor);
	this->valor = valor;
}