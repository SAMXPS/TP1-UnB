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

        void setNome(std::string nome);

        void setEndereco(Endereco endereco);

        void setEndereco(std::string endereco);

        void setCEP(CEP cep);

        void setCEP(long cep);

        void setCPF(CPF cpf);

        void setCPF(std::string cpf);

        void setSenha(Senha senha);
        
        void setSenha(std::string senha);

};

#endif // USUARIO_H_INCLUDED
