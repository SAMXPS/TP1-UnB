#include "TUUsuario.h"
using namespace std;

const std::string NOME_DEFAULT;
const std::string ENDERECO_DEFAULT;
const long CEP_DEFAULT;
const std::string CPF_DEFAULT;
const std::string SENHA_DEFAULT;

const long CEP_VALIDO;
const std::string SENHA_INVALIDA;

bool TUUsuario::testarCriacaoObjeto() {
    try {
        this->instancia = new Usuario(NOME_DEFAULT, ENDERECO_DEFAULT, CEP_DEFAULT, CPF_DEFAULT, SENHA_DEFAULT);
        return ResultadoTU::PASSOU;
    } catch (...) {
        return ResultadoTU::FALHOU;
    }
}

bool TUUsuario::testarCenarioSucesso() {
    try {
        // Tenta-se definir o valor válido na instância.
        this->instancia->setCEP(CEP_VALIDO);

        // Verifica-se que o valor foi modificado na instância.
        if (this->instancia->getCEP().getValor() == CEP_VALIDO) {
            return ResultadoTU::PASSOU;
        }
    } catch (...) {
        // Caso ocorra erro ao definir valor válido, considera-se falha.
    }

    return ResultadoTU::FALHOU;
}

bool TUUsuario::testarCenarioFalha() {
    Senha valorInicial = this->instancia->getSenha();

    try {
        // Tenta-se definir o valor inválido na instância.
        this->instancia->setSenha(SENHA_INVALIDA);
        // Se não foi lançada exceção, considera-se uma falha.
    } catch (...) {
        // Verifica-se se o valor não foi modificado na instância.
        if (this->instancia->getSenha().getValor() == valorInicial.getValor()) {
            return ResultadoTU::PASSOU;
        }
        // Se o valor foi modificado, considera-se falha na implementação de classe de domínio.
    }
    return ResultadoTU::FALHOU;
}
