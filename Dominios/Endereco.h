#ifndef ENDERECO_H_INCLUDED
#define ENDERECO_H_INCLUDED

#include <string>		// std::string
#include <stdexcept>	// std::invalid_argument

/**
 * O Domínio Endereço tem como objetivo de indentificar
 * o endereço do cliente
 */
class Endereco {

    private:
		std::string valor;
		static const int maximo = 20;
		static const int minimo = 5;

		/**
		 * A função validate confere o tamanho máximo e mínimo do endereço, confere se o caracter -, espaço ou ponto não estão em sequência e
		 * verifica se o primeiro caracter é letra, e se a mesma é maiúscula. Caso ele falhe em algum desses casos, é lançada a execeção
		 */
        static void validate(std::string valor) throw(std::invalid_argument);

    public:
		/**
		 * Método construtor da classe Endereco
		 */
		Endereco(std::string valor);

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
inline const std::string Endereco::getValor() {
	return valor;
}

#endif // ENDERECO_H_INCLUDED
