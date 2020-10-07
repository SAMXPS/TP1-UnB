#include "Taxa.h"
using namespace std;

// Implementação por Samuel James

Taxa::Taxa(double valor) {
	Taxa::validate(valor);
	this->valor = valor;
}

void Taxa::validate(double valor) throw(invalid_argument) {
	//Valor na faixa de 0 a 200 (% ao ano).
	if (valor < 0 || valor > 200) throw invalid_argument("Taxa inválida");
}

void Taxa::setValor(double valor) {
	Taxa::validate(valor);
	this->valor = valor;
}