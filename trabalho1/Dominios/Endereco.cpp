#include "Endereco.h"

/**
 * Implementação de construtor da classe Endereco
 */
Endereco::Endereco(std::string valor) {
	Endereco::validate(valor);
	this->valor = valor;
}

void Endereco::validate(std::string valor) throw (std::invalid_argument) {
	// TODO: Implementar função de validação
	int tamanho = valor.size();

	if(tamanho < minimo || tamanho > maximo){
        throw new std::invalid_argument("O emissor nao tem o tamanho padrao");
	}
	if(!isupper(valor[0])){
        throw new std::invalid_argument("O emissor deve comecar com letra, e ela deve ser maiscula");
	}
	for(int i = 0; i < 30; ++i){
        if(valor[i] == '.' || valor[i] == '-' || valor[i] == ' '){
            if(valor[i + 1] == '.' || valor[i + 1] == '-' || valor[i + 1] == ' '){
                throw new std::invalid_argument("O emissor foi escrito de forma invalida");
            }
        }
	}
}

/**
 * Implementação de método setter da classe Endereco
 */
void Endereco::setValor(std::string valor) {
	Endereco::validate(valor);
	this->valor = valor;
}
