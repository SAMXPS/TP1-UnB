#ifndef VALORMINIMO_H_INCLUDED
#define VALORMINIMO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * O Domínio Valor Mínimo tem como objetivo analizar
 * o valor mínimo para aplicações de prodito de investimento
 */
class ValorMinimo {

    private:
		int valor;

		/**
		 * A função validate irá conferir se esse valor mínimo corresponde aos valores passados no
		 * trabalho, esse valores são:  1.000,00, 5.000,00, 10.000 ou 50.000,00 (reais)
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
