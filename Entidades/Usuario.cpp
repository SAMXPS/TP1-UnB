#include "Usuario.h"

void Usuario::setNome(Nome nome) {
    this->nome = nome;
}

void Usuario::setNome(std::string nome) {
    this->nome = Nome(nome);
}

void Usuario::setEndereco(Endereco endereco) {
    this->endereco = endereco;
}

void Usuario::setEndereco(std::string endereco) {
    this->endereco = Endereco(endereco);
}

void Usuario::setCEP(CEP cep) {
    this->cep = cep;
}

void Usuario::setCEP(long cep) {
    this->cep = CEP(cep);
}

void Usuario::setCPF(CPF cpf) {
    this->cpf = cpf;
}

void Usuario::setCPF(std::string cpf) {
    this->cpf = CPF(cpf);
}

void Usuario::setSenha(Senha senha) {
    this->senha = senha;
}

void Usuario::setSenha(std::string senha) {
    this->senha = Senha(senha);
}
        
