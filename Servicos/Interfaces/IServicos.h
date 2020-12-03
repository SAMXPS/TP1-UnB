#ifndef ISERVICOS_H_INCLUDED
#define ISERVICOS_H_INCLUDED

#include "IGerenciadorDeAplicacao.h"
#include "IGerenciadorDeConta.h"
#include "IGerenciadorDeProduto.h"
#include "IGerenciadorDeUsuario.h"

class IServicos {
    private:
        IGerenciadorDeAplicacao* gerenciadorDeAplicacao;
        IGerenciadorDeConta*     gerenciadorDeConta;
        IGerenciadorDeProduto*   gerenciadorDeProduto;
        IGerenciadorDeUsuario*   gerenciadorDeUsuario;

    public:
        IServicos(IGerenciadorDeAplicacao* gerenciadorDeAplicacao,
                  IGerenciadorDeConta* gerenciadorDeConta, 
                  IGerenciadorDeProduto* gerenciadorDeProduto,  
                  IGerenciadorDeUsuario* gerenciadorDeUsuario) :
                    gerenciadorDeAplicacao(gerenciadorDeAplicacao), 
                    gerenciadorDeConta(gerenciadorDeConta), 
                    gerenciadorDeProduto(gerenciadorDeProduto), 
                    gerenciadorDeUsuario(gerenciadorDeUsuario) {}

        IGerenciadorDeConta* getGerenciadorDeConta() {
            return this->gerenciadorDeConta;
        }

        IGerenciadorDeProduto* getGerenciadorDeProduto() {
            return this->gerenciadorDeProduto;
        }

        IGerenciadorDeAplicacao* getGerenciadorDeAplicacao() {
            return this->gerenciadorDeAplicacao;
        }

        IGerenciadorDeUsuario* getGerenciadorDeUsuario() {
            return this->gerenciadorDeUsuario;
        }
};

#endif//ISERVICOS