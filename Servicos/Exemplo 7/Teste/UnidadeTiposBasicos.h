//---------------------------------------------------------------------------

#ifndef UnidadeTiposBasicosH
#define UnidadeTiposBasicosH
//---------------------------------------------------------------------------

#include <string>
#include <stdexcept>

using namespace std;

//---------------------------------------------------------------------------
//Classe TipoBasico.

class TipoBasico {
       virtual void validar(string) = 0;
protected:
       string valor;
public:
       TipoBasico(){}
       void setValor(const string&);
       string getValor() const;
};

inline void TipoBasico::setValor(const string& valor) {
        validar(valor);
        this->valor = valor;
}

inline string TipoBasico::getValor() const {
       return valor;
}

//---------------------------------------------------------------------------
//Classe Matricula.

class Matricula:public TipoBasico {
private:
        void validar(string);
public:
        Matricula(){}
        Matricula(string);
};

//---------------------------------------------------------------------------
//Classe Senha.

class Senha:public TipoBasico {
private:
        void validar(string);
public:
        Senha () {}
        Senha(string);
};

//---------------------------------------------------------------------------
//Classe Nome.

class Nome:public TipoBasico {
private:
        void validar(string);
public:
        Nome() {}
        Nome(string);
};

//---------------------------------------------------------------------------
//Classe Telefone.

class Telefone:public TipoBasico {
private:
        void validar(string);
public:
        Telefone() {}
        Telefone(string);
};

//---------------------------------------------------------------------------
//Classe Código de disciplina.

class CodigoDisciplina:public TipoBasico {
private:
        void validar(string);
public:
        CodigoDisciplina () {}
        CodigoDisciplina(string);
};

#endif
