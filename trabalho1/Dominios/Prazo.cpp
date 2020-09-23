
/**
 * Implementação de construtor da classe Prazo
 */
Prazo::Prazo(string valor) {
	Prazo::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Prazo::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Prazo
 */
void Prazo::setValor(string valor) {
	Prazo::validate(valor);
	this->valor = valor;
}