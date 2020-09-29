#include "Senha.h"
using namespace std;

Senha::Senha(string valor) {
	Senha::validate(valor);
	this->valor = valor;
}

void Senha::validate(string valor) throw (invalid_argument){
	if(valor.size() != tamanho){
        throw invalid_argument("O senha nao tem o tamanho padrao");
	}
	for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < tamanho; j++){
            if(valor[j] ==  valor[i]){
                throw invalid_argument("Nao podem conter numeros repetidos");
            }
        }
	}
}

void Senha::setValor(string valor) {
	Senha::validate(valor);
	this->valor = valor;
}
