#include "GerenciadorBancoSQL.h"

ResultadoSQL* GerenciadorBancoSQL::resultado = nullptr;
GerenciadorBancoSQL* GerenciadorBancoSQL::instance = nullptr;

void GerenciadorBancoSQL::conectar() {
    if (sqlite3_open(nomeBancoDados, &database) != SQLITE_OK)
        throw ErroSQL("Erro ao conectar no banco de dados.");
}

void GerenciadorBancoSQL::desconectar() {
    if (sqlite3_close(database) != SQLITE_OK)
        throw ErroSQL("Erro ao desconectar do banco de dados.");
}

ResultadoSQL* GerenciadorBancoSQL::executar(std::string query) {
    conectar();
    resultado = new ResultadoSQL();

    char* mensagemErro;

    if(sqlite3_exec(database, query.c_str(), callback, 0, &mensagemErro) == SQLITE_OK){
        resultado->sucesso = true;
    } else {
        resultado->sucesso = false;
        resultado->mensagemErro = mensagemErro;
        sqlite3_free(mensagemErro);
    }
    
    desconectar();

    return resultado;
}

int GerenciadorBancoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna){
    NotUsed=0;
    resultado->resposta.clear();
    int i;
    for(i=0; i<argc; i++){
        resultado->resposta[nomeColuna[i]] = valorColuna[i] ? valorColuna[i]: "NULL";
    }
    return 0;
}