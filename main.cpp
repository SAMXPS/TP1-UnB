#include "Tests/TUAplicacao.h"
#include "Tests/TUConta.h"

// Mostrar ou não as mensagens de teste.
const bool VERBOSE = true;

int main() {
    TUAplicacao().testar(VERBOSE);
    TUConta().testar(VERBOSE);

    return 0;
}
