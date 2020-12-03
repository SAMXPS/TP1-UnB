#ifndef IGERENCIADORDEAPLICACAO_H_INCLUDED
#define IGERENCIADORDEAPLICACAO_H_INCLUDED

#include "../../Entidades/IncludeAll.h" // Incluindo todas as entidades

class IGerenciadorDeAplicacao {
    public:
        // Listar aplicacoes dado um usuario
        virtual Aplicacao* listarAplicacao(const Usuario&usuario) = 0;

        // Carregar produto dado uma aplicacao
        virtual Produto* carregaProduto(const Aplicacao&aplicacao) = 0;

        // Salvar aplicacao dado usuario, produto e aplicacao
        virtual bool salvaAplicacao(const Usuario&usuario, const Produto&produto, const Aplicacao&aplicacao) = 0;

        // Remover aplicacao
        virtual bool removeAplicacao(const CodigoDeAplicacao&codigo) = 0;
};

#endif//IGERENCIADORDEAPLICACAO_H_INCLUDED