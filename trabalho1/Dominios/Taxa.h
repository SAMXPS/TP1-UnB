#ifndef TAXA_H_INCLUDED
#define TAXA_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * TODO: Dar explicação resumida sobre a classe
 */
class Taxa {
	
    private:
		double valor;
		
		/**
		 * TODO: Explicar como funciona a validação da classe
		 */
        static void validate(double valor) throw(std::invalid_argument);
		
    public:
		/**
		 * Método construtor da classe Taxa
		 */
		Taxa(double valor);
		
		/**
		 * Método setter: 
		 *  - Verifica se o valor informado é valido, por meio do método validar;
		 *  - Se for inválido, lança exceção;
		 *  - Se for válido, atribui o valor ao atributo do objeto de classe.
		 */
		void setValor(double valor);
		
		/**
		 * Método getter: 
		 * - Retorna o valor armazenado no atributo do objeto de classe.
		 */
		const double getValor();
};

/**
 * Implementação de método getter inline
 */
inline const double Taxa::getValor() {
	return valor;
}

#endif // TAXA_H_INCLUDED