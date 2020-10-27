#include "CodigoDeAplicacao.h"
using namespace std;

// Implementação por Samuel James

CodigoDeAplicacao::CodigoDeAplicacao(string valor) {
	CodigoDeAplicacao ::validate(valor);
	this->valor = valor;
}

void CodigoDeAplicacao::validate(string valor) throw (invalid_argument) {
	// Formato XXXXX onde cada X é dígito (0 – 9) e o código não pode 00000.
	if (valor.length() != 5) throw (invalid_argument("Formato de Codigo de Aplicacao inválido."));
	if (valor == "00000") throw (invalid_argument("Codigo de Aplicacao nao pode ser nulo."));

	const char* str = valor.c_str();
	for (char c; (c = *str) != 0; str++) {
		int diff = c - '0';
		if (diff < 0 || diff > 9) throw (invalid_argument("Codigo de Aplicacao informado eh nao numerico."));
	}
}

void CodigoDeAplicacao::setValor(string valor) {
	CodigoDeAplicacao::validate(valor);
	this->valor = valor;
}