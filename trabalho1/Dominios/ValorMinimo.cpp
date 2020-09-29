#include "ValorMinimo.h"
using namespace std;

ValorMinimo::ValorMinimo(string valor) {
	ValorMinimo::validate(valor);
	this->valor = valor;
}

void ValorMinimo::validate(string valor) throw(invalid_argument) {
	// Observação de SAMUEL:
	// O valor é uma string, você pode trocá-lo para um int ou convertê-lo 

	if(!((valor - '0') == 1000 || (valor - '0') == 5000 || (valor - '0') == 10000 || (valor - '0') == 50000)){
        throw invalid_argument("O valor minimo nao eh aceitavel")
	}
}

void ValorMinimo::setValor(string valor) {
	ValorMinimo::validate(valor);
	this->valor = valor;
}
