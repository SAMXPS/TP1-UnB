#include <string>
/**
 * Implementação de construtor da classe CodigoDeAgencia
 */
CodigoDeAgencia::CodigoDeAgencia(string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
CodigoDeAgencia::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
	if(strlen(valor) != 4){
        throw new invalid_argument("O tamanho do codigo esta errado");
	}
	if(valor == '0000'){
        throw new invalid_argument("O codigo nao pode ser 0000");
	}
}

/**
 * Implementação de método setter da classe CodigoDeAgencia
 */
void CodigoDeAgencia::setValor(string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}
