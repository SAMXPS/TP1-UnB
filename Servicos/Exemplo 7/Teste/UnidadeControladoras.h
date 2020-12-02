//---------------------------------------------------------------------------

#ifndef UnidadeControladoraH
#define UnidadeControladoraH

//---------------------------------------------------------------------------

#include <iostream>
#include <conio.h>
#include "UnidadeTiposBasicos.h"
#include "UnidadeEntidades.h"
#include "UnidadePersistencia.h"

#define CLR_SCR system("cls");

//---------------------------------------------------------------------------
//Classe CntrInteracao.

class CntrInteracao {
     virtual void apresentarOpcoes() = 0;
protected:
     void notificarErroAcesso();
     void notificarErroDigitacao();
     void notificarSucessoOperacao();
public:
     virtual void executar() = 0;
};

//---------------------------------------------------------------------------
//Classe CntrAutenticacao.

class CntrAutenticacao:public CntrInteracao {
       void apresentarOpcoes();
public:
       CntrAutenticacao(){}
       void executar();
};

//---------------------------------------------------------------------------
//Classe CntrNavegacao.

class CntrNavegacao:public CntrInteracao {
        //Constantes para identificar a opção escolhida.
        static const unsigned int NUMERO_OPCOES     = 4;
        static const unsigned int OPCAO_USUARIOS    = 1;
        static const unsigned int OPCAO_DISCIPLINAS = 2;
        static const unsigned int OPCAO_MATRICULAS  = 3;
        static const unsigned int OPCAO_ENCERRAR    = 4;

        void apresentarOpcoes();
public:
       CntrNavegacao(){}
       void executar();
};

//---------------------------------------------------------------------------
//Classe CntrAluno.

class CntrAluno:public CntrInteracao {
        //Constantes para identificar a opção escolhida.
        static const unsigned int NUMERO_OPCOES         = 5;
        static const unsigned int OPCAO_PESQUISAR_ALUNO = 1;
        static const unsigned int OPCAO_CADASTRAR_ALUNO = 2;
        static const unsigned int OPCAO_REMOVER_ALUNO   = 3;
        static const unsigned int OPCAO_EDITAR_ALUNO    = 4;
        static const unsigned int OPCAO_ENCERRAR        = 5;

        void apresentarOpcoes();
        void pesquisar();
        void cadastrar();
        void remover();
        void editar();
public:
       CntrAluno(){}
       void executar();
};

//---------------------------------------------------------------------------
//Classe CntrDisciplina.

class CntrDisciplina:public CntrInteracao {
        //Constantes para identificar a opção escolhida.
        static const unsigned int NUMERO_OPCOES              = 5;
        static const unsigned int OPCAO_PESQUISAR_DISCIPLINA = 1;
        static const unsigned int OPCAO_CADASTRAR_DISCIPLINA = 2;
        static const unsigned int OPCAO_REMOVER_DISCIPLINA   = 3;
        static const unsigned int OPCAO_EDITAR_DISCIPLINA    = 4;
        static const unsigned int OPCAO_ENCERRAR             = 5;

        void apresentarOpcoes();
        void pesquisar();
        void cadastrar();
        void remover();
        void editar();
public:
       CntrDisciplina(){}
       void executar();
};


#endif
