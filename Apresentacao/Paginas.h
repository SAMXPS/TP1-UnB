#ifndef PAGINAS_H_INCLUDED
#define PAGINAS_H_INCLUDED
#include "GerenciadorDePagina.h"
#include "../Entidades/Usuario.h"

class GerenciadorDePagina;

// --------- Definição de Página -------- //

class Pagina {
    public:
        virtual Pagina* mostrar(GerenciadorDePagina* apresentador) = 0;
};

// --------- Definição de Páginas Públicas -------- //

class PaginaInicial : public Pagina {
    public:
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

class PaginaLogin : public Pagina {
    public:
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

class ListarProdutos : public Pagina {
    public:
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

class FazerCadastro : public Pagina {
    public:
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

class PaginaErro : public Pagina {
    private:
        Pagina* proximo;
        std::string erro;
    public:
        PaginaErro(Pagina* proximo, std::string erro) : proximo(proximo), erro(erro) {};
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

// --------- Definição de Páginas protegidas por Login -------- //

class PaginaInicialLogado : public Pagina {
    public:
        Usuario usuario;
        PaginaInicialLogado(Usuario usuario) : usuario(usuario) {}
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

class ApresentarDadosCadastro : public Pagina {
    public:
        Usuario usuario;
        ApresentarDadosCadastro(Usuario usuario) : usuario(usuario) {}
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

class ApresentarDadosContaCorrente : public Pagina {
    public:
        Usuario usuario;
        ApresentarDadosContaCorrente(Usuario usuario) : usuario(usuario) {}
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

class CadastrarNovoProduto : public Pagina {
    public:
        Usuario usuario;
        CadastrarNovoProduto(Usuario usuario) : usuario(usuario) {}
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

class DescadastrarProduto : public Pagina {
    public:
        Usuario usuario;
        DescadastrarProduto(Usuario usuario) : usuario(usuario) {}
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

#endif//PAGINA_H_INCLUDED
