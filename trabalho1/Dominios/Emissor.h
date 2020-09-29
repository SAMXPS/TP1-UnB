#ifndef EMISSOR_H_INCLUDED
#define EMISSOR_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * TODO: Dar explicação resumida sobre a classe
 */
class Emissor {

    private:
		std::string valor;
		static const int maximo = 30;
		static const int minimo = 5;

		/**
		 * TODO: Explicar como funciona a validação da classe
		 */
        static void validate(std::string valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe Emissor
		 */
		Emissor(std::string valor);

		/**
		 * Método setter:
		 *  - Verifica se o valor informado é valido, por meio do método validar;
		 *  - Se for inválido, lança exceção;
		 *  - Se for válido, atribui o valor ao atributo do objeto de classe.
		 */
		void setValor(std::string valor);

		/**
		 * Método getter:
		 * - Retorna o valor armazenado no atributo do objeto de classe.
		 */
		const std::string getValor();
};

/**
 * Implementação de método getter inline
 */
inline const std::string Emissor::getValor() {
	return valor;
}

#endif // EMISSOR_H_INCLUDED
