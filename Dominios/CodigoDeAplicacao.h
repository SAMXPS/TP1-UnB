#ifndef CODIGODEAPLICACAO_H_INCLUDED
#define CODIGODEAPLICACAO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * O Domínio Código de aplicação tem como objetivo indentificar
 * as aplicações em produtos de investimento.
 */
class CodigoDeAplicacao {

    private:
		std::string valor;

		/**
		 * A função "validate" confere se o Codigo de aplicação possui o número exato de 5 dígitos
		 * e se é diferente de "00000", se não cumprir com essas exigências a exceção será lançada
		 */
        static void validate(std::string valor) throw (std::invalid_argument);

    public:
		/**
		 * Método construtor da classe CodigoDeAplicacao
		 */
		CodigoDeAplicacao (std::string valor);

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
inline const std::string CodigoDeAplicacao::getValor() {
	return valor;
}

#endif // CODIGODEAPLICACAO _H_INCLUDED
