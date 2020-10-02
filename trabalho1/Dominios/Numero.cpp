#include "Numero.h"
using namespace std;

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
	int soma = 0,  verificador = 0;
	for(int i = 0; i < 6 ; i++){//Faz a soma de todos o X digitos
        soma += valor[i];
	}
	verificador = soma % 4;//Pega o resto da divisao por 4 para transformar em digito verificador
	if(verificador != valor[7]){
        throw invalid_argument("O digito verificador nao eh valido");
	}
}

void Numero::setValor(string valor) {
	Numero::validate(valor);
	this->valor = valor;
}
