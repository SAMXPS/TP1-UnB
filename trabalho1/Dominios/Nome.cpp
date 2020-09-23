
/**
 * Implementação de construtor da classe Nome
 */
Nome::Nome(string valor) {
	Nome::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Nome::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Nome
 */
void Nome::setValor(string valor) {
	Nome::validate(valor);
	this->valor = valor;
}