#include "Servicos/Controladoras/IncludeAll.h"
#include <iostream>

int main() {
    Usuario* usuario = MeuGerenciadorDeUsuario::getInstance()->verificarSenha("056.283.311-04", "123456");

    if (usuario != NULL) {
        std::cout << usuario->getNome().getValor();
    }

    return 0;
}