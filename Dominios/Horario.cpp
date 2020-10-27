#include "Horario.h"
using namespace std;

// Implementação por Lucas Aquino

Horario::Horario(string valor) {
	Horario::validate(valor);
	this->valor = valor;
}

void Horario::validate(string valor) throw(invalid_argument) {
	if(valor.size() != tamanho){
        throw invalid_argument("O horario nao tem o tamanho padrao");
	}

	const char* str = valor.c_str();

	if(str[2] != ':'){
        throw invalid_argument("O horario nao esta no formato correto");
	}
	if((str[0] - '0') != 1){
        throw invalid_argument("O horario nao esta no intervalo permitido");
	}
	if((str[1]- '0') < minimo){
        throw invalid_argument("O horario esta abaixo das 13:00");
	}
	if((str[1] - '0') > maximo){
        throw invalid_argument("O horario esta acima das 17:00");
	}
	if((str[1] - '0') == maximo && ((str[3]) - '0') != 0 || (str[4] - '0') != 0){
        throw invalid_argument("O horario esta acima das 17:00");
	}
}

void Horario::setValor(string valor) {
	Horario::validate(valor);
	this->valor = valor;
}
