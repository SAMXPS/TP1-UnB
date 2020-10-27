#include "ValorDeAplicacao.h"
using namespace std;

// Implementação por Samuel James

ValorDeAplicacao::ValorDeAplicacao(double valor) {
	ValorDeAplicacao::validate(valor);
	this->valor = valor;
}

void ValorDeAplicacao::validate(double valor) throw(invalid_argument) {
	// Valor na faixa de 0 a 1.000.000,00 (reais).
	if (valor < 0) 			throw(invalid_argument("Valor de Aplicacao nao pode ser negativo."));
	if (valor > 1000000.0) 	throw(invalid_argument("Valor de Aplicacao muito grande."));
}

void ValorDeAplicacao::setValor(double valor) {
	ValorDeAplicacao::validate(valor);
	this->valor = valor;
}
