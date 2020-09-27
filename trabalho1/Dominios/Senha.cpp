
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
	if(valor.size() != tamanho){
        throw new invalid_argument("O senha nao tem o tamanho padrao");
	}
	for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < tamanho; j++){
            if(valor[j] ==  valor[i]){
                throw new invalid_argument("Nao podem conter numeros repetidos")
            }
        }
	}
}

/**
 * Implementação de método setter da classe Senha
 */
void Senha::setValor(string valor) {
	Senha::validate(valor);
	this->valor = valor;
}
