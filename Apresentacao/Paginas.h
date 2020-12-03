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

class VerProdutos : public Pagina {
    public:
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

// --------- Definição de Páginas protegidas por Login -------- //

class PaginaInicialLogado : public Pagina {
    public:
        Usuario usuario;
        PaginaInicialLogado(Usuario usuario) : usuario(usuario) {}
        Pagina* mostrar(GerenciadorDePagina* apresentador);
};

#endif//PAGINA_H_INCLUDED
