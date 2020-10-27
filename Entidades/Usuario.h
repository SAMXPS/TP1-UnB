#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

#include "../Dominios/Nome.h"
#include "../Dominios/Endereco.h"
#include "../Dominios/CEP.h"
#include "../Dominios/CPF.h"
#include "../Dominios/Senha.h"

#include <string>

class Usuario {

    private:
        Nome nome;
        Endereco endereco;
        CEP cep;
        CPF cpf;
        Senha senha;

    public:
        Usuario(Nome nome, Endereco endereco, CEP cep, CPF cpf, Senha senha) :
            nome(nome), endereco(endereco), cep(cep), cpf(cpf), senha(senha) { }

        Usuario(std::string nome, std::string endereco, long cep, std::string cpf, std::string senha) :
            Usuario(Nome(nome), Endereco(endereco), CEP(cep), CPF(cpf), Senha(senha)) { }

        Nome getNome() {
            return this->nome;
        }

        Endereco getEndereco() {
            return this->endereco;
        }

        CEP getCEP() {
            return this->cep;
        }

        CPF getCPF() {
            return this->cpf;
        }

        Senha getSenha() {
            return this->senha;
        }

        void setNome(Nome nome);

        void setEndereco(Endereco endereco);

        void setCEP(CEP cep);

        void setCPF(CPF cpf);

        void setSenha(Senha senha);

};

#endif // USUARIO_H_INCLUDED
