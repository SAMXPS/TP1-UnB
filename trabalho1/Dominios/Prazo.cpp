#include "Prazo.h"
using namespace std;

Prazo::Prazo(string valor) {
	Prazo::validate(valor);
	this->valor = valor;
}

void Prazo::validate(string valor) throw(invalid_argument) {
	// TODO: Implementar função de validação
}

void Prazo::setValor(string valor) {
	Prazo::validate(valor);
	this->valor = valor;
}