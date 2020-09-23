
/**
 * Implementação de construtor da classe Horario
 */
Horario::Horario(string valor) {
	Horario::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Horario::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
}

/**
 * Implementação de método setter da classe Horario
 */
void Horario::setValor(string valor) {
	Horario::validate(valor);
	this->valor = valor;
}