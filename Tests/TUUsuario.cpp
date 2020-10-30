#include "TUUsuario.h"
#include <string>
#include <iostream>
using namespace std;

const std::string NOME_DEFAULT = "Roberto";
const std::string ENDERECO_DEFAULT = "Brasilia";
const long CEP_DEFAULT = 70330036L;
const std::string CPF_DEFAULT = "111.444.777-35";
const std::string SENHA_DEFAULT = "123456";

const long CEP_VALIDO = 70764510L;
const std::string SENHA_INVALIDA = "099066";

bool TUUsuario::testarCriacaoObjeto() {
    try {
        this->instancia = new Usuario(NOME_DEFAULT, ENDERECO_DEFAULT, CEP_DEFAULT, CPF_DEFAULT, SENHA_DEFAULT);
        return ResultadoTU::PASSOU;
    } catch (const std::invalid_argument& re) {
        std::cerr << "Error: " << re.what() << std::endl;
        return ResultadoTU::FALHOU;
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
