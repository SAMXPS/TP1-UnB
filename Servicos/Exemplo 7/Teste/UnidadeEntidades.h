//---------------------------------------------------------------------------

#ifndef UnidadeEntidadesH
#define UnidadeEntidadesH
//---------------------------------------------------------------------------

#include "UnidadeTiposBasicos.h"

//---------------------------------------------------------------------------
//Classe Usuario.

class Usuario {
private:
        Nome nome;
        Matricula matricula;
        Senha senha;
        Telefone telefone;
public:
        Usuario(){}
        Usuario(Nome, Matricula, Senha, Telefone);
        Nome getNome() const;
        void setNome(const Nome&);
        Matricula getMatricula() const;
        void setMatricula(const Matricula&);
        Senha getSenha() const;
        void setSenha(const Senha&);
        Telefone getTelefone() const;
        void setTelefone(const Telefone&);
};


//---------------------------------------------------------------------------
//Classe Aluno.

class Aluno:public Usuario {
private:
        Matricula matriculaOrientador;
public:
        Aluno(){}
        Aluno(Nome, Matricula, Senha, Telefone, Matricula);
        Matricula getMatriculaOrientador() const;
        void setMatriculaOrientador(const Matricula&);
};

//---------------------------------------------------------------------------
//Classe Disciplina.

class Disciplina {
private:
        Nome nome;
        CodigoDisciplina codigo;
public:
        Disciplina(){}
        Disciplina(Nome, CodigoDisciplina);
        Nome getNome() const;
        void setNome(const Nome&);
        CodigoDisciplina getCodigo() const;
        void setCodigoDisciplina(const CodigoDisciplina&);
};

//---------------------------------------------------------------------------
//Definição dos métodos inline.

inline Nome Usuario::getNome() const {
        return nome;
}

inline Matricula Usuario::getMatricula() const {
        return matricula;
}

inline Senha Usuario::getSenha() const {
        return senha;
}

inline Telefone Usuario::getTelefone() const {
        return telefone;
}

inline Matricula Aluno::getMatriculaOrientador() const {
        return matriculaOrientador;
}

inline Nome Disciplina::getNome() const {
        return nome;
}

inline CodigoDisciplina Disciplina::getCodigo() const {
        return codigo;
}

#endif
