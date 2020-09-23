
/**
 * Implementação de construtor da classe Numero
 */
Numero::Numero(string valor) {
	Numero::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Numero::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Numero
 */
void Numero::setValor(string valor) {
	Numero::validate(valor);
	this->valor = valor;
}