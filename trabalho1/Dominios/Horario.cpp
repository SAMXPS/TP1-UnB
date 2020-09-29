#include "Horario.h"
using namespace std;

Horario::Horario(string valor) {
	Horario::validate(valor);
	this->valor = valor;
}

void Horario::validate(string valor) throw(invalid_argument) {
	if(valor.size() != tamanho){
        throw new invalid_argument("O horario nao tem o tamanho padrao");
	}
	if(valor[2] != ':'){
        throw new invalid_argument("O horario nao esta no formato correto");
	}
	if((valor[1]- '0') < minimo){
        throw new invalid_argument("O horario esta abaixo das 13:00");
	}
	if((valor[1] - '0') > maximo){
        throw new invalid_argument("O horario esta acima das 17:00");
	}
	if((valor[1] - '0') == maximo && ((valor[3]) - '0') != 0 || (valor[4] - '0') != 0){
        throw new invalid_argument("O horario esta acima das 17:00");
	}
}

void Horario::setValor(string valor) {
	Horario::validate(valor);
	this->valor = valor;
}
