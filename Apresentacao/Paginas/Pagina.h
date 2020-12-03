#ifndef PAGINA_H_INCLUDED
#define PAGINA_H_INCLUDED
#include "../GerenciadorDePagina.h"

class GerenciadorDePagina;

class Pagina {
    public:
        virtual Pagina* mostrar(GerenciadorDePagina* apresentador) = 0;
};

#endif//PAGINA_H_INCLUDED