#ifndef MEUGERENCIADORDEAPLICACAO_H_INCLUDED
#define MEUGERENCIADORDEAPLICACAO_H_INCLUDED
#include "../BancoSQL/GerenciadorBancoSQL.h"
#include "../Interfaces/IGerenciadorDeAplicacao.h"

class MeuGerenciadorDeAplicacao : public IGerenciadorDeAplicacao {
    private:
        static MeuGerenciadorDeAplicacao* instance;
        MeuGerenciadorDeAplicacao() {};

    public:
        static MeuGerenciadorDeAplicacao* getInstance();
        Aplicacao* listarAplicacao(const Usuario&usuario);
        Produto* carregaProduto(const Aplicacao&aplicacao);
        bool salvaAplicacao(const Usuario&usuario, const Produto&produto, const Aplicacao&aplicacao);
        bool removeAplicacao(const CodigoDeAplicacao&codigo);
};

#endif//MEUGERENCIADORDEAPLICACAO_H_INCLUDED