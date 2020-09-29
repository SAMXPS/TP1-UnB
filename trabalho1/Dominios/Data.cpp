#include "Data.h"
using namespace std;

// Implementação por Samuel James

Data::Data(string valor) {
	Data::validate(valor);
	this->valor = valor;
}

void Data::validate(string valor) throw(invalid_argument) {
	// TODO: Implementar função de validação
}

void Data::setValor(string valor) {
	Data::validate(valor);
	this->valor = valor;
}