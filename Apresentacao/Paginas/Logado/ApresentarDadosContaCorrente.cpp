#include "../../Paginas.h"
#include <string.h>

Pagina* ApresentarDadosContaCorrente::mostrar(GerenciadorDePagina* apresentador) {
    Pagina* next = new PaginaInicialLogado(usuario);
    try {
        Conta* conta = apresentador->getServicos()->getGerenciadorDeConta()->carregarConta(usuario);
        if (conta == NULL) {
            return new PaginaErro(next, "sua conta nao foi encontrada.");
        }
        
        apresentador->escreveNoCentro("Dados - Conta Corrente");
        apresentador->escreveNoCentro("");
        apresentador->escreveNoCentro("Codigo de banco: " + conta->getBanco().getValor());
        apresentador->escreveNoCentro("Codigo de agencia: " + conta->getAgencia().getValor());
        apresentador->escreveNoCentro("Numero da conta: " + conta->getNumero().getValor());
        apresentador->escreveNoCentro("");
        apresentador->escreveNoCentro("Aperte enter para voltar...");

        apresentador->lerInput();
    } catch (...) {
        return new PaginaErro(next, "nao foi possivel apresentar os dados da sua conta.");
    }
    return next;
}