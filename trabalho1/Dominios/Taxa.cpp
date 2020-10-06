#include "Taxa.h"
using namespace std;

// Implementação por Samuel James

Taxa::Taxa(double valor) {
	Taxa::validate(valor);
	this->valor = valor;
}

void Taxa::validate(double valor) throw(invalid_argument) {
	//Valor na faixa de 0 a 200 (% ao ano).

	
}

void Taxa::setValor(double valor) {
	Taxa::validate(valor);
	this->valor = valor;
}