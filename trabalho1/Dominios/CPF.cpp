#include "CPF.h"
#include <ctype.h>
using namespace std;

CPF::CPF(string valor) {
	CPF::validate(valor);
	this->valor = valor;
}

void CPF::validate(string valor) throw(invalid_argument) {
	if(valor.size() != tamanho){
        throw invalid_argument("O CPF nao tem o tamanho padrao");
	}
	 for(int i=0; i<valor.size(); i++)
    {
        if(!isdigit(valor[i]))//confere se é um numero inteiro
        {
            if(!((i == 3 && valor[i] != '.') || (i == 7 && valor[i] != '.') || (i == 11 && valor[i] != '-'))){ //confere se eh um ponto ou um traco no CPF
                throw invalid_argument("O CPF foi escrito de forma incorreta.");
                break;
            }
        }
    }

    int digitoVerificador, somaCpf = 0, digito11 = 0, digito12 = 0, multiplicador = 10, contadorDeRepeticao = 0;//digitos usados para conferir se o CPF eh valido
    for(int i = 0; i < 11; i++){
        if(valor[i] != '.'){//nessa parte ele confere se eh ou nao um numero
            somaCpf += (valor[i] - '0')*(multiplicador);
            --multiplicador;
            if(valor[i] == valor[i+1]){
                contadorDeRepeticao++; //Esse contador eh responsavel por conferir se o cpf eh
                                       //inteiramente igual, ele compara com o ponto tambem
            }
        }
        else{
            if(valor[i-1] == valor[i + 1]){//Nessa parte ele confere se o numero antes e depois do ponto sao iguais e
                                       //acrescenta no contador
                contadorDeRepeticao++;
            }
        }
    }
    if((somaCpf % 11) >= 2){//Calcula o primeiro digito
        digito11 = 11 - (somaCpf % 11);
    }
    else{
        digito11 = 0;
    }

    if((valor[12] - '0') != digito11){
        throw invalid_argument("O CPF eh invalido");
    }
    somaCpf = 0;
    multiplicador = 11;//Para o calculo do segundo digito, o multiplicador é 11
    for(int i = 0; i < 12; i++){
        if(valor[i] != '.' || valor[i] != '-'){//Aqui entra a parte de conferir tambem se eh um traco
            somaCpf += (valor[i] - '0')*(multiplicador);
            --multiplicador;
        }
    }
    if((somaCpf % 11) >= 2){
        digito12 = 11 - (somaCpf % 11);
    }
    else{
        digito12 = 0;
    }
    if((valor[13] - '0') != digito12) {
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
