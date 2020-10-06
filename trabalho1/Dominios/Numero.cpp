#include "Numero.h"
using namespace std;

// Implementação por Lucas Aquino

Numero::Numero(string valor) {
	Numero::validate(valor);
	this->valor = valor;
}

void Numero::validate(string valor) throw(invalid_argument){
	if(valor.size() != tamanho){//o tamanho do numero nao e o tamanhao padrao pedido no trabalho
        throw invalid_argument("O numero nao tem o tamanho padrao");
	}
	if(valor[6] != '-'){//o formato do numero esta errado de acordo com o trabalho
        throw invalid_argument("O numero nao esta no formato correto");
	}
    int digito, somador = 0;
    int multiplicador  = 7;
    for(int i = 0; i < 6; i++){
        somador += valor[i] * multiplicador;
        multiplicador--;
    }
    digito = somador % 11;
    if(digito == 10 && (valor[7] - '0') != 0){
        throw invalid_argument("O digito nao esta correto");
    }
    if(digito == 1 && (valor[7] - '0') != 0){
        throw invalid_argument("O digito nao esta correto");
    }
    if(digito != (valor[7] - '0')){
        throw invalid_argument("O digito nao esta correto");
    }
}

void Numero::setValor(string valor) {
	Numero::validate(valor);
	this->valor = valor;
}
