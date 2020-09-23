
/**
 * Implementação de construtor da classe Taxa
 */
Taxa::Taxa(string valor) {
	Taxa::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Taxa::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Taxa
 */
void Taxa::setValor(string valor) {
	Taxa::validate(valor);
	this->valor = valor;
}