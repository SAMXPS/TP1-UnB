#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

#include "../Dominios/Nome.h"
#include "../Dominios/Endereco.h"
#include "../Dominios/CEP.h"
#include "../Dominios/CPF.h"
#include "../Dominios/Senha.h"

#include <string>

/**
 * A entidade Produto é responsável pela organização, acesso e definição dos seguintes domínios:
 * Nome
 * Endereço 
 * CEP
 * CPF
 * Senha
 * Para que dessa forma o usuário possa se cadastrar
*/

class Usuario {

    private:
        Nome nome;
        Endereco endereco;
        CEP cep;
        CPF cpf;
        Senha senha;

    public:

        /**
         * Esse é o método construtor da entidade Usuario 
        */ 

        Usuario(Nome nome, Endereco endereco, CEP cep, CPF cpf, Senha senha) :
            nome(nome), endereco(endereco), cep(cep), cpf(cpf), senha(senha) { }

        Usuario(std::string nome, std::string endereco, long cep, std::string cpf, std::string senha) :
            Usuario(Nome(nome), Endereco(endereco), CEP(cep), CPF(cpf), Senha(senha)) { }

        /**
         * Esse é o método que prove acesso a instâcia nome
        */ 

        Nome getNome() const {
            return this->nome;
        }

        /**
         * Esse é o método que prove acesso a instâcia endereço
        */ 

        Endereco getEndereco() const {
            return this->endereco;
        }

        /**
         * Esse é o método que prove acesso a instâcia cep
        */ 

        CEP getCEP() const {
            return this->cep;
        }

        /**
         * Esse é o método que prove acesso a instâcia cpf
        */ 

        CPF getCPF() const {
            return this->cpf;
        }

        /**
         * Esse é o método que prove acesso a instâcia senha
        */ 

        Senha getSenha() const {
            return this->senha;
        }

        /**
         * Esse é o método que define a instância nome
        */

        void setNome(Nome nome);

        void setNome(std::string nome);

        /**
         * Esse é o método que define a instância endereço
        */

        void setEndereco(Endereco endereco);

        void setEndereco(std::string endereco);

        /**
         * Esse é o método que define a instância cep
        */

        void setCEP(CEP cep);

        void setCEP(long cep);

        /**
         * Esse é o método que define a instância cpf
        */

        void setCPF(CPF cpf);

        void setCPF(std::string cpf);

        /**
         * Esse é o método que define a instância senha
        */
       
        void setSenha(Senha senha);
        
        void setSenha(std::string senha);

};

#endif // USUARIO_H_INCLUDED
