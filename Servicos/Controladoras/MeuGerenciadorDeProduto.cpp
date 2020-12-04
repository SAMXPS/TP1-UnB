#include "MeuGerenciadorDeProduto.h"

MeuGerenciadorDeProduto* MeuGerenciadorDeProduto::instance = 0;

MeuGerenciadorDeProduto* MeuGerenciadorDeProduto::getInstance() {
    if (instance == nullptr)
        instance = new MeuGerenciadorDeProduto();
    return instance;
}

std::list<Classe> MeuGerenciadorDeProduto::listarClasses() {
    std::list<Classe> lista;
    // Texto CDB, LCA, LCI, LF ou LC.
    lista.push_back(Classe("CDB"));
    lista.push_back(Classe("LCA"));
    lista.push_back(Classe("LCI"));
    lista.push_back(Classe("LF"));
    lista.push_back(Classe("LC"));
    return lista;
}

std::list<Produto> MeuGerenciadorDeProduto::listarProdutos(const Classe&classe) {
    std::list<Produto> lista;
    
    std::string query = "SELECT * FROM PRODUTOS WHERE CLASSE = '" + classe.getValor() + "'";

    ResultadoSQL* resultado = GerenciadorBancoSQL::getInstance()->executar(query);
    if (resultado != NULL && resultado->sucesso) {
        std::list<std::map<std::string, std::string>>::iterator it;
        for (it = resultado->resposta.begin(); it != resultado->resposta.end(); it++){
            try {
                std::string codigo = (*it)["CODIGO_DE_PRODUTO"];
                std::string classe = (*it)["CLASSE"];
                std::string emissor = (*it)["EMISSOR"]; 
                int prazo = std::stoi((*it)["PRAZO"]);
                std::string vencimento = (*it)["DATA"];
                double taxa = std::stod((*it)["TAXA"]);
                std::string horario = (*it)["HORARIO"]; 
                int valor = std::stoi((*it)["VALOR_MINIMO"]);

                lista.push_back(Produto(codigo, classe, emissor, prazo, vencimento, taxa, horario, valor));
            }
            catch (...) {

            }
        }
    }

    return lista;
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