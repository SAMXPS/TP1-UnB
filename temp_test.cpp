#include <iostream>
#include "Servicos/Controladoras/MeuGerenciadorDeUsuario.h"
#include "Servicos/Controladoras/MeuGerenciadorDeConta.h"

int main() {
    try {
        //Usuario* user = new Usuario("Paulo Teste", "Testelandia", 70123640, "776.272.623-30", "123456");
        //MeuGerenciadorDeUsuario::getInstance()->cadastrarUsuario(*user);

        Usuario* usuario = MeuGerenciadorDeUsuario::getInstance()->verificarSenha("056.283.311-04", "123456");
        if (usuario != NULL) {
            std::cout << "Usuario: " << usuario->getNome().getValor() << std::endl;
            Conta* conta = MeuGerenciadorDeConta::getInstance()->carregarConta(*usuario);
            if (conta != NULL) {
                std::cout << "Conta: " << conta->getNumero().getValor() << std::endl;
            }
        } else {
            std::cout << "User not found, my friend" << std::endl;
        }

        //std::cout << Numero::criaValor("123457");


    } catch (const std::exception &exc) {
        // catch anything thrown within try block that derives from std::exception
        std::cerr << "Erro: " << exc.what();
    } catch (...) {
        std::cout << "ErroSQL: ";
    }

    return 0;
}
