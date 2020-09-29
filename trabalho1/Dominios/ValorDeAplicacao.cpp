#include "ValorDeAplicacao.h"
using namespace std;

ValorDeAplicacao::ValorDeAplicacao(string valor) {
	ValorDeAplicacao::validate(valor);
	this->valor = valor;
}

void ValorDeAplicacao::validate(string valor) throw(invalid_argument) {
	// TODO: Implementar função de validação
}

void ValorDeAplicacao::setValor(string valor) {
	ValorDeAplicacao::validate(valor);
	this->valor = valor;
}