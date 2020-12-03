#include "MeuGerenciadorDeAplicacao.h"

MeuGerenciadorDeAplicacao* MeuGerenciadorDeAplicacao::instance = 0;

MeuGerenciadorDeAplicacao* MeuGerenciadorDeAplicacao::getInstance() {
    if (instance == nullptr)
        instance = new MeuGerenciadorDeAplicacao();
    return instance;
}

Aplicacao* MeuGerenciadorDeAplicacao::listarAplicacao(const Usuario&usuario) {
    return NULL;
}

Produto* MeuGerenciadorDeAplicacao::carregaProduto(const Aplicacao&aplicacao) {
    return NULL;
}

bool MeuGerenciadorDeAplicacao::salvaAplicacao(const Usuario&usuario, const Produto&produto, const Aplicacao&aplicacao) {
    return false;
}

bool MeuGerenciadorDeAplicacao::removeAplicacao(const CodigoDeAplicacao&codigo) {
    return false;
}