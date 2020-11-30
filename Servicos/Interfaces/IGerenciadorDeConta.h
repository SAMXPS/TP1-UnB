#ifndef IGERENCIADORDECONTA_H_INCLUDED
#define IGERENCIADORDECONTA_H_INCLUDED

#include "../../Entidades/IncludeAll.h" // Incluindo todas as entidades

class IGerenciadorDeConta {
    public:
        virtual Conta* carregarConta(const Usuario&usuario) = 0;
        virtual bool   definirConta(const Usuario&usuario, const Conta&conta) = 0;
};

#endif//IGERENCIADORDECONTA_H_INCLUDED