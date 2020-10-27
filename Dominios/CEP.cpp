#include "CEP.h"
using namespace std;

// Implementação por Samuel James

CEP::CEP(long valor) {
	CEP::validate(valor);
	this->valor = valor;
}

void CEP::validate(long valor) throw(invalid_argument) {
    if (   (valor < 1000000  || valor > 70999999)   // valores extremos inválidos
        || (valor > 5999999  && valor < 8000000 )   // inválidos entre faixa 1 e SP
        || (valor > 8499999  && valor < 20000000)   // inválidos entre SP e RJ
        || (valor > 26600999 && valor < 40000000)   // inválidos entre RJ e SALVADOR
        || (valor > 41999999 && valor < 60000000)   // inválidos entre SALVADOR E FORTALEZA
        || (valor > 60999999 && valor < 70000000)   // inválidos entre FORTALEZA E BRASILIA
    ) throw invalid_argument("O valor de CEP informado não está dentro das faixas válidas definidas.");
}

void CEP::setValor(long valor) {
	CEP::validate(valor);
	this->valor = valor;
}
