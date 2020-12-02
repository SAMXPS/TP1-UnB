#include <cstdlib>
#include <iostream>

#include "UnidadeControladoras.h"

/*

Exemplos de usuários e senhas cadastradas em teste.db

Matrícula : 12345
Senha     : 54321

Matrícula : 13579
Senha     : 12345

*/

using namespace std;

int main(int argc, char *argv[])
{
    // Instancia e executa a autenticação.
    CntrAutenticacao cntrA;
    cntrA.executar();

    // Instancia e executa a navegação.
    CntrNavegacao cntrB;
    cntrB.executar();

    system("PAUSE");
    return EXIT_SUCCESS;
}
