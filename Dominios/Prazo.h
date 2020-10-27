#ifndef PRAZO_H_INCLUDED
#define PRAZO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * Prazo é uma quantidade númerica que se refere ao número de meses em que um investimento será aplicado.
 */
class Prazo {
	
    private:
		int valor;

		/**
		 * Validação feita de forma simples, por meio se sequência de comparações com os valores esperados.
		 */
        static void validate(int valor) throw(std::invalid_argument);
		
    public:
		/**
		 * Método construtor da classe Prazo
		 */
		Prazo(int valor);
		
		/**
		 * Método setter: 
		 *  - Verifica se o valor informado é valido, por meio do método validar;
		 *  - Se for inválido, lança exceção;
		 *  - Se for válido, atribui o valor ao atributo do objeto de classe.
		 */
		void setValor(int valor);
		
		/**
		 * Método getter: 
		 * - Retorna o valor armazenado no atributo do objeto de classe.
		 */
		const int getValor();
};

/**
 * Implementação de método getter inline
 */
inline const int Prazo::getValor() {
	return valor;
}

#endif // PRAZO_H_INCLUDED