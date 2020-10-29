#include "TUAplicacao.h"
using namespace std;

const string CODIGO_INICIAL = "00001";
const double VALOR_INICIAL = 3.141592;
const string DATA_INICIAL = "11/02/2025";

const double VALOR_INVALIDO = -2020.0;
const string DATA_VALIDA = "11/02/2024";

bool TUAplicacao::testarCriacaoObjeto() {
    try {
        this->instancia = new Aplicacao(CODIGO_INICIAL, VALOR_INICIAL, DATA_INICIAL);
        return ResultadoTU::PASSOU;
    } catch (...) {
        return ResultadoTU::FALHOU;
    }
}

bool TUAplicacao::testarCenarioSucesso() {
    try {
        // Tenta-se definir o valor válido na instância.
        this->instancia->setData(DATA_VALIDA);

        // Verifica-se que o valor foi modificado na instância.
        if (this->instancia->getData().getValor() == DATA_VALIDA) {
            return ResultadoTU::PASSOU;
        }
    } catch (...) {
        // Caso ocorra erro ao definir valor válido, considera-se falha.
    }

    return ResultadoTU::FALHOU;
}

bool TUAplicacao::testarCenarioFalha() {
    ValorDeAplicacao valorInicial = this->instancia->getValor();

    try {
        // Tenta-se definir o valor inválido na instância.
        this->instancia->setValor(-25.00);
        // Se não foi lançada exceção, considera-se uma falha.
    } catch (...) {
        // Verifica-se se o valor não foi modificado na instância.
        if (this->instancia->getValor().getValor() == valorInicial.getValor()) {
            return ResultadoTU::PASSOU;
        }
        // Se o valor foi modificado, considera-se falha na implementação de classe de domínio.
    }
    return ResultadoTU::FALHOU;
}
