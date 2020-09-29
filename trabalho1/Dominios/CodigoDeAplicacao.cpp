#include "CodigoDeAplicacao.h"
using namespace std;

CodigoDeAplicacao::CodigoDeAplicacao(string valor) {
	CodigoDeAplicacao ::validate(valor);
	this->valor = valor;
}

void CodigoDeAplicacao::validate(string valor) throw (invalid_argument) {
	// TODO: Implementar função de validação
}

void CodigoDeAplicacao::setValor(string valor) {
	CodigoDeAplicacao::validate(valor);
	this->valor = valor;
}