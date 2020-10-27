#include "Conta.h"

void Conta::setBanco(CodigoDeBanco banco){
    this->banco = banco;
}

void Conta::setAgencia(CodigoDeAgencia agencia){
    this->agencia = agencia;
}

void Conta::setNumero(Numero numero){
    this->numero = numero;
}