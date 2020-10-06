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
	

}

void Data::setValor(string valor) {
	Data::validate(valor);
	this->valor = valor;
}