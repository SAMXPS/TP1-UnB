
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
	tamanho = valor.size();
	if(tamanho < minimo || tamanho > maximo){
        throw new invalid_argument("O emissor nao tem o tamanho padrao");
	}
	if(!isupper(valor[0])){
        throw new invalid_argument("O emissor deve comecar com letra, e ela deve ser maiscula");
	}
	for(int i = 0; i < 30; ++i){
        if(valor[i] == '.' || valor[i] == '-' || valor[i] == ' '){
            if(valor[i + 1] == '.' || valor[i + 1] == '-' || valor[i + 1] == ' '){
                throw new invalid_argument("O emissor foi escrito de forma invalida");
            }
        }
	}
}

/**
 * Implementação de método setter da classe Endereco
 */
void Endereco::setValor(string valor) {
	Endereco::validate(valor);
	this->valor = valor;
}
