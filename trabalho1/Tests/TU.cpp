#include "TU.h"

template<class Dominio, class ValorDominio>
bool TU<Dominio, ValorDominio>::configurar() {
    try {
        this->instancia = new Dominio(this->getValorDefault());
        return ResultadoTU::PASSOU;
    } catch (...) {
        return ResultadoTU::FALHOU;
    }
}

template<class Dominio, class ValorDominio>
void TU<Dominio, ValorDominio>::terminar() {
    delete instancia;
}

template<class Dominio, class ValorDominio>
bool TU<Dominio, ValorDominio>::testarCenarioSucesso() {
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

template<class Dominio, class ValorDominio>
bool TU<Dominio, ValorDominio>::testarCenarioFalha() {
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

template<class Dominio, class ValorDominio>
ResultadoTU TU<Dominio, ValorDominio>::testar() {
    ResultadoTU resultado;
    resultado.criacaoDeObjeto = this->configurar();
    resultado.cenarioFalha = this->testarCenarioFalha();
    resultado.cenarioSucesso = this->testarCenarioSucesso();
    this->terminar();
}