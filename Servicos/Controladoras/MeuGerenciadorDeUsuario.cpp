#include "MeuGerenciadorDeUsuario.h"

MeuGerenciadorDeUsuario* MeuGerenciadorDeUsuario::instance = 0;

Usuario* MeuGerenciadorDeUsuario::carregarUsuario(const std::string&cpf) {
    ResultadoSQL* resultado = GerenciadorBancoSQL::getInstance()->executar("SELECT * FROM USUARIOS WHERE CPF = " + cpf);
    if (resultado != NULL) {
        std::string nome = resultado->resposta["NOME"];
        std::string endereco = resultado->resposta["ENDERECO"];
        long cep = std::stol(resultado->resposta["CEP"]);
        std::string cpf = resultado->resposta["CPF"];
        std::string senha = resultado->resposta["SENHA"];
        return new Usuario(nome, endereco, cep, cpf, senha);
    }
    return NULL;
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
    return false;
}

