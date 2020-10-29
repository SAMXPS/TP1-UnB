#include "Produto.h"

void Produto::setCodigo(CodigoDeProduto codigo){
    this->codigo = codigo;
}

void Produto::setCodigo(std::string codigo){
    this->codigo = CodigoDeProduto(codigo);
}

void Produto::setClasse(Classe classe){
    this->classe = classe;
}

void Produto::setClasse(std::string classe){
    this->classe = Classe(classe);
}    
    
void Produto::setEmissor(Emissor emissor){
    this->emissor = emissor;
}

void Produto::setEmissor(std::string emissor){
    this->emissor = Emissor(emissor);
}
    
void Produto::setPrazo(Prazo prazo){
    this->prazo = prazo;
}

void Produto::setPrazo(int prazo){
    this->prazo = Prazo(prazo);
}
        
void Produto::setVencimento(Data vecimento){
    this->vencimento = vencimento;
}

void Produto::setVencimento(std::string vencimento){
    this->vencimento = Data(vencimento);
}
    
void Produto::setTaxa(Taxa taxa){
    this->taxa = taxa;
}

void Produto::setTaxa(double taxa){
    this->taxa = Taxa(taxa);
}
    
void Produto::setHorario(Horario horario){
    this->horario = horario;
}

void Produto::setHorario(std::string horario){
    this->horario = Horario(horario);
}
    
void Produto::setValorMinimo(ValorMinimo valor){
    this->valor = valor;
} 

void Produto::setValorMinimo(int valor){
    this->valor = ValorMinimo(valor);
} 
        
