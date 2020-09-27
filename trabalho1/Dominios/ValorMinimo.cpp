
/**
 * Implementação de construtor da classe ValorMinimo
 */
ValorMinimo::ValorMinimo(string valor) {
	ValorMinimo::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
ValorMinimo::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
	if(!((valor - '0') == 1000 || (valor - '0') == 5000 || (valor - '0') == 10000 || (valor - '0') == 50000)){
        throw new invalid_argument("O valor minimo nao eh aceitavel")
	}
}

/**
 * Implementação de método setter da classe ValorMinimo
 */
void ValorMinimo::setValor(string valor) {
	ValorMinimo::validate(valor);
	this->valor = valor;
}
