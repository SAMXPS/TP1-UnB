
/**
 * Implementação de construtor da classe Emissor
 */
Emissor::Emissor(string valor) {
	Emissor::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Emissor::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Emissor
 */
void Emissor::setValor(string valor) {
	Emissor::validate(valor);
	this->valor = valor;
}