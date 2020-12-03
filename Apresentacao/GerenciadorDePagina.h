#ifndef GERENCIADOR_DE_PAGINA_H_INCLUDED
#define GERENCIADOR_DE_PAGINA_H_INCLUDED

#include "../Servicos/Interfaces/IServicos.h"
#include "Paginas/PaginaLogin.h"

class GerenciadorDePagina {
    private:
        IServicos* servicos;
    public:
        GerenciadorDePagina(IServicos* servicos) : servicos(servicos) {}
        void abrir();
};

#endif//GERENCIADOR_DE_PAGINA_H_INCLUDED