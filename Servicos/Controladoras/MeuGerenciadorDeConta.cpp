#include "MeuGerenciadorDeConta.h"

MeuGerenciadorDeConta* MeuGerenciadorDeConta::instance = 0;

MeuGerenciadorDeConta* MeuGerenciadorDeConta::getInstance() {
    if (instance == nullptr)
        instance = new MeuGerenciadorDeConta();
    return instance;
}


Conta* MeuGerenciadorDeConta::carregarConta(const Usuario&usuario) {
    std::string cpf = usuario.getCPF().getValor();

    ResultadoSQL* resultado = GerenciadorBancoSQL::getInstance()->executar("SELECT * FROM CONTAS WHERE CPF = '" + cpf + "'");
    Conta* conta = NULL;
    
    if (resultado != NULL && resultado->sucesso && resultado->resposta.size() > 0) {
        std::map<std::string, std::string> resposta = resultado->resposta.front();

        std::string banco = resposta["CODIGO_DE_BANCO"];
        std::string agencia = resposta["CODIGO_DE_AGENCIA"];
        std::string numero = resposta["NUMERO"];
        
        conta = new Conta(banco, agencia, numero);
    }

    delete resultado;
    return conta;
}

bool MeuGerenciadorDeConta::definirConta(const Usuario&usuario, const Conta&conta) {
    std::string query = "INSERT INTO CONTAS(CPF, CODIGO_DE_BANCO, CODIGO_DE_AGENCIA, NUMERO) VALUES (";
    query += "'" + usuario.getCPF().getValor() + "', ";
    query += "'" + conta.getBanco().getValor() + "', ";
    query += "'" + conta.getAgencia().getValor() + "', ";
    query += "'" + conta.getNumero().getValor() + "'";
    query += ")";
    ResultadoSQL* resultado = GerenciadorBancoSQL::getInstance()->executar(query);
    return (resultado != NULL && resultado->sucesso);
}