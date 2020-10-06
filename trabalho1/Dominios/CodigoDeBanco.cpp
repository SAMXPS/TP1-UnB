#include "CodigoDeBanco.h"
using namespace std;

// Implementação por Lucas Aquino

CodigoDeBanco::CodigoDeBanco(string valor) {
	CodigoDeBanco::validate(valor);
	this->valor = valor;
}

void CodigoDeBanco::validate(string valor) throw (invalid_argument) {
	if(valor.length() != tamanho){
        throw invalid_argument("O codigo nao tem o tamanho padrao");
	}

	if(!(valor == "341" || valor == "001" || valor == "394" || valor == "104" || valor == "033")){
        throw invalid_argument("O codigo nao pertence a lista dos 5 maiores bancos do Brasil");
	}
}

void CodigoDeBanco::setValor(string valor) {
	CodigoDeBanco::validate(valor);
	this->valor = valor;
}
