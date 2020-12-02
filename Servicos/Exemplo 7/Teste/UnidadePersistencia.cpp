//---------------------------------------------------------------------------

#include "UnidadePersistencia.h"

//Atributo estático container List.

list<ElementoResultado> ComandoSQL::listaResultado;

//---------------------------------------------------------------------------
//Classe ErroPersistencia.

EErroPersistencia::EErroPersistencia(string mensagem){
        this->mensagem = mensagem;
}

string EErroPersistencia::what() {
        return mensagem;
}

//---------------------------------------------------------------------------
//Classe ElementoResultado.

void ElementoResultado::setNomeColuna(const string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const string& valorColuna){
        this->valorColuna = valorColuna;
}


//---------------------------------------------------------------------------
//Classe ComandoSQL.

void ComandoSQL::conectar() {
      rc = sqlite3_open(nomeBancoDados, &bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na conexao ao banco de dados");
}

void ComandoSQL::desconectar() {
      rc =  sqlite3_close(bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na desconexao ao banco de dados");
}

void ComandoSQL::executar() {
        conectar();
        rc = sqlite3_exec(bd, comandoSQL.c_str(), callback, 0, &mensagem);
        if(rc != SQLITE_OK){
                sqlite3_free(mensagem);
                desconectar();
                throw EErroPersistencia("Erro na execucao do comando SQL");
        }
        desconectar();
}

int ComandoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna){
      NotUsed=0;
      ElementoResultado elemento;
      int i;
      for(i=0; i<argc; i++){
        elemento.setNomeColuna(nomeColuna[i]);
        elemento.setValorColuna(valorColuna[i] ? valorColuna[i]: "NULL");
        listaResultado.push_front(elemento);
      }
      return 0;
}

//---------------------------------------------------------------------------
//Classe ComandoLerSenha.

ComandoLerSenha::ComandoLerSenha(Matricula matricula) {
        comandoSQL = "SELECT senha FROM alunos WHERE matricula = ";
        comandoSQL += matricula.getValor();
}

string ComandoLerSenha::getResultado() {
        ElementoResultado resultado;
        string senha;

        //Remover senha;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        senha = resultado.getValorColuna();

        return senha;
}

//---------------------------------------------------------------------------
//Classe ComandoPesquisarAluno.

ComandoPesquisarAluno::ComandoPesquisarAluno(Matricula matricula) {
        comandoSQL = "SELECT * FROM alunos WHERE matricula = ";
        comandoSQL += matricula.getValor();
}

Aluno ComandoPesquisarAluno::getResultado() {
        ElementoResultado resultado;
        Aluno aluno;

        // Remover nome;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        aluno.setNome(Nome(resultado.getValorColuna()));

        // Remover matricula;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        aluno.setMatricula(Matricula(resultado.getValorColuna()));

        // Remover senha;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        aluno.setSenha(Senha(resultado.getValorColuna()));

        // Remover telefone;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        aluno.setTelefone(Telefone(resultado.getValorColuna()));

        // Remover matrícula do orientador;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        aluno.setMatriculaOrientador(Matricula(resultado.getValorColuna()));

        return aluno;

}

//---------------------------------------------------------------------------
//Classe ComandoCadastrarAluno.

ComandoCadastrarAluno::ComandoCadastrarAluno(Aluno aluno) {
        comandoSQL = "INSERT INTO alunos VALUES (";
        comandoSQL += "'" + aluno.getNome().getValor() + "', ";
        comandoSQL += "'" + aluno.getMatricula().getValor() + "', ";
        comandoSQL += "'" + aluno.getSenha().getValor() + "', ";
        comandoSQL += "'" + aluno.getTelefone().getValor() + "', ";
        comandoSQL += "'" + aluno.getMatriculaOrientador().getValor() + "')";
}

//---------------------------------------------------------------------------
//Classe ComandoRemoverAluno.

ComandoRemoverAluno::ComandoRemoverAluno(Matricula matricula) {
        comandoSQL = "DELETE FROM alunos WHERE matricula = ";
        comandoSQL += matricula.getValor();
}

//---------------------------------------------------------------------------
//Classe ComandoEditarAluno.

ComandoAtualizarAluno::ComandoAtualizarAluno(Aluno aluno) {
        comandoSQL = "UPDATE alunos ";
        comandoSQL += "SET nome = '" + aluno.getNome().getValor();
        comandoSQL += "', senha = '" + aluno.getSenha().getValor();
        comandoSQL += "', telefone = '" + aluno.getTelefone().getValor();
        comandoSQL += "', matriculaorientador = '" + aluno.getMatriculaOrientador().getValor();
        comandoSQL += "' WHERE matricula = " + aluno.getMatricula().getValor();
}

//---------------------------------------------------------------------------
//Classe ComandoCadastrarDisciplina.

ComandoCadastrarDisciplina::ComandoCadastrarDisciplina(Disciplina disciplina) {
        comandoSQL = "INSERT INTO disciplinas VALUES (";
        comandoSQL += "'" + disciplina.getNome().getValor() + "', ";
        comandoSQL += "'" + disciplina.getCodigo().getValor() + "')";
}
