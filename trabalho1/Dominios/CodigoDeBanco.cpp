#include <string>
/**
 * Implementação de construtor da classe CodigoDeBanco
 */
CodigoDeBanco::CodigoDeBanco(string valor) {
	CodigoDeBanco::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
CodigoDeBanco::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
	if(strlen(valor) != tamanho){
        throw new invalid_argument("O codigo nao tem o tamanho padrao")
	}
	if(!(valor == '341' || valor == '001' || valor == '394' || valor == '104' || valor == '033')){
        throw new invalid_argument("O codigo nao pertence a lista dos 5 maiores bancos do Brasil");
	}

}

/**
 * Implementação de método setter da classe CodigoDeBanco
 */
void CodigoDeBanco::setValor(string valor) {
	CodigoDeBanco::validate(valor);
	this->valor = valor;
}
