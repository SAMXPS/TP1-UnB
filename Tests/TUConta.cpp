#include "TUConta.h"
using namespace std;

const std::string BANCO_INICIAL = "341";
const std::string AGENCIA_INICIAL = "0001";
const std::string NUMERO_INICIAL = "345678-1";

const std::string BANCO_INVALIDO = "024";
const std::string AGENCIA_VALIDA = "0002";

bool TUConta::testarCriacaoObjeto() {
    try {
        this->instancia = new Conta(BANCO_INICIAL, AGENCIA_INICIAL, NUMERO_INICIAL);
        return ResultadoTU::PASSOU;
    } catch (...) {
        return ResultadoTU::FALHOU;
    }
}

bool TUConta::testarCenarioSucesso() {
    try {
        // Tenta-se definir o valor válido na instância.
        this->instancia->setAgencia(AGENCIA_VALIDA);

        // Verifica-se que o valor foi modificado na instância.
        if (this->instancia->getAgencia().getValor() == AGENCIA_VALIDA) {
            return ResultadoTU::PASSOU;
        }
    } catch (...) {
        // Caso ocorra erro ao definir valor válido, considera-se falha.
    }

    return ResultadoTU::FALHOU;
}

bool TUConta::testarCenarioFalha() {
    CodigoDeBanco valorInicial = this->instancia->getBanco();

    try {
        // Tenta-se definir o valor inválido na instância.
        this->instancia->setBanco(BANCO_INVALIDO);
        // Se não foi lançada exceção, considera-se uma falha.
    } catch (...) {
        // Verifica-se se o valor não foi modificado na instância.
        if (this->instancia->getBanco().getValor() == valorInicial.getValor()) {
            return ResultadoTU::PASSOU;
        }
        // Se o valor foi modificado, considera-se falha na implementação de classe de domínio.
    }
    return ResultadoTU::FALHOU;
}
