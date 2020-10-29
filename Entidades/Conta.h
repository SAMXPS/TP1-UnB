#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

#include "../Dominios/CodigoDeBanco.h"
#include "../Dominios/CodigoDeAgencia.h"
#include "../Dominios/Numero.h"

#include <string>

class Conta {

    private:
		CodigoDeBanco       banco;
        CodigoDeAgencia     agencia;
        Numero              numero;

    public:
        Conta(CodigoDeBanco banco, CodigoDeAgencia agencia, Numero numero) : 
            banco(banco), agencia(agencia), numero(numero) { }
        
        Conta(std::string banco, std::string agencia, std::string numero) : 
            Conta(CodigoDeBanco(banco), CodigoDeAgencia(agencia), Numero(numero)){ }

        CodigoDeBanco getBanco() {
            return this->banco;
        }

        CodigoDeAgencia getAgencia() {
            return this->agencia;
        }

        Numero getNumero() {
            return this->numero;
        }

        void setBanco(CodigoDeBanco banco);

        void setBanco(std::string banco);

        void setAgencia(CodigoDeAgencia agencia);

        void setAgencia(std::string agencia);

        void setNumero(Numero numero);

        void setNumero(std::string numero);
};

#endif // CONTA_H_INCLUDED
