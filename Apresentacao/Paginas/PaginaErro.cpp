#include "../Paginas.h"
#include <string.h>

Pagina* PaginaErro::mostrar(GerenciadorDePagina* apresentador) {
    apresentador->escreveNoCentro("Ocorreu um erro: " + erro);
    apresentador->escreveNoCentro("Aperte qualquer tecla para voltar.");
    apresentador->lerInput();
    return proximo;
}