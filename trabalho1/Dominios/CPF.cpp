
/**
 * Implementação de construtor da classe CPF
 */
CPF::CPF(string valor) {
	CPF::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
CPF::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe CPF
 */
void CPF::setValor(string valor) {
	CPF::validate(valor);
	this->valor = valor;
}