#include "Nome.h"
using namespace std;

// Implementação por Samuel James

Nome::Nome(string valor) {
	Nome::validate(valor);
	this->valor = valor;
}

void Nome::validate(string valor) throw(invalid_argument) {
	// TODO: Implementar função de validação
}

void Nome::setValor(string valor) {
	Nome::validate(valor);
	this->valor = valor;
}