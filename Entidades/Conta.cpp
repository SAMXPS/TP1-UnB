#include "Conta.h"

// Implementação por Lucas Aquino

void Conta::setBanco(CodigoDeBanco banco){
    this->banco = banco;
}

void Conta::setBanco(std::string banco){
    this->banco = CodigoDeBanco(banco);
}

void Conta::setAgencia(CodigoDeAgencia agencia){
    this->agencia = agencia;
}

void Conta::setAgencia(std::string agencia){
    this->agencia = CodigoDeAgencia(agencia);
}

void Conta::setNumero(Numero numero){
    this->numero = numero;
}

void Conta::setNumero(std::string numero){
    this->numero = Numero(numero);
}