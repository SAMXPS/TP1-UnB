#include "Endereco.h"
using namespace std;
#include<iostream>

// Implementação por Lucas Aquino

Endereco::Endereco(std::string valor) {
	Endereco::validate(valor);
	this->valor = valor;
}

void Endereco::validate(std::string valor) throw (std::invalid_argument) {
	int tamanho = valor.length();

	if(tamanho < minimo){
        throw std::invalid_argument("O emissor nao tem o tamanho padrao");
	}

	if(tamanho > maximo){
        throw std::invalid_argument("O emissor nao tem o tamanho padrao");
	}

	const char* str = valor.c_str();

	if(!isupper(str[0])){
        throw std::invalid_argument("O emissor deve comecar com letra, e ela deve ser maiscula");
	}

	for(int i = 0; i+1 < tamanho; i++){
        if(str[i] == '.' || str[i] == '-' || str[i] == ' '){
            if(str[i + 1] == '.' || str[i + 1] == '-' || str[i + 1] == ' '){
                throw std::invalid_argument("O emissor foi escrito de forma invalida");
            }
        }
	}
}

void Endereco::setValor(std::string valor) {
	Endereco::validate(valor);
	this->valor = valor;
}
