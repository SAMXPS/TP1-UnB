#include "../Paginas.h"
#include <string.h>

Pagina* PaginaLogin::mostrar(GerenciadorDePagina* apresentador) {
    char opcao;
    std::string cpf, senha;

    apresentador->escreveNoCentro("Fazer Login");
    apresentador->escreveNoCentro("");
    apresentador->escreveNoCentro("CPF: ");
    cpf = apresentador->lerInput();

    try {
        CPF teste(cpf);
    } catch(...) {
        apresentador->limparTela();
        apresentador->escreveNoCentro("CPF invalido.");
        apresentador->escreveNoCentro("Tentar novamente? [S/N]: ");
        std::string opcao = apresentador->lerInput();
        if (opcao == "S")
            return this;
        else
            return new PaginaInicial();
    }

    apresentador->escreveNoCentro("Senha: ");
    senha = apresentador->lerInput();

    Usuario* usuario = apresentador->getServicos()->getGerenciadorDeUsuario()->verificarSenha(cpf, senha);

    if (usuario == NULL) {
        apresentador->limparTela();
        apresentador->escreveNoCentro("Usuário ou Senha incorretos.");
        apresentador->escreveNoCentro("Tentar novamente? [S/N]: ");
        std::string opcao = apresentador->lerInput();
        if (opcao == "S")
            return this;
        else
            return new PaginaInicial();
    } else {
        apresentador->limparTela();
        apresentador->escreveNoCentro("Login bem sucedido!");
        apresentador->escreveNoCentro("Aperte qualquer tecla para continuar...");
        apresentador->lerInput();
        return new PaginaInicialLogado(*usuario);
    }
}


