#ifndef MEUGERENCIADORDEUSUARIO_H_INCLUDED
#define MEUGERENCIADORDEUSUARIO_H_INCLUDED
#include "../BancoSQL/GerenciadorBancoSQL.h"
#include "../Interfaces/IGerenciadorDeUsuario.h"

class MeuGerenciadorDeUsuario : public IGerenciadorDeUsuario {
    public:
        Usuario* verificarSenha(const CPF&cpf, const std::string&senha);
        bool     cadastrarUsuario(const Usuario&usuario);
};

#endif//MEUGERENCIADORDEUSUARIO_H_INCLUDED