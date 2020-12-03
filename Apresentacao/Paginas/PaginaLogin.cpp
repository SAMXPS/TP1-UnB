#include "PaginaLogin.h"
#include <string.h>
#include <curses.h>

// Exemplo de uso de funções da biblioteca PDCurses.

Pagina* PaginaLogin::mostrar(GerenciadorDePagina* apresentador) {
    std::string dado1;
    std::string dado2;

    apresentador->escreveNoCentro("Bem vido ao Sistema de Investimentos");
    apresentador->escreveNoCentro("");
    apresentador->escreveNoCentro("Escolha a opcao desejada");
    apresentador->escreveNoCentro("");
    apresentador->escreveNoCentro("Login[L], Cadastro[C]: ");
    dado1 = apresentador->lerInput();
    apresentador->escreveNoCentro("Senha: ");
    dado2 = apresentador->lerInput();
    apresentador->limparTela();
    apresentador->escreveNoCentro("Digitado CPF: " + dado1);
    apresentador->escreveNoCentro("Digitada senha: " + dado2);
    return NULL;
}

