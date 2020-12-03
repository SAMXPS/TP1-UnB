#include "Apresentacao/GerenciadorDePagina.h"
#include "Servicos/Controladoras/IncludeAll.h"

int main() {
    IServicos* servicos = new IServicos(
        MeuGerenciadorDeAplicacao::getInstance(),
        MeuGerenciadorDeConta::getInstance(),
        MeuGerenciadorDeProduto::getInstance(),
        MeuGerenciadorDeUsuario::getInstance()
    );

    GerenciadorDePagina* apresentacao = new GerenciadorDePagina(servicos);
    apresentacao->abrir();

    return 0;
}