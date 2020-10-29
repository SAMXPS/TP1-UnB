#include "TUProduto.h"
using namespace std;

const std::string CODIGO_DEFAULT = "001";
const std::string CLASSE_DEFAULT = "CDB";
const std::string EMISSOR_DEFAULT = "Souemissor";
const int PRAZO_DEFAULT = 6;
const std::string VENCIMENTO_DEFAULT = "29/11/2029";
const double TAXA_DEFAULT = 100.0;
const std::string HORARIO_DEFAULT = "13:01";
const int VALOR_DEFAULT = 1000;

const int VALOR_VALIDO = 5000;
const std::string HORARIO_INVALIDO = "17:01";

bool TUProduto::testarCriacaoObjeto() {
    try {
        this->instancia = new Produto(CODIGO_DEFAULT, CLASSE_DEFAULT, EMISSOR_DEFAULT, PRAZO_DEFAULT, VENCIMENTO_DEFAULT, TAXA_DEFAULT, HORARIO_DEFAULT, VALOR_DEFAULT);
        return ResultadoTU::PASSOU;
    } catch (...) {
        return ResultadoTU::FALHOU;
    }
}

bool TUProduto::testarCenarioSucesso() {
    try {
        // Tenta-se definir o valor válido na instância.
        this->instancia->setValorMinimo(VALOR_VALIDO);

        // Verifica-se que o valor foi modificado na instância.
        if (this->instancia->getValorMinimo().getValor() == VALOR_VALIDO) {
            return ResultadoTU::PASSOU;
        }
    } catch (...) {
        // Caso ocorra erro ao definir valor válido, considera-se falha.
    }

    return ResultadoTU::FALHOU;
}

bool TUProduto::testarCenarioFalha() {
    Horario valorInicial = this->instancia->getHorario();

    try {
        // Tenta-se definir o valor inválido na instância.
        this->instancia->setHorario(HORARIO_INVALIDO);
        // Se não foi lançada exceção, considera-se uma falha.
    } catch (...) {
        // Verifica-se se o valor não foi modificado na instância.
        if (this->instancia->getHorario().getValor() == valorInicial.getValor()) {
            return ResultadoTU::PASSOU;
        }
        // Se o valor foi modificado, considera-se falha na implementação de classe de domínio.
    }
    return ResultadoTU::FALHOU;
}
