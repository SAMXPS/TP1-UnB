#include "Numero.h"
using namespace std;

// Implementação por Lucas Aquino

Numero::Numero(string valor) {
	Numero::validate(valor);
	this->valor = valor;
}

int Numero::calculaDigitoVerificador(std::string valor) throw(std::invalid_argument) {
    if(valor.length() < 6){
        throw invalid_argument("O numero nao tem o tamanho padrao");
	}

    const char* str = valor.c_str();

    for(int i = 0; i < 6; i++){
        if(!isdigit(str[i])){
            throw invalid_argument("O numero nao esta no formato correto");
        }
    }

    int digito = 0;
    int somador = 0;
    int multiplicador  = 7;

    for(int i = 0; i < 6; i++){
        somador += (str[i] - '0') * multiplicador;
        multiplicador--;
    }

    digito = (10*somador) % 11;
    return digito;
}

void Numero::validate(string valor) throw(invalid_argument){
	if(valor.length() != tamanho){//o tamanho do numero nao e o tamanhao padrao pedido no trabalho
        throw invalid_argument("O numero nao tem o tamanho padrao");
	}
    
    const char* str = valor.c_str();

	if(str[6] != '-'){//o formato do numero esta errado de acordo com o trabalho
        throw invalid_argument("O numero nao esta no formato correto");
	}
	
    int digito = calculaDigitoVerificador(valor);

    if(digito != (str[7] - '0')){
        throw invalid_argument("O digito verificador esta incorreto");
    }
}

void Numero::setValor(string valor) {
	Numero::validate(valor);
	this->valor = valor;
}
