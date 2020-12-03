#ifndef MEUGERENCIADORDEPRODUTO_H_INCLUDED
#define MEUGERENCIADORDEPRODUTO_H_INCLUDED
#include "../BancoSQL/GerenciadorBancoSQL.h"
#include "../Interfaces/IGerenciadorDeProduto.h"

class MeuGerenciadorDeProduto: public IGerenciadorDeProduto {
    private:
        static MeuGerenciadorDeProduto* instance;
        MeuGerenciadorDeProduto(){};

    public:
        static MeuGerenciadorDeProduto* getInstance();
        std::list<Classe> listarClasses();
        Produto* listarProduto(const Classe&classe);
        bool cadastrarProduto(const Produto&produto);
        bool descadastrar(const CodigoDeProduto&codigo);
};


#endif//MEUGERENCIADORDEPRODUTO_H_INCLUDED