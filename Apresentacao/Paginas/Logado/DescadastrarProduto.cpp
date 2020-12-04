#include "../../Paginas.h"
#include <string.h>

Pagina* DescadastrarProduto::mostrar(GerenciadorDePagina* apresentador) {
    Pagina* next = new PaginaInicialLogado(usuario);

    CodigoDeProduto* codigo;

    apresentador->escreveNoCentro("Codigo do produto: ");
    
    try {
        codigo = new CodigoDeProduto(apresentador->lerInput());
    } catch (...) {
        apresentador->escreveNoCentro("Codigo invalido.");
        apresentador->lerInput();
        return next;
    }

    if (apresentador->getServicos()->getGerenciadorDeProduto()->descadastrar(*codigo)) {
        apresentador->escreveNoCentro("Produto descadastrado com sucesso.");
    } else {
        apresentador->escreveNoCentro("Nao foi possivel descadastrar o produto.");
    }
    apresentador->escreveNoCentro("Aperte enter para voltar.");
    apresentador->lerInput();

    return next;
}