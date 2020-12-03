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

        IGerenciadorDeConta* getGerenciadorDeConta() const {
            return this->gerenciadorDeConta;
        }

        IGerenciadorDeProduto* getGerenciadorDeProduto() const {
            return this->gerenciadorDeProduto;
        }

        IGerenciadorDeAplicacao* getGerenciadorDeAplicacao() const {
            return this->gerenciadorDeAplicacao;
        }

        IGerenciadorDeUsuario* getGerenciadorDeUsuario() const {
            return this->gerenciadorDeUsuario;
        }
};

#endif//ISERVICOS