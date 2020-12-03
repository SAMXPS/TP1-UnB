#include "../Paginas.h"
#include <string.h>

Pagina* FazerCadastro::mostrar(GerenciadorDePagina* apresentador) {
    /* Para se cadastrar, o usuário deve informar 
    nome, 
    endereço, 
    CEP, 
    CPF e 
    senha. 
    Ao se cadastrar, o usuário deve também cadastrar uma conta corrente. Para isso, precisa informar 
    código de banco, 
    código de agência e 
    número de conta.*/

    std::string nome, endereco, cep, cpf, senha, cod_banco, cod_agencia, num_conta;

    apresentador->escreveNoCentro("Fazer Cadastro");
    apresentador->escreveNoCentro("");
    apresentador->escreveNoCentro("Por favor, preencha os dados a seguir.");
    apresentador->escreveNoCentro("");

    apresentador->escreveNoCentro("Nome: ");
    nome = apresentador->lerInput();

    apresentador->escreveNoCentro("Endereco: ");
    endereco = apresentador->lerInput();

    apresentador->escreveNoCentro("CEP: ");
    cep = apresentador->lerInput();

    apresentador->escreveNoCentro("CPF: ");
    cpf = apresentador->lerInput();

    apresentador->escreveNoCentro("Senha: ");
    senha = apresentador->lerInput();

    Usuario* usuario;
    try {
        usuario = new Usuario(nome, endereco, stol(cep), cpf, senha);
        apresentador->limparTela();
        apresentador->escreveNoCentro("Confira os dados que voce digitou.");
        apresentador->escreveNoCentro("");        
        apresentador->escreveNoCentro("Nome: " + usuario->getNome().getValor());   
        apresentador->escreveNoCentro("Endereco: " + usuario->getEndereco().getValor()); 
        apresentador->escreveNoCentro("CEP: " + std::to_string(usuario->getCEP().getValor()));   
        apresentador->escreveNoCentro("CPF: " + usuario->getCPF().getValor());     
        apresentador->escreveNoCentro("Senha: " + usuario->getSenha().getValor());
        apresentador->escreveNoCentro("");
        apresentador->escreveNoCentro("Esta correto?");
        apresentador->escreveNoCentro("- Sim [1]");
        apresentador->escreveNoCentro("- Nao [0]");
        apresentador->escreveNoCentro("Sua opcao: ");
        if (apresentador->lerInput()[0] != '1') 
            return new FazerCadastro();
    } catch (const std::invalid_argument&err) {
        return new PaginaErro(new PaginaInicial(), err.what());
    } catch (...) {
        return new PaginaErro(new PaginaInicial(), "erro desconhecido.");
    }

    apresentador->limparTela();
    apresentador->escreveNoCentro("Otimo, agora precisamos dos seus dados bancarios.");
    apresentador->escreveNoCentro("");

    apresentador->escreveNoCentro("Codigo de Banco: ");
    cod_banco = apresentador->lerInput();

    apresentador->escreveNoCentro("Codigo de Agencia: ");
    cod_agencia = apresentador->lerInput();

    apresentador->escreveNoCentro("Numero da conta: ");
    num_conta = apresentador->lerInput();

    Conta* conta;
    try {
        conta = new Conta(cod_banco, cod_agencia, num_conta);
    } catch (const std::invalid_argument&err) {
        return new PaginaErro(new PaginaInicial(), err.what());
    } catch (...) {
        return new PaginaErro(new PaginaInicial(), "erro desconhecido.");
    }

    apresentador->limparTela();

    bool susuario = apresentador->getServicos()->getGerenciadorDeUsuario()->cadastrarUsuario(*usuario);
    if (susuario)
        apresentador->escreveNoCentro("Usuario salvo.");
    bool sconta = apresentador->getServicos()->getGerenciadorDeConta()->definirConta(*usuario, *conta);
    if (sconta)
        apresentador->escreveNoCentro("Conta salva.");

    if (susuario && sconta) {
        apresentador->escreveNoCentro("Seu cadastro foi feito com sucesso.");
    } else {
        apresentador->escreveNoCentro("Algo de errado aconteceu ao criar seu cadastro.");
    }

    apresentador->escreveNoCentro("Aperte enter para voltar.");
    apresentador->lerInput();

    return new PaginaInicial();
}


