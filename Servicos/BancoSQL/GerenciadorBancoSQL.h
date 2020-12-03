#ifndef GERENCIADORBANCOSQL_H_INCLUDED
#define GERENCIADORBANCOSQL_H_INCLUDED

#include "sqlite3.h"
#include <list>
#include <map>
#include <string>

class ResultadoSQL {
    public:
        bool sucesso = false;
        std::string mensagemErro;
        std::map<std::string, std::string> resposta;
};

class ErroSQL {
    private:
        std::string mensagem;
    public:
        ErroSQL(std::string erro) {
            this->mensagem = erro;
        }
        std::string what() {
            return mensagem;
        }
};

class GerenciadorBancoSQL {
    private:
        static GerenciadorBancoSQL* instance;
        const char *nomeBancoDados;
        sqlite3 *database;
        static int callback(void *, int, char **, char **);
        static ResultadoSQL* resultado;

        void conectar();
        void desconectar();

        GerenciadorBancoSQL() {
            nomeBancoDados = "Servicos/BancoSQL/database.db";
        }
    public:
        // Implementação de Singleton
        static GerenciadorBancoSQL* getInstance() {
            if (instance == NULL)
                instance = new GerenciadorBancoSQL();
            return instance;
        }

        ResultadoSQL* executar(std::string query);
};


#endif//GERENCIADORBANCOSQL_H_INCLUDED
