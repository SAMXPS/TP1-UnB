#ifndef GERENCIADOR_DE_PAGINA_H_INCLUDED
#define GERENCIADOR_DE_PAGINA_H_INCLUDED

#include "../Servicos/Interfaces/IServicos.h"
#include "Paginas.h"

class GerenciadorDePagina {
    private:
        const static int READ_BUFFER_SIZE = 128;
        char readBuffer[READ_BUFFER_SIZE];

        const IServicos* servicos;
        int linhas, colunas, currentLine;

        void fechar();
        void carregarDimensoes();

    public:
        GerenciadorDePagina(IServicos* servicos) : servicos(servicos) {}

        void executar();
        void limparTela();
        void escreveNoCentro(std::string mensagem);
        std::string lerInput();

        int getLinhas() const {
            return linhas;
        }

        int getColunas() const {
            return colunas;
        }

        const IServicos* getServicos() const {
            return servicos;
        }
};

#endif//GERENCIADOR_DE_PAGINA_H_INCLUDED