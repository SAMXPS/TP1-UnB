#include "Conta.h"

// Implementação por Lucas Aquino

void Conta::setBanco(CodigoDeBanco banco){
    this->banco = banco;
}

void Conta::setAgencia(CodigoDeAgencia agencia){
    this->agencia = agencia;
}

void Conta::setNumero(Numero numero){
    this->numero = numero;
}