#include "../Paginas.h"
#include <string.h>

Pagina* PaginaInicial::mostrar(GerenciadorDePagina* apresentador) {
    char opcao;

    apresentador->escreveNoCentro("Bem vido ao Sistema de Investimentos");
    apresentador->escreveNoCentro("");

    while(true) {
        apresentador->escreveNoCentro("Opcoes disponiveis:");
        apresentador->escreveNoCentro("");
        apresentador->escreveNoCentro("- Ver Produtos   [1]");
        apresentador->escreveNoCentro("- Fazer Login    [2]");
        apresentador->escreveNoCentro("- Fazer Cadastro [3]");
        apresentador->escreveNoCentro("- Sair           [0]");
        apresentador->escreveNoCentro("");
        apresentador->escreveNoCentro("Opcao desejada: ");
        opcao = apresentador->lerInput()[0];

        switch (opcao){
            case '1':
                return NULL;
            case '2':
                return new PaginaLogin();
            case '3':
                return new FazerCadastro();
            case '0':
                return NULL;
            
            default:
                apresentador->limparTela();
                apresentador->escreveNoCentro("Opcao Invalida. Tente novamente.");
                apresentador->escreveNoCentro("");
                break;
        }
    }

    return NULL;
}