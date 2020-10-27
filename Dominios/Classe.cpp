#include "Classe.h"
using namespace std;

// Implementação por Samuel James

Classe::Classe(string valor) {
	Classe::validate(valor);
	this->valor = valor;
}

void Classe::validate(string valor) throw (invalid_argument) {
	// Texto CDB, LCA, LCI, LF ou LC.
	if (valor == "CDB") return;
	if (valor == "LCA") return;
	if (valor == "LCI") return;
	if (valor == "LF") return;
	if (valor == "LC") return;

	throw invalid_argument("O valor de classe informado é inválido.");
}

void Classe::setValor(string valor) {
	Classe::validate(valor);
	this->valor = valor;
}