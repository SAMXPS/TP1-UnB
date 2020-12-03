#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

#include "../Dominios/CodigoDeBanco.h"
#include "../Dominios/CodigoDeAgencia.h"
#include "../Dominios/Numero.h"

#include <string>

/**
 * A entidade Conta é responsável pela organização, acesso e definição dos seguintes domínios:
 * CodigoDeBanco
 * CosdigoDeAgencia
 * Numero
 * Para que dessa forma seja possível ter acesso ao capital do usuário, 
 * e assim fazer uma aplicação em um produto de investimento
*/

class Conta {

    private:
		CodigoDeBanco       banco;
        CodigoDeAgencia     agencia;
        Numero              numero;

    public:

         /**
         * Esse é o método construtor da entidade Conta
        */ 

        Conta(CodigoDeBanco banco, CodigoDeAgencia agencia, Numero numero) : 
            banco(banco), agencia(agencia), numero(numero) { }
        
        Conta(std::string banco, std::string agencia, std::string numero) : 
            Conta(CodigoDeBanco(banco), CodigoDeAgencia(agencia), Numero(numero)){ }

        /**
         * Esse é o método que prove acesso a instâcia banco
        */ 

        CodigoDeBanco getBanco() const {
            return this->banco;
        }

        /**
         * Esse é o método que prove acesso a instâcia agencia
        */ 

        CodigoDeAgencia getAgencia() const {
            return this->agencia;
        }

        /**
         * Esse é o método que prove acesso a instâcia número
        */ 

        Numero getNumero() const {
            return this->numero;
        }

        /**
         * Esse é o método que define a instância banco
        */    

        void setBanco(CodigoDeBanco banco);

        void setBanco(std::string banco);

        /**
         * Esse é o método que define a instância agencia
        */

        void setAgencia(CodigoDeAgencia agencia);

        void setAgencia(std::string agencia);

        /**
         * Esse é o método que define a instância numero
        */

        void setNumero(Numero numero);

        void setNumero(std::string numero);
};

#endif // CONTA_H_INCLUDED
