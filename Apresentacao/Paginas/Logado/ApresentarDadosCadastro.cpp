#include "../../Paginas.h"
#include <string.h>

Pagina* ApresentarDadosCadastro::mostrar(GerenciadorDePagina* apresentador) {
    apresentador->escreveNoCentro("Dados Cadastrais");
    apresentador->escreveNoCentro("");        
    apresentador->escreveNoCentro("Nome: " + usuario.getNome().getValor());   
    apresentador->escreveNoCentro("Endereco: " + usuario.getEndereco().getValor()); 
    apresentador->escreveNoCentro("CEP: " + std::to_string(usuario.getCEP().getValor()));   
    apresentador->escreveNoCentro("CPF: " + usuario.getCPF().getValor());     
    apresentador->escreveNoCentro("Senha: " + usuario.getSenha().getValor());
    apresentador->escreveNoCentro("");
    apresentador->escreveNoCentro("Aperte qualquer tecla para voltar...");
    apresentador->lerInput();
    return new PaginaInicialLogado(usuario);
}