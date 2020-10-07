#include "CPF.h"
#include <ctype.h>
#include <iostream>
using namespace std;

// Implementação por Lucas Aquino

CPF::CPF(string valor) {
	CPF::validate(valor);
	this->valor = valor;
}

void CPF::validate(string valor) throw(invalid_argument) {
	if(valor.length() != tamanho){
        throw invalid_argument("O CPF nao tem o tamanho padrao");
	}

    const char* str = valor.c_str();

	for(int i=0; i < valor.length(); i++) {
        //confere se é um numero inteiro
        if(!isdigit(str[i])) {
            if ((i == 3 || i == 7) && str[i] == '.') continue;
            if (i == 11 && str[i] == '-') continue;
            throw invalid_argument("O CPF foi escrito de forma incorreta.");
        }
    }
    int somaCpf = 0, digito11 = 0, digito12 = 0, multiplicador = 10, contadorDeRepeticao = 0;//digitos usados para conferir se o CPF eh valido
    
    for(int i = 0; i < 11; i++){
        if(str[i] != '.'){ //nessa parte ele confere se eh ou nao um numero
            somaCpf += (str[i] - '0')*(multiplicador);
            --multiplicador;
        }
    }

    if((somaCpf % 11) >= 2){//Calcula o primeiro digito
        digito11 = 11 - (somaCpf % 11);
    }

    else{
        digito11 = 0;
    }

    if((str[12] - '0') != digito11){
        throw invalid_argument("O CPF eh invalido");
    }

    somaCpf = 0;
    multiplicador = 11;//Para o calculo do segundo digito, o multiplicador é 11
    for(int i = 0; i < 12; i++){
        if(str[i] != '.' && str[i] != '-'){//Aqui entra a parte de conferir tambem se eh um traco
            somaCpf += (str[i] - '0')*(multiplicador);
            --multiplicador;
        }
    }

    if ((somaCpf % 11) >= 2) {
        digito12 = 11 - (somaCpf % 11);
    }
    else {
        digito12 = 0;
    }

    char c = str[13];
    int diff = c - '0';
    if (diff != digito12) {
        throw invalid_argument("O CPF eh invalido");
    }
}

/**
 * Implementação de método setter da classe CPF
 */
void CPF::setValor(string valor) {
	CPF::validate(valor);
	this->valor = valor;
}
