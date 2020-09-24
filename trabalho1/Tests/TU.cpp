#include "TU.h"

bool TU::configurar() {
    try {
        this->instancia = new Dominio(this->getValorDefault());
        return ResultadoTU::PASSOU;
    } catch (...) {
        return ResultadoTU::FALHOU;
    }
}

void TU::terminar() {
    delete instancia;
}

bool TU::testarCenarioSucesso() {
    try {
        // Tenta-se definir o valor válido na instância.
        this->instancia->setValor(this->getValorCasoSucesso());

        // Verifica-se que o valor foi modificado na instância.
        if (this->instancia->getValor() == this->getValorCasoSucesso()) {
            return ResultadoTU::PASSOU;
        }
    } catch (...) {
        // Caso ocorra erro ao definir valor válido, considera-se falha.
    }

    return ResultadoTU::FALHOU;
}

bool TU::testarCenarioFalha() {
    ValorDominio valorInicial = this->instancia->getValor();

    try {
        // Tenta-se definir o valor inválido na instância.
        this->instancia->setValor(this->getValorCasoFalha());
        // Se não foi lançada exceção, considera-se uma falha.
    } catch (...) {
        // Verifica-se se o valor não foi modificado na instância.
        if (this->instancia->getValor() == valorInicial) {
            return ResultadoTU::PASSOU;
        }
        // Se o valor foi modificado, considera-se falha na implementação de classe de domínio.
    }
    return ResultadoTU::FALHOU;
}
