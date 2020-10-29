#include "Aplicacao.h"

void Aplicacao::setCodigo(CodigoDeAplicacao codigo) {
    this->codigo = codigo;
}

void Aplicacao::setCodigo(std::string codigo) {
    this->codigo = CodigoDeAplicacao(codigo);
}

void Aplicacao::setValor(ValorDeAplicacao valor) {
    this->valor = ValorDeAplicacao(valor);
}

void Aplicacao::setValor(double valor) {
    this->valor = valor;
}

void Aplicacao::setData(Data data) {
    this->data = data;
}

void Aplicacao::setData(std::string data) {
    this->data = Data(data);
}