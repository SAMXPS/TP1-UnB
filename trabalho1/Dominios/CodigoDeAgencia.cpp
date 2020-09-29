#include "CodigoDeAgencia.h"
using namespace std;

CodigoDeAgencia::CodigoDeAgencia(string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}

void CodigoDeAgencia::validate(string valor) throw (invalid_argument) {
	// TODO: Implementar função de validação
	if(valor.length() != 4){
        throw new invalid_argument("O tamanho do codigo esta errado");
	}
	if(valor == "0000"){
        throw new invalid_argument("O codigo nao pode ser 0000");
	}
}

void CodigoDeAgencia::setValor(string valor) {
	CodigoDeAgencia::validate(valor);
	this->valor = valor;
}
