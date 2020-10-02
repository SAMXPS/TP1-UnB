#include "ValorDeAplicacao.h"
#include <string>
using namespace std;

// Implementação por Samuel James

ValorDeAplicacao::ValorDeAplicacao(string valor) {
	ValorDeAplicacao::validate(valor);
	this->valor = valor;
}

void ValorDeAplicacao::validate(string valor) throw(invalid_argument) {
	// TODO: Implementar função de validação
	if(valor.size() != tamanho){
        throw invalid_argument("O tamanho do codigo esta errado");
	}
	if(valor == "0000"){
        throw invalid_argument("O codigo nao pode ser 0000");
	}
}

void ValorDeAplicacao::setValor(string valor) {
	ValorDeAplicacao::validate(valor);
	this->valor = valor;
}
