#ifndef PRODUTO_H_INCLUDED
#define PRODUTO_H_INCLUDED

#include "../Dominios/CodigoDeProduto.h"
#include "../Dominios/Classe.h"
#include "../Dominios/Emissor.h"

// Implementação por Lucas Aquino

#include "../Dominios/Prazo.h"
#include "../Dominios/Data.h"
#include "../Dominios/Taxa.h"
#include "../Dominios/Horario.h"
#include "../Dominios/ValorMinimo.h"


#include <string>

/**
 * A entidade Produto é responsável pela organização, acesso e definição dos seguintes domínios:
 * CodigoDeProduto         
 * Classe                  
 * Emissor                 
 * Prazo                   
 * Data                    
 * Taxa                    
 * Horario                 
 * ValorMinimo
 * Para que dessa forma o usuário possa ter acesso ou
 * criar o seu produto de investimento
*/

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

        /**
         * Esse é o método construtor da entidade Produto 
        */ 

        Produto(CodigoDeProduto codigo, Classe classe, Emissor emissor, Prazo prazo, Data vencimento, Taxa taxa, Horario horario, ValorMinimo valor) : 
            codigo(codigo), classe(classe), emissor(emissor), prazo(prazo), vencimento(vencimento), taxa(taxa), horario(horario), valor(valor) { }
        
        Produto(std::string codigo, std::string classe, std::string emissor, int prazo, std::string vencimento, double taxa, std::string horario, int valor) : 
            Produto(CodigoDeProduto(codigo), Classe(classe), Emissor(emissor), Prazo(prazo), Data(vencimento), Taxa(taxa), Horario(horario), ValorMinimo(valor)){ }

        /**
         * Esse é o método que prove acesso a instâcia código
        */ 

        CodigoDeProduto getCodigo() {
            return this->codigo;
        }

        /**
         * Esse é o método que prove acesso a instâcia classe
        */ 

        Classe getClasse() {
            return this->classe;
        }

        /**
         * Esse é o método que prove acesso a instâcia emissor
        */ 

        Emissor getEmissor() {
            return this->emissor;
        }

        /**
         * Esse é o método que prove acesso a instâcia prazo
        */ 

        Prazo getPrazo() {
            return this->prazo;
        }

        /**
         * Esse é o método que prove acesso a instâcia vencimento
        */ 

        Data getVecimento() {
            return this->vencimento;
        }

        /**
         * Esse é o método que prove acesso a instâcia taxa
        */ 

        Taxa getTaxa() {
            return this->taxa;
        }

        /**
         * Esse é o método que prove acesso a instâcia horario
        */         

        Horario getHorario() {
            return this->horario;
        }

        /**
         * Esse é o método que prove acesso a instâcia valor
        */ 

        ValorMinimo getValorMinimo() {
            return this->valor;
        }

         /**
         * Esse é o método que define a instância código
        */

        void setCodigo(CodigoDeProduto codigo);
    
        void setCodigo(std::string codigo);

        /**
         * Esse é o método que define a instância classe
        */

        void setClasse(Classe classe);

        void setClasse(std::string classe);

        /**
         * Esse é o método que define a instância emissor
        */

        void setEmissor(Emissor emissor);

        void setEmissor(std::string emissor);
        
         /**
         * Esse é o método que define a instância prazo
        */

        void setPrazo(Prazo prazo);

        void setPrazo(int prazo);
        
        /**
         * Esse é o método que define a instância vencimento
        */    

        void setVencimento(Data vencimento);

        void setVencimento(std::string vencimento);

        /**
         * Esse é o método que define a instância taxa
        */
        
        void setTaxa(Taxa taxa);

        void setTaxa(double taxa);

        /**
         * Esse é o método que define a instância horario
        */

        void setHorario(Horario horario);

        void setHorario(std::string horario);

        /**
         * Esse é o método que define a instância valor
        */
        
        void setValorMinimo(ValorMinimo valor);

        void setValorMinimo(int valor);
};

#endif // PRODUTO_H_INCLUDED
