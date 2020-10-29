#ifndef APLICACAO_H_INCLUDED
#define APLICACAO_H_INCLUDED

#include "../Dominios/CodigoDeAplicacao.h"
#include "../Dominios/ValorDeAplicacao.h"
#include "../Dominios/Data.h"

#include <string>

class Aplicacao {

    private:
		CodigoDeAplicacao   codigo;
        ValorDeAplicacao    valor;
        Data                data;

    public:
        Aplicacao(CodigoDeAplicacao codigo, ValorDeAplicacao valor, Data data) : 
            codigo(codigo), valor(valor), data(data) { }
        
        Aplicacao(std::string codigo, double valor, std::string data) : 
            Aplicacao(CodigoDeAplicacao(codigo), ValorDeAplicacao(valor), Data(data)) { }

        CodigoDeAplicacao getCodigo() {
            return this->codigo;
        }

        ValorDeAplicacao getValor() {
            return this->valor;
        }

        Data getData() {
            return this->data;
        }

        void setCodigo(std::string codigo);

        void setCodigo(CodigoDeAplicacao codigo);

        void setValor(double valor);

        void setValor(ValorDeAplicacao valor);

        void setData(std::string data);

        void setData(Data data);
};

#endif // APLICACAO_H_INCLUDED
