#ifndef VALORMINIMO_H_INCLUDED
#define VALORMINIMO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * TODO: Dar explicação resumida sobre a classe
 */
class ValorMinimo {

    private:
		int valor;

		/**
		 * TODO: Explicar como funciona a validação da classe
		 */
        static void validate(int valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe ValorMinimo
		 */
		ValorMinimo(int valor);

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
inline const int ValorMinimo::getValor() {
	return valor;
}

#endif // VALORMINIMO_H_INCLUDED
