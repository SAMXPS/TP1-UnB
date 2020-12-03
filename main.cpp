#include <iostream>
#include "Servicos/Controladoras/MeuGerenciadorDeUsuario.h"
#include "Servicos/Interfaces/IGerenciadorDeUsuario.h"

int main() {
    try {
        Usuario* user = new Usuario("Paulo Teste", "Testelandia", 70123640, "776.272.623-30", "123456");
        MeuGerenciadorDeUsuario::getInstance()->cadastrarUsuario(*user);

        Usuario* usuario = MeuGerenciadorDeUsuario::getInstance()->verificarSenha("776.272.623-30", "123456");
        if (usuario != NULL) {
            std::cout << usuario->getNome().getValor();
        } else {
            std::cout << "User not found, my friend";
        }

    } catch (const std::exception &exc) {
        // catch anything thrown within try block that derives from std::exception
        std::cerr << "Erro: " << exc.what();
    } catch (...) {
        std::cout << "ErroSQL: ";
    }

    return 0;
}
