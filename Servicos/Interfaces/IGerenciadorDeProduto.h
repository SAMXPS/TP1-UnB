#ifndef IGERENCIADORDEPRODUTO_H_INCLUDED
#define IGERENCIADORDEPRODUTO_H_INCLUDED

#include "../../Entidades/IncludeAll.h" // Incluindo todas as entidades
#include <list>

class IGerenciadorDeProduto {
    public:
        // Listar classes
        virtual std::list<Classe> listarClasses() = 0;
        // Listar produtos dado uma classe
        virtual Produto* listarProduto(const Classe&classe) = 0;
        // Cadastrar produto
        virtual bool cadastrarProduto(const Produto&produto) = 0;
        // Descadastrar produto
        virtual bool descadastrar(const CodigoDeProduto&codigo) = 0;
};

#endif//IGERENCIADORDEPRODUTO_H_INCLUDED