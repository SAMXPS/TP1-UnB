#ifndef MEUGERENCIADORDEUSUARIO_H_INCLUDED
#define MEUGERENCIADORDEUSUARIO_H_INCLUDED
#include "../BancoSQL/GerenciadorBancoSQL.h"
#include "../Interfaces/IGerenciadorDeUsuario.h"

class MeuGerenciadorDeUsuario : public IGerenciadorDeUsuario {
    private:
        static MeuGerenciadorDeUsuario* instance;
        Usuario* carregarUsuario(const std::string&cpf);
        MeuGerenciadorDeUsuario(){};

    public:
        static MeuGerenciadorDeUsuario* getInstance();
        Usuario* verificarSenha(const std::string&cpf, const std::string&senha);
        Usuario* verificarSenha(const CPF&cpf, const std::string&senha);
        bool     cadastrarUsuario(const Usuario&usuario);
};

#endif//MEUGERENCIADORDEUSUARIO_H_INCLUDED
