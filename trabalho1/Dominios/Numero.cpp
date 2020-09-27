
/**
 * Implementação de construtor da classe Numero
 */
Numero::Numero(string valor) {
	Numero::validate(valor);
	this->valor = valor;
}

/**
 * TODO: Explicar como funciona a validação da classe
 */
Numero::validate(string valor) throw invalid_argument {
	// TODO: Implementar função de validação
	if(valor.size() != tamanho){
        throw new invalid_argument("O numero nao tem o tamanho padrao");
	}
	if(valor[6] != "-"){
        throw new invalid_argument("O numero nao esta no formato correto");
	}
	int soma = 0,  varificador = 0;
	for(int i = 0; i < 6 ; i++){
        soma += valor[i];
	}
	verificador = soma % 4;
	if(verificador != valor[7]){
        throw new invalid_argument("O digito verificador nao eh valido");
	}
}

/**
 * Implementação de método setter da classe Numero
 */
void Numero::setValor(string valor) {
	Numero::validate(valor);
	this->valor = valor;
}
