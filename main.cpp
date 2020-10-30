#include "Tests/TUAplicacao.h"
#include "Tests/TUConta.h"
#include "Tests/TUProduto.h"
#include "Tests/TUUsuario.h"

// Mostrar ou não as mensagens de teste.
const bool VERBOSE = true;

int main() {
    TUAplicacao().testar(VERBOSE);
    TUConta().testar(VERBOSE);
    TUProduto().testar(VERBOSE);
    TUUsuario().testar(VERBOSE);

    return 0;
}
