#include "MeuGerenciadorDeProduto.h"

MeuGerenciadorDeProduto* MeuGerenciadorDeProduto::instance = 0;

MeuGerenciadorDeProduto* MeuGerenciadorDeProduto::getInstance() {
    if (instance == nullptr)
        instance = new MeuGerenciadorDeProduto();
    return instance;
}

std::list<Classe> MeuGerenciadorDeProduto::listarClasses() {
    std::list<Classe> lista;
    return lista;
}

Produto* MeuGerenciadorDeProduto::listarProduto(const Classe&classe) {
    return NULL;
}

bool MeuGerenciadorDeProduto::cadastrarProduto(const Produto&produto) {
    std::string query = "INSERT INTO PRODUTOS(CODIGO_DE_PRODUTO, CLASSE, EMISSOR, PRAZO, DATA, TAXA, HORARIO, VALOR_MINIMO)";
    query += "VALUES(";
    query += "'" + produto.getCodigo().getValor() + "', "; 
    query += "'" + produto.getClasse().getValor() + "', ";
    query += "'" + produto.getEmissor().getValor() + "', "; 
    query += "'" + std::to_string(produto.getPrazo().getValor()) + "', ";
    query += "'" + produto.getVecimento().getValor() + "', ";
    query += "'" + std::to_string(produto.getTaxa().getValor()) + "', "; 
    query += "'" + produto.getHorario().getValor() + "', "; 
    query += "'" + std::to_string(produto.getValorMinimo().getValor()) + "'";
    query += ")";
    ResultadoSQL* resultado = GerenciadorBancoSQL::getInstance()->executar(query);
    return (resultado != NULL && resultado->sucesso);
}

bool MeuGerenciadorDeProduto::descadastrar(const CodigoDeProduto&codigo) {
    std::string query = "DELETE FROM PRODUTOS WHERE CODIGO_DE_PRODUTO = ";
    query += "'" + codigo.getValor() + "'"; 
    ResultadoSQL* resultado = GerenciadorBancoSQL::getInstance()->executar(query);
    return (resultado != NULL && resultado->sucesso);
}