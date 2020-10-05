#include "Tests/TU.h"

#include "Tests/TUCEP.h"
#include "Tests/TUClasse.h"
#include "Tests/TUCodigoDeAgencia.h"
#include "Tests/TUCodigoDeAplicacao.h"
#include "Tests/TUCodigoDeBanco.h"
#include "Tests/TUCodigoDeProduto.h"
#include "Tests/TUCPF.h"
#include "Tests/TUData.h"
#include "Tests/TUEmissor.h"
#include "Tests/TUEndereco.h"
#include "Tests/TUHorario.h"
#include "Tests/TUNome.h"
#include "Tests/TUNumero.h"
#include "Tests/TUPrazo.h"
#include "Tests/TUSenha.h"
#include "Tests/TUTaxa.h"
#include "Tests/TUValorDeAplicacao.h"
#include "Tests/TUValorMinimo.h"

#include <iostream>

using namespace std;

int main() {

    TU* tests[] = {
        new TUCEP(),
        new TUClasse(),
        //new TUCodigoDeAgencia(),
        //new TUCodigoDeAplicacao(),
        //new TUCodigoDeBanco(),
        //new TUCodigoDeProduto(),
        //new TUCPF(),
        //new TUData(),
        //new TUEmissor(),
        //new TUEndereco(),
        //new TUHorario(),
        //new TUNome(),
        //new TUNumero(),
        //new TUPrazo(),
        //new TUSenha(),
        //new TUTaxa(),
        //new TUValorDeAplicacao(),
        //new TUValorMinimo(),
    };

    for (int i = 0; i < sizeof(tests); i++) {
        cout << "temos " << i << endl;
    }

    return 1;
}
