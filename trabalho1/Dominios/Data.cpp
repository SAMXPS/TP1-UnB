
/**
 * Implementação de construtor da classe Data
 */
Data::Data(string valor) {
	Data::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Data::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Data
 */
void Data::setValor(string valor) {
	Data::validate(valor);
	this->valor = valor;
}