#include "MeuGerenciadorDeUsuario.h"

MeuGerenciadorDeUsuario* MeuGerenciadorDeUsuario::instance = 0;

MeuGerenciadorDeUsuario* MeuGerenciadorDeUsuario::getInstance() {
    if (instance == nullptr)
        instance = new MeuGerenciadorDeUsuario();
    return instance;
}

Usuario* MeuGerenciadorDeUsuario::carregarUsuario(const std::string&cpf) {
    ResultadoSQL* resultado = GerenciadorBancoSQL::getInstance()->executar("SELECT * FROM USUARIOS WHERE CPF = '" + cpf + "'");
    Usuario* usuario = NULL;
    
    if (resultado != NULL && resultado->sucesso && resultado->resposta.size() > 0) {
        std::map<std::string, std::string> resposta = resultado->resposta.front();

        std::string nome = resposta["NOME"];
        std::string endereco = resposta["ENDERECO"];
        long cep = std::stol(resposta["CEP"]);
        std::string cpf = resposta["CPF"];
        std::string senha = resposta["SENHA"];
        
        usuario = new Usuario(nome, endereco, cep, cpf, senha);
    }

    delete resultado;
    return usuario;
}

Usuario* MeuGerenciadorDeUsuario::verificarSenha(const std::string&cpf, const std::string&senha) {
    Usuario* usuario = carregarUsuario(cpf);
    if (usuario != NULL) {
        if (usuario->getSenha().getValor() == senha) {
            return usuario;
        }
    }
    return NULL;
}

Usuario* MeuGerenciadorDeUsuario::verificarSenha(const CPF&cpf, const std::string&senha) {
    return verificarSenha(cpf.getValor(), senha);
}

bool MeuGerenciadorDeUsuario::cadastrarUsuario(const Usuario&usuario) {
    std::string query = "INSERT INTO USUARIOS(CPF, NOME, ENDERECO, CEP, SENHA) VALUES (";
    query += "'" + usuario.getCPF().getValor() + "', ";
    query += "'" + usuario.getNome().getValor() + "', ";
    query += "'" + usuario.getEndereco().getValor() + "', ";
    query += "'" + std::to_string(usuario.getCEP().getValor()) + "', ";
    query += "'" + usuario.getSenha().getValor() + "'";
    query += ")";
    ResultadoSQL* resultado = GerenciadorBancoSQL::getInstance()->executar(query);
    return (resultado != NULL && resultado->sucesso);
}

