#include "CodigoDeAgencia.h"
using namespace std;

// Implementação por Lucas Aquino

CodigoDeAgencia::CodigoDeAgencia(string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}

void CodigoDeAgencia::validate(string valor) throw (invalid_argument) {
	if (valor.length() != 4)  {
        throw invalid_argument("O tamanho do codigo esta errado");
	}
	if (valor == "0000") {
        throw invalid_argument("O codigo nao pode ser 0000");
	}
}

void CodigoDeAgencia::setValor(string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}
