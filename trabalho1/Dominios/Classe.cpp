#include "Classe.h"
using namespace std;

// Implementação por Samuel James

Classe::Classe(string valor) {
	Classe::validate(valor);
	this->valor = valor;
}

void Classe::validate(string valor) throw (invalid_argument) {
	// TODO: Implementar função de validação
}

void Classe::setValor(string valor) {
	Classe::validate(valor);
	this->valor = valor;
}