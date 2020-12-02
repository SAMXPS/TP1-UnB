//---------------------------------------------------------------------------

#include "UnidadeControladoras.h"

//---------------------------------------------------------------------------
//Classe CntrInteracao.

void CntrInteracao::notificarErroAcesso(){
     cout << endl << "Erro no acesso ao banco de dados.";
     cout << "Digite algo para continuar :";
     getch();
}

void CntrInteracao::notificarErroDigitacao() {
     cout << endl << "Dado informado incorretamente." << endl << endl;
     cout << "Digite algo para continuar :";
     getch();
}

void CntrInteracao::notificarSucessoOperacao() {
     cout << endl << "Operacao efetuada com sucesso." << endl << endl;
     cout << "Digite algo para continuar :";
     getch();
}

//---------------------------------------------------------------------------
//Classe CntrAutenticacao.

void CntrAutenticacao::apresentarOpcoes(){
     cout << "Sistema de matricula - Autenticacao." << endl << endl;
}

void CntrAutenticacao::executar(){

        string matriculaEntrada, senhaEntrada;
        Matricula matricula;
        Senha senha;

        while(true) {
                while(true){
                        CLR_SCR;
                        apresentarOpcoes();
                        cout << "Digite a matricula : ";
                        cin >> matriculaEntrada;
                        cout << "Digite a senha     : ";
                        cin >> senhaEntrada;

                        try {
                                matricula.setValor(matriculaEntrada);
                                senha.setValor(senhaEntrada);
                                break;
                        }
                        catch (invalid_argument &exp) {
                                cout << endl << exp.what();
                                cout << endl << endl << "Digite algo para continuar.";
                                getch();
                        }


                }

                ComandoLerSenha comandoLerSenha(matricula);

                try {
                        comandoLerSenha.executar();

                        string senhaRecuperada;
                        senhaRecuperada = comandoLerSenha.getResultado();

                        //Comparar senha informada com a recuperada.

                        if(senhaRecuperada == senhaEntrada) break;
                        cout << endl << "Senha digitada diferente da cadastrada.";
                        cout << endl << endl << "Digite algo para continuar.";
                        getch();
                }
                catch(EErroPersistencia &exp) {
                        cout << endl << exp.what();
                        cout << endl << endl << "Digite algo para continuar.";
                        getch();
                }
         }
}

//---------------------------------------------------------------------------
//Classe CntrNavegacao.

void CntrNavegacao::apresentarOpcoes(){
     cout << "Sistema de matricula - Servicos disponiveis." << endl << endl;
     cout << "1 - Alunos." << endl;
     cout << "2 - Disciplinas." << endl;
     cout << "3 - Matriculas." << endl;
     cout << "4 - Encerrar." << endl << endl;
}

void CntrNavegacao::executar(){
        unsigned int escolha;
        CntrAluno cntrA;
        CntrDisciplina cntrB;

        while (true) {
                escolha = 0;
                while(escolha == 0 || escolha > NUMERO_OPCOES){
                        CLR_SCR;
                        apresentarOpcoes();
                        cout << "Escolha a opcao : ";
                        cin >> escolha;
                }
                switch (escolha) {
                        case OPCAO_USUARIOS:
                                                cntrA.executar();
                                                break;
                        case OPCAO_DISCIPLINAS:
                                                cntrB.executar();
                                                break;
                        case OPCAO_ENCERRAR :   return;
                }
        }
}


//---------------------------------------------------------------------------
//Classe CntrAluno.

void CntrAluno::apresentarOpcoes(){
     cout << "Sistema de matricula - Servicos relacionados aos alunos." << endl << endl;
     cout << "1 - Pesquisar aluno." << endl;
     cout << "2 - Cadastrar aluno." << endl;
     cout << "3 - Remover aluno." << endl;
     cout << "4 - Editar aluno." << endl;
     cout << "5 - Encerrar." << endl << endl;
}

void CntrAluno::executar(){
        unsigned int escolha;

        while (true) {
                escolha = 0;
                while(escolha == 0 || escolha > NUMERO_OPCOES){

                        CLR_SCR;
                        apresentarOpcoes();
                        cout << "Escolha a opcao : ";
                        cin >> escolha;
                }
                switch (escolha) {
                        case OPCAO_PESQUISAR_ALUNO :
                                                pesquisar();
                                                break;
                        case OPCAO_CADASTRAR_ALUNO :
                                                cadastrar();
                                                break;
                        case OPCAO_REMOVER_ALUNO :
                                                remover();
                                                break;
                        case OPCAO_EDITAR_ALUNO :
                                                editar();
                                                break;
                        case OPCAO_ENCERRAR :   return;
                }
        }

}

void CntrAluno::pesquisar() {

        string matriculaEntrada;
        Matricula matricula;
        Aluno aluno;

        CLR_SCR;
        cout << "Pesquisar dados de um aluno." << endl << endl;
        cout << "Digite a matricula : ";
        cin >> matriculaEntrada;

        try {
                matricula.setValor(matriculaEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        ComandoPesquisarAluno comando(matricula);

        try {
                comando.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        try {
                aluno = comando.getResultado();

                cout << endl << "Resultados obtidos." << endl << endl;
                cout << "Nome : " << aluno.getNome().getValor() << endl;
                cout << "Matricula : " << aluno.getMatricula().getValor() << endl;
                cout << "Senha : " << aluno.getSenha().getValor() << endl;
                cout << "Telefone : " << aluno.getTelefone().getValor() << endl;
                cout << "Matricula do orientador : " << aluno.getMatriculaOrientador().getValor() << endl << endl;
                cout << "Digite algo para continuar : ";
                getch();
        }
        catch(EErroPersistencia exp) {
                cout << endl << exp.what();
                cout << endl << endl << "Digite algo para continuar.";
                getch();
        }
}

void CntrAluno::cadastrar() {

        string nomeEntrada;
        string matriculaEntrada;
        string senhaEntrada;
        string telefoneEntrada;
        string matriculaOrientadorEntrada;

        Nome nome;
        Matricula matricula;
        Senha senha;
        Telefone telefone;
        Matricula matriculaOrientador;

        CLR_SCR;
        cout << "Cadastrar um aluno." << endl << endl;
        cout << "Digite o nome : ";
        cin >> nomeEntrada;
        cout << "Digite a matricula : ";
        cin >> matriculaEntrada;
        cout << "Digite a senha : ";
        cin >> senhaEntrada;
        cout << "Digite o telefone : ";
        cin >> telefoneEntrada;
        cout << "Digite a matricula do orientador : ";
        cin >> matriculaOrientadorEntrada;

        try {
                nome.setValor(nomeEntrada);
                matricula.setValor(matriculaEntrada);
                senha.setValor(senhaEntrada);
                telefone.setValor(telefoneEntrada);
                matriculaOrientador.setValor(matriculaOrientadorEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        Aluno aluno(nome, matricula, senha, telefone, matriculaOrientador);

        ComandoCadastrarAluno comando (aluno);

        try {
                comando.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        notificarSucessoOperacao();
}

void CntrAluno::remover() {

        string matriculaEntrada;
        Matricula matricula;

        CLR_SCR;
        cout << "Remover um aluno." << endl << endl;
        cout << "Digite a matricula : ";
        cin >> matriculaEntrada;

        try {
                matricula.setValor(matriculaEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        ComandoRemoverAluno comando(matricula);

        try {
                comando.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        notificarSucessoOperacao();
}

void CntrAluno::editar() {

        string nomeEntrada;
        string matriculaEntrada;
        string senhaEntrada;
        string telefoneEntrada;
        string matriculaOrientadorEntrada;

        Nome nome;
        Matricula matricula;
        Senha senha;
        Telefone telefone;
        Matricula matriculaOrientador;

        CLR_SCR;
        cout << "Editar um aluno." << endl << endl;
        cout << "Digite a matricula : ";
        cin >> matriculaEntrada;

        try {
                matricula.setValor(matriculaEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        ComandoPesquisarAluno comandoA(matricula);

        try {
                comandoA.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        Aluno aluno = comandoA.getResultado();

        cout << endl << "Dados atuais." << endl << endl;
        cout << "Nome : " << aluno.getNome().getValor() << endl;
        cout << "Matricula : " << aluno.getMatricula().getValor() << endl;
        cout << "Senha : " << aluno.getSenha().getValor() << endl;
        cout << "Telefone : " << aluno.getTelefone().getValor() << endl;
        cout << "Matricula do orientador : " << aluno.getMatriculaOrientador().getValor() << endl << endl;

        cout << "Digite os novos dados. " << endl << endl;
        cout << "Nome : ";
        cin >> nomeEntrada;
        cout << "Senha : ";
        cin >> senhaEntrada;
        cout << "Telefone : ";
        cin >> telefoneEntrada;
        cout << "Matricula do orientador : ";
        cin >> matriculaOrientadorEntrada;

        try {
                nome.setValor(nomeEntrada);
                matricula.setValor(matriculaEntrada);
                senha.setValor(senhaEntrada);
                telefone.setValor(telefoneEntrada);
                matriculaOrientador.setValor(matriculaOrientadorEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        aluno.setNome(nome);
        aluno.setMatricula(matricula);
        aluno.setSenha(senha);
        aluno.setTelefone(telefone);
        aluno.setMatriculaOrientador(matriculaOrientador);

        ComandoAtualizarAluno comandoB(aluno);

        try {
                comandoB.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        notificarSucessoOperacao();
}

//---------------------------------------------------------------------------
//Classe CntrDisciplina.

void CntrDisciplina::apresentarOpcoes(){
     cout << "Sistema de matricula - Servicos relacionados as disciplinas." << endl << endl;
     cout << "1 - Pesquisar disciplina." << endl;
     cout << "2 - Cadastrar disciplina." << endl;
     cout << "3 - Remover disciplina." << endl;
     cout << "4 - Editar disciplina." << endl;
     cout << "5 - Encerrar." << endl << endl;
}

void CntrDisciplina::executar(){
        unsigned int escolha;

        while (true) {
                escolha = 0;
                while(escolha == 0 || escolha > NUMERO_OPCOES){

                        CLR_SCR;
                        apresentarOpcoes();
                        cout << "Escolha a opcao : ";
                        cin >> escolha;
                }
                switch (escolha) {
                        case OPCAO_PESQUISAR_DISCIPLINA :
                                                pesquisar();
                                                break;
                        case OPCAO_CADASTRAR_DISCIPLINA :
                                                cadastrar();
                                                break;
                        case OPCAO_REMOVER_DISCIPLINA :
                                                remover();
                                                break;
                        case OPCAO_EDITAR_DISCIPLINA :
                                                editar();
                                                break;
                        case OPCAO_ENCERRAR :   return;
                }
        }

}

void CntrDisciplina::pesquisar() {

        string codigoEntrada;
        CodigoDisciplina codigo;
        Disciplina disciplina;

        CLR_SCR;
        cout << "Pesquisar dados de uma disciplina." << endl << endl;
        cout << "Digite o codigo : ";
        cin >> codigoEntrada;

        try {
                codigo.setValor(codigoEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        // ComandoPesquisarAluno comando(matricula);

        try {
                // comando.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        try {
                // disciplina = comando.getResultado();

                cout << endl << "Resultados obtidos." << endl << endl;
                cout << "Nome   : " << disciplina.getNome().getValor() << endl;
                cout << "Codigo : " << disciplina.getCodigo().getValor() << endl;
                cout << "Digite algo para continuar : ";
                getch();
        }
        catch(EErroPersistencia exp) {
                cout << endl << exp.what();
                cout << endl << endl << "Digite algo para continuar.";
                getch();
        }
}

void CntrDisciplina::cadastrar() {

        string nomeEntrada;
        string codigoEntrada;

        Nome nome;
        CodigoDisciplina codigo;

        CLR_SCR;
        cout << "Cadastrar uma disciplina." << endl << endl;
        cout << "Digite o nome : ";
        cin >> nomeEntrada;
        cout << "Digite o codigo : ";
        cin >> codigoEntrada;

        try {
                nome.setValor(nomeEntrada);
                codigo.setValor(codigoEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        Disciplina disciplina(nome, codigo);

        ComandoCadastrarDisciplina comando (disciplina);

        try {
                comando.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        notificarSucessoOperacao();
}

void CntrDisciplina::remover() {

        string codigoEntrada;
        CodigoDisciplina codigo;

        CLR_SCR;
        cout << "Remover uma disciplina." << endl << endl;
        cout << "Digite o codigo : ";
        cin >> codigoEntrada;

        try {
                codigo.setValor(codigoEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        // ComandoRemoverAluno comando(matricula);

        try {
                // comando.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        notificarSucessoOperacao();
}

void CntrDisciplina::editar() {

        string nomeEntrada;
        string codigoEntrada;

        Nome nome;
        CodigoDisciplina codigo;

        CLR_SCR;
        cout << "Editar uma disciplina." << endl << endl;
        cout << "Digite o codigo : ";
        cin >> codigoEntrada;

        try {
                codigo.setValor(codigoEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        // ComandoPesquisarAluno comandoA(matricula);

        try {
                // comandoA.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        // Disciplina disciplinaRecuperada = comandoA.getResultado();

        cout << endl << "Dados atuais." << endl << endl;
        // cout << "Nome   : " << disciplinaRecuperada.getNome().getNome() << endl;
        // cout << "Codigo : " << disciplinaRecuperada.getCodigo().getCodigo() << endl << endl;

        cout << "Digite os novos dados. " << endl << endl;
        cout << "Nome   : ";
        cin >> nomeEntrada;

        try {
                nome.setValor(nomeEntrada);
        }
        catch (invalid_argument &exp) {
                notificarErroDigitacao();
                return;
        }

        Disciplina disciplina(nome, codigo);

        // ComandoAtualizarAluno comandoB(aluno);

        try {
                // comandoB.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        notificarSucessoOperacao();
}

