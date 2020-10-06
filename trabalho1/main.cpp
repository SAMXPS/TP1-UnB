#include "Tests/TU.h"

#include "Tests/TUCEP.h"                // $CEP$
#include "Tests/TUClasse.h"             // $Classe$
//#include "Tests/TUCodigoDeAgencia.h"    // $CodigoDeAgencia$
#include "Tests/TUCodigoDeAplicacao.h"  // $CodigoDeAplicacao$
//#include "Tests/TUCodigoDeBanco.h"      // $CodigoDeBanco$
#include "Tests/TUCodigoDeProduto.h"    // $CodigoDeProduto$
//#include "Tests/TUCPF.h"                // $CPF$
//#include "Tests/TUData.h"               // $Data$
//#include "Tests/TUEmissor.h"            // $Emissor$
//#include "Tests/TUEndereco.h"           // $Endereco$
//#include "Tests/TUHorario.h"            // $Horario$
//#include "Tests/TUNome.h"               // $Nome$
//#include "Tests/TUNumero.h"             // $Numero$
#include "Tests/TUPrazo.h"              // $Prazo$
//#include "Tests/TUSenha.h"              // $Senha$
//#include "Tests/TUTaxa.h"               // $Taxa$
#include "Tests/TUValorDeAplicacao.h"   // $ValorDeAplicacao$
//#include "Tests/TUValorMinimo.h"        // $ValorMinimo$

#include <iostream>

using namespace std;

int main() {

    TU* tests[] = {
        new TUCEP(),                // $CEP$
        new TUClasse(),             // $Classe$
//        new TUCodigoDeAgencia(),    // $CodigoDeAgencia$
        new TUCodigoDeAplicacao(),  // $CodigoDeAplicacao$
//        new TUCodigoDeBanco(),      // $CodigoDeBanco$
        new TUCodigoDeProduto(),    // $CodigoDeProduto$
//        new TUCPF(),                // $CPF$
//        new TUData(),               // $Data$
//        new TUEmissor(),            // $Emissor$
//        new TUEndereco(),           // $Endereco$
//        new TUHorario(),            // $Horario$
//        new TUNome(),               // $Nome$
//        new TUNumero(),             // $Numero$
        new TUPrazo(),              // $Prazo$
//        new TUSenha(),              // $Senha$
//        new TUTaxa(),               // $Taxa$
        new TUValorDeAplicacao(),   // $ValorDeAplicacao$
//        new TUValorMinimo(),        // $ValorMinimo$
    };
    
    int testCount = sizeof(tests)/sizeof(tests[0]);
    
    for (int i = 0; i < testCount; i++) {
        TU* test = tests[i];
        ResultadoTU resultado = test->testar();
        test->mostrarResultado(resultado);
    }

    return 1;
}
