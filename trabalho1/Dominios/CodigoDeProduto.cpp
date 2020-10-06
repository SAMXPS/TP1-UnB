#include "CodigoDeProduto.h"
using namespace std;

// Implementação por Samuel James

CodigoDeProduto::CodigoDeProduto(string valor) {
	CodigoDeProduto::validate(valor);
	this->valor = valor;
}

void CodigoDeProduto::validate(string valor) throw(invalid_argument) {
	// Formato XXX onde cada X é dígito (0 – 9) e o código não pode ser 000.
	if (valor.length() != 3) throw (invalid_argument("Codigo de Produto inválido."));
	if (valor == "000") throw (invalid_argument("Codigo de Produto nao pode ser nulo."));

	const char* str = valor.c_str();
	for (char c; (c = *str) != 0; str++) {
		int diff = c - '0';
		if (diff < 0 || diff > 9) throw (invalid_argument("Codigo de Produto informado eh nao numerico."));
	}
}

void CodigoDeProduto::setValor(string valor) {
	CodigoDeProduto::validate(valor);
	this->valor = valor;
}