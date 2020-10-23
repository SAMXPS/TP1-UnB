#include "Prazo.h"
using namespace std;

// Implementação por Samuel James

Prazo::Prazo(int valor) {
	Prazo::validate(valor);
	this->valor = valor;
}

void Prazo::validate(int valor) throw(invalid_argument) {
	// Valor 6, 12, 18, 24, 30, 36, 42, 48, 54, 60, 66 ou 72 (mêses).
	switch (valor) {
		case 6: return;
		case 12: return;
		case 18: return;
		case 24: return;
		case 30: return;
		case 36: return;
		case 42: return;
		case 48: return;
		case 54: return;
		case 60: return;
		case 66: return;
		case 72: return;
		default:
			throw invalid_argument("O prazo informado eh invalido.");
			break;
	}
}

void Prazo::setValor(int valor) {
	Prazo::validate(valor);
	this->valor = valor;
}