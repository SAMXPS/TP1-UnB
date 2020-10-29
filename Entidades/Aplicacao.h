#ifndef APLICACAO_H_INCLUDED
#define APLICACAO_H_INCLUDED

// Implementação por Samuel James

#include "../Dominios/CodigoDeAplicacao.h"
#include "../Dominios/ValorDeAplicacao.h"
#include "../Dominios/Data.h"

#include <string>

/**
 * A entidade Aplicação é responsável pela organização, acesso e definição dos seguintes domínios:
 * CodigoDeAplicação
 * ValorDeAplicação
 * Data
 * Para que dessa forma o usuário consiga fazer uma aplicação
*/
class Aplicacao {

    private:
		CodigoDeAplicacao   codigo;
        ValorDeAplicacao    valor;
        Data                data;

    public:
        /**
         * Esse é o método construtor da entidade Aplicação 
        */ 
        Aplicacao(CodigoDeAplicacao codigo, ValorDeAplicacao valor, Data data) : 
            codigo(codigo), valor(valor), data(data) { }
        
        Aplicacao(std::string codigo, double valor, std::string data) : 
            Aplicacao(CodigoDeAplicacao(codigo), ValorDeAplicacao(valor), Data(data)) { }

        /**
         * Esse é o método que prove acesso a instâcia código
        */ 
        CodigoDeAplicacao getCodigo() {
            return this->codigo;
        }

        /**
         * Esse é o método que prove acesso a instâcia valor
        */ 

        ValorDeAplicacao getValor() {
            return this->valor;
        }

        /**
         * Esse é o método que prove acesso a instâcia data
        */ 

        Data getData() {
            return this->data;
        }

        /**
         * Esse é o método que define a instância código
        */ 

        void setCodigo(CodigoDeAplicacao codigo);

        /**
         * Esse é o método que define a instância valor
        */ 

        void setValor(ValorDeAplicacao valor);

        /**
         * Esse é o método que define a instância data
        */ 

        void setData(Data data);
};

#endif // APLICACAO_H_INCLUDED
