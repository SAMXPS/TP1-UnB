#include "Emissor.h"
#include <cctype>
using namespace std;

// Implementação por Lucas Aquino

Emissor::Emissor(string valor) {
	Emissor::validate(valor);
	this->valor = valor;
}

void Emissor::validate(string valor) throw(invalid_argument) {
	int tamanho = valor.size();
	if(tamanho < minimo || tamanho > maximo){
        throw invalid_argument("O emissor nao tem o tamanho padrao");
	}
	if(!isupper(valor[0])){
        throw invalid_argument("O emissor deve comecar com letra, e ela deve ser maiscula");
	}
	for(int i = 0; i < 30; ++i){
        if(valor[i] == '.' || valor[i] == '-' || valor[i] == ' '){
            if(valor[i + 1] == '.' || valor[i + 1] == '-' || valor[i + 1] == ' '){
                throw invalid_argument("O emissor foi escrito de forma invalida");
            }
        }
	}
}

void Emissor::setValor(string valor) {
	Emissor::validate(valor);
	this->valor = valor;
}
