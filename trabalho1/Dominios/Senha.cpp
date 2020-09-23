
/**
 * Implementação de construtor da classe Senha
 */
Senha::Senha(string valor) {
	Senha::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Senha::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Senha
 */
void Senha::setValor(string valor) {
	Senha::validate(valor);
	this->valor = valor;
}