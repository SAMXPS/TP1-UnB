#include "GerenciadorBancoSQL.h"

GerenciadorBancoSQL* GerenciadorBancoSQL::instance = nullptr;

GerenciadorBancoSQL* GerenciadorBancoSQL::getInstance() {
    if (instance == NULL)
        instance = new GerenciadorBancoSQL();
    return instance;
}

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
    ResultadoSQL* resultado = new ResultadoSQL();

    char* mensagemErro;

    if(sqlite3_exec(database, query.c_str(), callback, resultado, &mensagemErro) == SQLITE_OK){
        resultado->sucesso = true;
    } else {
        resultado->sucesso = false;
        resultado->mensagemErro = mensagemErro;
        sqlite3_free(mensagemErro);
    }
    
    desconectar();

    return resultado;
}

int GerenciadorBancoSQL::callback(void *_resultado, int argc, char **valorColuna, char **nomeColuna){
    ResultadoSQL* resultado = (ResultadoSQL*) _resultado;
    
    std::map<std::string, std::string> row;
    int i;
    for(i=0; i<argc; i++){
        row[nomeColuna[i]] = valorColuna[i] ? valorColuna[i]: "NULL";
    }
    resultado->resposta.push_back(row);

    return 0;
}