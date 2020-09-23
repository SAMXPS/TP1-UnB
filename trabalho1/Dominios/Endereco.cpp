
/**
 * Implementação de construtor da classe Endereco
 */
Endereco::Endereco(string valor) {
	Endereco::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Endereco::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Endereco
 */
void Endereco::setValor(string valor) {
	Endereco::validate(valor);
	this->valor = valor;
}