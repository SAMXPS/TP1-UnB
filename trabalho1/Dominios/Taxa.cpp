#include "Taxa.h"
using namespace std;

// Implementação por Samuel James

Taxa::Taxa(string valor) {
	Taxa::validate(valor);
	this->valor = valor;
}

void Taxa::validate(string valor) throw(invalid_argument) {
	// TODO: Implementar função de validação
}

void Taxa::setValor(string valor) {
	Taxa::validate(valor);
	this->valor = valor;
}