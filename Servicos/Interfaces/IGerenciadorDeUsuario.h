#ifndef IGERENCIADORDEUSUARIO_H_INCLUDED
#define IGERENCIADORDEUSUARIO_H_INCLUDED

#include "../../Entidades/IncludeAll.h" // Incluindo todas as entidades

class IGerenciadorDeUsuario {
    public:
        virtual Usuario* verificarSenha(const std::string&cpf, const std::string&senha) = 0;
        virtual Usuario* verificarSenha(const CPF&cpf, const std::string&senha) = 0;
        virtual bool     cadastrarUsuario(const Usuario&usuario) = 0;
};

#endif//IGERENCIADORDEUSUARIO_H_INCLUDED