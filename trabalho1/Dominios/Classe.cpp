
/**
 * Implementação de construtor da classe Classe
 */
Classe::Classe(string valor) {
	Classe::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Classe::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Classe
 */
void Classe::setValor(string valor) {
	Classe::validate(valor);
	this->valor = valor;
}