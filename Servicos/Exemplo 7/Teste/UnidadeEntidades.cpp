//---------------------------------------------------------------------------

#include "UnidadeEntidades.h"

//---------------------------------------------------------------------------
//Classe Usuario.

Usuario::Usuario(Nome nome, Matricula matricula,
                Senha senha, Telefone telefone): nome(nome),
                matricula(matricula), senha(senha), telefone(telefone) {
}

void Usuario::setNome(const Nome& nome) {
        this->nome = nome;
}

void Usuario::setMatricula(const Matricula& matricula) {
        this->matricula = matricula;
}

void Usuario::setSenha(const Senha& senha) {
        this->senha = senha;
}

void Usuario::setTelefone(const Telefone& telefone){
        this->telefone = telefone;
}

//---------------------------------------------------------------------------
//Classe Aluno.

Aluno::Aluno(Nome nome, Matricula matricula, Senha senha,
                Telefone telefone, Matricula matriculaOrientador):
        Usuario(nome, matricula, senha, telefone),
                matriculaOrientador(matriculaOrientador) {

}

void Aluno::setMatriculaOrientador(const Matricula& matriculaOrientador) {
        this->matriculaOrientador = matriculaOrientador;
}


//---------------------------------------------------------------------------
//Classe Disciplina.

Disciplina::Disciplina(Nome nome, CodigoDisciplina codigo):
        nome(nome), codigo(codigo) {
}

void Disciplina::setNome(const Nome& nome) {
        this->nome = nome;
}

void Disciplina::setCodigoDisciplina(const CodigoDisciplina& codigo) {
        this->codigo = codigo;
}
