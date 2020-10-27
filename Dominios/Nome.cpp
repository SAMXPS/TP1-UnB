#include "Nome.h"
using namespace std;

// Implementação por Samuel James

Nome::Nome(string valor) {
	Nome::validate(valor);
	this->valor = valor;
}

void Nome::validate(string valor) throw(invalid_argument) {
	// Texto composto por 5 a 30 caracteres onde cada caracter pode ser letra (A-Z ou a-z) ou
	//espaço, há pelo menos 5 letras, não há espaços em sequência, primeira letra de cada termo é
	//letra maiúscula.
	if (valor.length() < 5 || valor.length() > 30) throw invalid_argument("O nome informado tem tamanho inválido.");

	const int distanciaZA = 'z' - 'a';

	bool ultimoEspaco = true;
	const char* str = valor.c_str();

	for (char c; (c = *str) != 0; str++) {
	    int distanciaMinusculo = c - 'a';
		int distanciaMaiusculo = c - 'A';

		bool ehMaiusculo = (distanciaMaiusculo >= 0 && distanciaMaiusculo <= distanciaZA);
		bool ehMinusculo = (distanciaMinusculo >= 0 && distanciaMinusculo <= distanciaZA);

		if (ultimoEspaco && !ehMaiusculo) 
			throw invalid_argument("As primeiras letras de cada termo devem ser maiúsculas.");

		if (c == ' ') {
			ultimoEspaco = true;
		} else if (ehMaiusculo || ehMinusculo) {
			ultimoEspaco = false;
		} else {
			throw invalid_argument("Nomes podem ser compostos apenas por letras (A-Z, a-z) e espaços.");
		}
	}
}

void Nome::setValor(string valor) {
	Nome::validate(valor);
	this->valor = valor;
}