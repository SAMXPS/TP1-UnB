#include "Produto.h"

// Implementação por Lucas Aquino

void Produto::setCodigo(CodigoDeProduto codigo){
    this->codigo = codigo;
}
void Produto::setClasse(Classe classe){
    this->classe = classe;
}
    
void Produto::setEmissor(Emissor emissor){
    this->emissor = emissor;
}
    
void Produto::setPrazo(Prazo prazo){
    this->prazo = prazo;
}
        
void Produto::setVencimento(Data vecimento){
    this->vencimento = vencimento;
}
    
void Produto::setTaxa(Taxa taxa){
    this->taxa = taxa;
}
    
void Produto::setHorario(Horario horario){
    this->horario = horario;
}
    
void Produto::setValorMinimo(ValorMinimo valor){
    this->valor = valor;
}
        
