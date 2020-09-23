
/**
 * Implementação de construtor da classe CEP
 */
CEP::CEP(string valor) {
	CEP::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
CEP::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe CEP
 */
void CEP::setValor(string valor) {
	CEP::validate(valor);
	this->valor = valor;
}