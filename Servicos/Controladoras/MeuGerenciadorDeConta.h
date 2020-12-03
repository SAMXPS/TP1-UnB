#ifndef MEUGERENCIADORDECONTA_H_INCLUDED
#define MEUGERENCIADORDECONTA_H_INCLUDED
#include "../BancoSQL/GerenciadorBancoSQL.h"
#include "../Interfaces/IGerenciadorDeConta.h"

class MeuGerenciadorDeConta: public IGerenciadorDeConta {
    private:
        static MeuGerenciadorDeConta* instance;
        MeuGerenciadorDeConta(){};

    public:
        static MeuGerenciadorDeConta* getInstance();
        Conta* carregarConta(const Usuario&usuario);
        bool   definirConta(const Usuario&usuario, const Conta&conta);
};

#endif//MEUGERENCIADORDECONTA_H_INCLUDED