#include "../Paginas.h"
#include <string.h>

Pagina* ListarProdutos::mostrar(GerenciadorDePagina* apresentador) {
    IGerenciadorDeProduto* gerenciador = apresentador->getServicos()->getGerenciadorDeProduto();

    apresentador->escreveNoCentro("Qual classe de produto voce gostaria de listar? ");
    apresentador->escreveNoCentro("Opcoes:");

    std::list<Classe> classes = gerenciador->listarClasses();
    
    for (std::list<Classe>::iterator it = classes.begin(); it != classes.end(); it++) {
        apresentador->escreveNoCentro("- " + it->getValor());
    }

    apresentador->escreveNoCentro("");
    apresentador->escreveNoCentro("Classe: ");
    std::string sclasse = apresentador->lerInput();

    apresentador->limparTela();

    Classe* classe;
    try {
        classe = new Classe(sclasse);
    } catch(...) {
        apresentador->escreveNoCentro("Opcao Invalida.");
        apresentador->escreveNoCentro("Tentar novamente? [S/N]");
        if (apresentador->lerInput()[0] == 'S') 
            return this;
    }

    std::list<Produto> produtos = gerenciador->listarProdutos(*classe);

    apresentador->escreveNoCentro("Produtos encontrados: " + std::to_string(produtos.size()));
    apresentador->escreveNoCentro("Aperte enter para visualizar.");
    apresentador->lerInput();
    int i = 0;

    for (std::list<Produto>::iterator it = produtos.begin(); it != produtos.end(); it++) {
        i++;
        apresentador->limparTela();
        apresentador->escreveNoCentro("Ver Produto (" + std::to_string(i) + "/" + std::to_string(produtos.size()) + ")");
        apresentador->escreveNoCentro("");
        apresentador->escreveNoCentro("Codigo: " + it->getCodigo().getValor());
        apresentador->escreveNoCentro("Emissor: " + it->getEmissor().getValor());
        apresentador->escreveNoCentro("Prazo: " + std::to_string(it->getPrazo().getValor()));
        apresentador->escreveNoCentro("Taxa: " + std::to_string(it->getTaxa().getValor()));
        apresentador->escreveNoCentro("Vencimento: " + it->getVecimento().getValor());
        apresentador->escreveNoCentro("Horario: " + it->getHorario().getValor());
        apresentador->escreveNoCentro("Valor Minimo: " + std::to_string(it->getValorMinimo().getValor()));
        apresentador->escreveNoCentro("");
        apresentador->escreveNoCentro("Aperte enter para continuar..");
        apresentador->lerInput();
    }

    apresentador->limparTela();
    apresentador->escreveNoCentro("Fim da visualizacao..");
    apresentador->escreveNoCentro("Aperte enter para continuar..");
    apresentador->lerInput();

    return new PaginaInicial();
}