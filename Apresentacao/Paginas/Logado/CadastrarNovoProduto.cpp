#include "../../Paginas.h"
#include <string.h>

Pagina* CadastrarNovoProduto::mostrar(GerenciadorDePagina* apresentador) {
    Pagina* next = new PaginaInicialLogado(usuario);

    std::string CODIGO_DE_PRODUTO, CLASSE, EMISSOR, PRAZO, DATA, TAXA, HORARIO, VALOR_MINIMO;

    apresentador->escreveNoCentro("Cadastrar novo Produto");
    apresentador->escreveNoCentro("");
    apresentador->escreveNoCentro("Por favor, preencha os dados a seguir.");
    apresentador->escreveNoCentro("");

    apresentador->escreveNoCentro("CODIGO_DE_PRODUTO: ");
    CODIGO_DE_PRODUTO = apresentador->lerInput();

    apresentador->escreveNoCentro("CLASSE: ");
    CLASSE = apresentador->lerInput();

    apresentador->escreveNoCentro("EMISSOR: ");
    EMISSOR = apresentador->lerInput();

    apresentador->escreveNoCentro("PRAZO: ");
    PRAZO = apresentador->lerInput();

    apresentador->escreveNoCentro("DATA DE VENCIMENTO: ");
    DATA = apresentador->lerInput();

    apresentador->escreveNoCentro("TAXA: ");
    TAXA = apresentador->lerInput();

    apresentador->escreveNoCentro("HORARIO: ");
    HORARIO = apresentador->lerInput();

    apresentador->escreveNoCentro("VALOR_MINIMO: ");
    VALOR_MINIMO = apresentador->lerInput();

    Produto* produto;
    try {
        produto = new Produto(CODIGO_DE_PRODUTO, CLASSE, EMISSOR, std::stoi(PRAZO), DATA, std::stod(TAXA), HORARIO, std::stoi(VALOR_MINIMO));
    } catch (const std::invalid_argument&err) {
        return new PaginaErro(next, err.what());
    } catch (...) {
        return new PaginaErro(next, "erro desconhecido.");
    }

    apresentador->limparTela();

    if (apresentador->getServicos()->getGerenciadorDeProduto()->cadastrarProduto(*produto)) {
        apresentador->escreveNoCentro("Produto cadastrado com sucesso.");
    } else {
        apresentador->escreveNoCentro("Produto nao foi cadastrado. Algum problema no SQLite.");
    }

    apresentador->escreveNoCentro("");
    apresentador->escreveNoCentro("Aperte enter para voltar");
    apresentador->lerInput();

    return next;
}


