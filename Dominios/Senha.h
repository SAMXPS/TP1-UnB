#ifndef SENHA_H_INCLUDED
#define SENHA_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * O Domínio Senha tem como objetivo de indentificar
 * e armazenar a senha fornecida pelo cliente
 */
class Senha {

    private:
		std::string valor;
		static const int tamanho = 6;

		/**
		 * A função validate irá verificar se a senha está de acordo com o tamanho padrão, e se ela contem números repetidos.
         * Caso ela falhe em algum desses casos, é lançada a execeção.
		 */
        static void validate(std::string valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe Senha
		 */
		Senha(std::string valor);

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
inline const std::string Senha::getValor() {
	return valor;
}

#endif // SENHA_H_INCLUDED
