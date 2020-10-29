#ifndef PRODUTO_H_INCLUDED
#define PRODUTO_H_INCLUDED

#include "../Dominios/CodigoDeProduto.h"
#include "../Dominios/Classe.h"
#include "../Dominios/Emissor.h"

#include "../Dominios/Prazo.h"
#include "../Dominios/Data.h"
#include "../Dominios/Taxa.h"
#include "../Dominios/Horario.h"
#include "../Dominios/ValorMinimo.h"


#include <string>

class Produto {

    private:
		CodigoDeProduto         codigo;
        Classe                  classe;
        Emissor                 emissor;
        Prazo                   prazo;
        Data                    vencimento;
        Taxa                    taxa;
        Horario                 horario;
        ValorMinimo             valor;          

    public:
        Produto(CodigoDeProduto codigo, Classe classe, Emissor emissor, Prazo prazo, Data vencimento, Taxa taxa, Horario horario, ValorMinimo valor) : 
            codigo(codigo), classe(classe), emissor(emissor), prazo(prazo), vencimento(vencimento), taxa(taxa), horario(horario), valor(valor) { }
        
        Produto(std::string codigo, std::string classe, std::string emissor, int prazo, std::string vencimento, double taxa, std::string horario, int valor) : 
            Produto(CodigoDeProduto(codigo), Classe(classe), Emissor(emissor), Prazo(prazo), Data(vencimento), Taxa(taxa), Horario(horario), ValorMinimo(valor)){ }

        CodigoDeProduto getCodigo() {
            return this->codigo;
        }

        Classe getClasse() {
            return this->classe;
        }

        Emissor getEmissor() {
            return this->emissor;
        }

        Prazo getPrazo() {
            return this->prazo;
        }

        Data getVecimento() {
            return this->vencimento;
        }

        Taxa getTaxa() {
            return this->taxa;
        }

        Horario getHorario() {
            return this->horario;
        }

        ValorMinimo getValorMinimo() {
            return this->valor;
        }

        void setCodigo(CodigoDeProduto codigo);

        void setCodigo(std::string codigo);

        void setClasse(Classe classe);

        void setClasse(std::string classe);

        void setEmissor(Emissor emissor);

        void setEmissor(std::string emissor);
        
        void setPrazo(Prazo prazo);

        void setPrazo(int prazo);
        
        void setVencimento(Data vencimento);

        void setVencimento(std::string vencimento);
        
        void setTaxa(Taxa taxa);

        void setTaxa(double taxa);

        void setHorario(Horario horario);

        void setHorario(std::string horario);
        
        void setValorMinimo(ValorMinimo valor);

        void setValorMinimo(int valor);
};

#endif // PRODUTO_H_INCLUDED
