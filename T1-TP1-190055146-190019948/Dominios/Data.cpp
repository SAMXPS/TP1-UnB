#include "Data.h"
using namespace std;

// Implementação por Samuel James

Data::Data(string valor) {
	Data::validate(valor);
	this->valor = valor;
}

void Data::validate(string valor) throw(invalid_argument) {
	// Formato DD/MM/AAAA onde DD é número de 1 e 31. MM é número de 1 e 12. AAAA é
	// número de 2020 a 2099. O valor da data deve considerar a ocorrência de anos que sejam
	// bissextos

	const char *str = valor.c_str();

	if (valor.length() != 10)  throw invalid_argument("Data fornecida não tem o tamanho correto.");
	if (str[2] != '/' || str[5] != '/')  throw invalid_argument("Data fornecida está com as divisões '/' em lugares errados.");

	// Verificando se todos os algarismos são números
	for (char c; (c = *str) != 0; str++) {
		if (c == '/') continue;
		int diff = c - '0';
		if (diff < 0 || diff > 9) throw (invalid_argument("Valor não numérico."));
	}

	str = valor.c_str();

	// Extraindo valores de dia, mes e ano
	int dia = (str[0] - '0') * 10 + (str[1] - '0');
	int mes = (str[3] - '0') * 10 + (str[4] - '0');
	int ano = (str[6] - '0') * 1000 + (str[7] - '0') * 100 + (str[8] - '0') * 10 + (str[9] - '0');

	// Verificando limites
	if (ano < 2020 || ano > 2099 || mes < 1 || mes > 12 || dia < 1 || dia > 31) throw invalid_argument("Data fornecida possui valores fora dos limites.");

	// Verificando se ano é bissexto. (Como estamos entre 2020 e 2099, basta tirar resto da divisão por 4)
	bool bissexto = (ano % 4 == 0);
	int maxDia;

	if (mes % 2 == (mes < 8)) {
		maxDia = 31;
	} else {
		maxDia = (mes == 2) ? (bissexto ? 29 : 28) : 30;
	}

	if (dia > maxDia) throw invalid_argument("O dia (DD) fornecido é inválido para o mês e ano em que se encontra. Esperava-se no max: " + maxDia);
}

void Data::setValor(string valor) {
	Data::validate(valor);
	this->valor = valor;
}