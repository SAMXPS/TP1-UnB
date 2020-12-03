#include "../../Paginas.h"
#include <string.h>

Pagina* PaginaInicialLogado::mostrar(GerenciadorDePagina* apresentador) {
    char opcao;

    apresentador->escreveNoCentro("Bem vindo " + usuario.getNome().getValor());
    apresentador->escreveNoCentro("");

    while(true) {
        apresentador->escreveNoCentro("Opcoes disponiveis:");
        apresentador->escreveNoCentro("");
        apresentador->escreveNoCentro("- Apresentar dados do seu cadastro                   [1]");
        apresentador->escreveNoCentro("- Apresentar dados da sua conta corrente             [2]");
        apresentador->escreveNoCentro("- Cadastrar produto de investimento                  [3]");
        apresentador->escreveNoCentro("- Descadastrar produto de investimento               [4]");
        apresentador->escreveNoCentro("- Realizar aplicacao em produto de investimento      [5]");
        apresentador->escreveNoCentro("- Listar suas aplicacoes em produtos de investimento [6]");
        apresentador->escreveNoCentro("- Sair                                               [0]");
        apresentador->escreveNoCentro("");
        apresentador->escreveNoCentro("Opcao desejada: ");
        opcao = apresentador->lerInput()[0];

        switch (opcao){
            case '1':
                return NULL;
            case '0':
                return new PaginaInicial();
            
            default:
                apresentador->limparTela();
                apresentador->escreveNoCentro("Opcao Invalida. Tente novamente.");
                apresentador->escreveNoCentro("");
                break;
        }
    }

    return NULL;
}