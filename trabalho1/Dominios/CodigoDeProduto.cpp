#include "CodigoDeProduto.h"
using namespace std;

// Implementação por Samuel James

CodigoDeProduto::CodigoDeProduto(string valor) {
	CodigoDeProduto::validate(valor);
	this->valor = valor;
}

void CodigoDeProduto::validate(string valor) throw(invalid_argument) {
	// TODO: Implementar função de validação
}

void CodigoDeProduto::setValor(string valor) {
	CodigoDeProduto::validate(valor);
	this->valor = valor;
}