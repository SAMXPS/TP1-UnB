#include "ValorMinimo.h"
using namespace std;

// Implementação por Lucas Aquino

ValorMinimo::ValorMinimo(int valor) {
	ValorMinimo::validate(valor);
	this->valor = valor;
}

void ValorMinimo::validate(int valor) throw(invalid_argument) {
	// Observação de SAMUEL:
	// O valor é uma string, você pode trocá-lo para um int ou convertê-lo

	if(!(valor == 1000 || valor == 5000 || valor == 10000 || valor == 50000)){
        throw invalid_argument("O valor minimo nao eh aceitavel");
	}
}

void ValorMinimo::setValor(int valor) {
	ValorMinimo::validate(valor);
	this->valor = valor;
}
